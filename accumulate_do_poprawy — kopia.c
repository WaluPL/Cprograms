
double accumulate(double *arg1, double *arg2){
for(;arg1<arg2;arg1++){
if(arg1==0){arg1++;break;}
*arg1+=*(arg1-1);
}
}
#include<stdio.h>
int main() {
double table[] = {3.1, 2.7, -0.5, 0.1, 4.3};
accumulate(table, table + 3);
for (double *pointer = table; pointer < table + 5;) {
printf("%lg ", *pointer++); }
printf("\n");
return 0; }

