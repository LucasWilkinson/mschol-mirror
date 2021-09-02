project(mschol)
cmake_minimum_required(VERSION 2.8)

list(APPEND CMAKE_CXX_FLAGS "-fopenmp -std=c++14 -fpermissive")
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/;${CMAKE_MODULE_PATH}")

include_directories(${PROJECT_SOURCE_DIR})

# BOOST
find_package(Boost REQUIRED)
if(Boost_FOUND)
  message("-- Boost @ ${Boost_INCLUDE_DIRS}")
  include_directories(${Boost_INCLUDE_DIRS})
endif(Boost_FOUND)

# HEADER-ONLY LIBS
include_directories(external/amgcl/)
include_directories(external/eigen/)
include_directories(external/CGAL/include)
include_directories(external/spdlog/include)

# SuiteSparse
set(SUITESPARSE_INCLUDE_DIR_HINTS $ENV{SUITESPARSE_INC})
set(SUITESPARSE_LIBRARY_DIR_HINTS $ENV{SUITESPARSE_LIB})
find_package(SuiteSparse REQUIRED)

message(STATUS "${SUITESPARSE_LIBRARIES}")
link_libraries(${SUITESPARSE_LIBRARIES})

add_subdirectory(src)
add_subdirectory(examples)
