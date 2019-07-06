int *rng(){
static int liczba;
liczba=(33*liczba+1)%1024;
return &liczba;

}


#include<stdio.h>
int main() {
*rng() = 7;
for (int counter = 0; counter < 10; ++counter) {
printf("%i ", *rng()); }
printf("\n"); }
