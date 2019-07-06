#include<stdio.h>
#include<math.h>

int main(){

int licznik=0;
double x1, y1, x2, y2, max1 ,max2, suma;

while(scanf("%lg",&x1)==1&&scanf("%lg",&y1)==1){
licznik++;
if(licznik==1){
max1=x1;
max2=y1;
}else{
suma=suma+sqrt((pow((x1-max1),2)+pow((y1-max2),2)));
max1=x1;
max2=y1;
}
}
if(licznik>1){
printf("%lg", suma);
}if(licznik==1){
printf("0");
}
return 0;}





