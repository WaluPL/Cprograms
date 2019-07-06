void accumulate(double *arg1, double *arg2){
for(double *go=arg1;go<arg2-1;go++){
if(arg1==0){arg1++;break;}
else{arg1++;}
*arg1+=*(arg1-1);
}
}
#include<stdio.h>
int main() {
double table[] = {2.3, -1.5, 15.1, 0.3, 8, 0, 12.5, -0.5, 9.7, 10.5};
accumulate(table+2, table + 7);
for (double *pointer = table; pointer < table + 10;) {
printf("%lg ", *pointer++); }
printf("\n");
return 0; }

