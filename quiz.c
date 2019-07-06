#include <stdio.h>
#include <time.h>
int dzielnik=2;
int main(){
srand(time(NULL));
for(int i=0;i<10;i++){
int r=rand()%100+1;
printf("%i ", r);
while(r>=dzielnik){
if(r%dzielnik==0){
int wynik=0;
wynik=r/dzielnik;
}else{dzielnik++;}
printf("%i %i",wynik, dzielnik);
}
printf("%i\n");}



return 0;}
