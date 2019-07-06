double clock(double *small, double *large, int mala, int duza)
{
switch(mala){
case 13:{mala=1; break;}
case 14:{mala=2;break;}
case 15:{mala=3;break;}
case 16:{mala=4;break;}
case 17:{mala=5;break;}
case 18:{mala=6;break;}
case 19:{mala=7;break;}
case 20:{mala=8;break;}
case 21:{mala=9;break;}
case 22:{mala=10;break;}
case 23:{mala=11;break;}
case 24:{mala=0;break;}

}
*small=30*(mala+(double)duza/60);
mala=*small;
*large=6*duza;
duza=*large;

}

#include<stdio.h>
int main() {
double small, large;
clock(&small, &large, 13, 23);
printf("%lg %lg\n", small, large);
return 0; }
