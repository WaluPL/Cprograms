#include<stdio.h>
int main(){

FILE *plik=fopen("test.txt", "r");
double n;
int i=0;
double suma=0;
while(fscanf(plik, "%lg", &n) != EOF){
        suma=suma+n;
        i++;
}
fclose(plik);
suma=suma/i;
printf("%lg", suma);

return 0;}
