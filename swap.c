
double swap(double *a, double *b)
{
double *pom;
*pom=*a;
*a=*b;
*b=*pom;



}


#include<stdio.h>

int main() {
double a = 1, b = 2;
swap(&a, &b);
printf("%lg %lg\n", a, b);
return 0; }
