#include <stdio.h>


int main(){
int liczba;
scanf("%i", &liczba);
printf("%i 1", liczba);
while(liczba>=1){

if(liczba%2==0)
{liczba=liczba/2;
if(liczba==1){
printf("%i", liczba);
break;
}
printf("%i ", liczba);
}
else{
liczba=(liczba*3)+1;
printf("%i ", liczba);
}
}
return 0;}
