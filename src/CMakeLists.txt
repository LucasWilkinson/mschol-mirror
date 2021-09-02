file(GLOB source *.cc *.c)

add_library(mschol SHARED ${source})

IF(CLUSTER MATCHES "COMPUTE_CANADA")
    MESSAGE(STATUS "Running on a compute canada cluster - Using MKL (blas + lapack not supported) ...")
    # See: https://docs.computecanada.ca/wiki/Installing_software_in_your_home_directory
    target_link_libraries(mschol PUBLIC mkl_intel_ilp64 mkl_intel_thread mkl_core iomp5 pthread m dl)
    target_include_directories(mschol PUBLIC "$ENV{MKLROOT}/include")
    target_compile_definitions(mschol PUBLIC MKL MKL_ILP64)
    target_link_directories(mschol PUBLIC $ENV{MKLROOT}/lib/intel64)
    target_link_options(mschol PUBLIC "-Wl,--no-as-needed")
ELSE()
    # Normal build
    target_link_libraries(mschol lapack blas)
ENDIF()

