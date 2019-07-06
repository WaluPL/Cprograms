#include <stdio.h>

int main(){
unsigned x;
for(;;){
scanf("%llu", &x);
unsigned long long int max=1;
for(int i=1;i<x+1;i++){
max=max*i;
}
printf("Silnia to: ""%llu\n", max);/*max to 20*/
}
return 0;
}
