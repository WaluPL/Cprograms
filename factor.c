#include <stdio.h>

int main(){
int dzielnik=2;
int liczba;
scanf("%i", &liczba);
while(liczba>1)
{
    while(liczba%dzielnik==0){
        printf("%i ", dzielnik);
        liczba=liczba/dzielnik;

    }
    dzielnik++;
}
return 0;
}
