#include <math.h>

typedef double scalarD;

void tri_linear_elas_hes(double *out, const double *x, const double *d, const double *A,
                         const double *lambda, const double *mu) {
  //input
  scalarD area = *A;
  scalarD d0 = d[0];
  scalarD d1 = d[1];
  scalarD d2 = d[2];
  scalarD d3 = d[3];
  scalarD lam = *lambda;
  scalarD miu = *mu;

  //temp
  scalarD tt1;
  scalarD tt2;
  scalarD tt3;
  scalarD tt4;
  scalarD tt5;
  scalarD tt6;
  scalarD tt7;
  scalarD tt8;
  scalarD tt9;
  scalarD tt10;
  scalarD tt11;
  scalarD tt12;
  scalarD tt13;
  scalarD tt14;
  scalarD tt15;
  scalarD tt16;
  scalarD tt17;
  scalarD tt18;
  scalarD tt19;
  scalarD tt20;
  scalarD tt21;
  scalarD tt22;
  scalarD tt23;
  scalarD tt24;
  scalarD tt25;

  tt1=(-2*d1)-2*d0;
  tt2=(-1.0E+0*d1)-1.0E+0*d0;
  tt3=(-d3)-d2;
  tt4=(-2*d3)-2*d2;
  tt5=(-d1)-d0;
  tt6=area*(1.0E+0*tt5*tt3*miu+2.5E-1*tt1*tt4*lam);
  tt7=area*((1.0E+0*d2*tt3+2.0E+0*d0*tt2)*miu+5.0E-1*d0*tt1*lam);
  tt8=area*(1.0E+0*d0*tt3*miu+5.0E-1*tt1*d2*lam);
  tt9=area*((1.0E+0*tt3*d3+2.0E+0*tt2*d1)*miu+5.0E-1*tt1*d1*lam);
  tt10=area*(1.0E+0*d1*tt3*miu+5.0E-1*tt1*d3*lam);
  tt11=(-1.0E+0*d3)-1.0E+0*d2;
  tt12=area*(1.0E+0*tt5*d2*miu+5.0E-1*d0*tt4*lam);
  tt13=area*((2.0E+0*d2*tt11+1.0E+0*d0*tt5)*miu+5.0E-1*d2*tt4*lam);
  tt14=area*(1.0E+0*tt5*d3*miu+5.0E-1*d1*tt4*lam);
  tt15=area*((2.0E+0*tt11*d3+1.0E+0*tt5*d1)*miu+5.0E-1*tt4*d3*lam);
  tt16=pow(d0,2);
  tt17=pow(d2,2);
  tt18=area*(1.0E+0*d0*d2*miu+1.0E+0*d0*d2*lam);
  tt19=area*((1.0E+0*d2*d3+2.0E+0*d0*d1)*miu+1.0E+0*d0*d1*lam);
  tt20=area*(1.0E+0*d1*d2*miu+1.0E+0*d0*d3*lam);
  tt21=area*(1.0E+0*d0*d3*miu+1.0E+0*d1*d2*lam);
  tt22=area*((2.0E+0*d2*d3+1.0E+0*d0*d1)*miu+1.0E+0*d2*d3*lam);
  tt23=pow(d1,2);
  tt24=pow(d3,2);
  tt25=area*(1.0E+0*d1*d3*miu+1.0E+0*d1*d3*lam);
  out[0]=area*((1.0E+0*pow(tt3,2)+2*pow(tt2,2))*miu+2.5E-1*pow(tt1,2)*lam);
  out[1]=tt6;
  out[2]=tt7;
  out[3]=tt8;
  out[4]=tt9;
  out[5]=tt10;
  out[6]=tt6;
  out[7]=area*((2*pow(tt11,2)+1.0E+0*pow(tt5,2))*miu+2.5E-1*pow(tt4,2)*lam);
  out[8]=tt12;
  out[9]=tt13;
  out[10]=tt14;
  out[11]=tt15;
  out[12]=tt7;
  out[13]=tt12;
  out[14]=area*((1.0E+0*tt17+2.0E+0*tt16)*miu+1.0E+0*tt16*lam);
  out[15]=tt18;
  out[16]=tt19;
  out[17]=tt20;
  out[18]=tt8;
  out[19]=tt13;
  out[20]=tt18;
  out[21]=area*((2.0E+0*tt17+1.0E+0*tt16)*miu+1.0E+0*tt17*lam);
  out[22]=tt21;
  out[23]=tt22;
  out[24]=tt9;
  out[25]=tt14;
  out[26]=tt19;
  out[27]=tt21;
  out[28]=area*((1.0E+0*tt24+2.0E+0*tt23)*miu+1.0E+0*tt23*lam);
  out[29]=tt25;
  out[30]=tt10;
  out[31]=tt15;
  out[32]=tt20;
  out[33]=tt22;
  out[34]=tt25;
  out[35]=area*((2.0E+0*tt24+1.0E+0*tt23)*miu+1.0E+0*tt24*lam);
}

void tet_linear_elas_hes(double *out, const double *x, const double *d, const double *V,
                         const double *lambda, const double *mu) {
  //input
  scalarD d0 = d[0];
  scalarD d1 = d[1];
  scalarD d2 = d[2];
  scalarD d3 = d[3];
  scalarD d4 = d[4];
  scalarD d5 = d[5];
  scalarD d6 = d[6];
  scalarD d7 = d[7];
  scalarD d8 = d[8];
  scalarD lam = *lambda;
  scalarD miu = *mu;
  scalarD volume = *V;

  //temp
  scalarD tt1;
  scalarD tt2;
  scalarD tt3;
  scalarD tt4;
  scalarD tt5;
  scalarD tt6;
  scalarD tt7;
  scalarD tt8;
  scalarD tt9;
  scalarD tt10;
  scalarD tt11;
  scalarD tt12;
  scalarD tt13;
  scalarD tt14;
  scalarD tt15;
  scalarD tt16;
  scalarD tt17;
  scalarD tt18;
  scalarD tt19;
  scalarD tt20;
  scalarD tt21;
  scalarD tt22;
  scalarD tt23;
  scalarD tt24;
  scalarD tt25;
  scalarD tt26;
  scalarD tt27;
  scalarD tt28;
  scalarD tt29;
  scalarD tt30;
  scalarD tt31;
  scalarD tt32;
  scalarD tt33;
  scalarD tt34;
  scalarD tt35;
  scalarD tt36;
  scalarD tt37;
  scalarD tt38;
  scalarD tt39;
  scalarD tt40;
  scalarD tt41;
  scalarD tt42;
  scalarD tt43;
  scalarD tt44;
  scalarD tt45;
  scalarD tt46;
  scalarD tt47;
  scalarD tt48;
  scalarD tt49;
  scalarD tt50;
  scalarD tt51;
  scalarD tt52;
  scalarD tt53;
  scalarD tt54;
  scalarD tt55;
  scalarD tt56;
  scalarD tt57;
  scalarD tt58;
  scalarD tt59;
  scalarD tt60;
  scalarD tt61;
  scalarD tt62;
  scalarD tt63;
  scalarD tt64;
  scalarD tt65;
  scalarD tt66;
  scalarD tt67;
  scalarD tt68;
  scalarD tt69;
  scalarD tt70;
  scalarD tt71;
  scalarD tt72;
  scalarD tt73;
  scalarD tt74;
  scalarD tt75;
  scalarD tt76;
  scalarD tt77;
  scalarD tt78;
  scalarD tt79;
  scalarD tt80;
  scalarD tt81;
  scalarD tt82;
  scalarD tt83;
  scalarD tt84;
  scalarD tt85;
  scalarD tt86;
  scalarD tt87;
  scalarD tt88;
  scalarD tt89;
  scalarD tt90;
  scalarD tt91;
  scalarD tt92;
  scalarD tt93;
  scalarD tt94;
  scalarD tt95;
  scalarD tt96;
  scalarD tt97;
  scalarD tt98;
  scalarD tt99;
  scalarD tt100;
  scalarD tt101;
  scalarD tt102;
  scalarD tt103;
  scalarD tt104;
  scalarD tt105;
  scalarD tt106;
  scalarD tt107;
  scalarD tt108;
  scalarD tt109;
  scalarD tt110;
  scalarD tt111;
  scalarD tt112;
  scalarD tt113;
  scalarD tt114;

  tt1=(-2*d2)-2*d1-2*d0;
  tt2=(-1.0E+0*d2)-1.0E+0*d1-1.0E+0*d0;
  tt3=(-d5)-d4-d3;
  tt4=1.0E+0*pow(tt3,2);
  tt5=(-d8)-d7-d6;
  tt6=1.0E+0*pow(tt5,2);
  tt7=(-2*d5)-2*d4-2*d3;
  tt8=(-d2)-d1-d0;
  tt9=(1.0E+0*tt8*tt3*miu+2.5E-1*tt1*tt7*lam)*volume;
  tt10=(-2*d8)-2*d7-2*d6;
  tt11=(1.0E+0*tt8*tt5*miu+2.5E-1*tt1*tt10*lam)*volume;
  tt12=1.0E+0*d3*tt3;
  tt13=1.0E+0*d6*tt5;
  tt14=((tt13+tt12+2.0E+0*d0*tt2)*miu+5.0E-1*d0*tt1*lam)*volume;
  tt15=(1.0E+0*d0*tt3*miu+5.0E-1*tt1*d3*lam)*volume;
  tt16=(1.0E+0*d0*tt5*miu+5.0E-1*tt1*d6*lam)*volume;
  tt17=1.0E+0*d4*tt3;
  tt18=1.0E+0*d7*tt5;
  tt19=((tt18+tt17+2.0E+0*d1*tt2)*miu+5.0E-1*d1*tt1*lam)*volume;
  tt20=(1.0E+0*d1*tt3*miu+5.0E-1*tt1*d4*lam)*volume;
  tt21=(1.0E+0*d1*tt5*miu+5.0E-1*tt1*d7*lam)*volume;
  tt22=1.0E+0*tt3*d5;
  tt23=1.0E+0*tt5*d8;
  tt24=((tt23+tt22+2.0E+0*tt2*d2)*miu+5.0E-1*tt1*d2*lam)*volume;
  tt25=(1.0E+0*d2*tt3*miu+5.0E-1*tt1*d5*lam)*volume;
  tt26=(1.0E+0*d2*tt5*miu+5.0E-1*tt1*d8*lam)*volume;
  tt27=1.0E+0*pow(tt8,2);
  tt28=(-1.0E+0*d5)-1.0E+0*d4-1.0E+0*d3;
  tt29=(1.0E+0*tt3*tt5*miu+2.5E-1*tt7*tt10*lam)*volume;
  tt30=(1.0E+0*tt8*d3*miu+5.0E-1*d0*tt7*lam)*volume;
  tt31=1.0E+0*d0*tt8;
  tt32=((tt13+2.0E+0*d3*tt28+tt31)*miu+5.0E-1*d3*tt7*lam)*volume;
  tt33=(1.0E+0*d3*tt5*miu+5.0E-1*tt7*d6*lam)*volume;
  tt34=(1.0E+0*tt8*d4*miu+5.0E-1*d1*tt7*lam)*volume;
  tt35=1.0E+0*d1*tt8;
  tt36=((tt18+2.0E+0*d4*tt28+tt35)*miu+5.0E-1*d4*tt7*lam)*volume;
  tt37=(1.0E+0*d4*tt5*miu+5.0E-1*tt7*d7*lam)*volume;
  tt38=(1.0E+0*tt8*d5*miu+5.0E-1*d2*tt7*lam)*volume;
  tt39=1.0E+0*tt8*d2;
  tt40=((tt23+2.0E+0*tt28*d5+tt39)*miu+5.0E-1*tt7*d5*lam)*volume;
  tt41=(1.0E+0*d5*tt5*miu+5.0E-1*tt7*d8*lam)*volume;
  tt42=(-1.0E+0*d8)-1.0E+0*d7-1.0E+0*d6;
  tt43=(1.0E+0*tt8*d6*miu+5.0E-1*d0*tt10*lam)*volume;
  tt44=(1.0E+0*tt3*d6*miu+5.0E-1*d3*tt10*lam)*volume;
  tt45=((2.0E+0*d6*tt42+tt12+tt31)*miu+5.0E-1*d6*tt10*lam)*volume;
  tt46=(1.0E+0*tt8*d7*miu+5.0E-1*d1*tt10*lam)*volume;
  tt47=(1.0E+0*tt3*d7*miu+5.0E-1*d4*tt10*lam)*volume;
  tt48=((2.0E+0*d7*tt42+tt17+tt35)*miu+5.0E-1*d7*tt10*lam)*volume;
  tt49=(1.0E+0*tt8*d8*miu+5.0E-1*d2*tt10*lam)*volume;
  tt50=(1.0E+0*tt3*d8*miu+5.0E-1*d5*tt10*lam)*volume;
  tt51=((2.0E+0*tt42*d8+tt22+tt39)*miu+5.0E-1*tt10*d8*lam)*volume;
  tt52=pow(d0,2);
  tt53=pow(d3,2);
  tt54=1.0E+0*tt53;
  tt55=pow(d6,2);
  tt56=1.0E+0*tt55;
  tt57=(1.0E+0*d0*d3*miu+1.0E+0*d0*d3*lam)*volume;
  tt58=(1.0E+0*d0*d6*miu+1.0E+0*d0*d6*lam)*volume;
  tt59=1.0E+0*d3*d4;
  tt60=1.0E+0*d6*d7;
  tt61=((tt60+tt59+2.0E+0*d0*d1)*miu+1.0E+0*d0*d1*lam)*volume;
  tt62=(1.0E+0*d1*d3*miu+1.0E+0*d0*d4*lam)*volume;
  tt63=(1.0E+0*d1*d6*miu+1.0E+0*d0*d7*lam)*volume;
  tt64=1.0E+0*d3*d5;
  tt65=1.0E+0*d6*d8;
  tt66=((tt65+tt64+2.0E+0*d0*d2)*miu+1.0E+0*d0*d2*lam)*volume;
  tt67=(1.0E+0*d2*d3*miu+1.0E+0*d0*d5*lam)*volume;
  tt68=(1.0E+0*d2*d6*miu+1.0E+0*d0*d8*lam)*volume;
  tt69=1.0E+0*tt52;
  tt70=(1.0E+0*d3*d6*miu+1.0E+0*d3*d6*lam)*volume;
  tt71=(1.0E+0*d0*d4*miu+1.0E+0*d1*d3*lam)*volume;
  tt72=1.0E+0*d0*d1;
  tt73=((tt60+2.0E+0*d3*d4+tt72)*miu+1.0E+0*d3*d4*lam)*volume;
  tt74=(1.0E+0*d4*d6*miu+1.0E+0*d3*d7*lam)*volume;
  tt75=(1.0E+0*d0*d5*miu+1.0E+0*d2*d3*lam)*volume;
  tt76=1.0E+0*d0*d2;
  tt77=((tt65+2.0E+0*d3*d5+tt76)*miu+1.0E+0*d3*d5*lam)*volume;
  tt78=(1.0E+0*d5*d6*miu+1.0E+0*d3*d8*lam)*volume;
  tt79=(1.0E+0*d0*d7*miu+1.0E+0*d1*d6*lam)*volume;
  tt80=(1.0E+0*d3*d7*miu+1.0E+0*d4*d6*lam)*volume;
  tt81=((2.0E+0*d6*d7+tt59+tt72)*miu+1.0E+0*d6*d7*lam)*volume;
  tt82=(1.0E+0*d0*d8*miu+1.0E+0*d2*d6*lam)*volume;
  tt83=(1.0E+0*d3*d8*miu+1.0E+0*d5*d6*lam)*volume;
  tt84=((2.0E+0*d6*d8+tt64+tt76)*miu+1.0E+0*d6*d8*lam)*volume;
  tt85=pow(d1,2);
  tt86=pow(d4,2);
  tt87=1.0E+0*tt86;
  tt88=pow(d7,2);
  tt89=1.0E+0*tt88;
  tt90=(1.0E+0*d1*d4*miu+1.0E+0*d1*d4*lam)*volume;
  tt91=(1.0E+0*d1*d7*miu+1.0E+0*d1*d7*lam)*volume;
  tt92=1.0E+0*d4*d5;
  tt93=1.0E+0*d7*d8;
  tt94=((tt93+tt92+2.0E+0*d1*d2)*miu+1.0E+0*d1*d2*lam)*volume;
  tt95=(1.0E+0*d2*d4*miu+1.0E+0*d1*d5*lam)*volume;
  tt96=(1.0E+0*d2*d7*miu+1.0E+0*d1*d8*lam)*volume;
  tt97=1.0E+0*tt85;
  tt98=(1.0E+0*d4*d7*miu+1.0E+0*d4*d7*lam)*volume;
  tt99=(1.0E+0*d1*d5*miu+1.0E+0*d2*d4*lam)*volume;
  tt100=1.0E+0*d1*d2;
  tt101=((tt93+2.0E+0*d4*d5+tt100)*miu+1.0E+0*d4*d5*lam)*volume;
  tt102=(1.0E+0*d5*d7*miu+1.0E+0*d4*d8*lam)*volume;
  tt103=(1.0E+0*d1*d8*miu+1.0E+0*d2*d7*lam)*volume;
  tt104=(1.0E+0*d4*d8*miu+1.0E+0*d5*d7*lam)*volume;
  tt105=((2.0E+0*d7*d8+tt92+tt100)*miu+1.0E+0*d7*d8*lam)*volume;
  tt106=pow(d2,2);
  tt107=pow(d5,2);
  tt108=1.0E+0*tt107;
  tt109=pow(d8,2);
  tt110=1.0E+0*tt109;
  tt111=(1.0E+0*d2*d5*miu+1.0E+0*d2*d5*lam)*volume;
  tt112=(1.0E+0*d2*d8*miu+1.0E+0*d2*d8*lam)*volume;
  tt113=1.0E+0*tt106;
  tt114=(1.0E+0*d5*d8*miu+1.0E+0*d5*d8*lam)*volume;
  out[0]=((tt6+tt4+2*pow(tt2,2))*miu+2.5E-1*pow(tt1,2)*lam)*volume;
  out[1]=tt9;
  out[2]=tt11;
  out[3]=tt14;
  out[4]=tt15;
  out[5]=tt16;
  out[6]=tt19;
  out[7]=tt20;
  out[8]=tt21;
  out[9]=tt24;
  out[10]=tt25;
  out[11]=tt26;
  out[12]=tt9;
  out[13]=((tt6+2*pow(tt28,2)+tt27)*miu+2.5E-1*pow(tt7,2)*lam)*volume;
  out[14]=tt29;
  out[15]=tt30;
  out[16]=tt32;
  out[17]=tt33;
  out[18]=tt34;
  out[19]=tt36;
  out[20]=tt37;
  out[21]=tt38;
  out[22]=tt40;
  out[23]=tt41;
  out[24]=tt11;
  out[25]=tt29;
  out[26]=((2*pow(tt42,2)+tt4+tt27)*miu+2.5E-1*pow(tt10,2)*lam)*volume;
  out[27]=tt43;
  out[28]=tt44;
  out[29]=tt45;
  out[30]=tt46;
  out[31]=tt47;
  out[32]=tt48;
  out[33]=tt49;
  out[34]=tt50;
  out[35]=tt51;
  out[36]=tt14;
  out[37]=tt30;
  out[38]=tt43;
  out[39]=((tt56+tt54+2.0E+0*tt52)*miu+1.0E+0*tt52*lam)*volume;
  out[40]=tt57;
  out[41]=tt58;
  out[42]=tt61;
  out[43]=tt62;
  out[44]=tt63;
  out[45]=tt66;
  out[46]=tt67;
  out[47]=tt68;
  out[48]=tt15;
  out[49]=tt32;
  out[50]=tt44;
  out[51]=tt57;
  out[52]=((tt56+2.0E+0*tt53+tt69)*miu+1.0E+0*tt53*lam)*volume;
  out[53]=tt70;
  out[54]=tt71;
  out[55]=tt73;
  out[56]=tt74;
  out[57]=tt75;
  out[58]=tt77;
  out[59]=tt78;
  out[60]=tt16;
  out[61]=tt33;
  out[62]=tt45;
  out[63]=tt58;
  out[64]=tt70;
  out[65]=((2.0E+0*tt55+tt54+tt69)*miu+1.0E+0*tt55*lam)*volume;
  out[66]=tt79;
  out[67]=tt80;
  out[68]=tt81;
  out[69]=tt82;
  out[70]=tt83;
  out[71]=tt84;
  out[72]=tt19;
  out[73]=tt34;
  out[74]=tt46;
  out[75]=tt61;
  out[76]=tt71;
  out[77]=tt79;
  out[78]=((tt89+tt87+2.0E+0*tt85)*miu+1.0E+0*tt85*lam)*volume;
  out[79]=tt90;
  out[80]=tt91;
  out[81]=tt94;
  out[82]=tt95;
  out[83]=tt96;
  out[84]=tt20;
  out[85]=tt36;
  out[86]=tt47;
  out[87]=tt62;
  out[88]=tt73;
  out[89]=tt80;
  out[90]=tt90;
  out[91]=((tt89+2.0E+0*tt86+tt97)*miu+1.0E+0*tt86*lam)*volume;
  out[92]=tt98;
  out[93]=tt99;
  out[94]=tt101;
  out[95]=tt102;
  out[96]=tt21;
  out[97]=tt37;
  out[98]=tt48;
  out[99]=tt63;
  out[100]=tt74;
  out[101]=tt81;
  out[102]=tt91;
  out[103]=tt98;
  out[104]=((2.0E+0*tt88+tt87+tt97)*miu+1.0E+0*tt88*lam)*volume;
  out[105]=tt103;
  out[106]=tt104;
  out[107]=tt105;
  out[108]=tt24;
  out[109]=tt38;
  out[110]=tt49;
  out[111]=tt66;
  out[112]=tt75;
  out[113]=tt82;
  out[114]=tt94;
  out[115]=tt99;
  out[116]=tt103;
  out[117]=((tt110+tt108+2.0E+0*tt106)*miu+1.0E+0*tt106*lam)*volume;
  out[118]=tt111;
  out[119]=tt112;
  out[120]=tt25;
  out[121]=tt40;
  out[122]=tt50;
  out[123]=tt67;
  out[124]=tt77;
  out[125]=tt83;
  out[126]=tt95;
  out[127]=tt101;
  out[128]=tt104;
  out[129]=tt111;
  out[130]=((tt110+2.0E+0*tt107+tt113)*miu+1.0E+0*tt107*lam)*volume;
  out[131]=tt114;
  out[132]=tt26;
  out[133]=tt41;
  out[134]=tt51;
  out[135]=tt68;
  out[136]=tt78;
  out[137]=tt84;
  out[138]=tt96;
  out[139]=tt102;
  out[140]=tt105;
  out[141]=tt112;
  out[142]=tt114;
  out[143]=((2.0E+0*tt109+tt108+tt113)*miu+1.0E+0*tt109*lam)*volume;
}
