#include <stdio.h>

int main(){
int liczba;
int x=0;
scanf("%i", &liczba);
while(x<liczba){
printf("%i ", x);
x++;
}
x=0;printf("\n");
while(x<liczba){
if(x%3!=0){
printf("%i ", x);
}
x++;
}
x=0;printf("\n");
while(x<liczba){
if(x%3==0){
printf("%i ", x);
}
x++;
}
x=0;printf("\n");

x=liczba*(-1);

while(x-1<liczba){
if(x%2==0)
{printf("%i ", x);
}
x++;
}







return 0;







}
