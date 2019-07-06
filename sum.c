#include <stdio.h>
#include <math.h>

int main(){
int n;
int k=1;
double wynik=0;
double suma=0;
scanf("%i", &n);
for(int i=0; i<n; i++){
  suma=4*((pow(-1, k+1))/((2*k)-1));
  wynik=suma+wynik;
  k++;
}
printf("%lg", wynik);




return 0;
}
