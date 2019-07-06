#include <stdio.h>

int main(){
double liczba,ilosc=1;
double minimum;
while(scanf("%lg", &liczba)==1){
if(ilosc>=2)
{
if(liczba<minimum){
        minimum=liczba;
}
}
else{   minimum=liczba;
        ilosc++;}
}
if(ilosc>1){
printf("%lg", minimum);
}
return 0;
}










