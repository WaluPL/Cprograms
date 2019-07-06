int beaufort(double predkosc){
int wynik=0, max=12;
static double tab[13]={0, 0.5, 6.5, 11.5, 19.5, 29.5, 39.5, 50.5, 62.5, 75.5, 87.5, 102.5, 117.5};
int i=0;
if(predkosc<117.5){
for(i;i<12;i++){
if(predkosc>=tab[i]&&predkosc<tab[i+1]){
wynik=i+wynik;
}
}
return wynik;
}else{return max;}}
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
double predkosc=atof(argv[1]);
printf("%i",wynik);

return  0;}
