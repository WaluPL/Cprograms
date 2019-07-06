double lesser(double liczba1, double liczba2){
double wynik;
wynik=liczba1<liczba2 ?  liczba1 : liczba2;
return wynik;
} //wyslac sama funkcje
#include<stdio.h>
int main() {
printf("%lg\n", lesser(387, 3004));
return 0; }
