#include<math.h>
double quadratic(double *x1, double *x2, double a, double b, double c){
double delta=(b*b)-4*a*c;
if(delta<0){

}else{
*x1=(-b-sqrt(delta))/(2*a);
*x2=(-b+sqrt(delta))/(2*a);
}
return delta;

}
#include<stdio.h>
int main() {
double delta, x1, x2;
delta = quadratic(&x1, &x2, 2, 4, 10);
printf("%lg\n", delta);
printf("%lg %lg\n", x1, x2);
return 0; }
