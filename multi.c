#include <stdio.h>

int main(){
int liczba=20;
int razem=0;
for (int i=1; i<liczba+1;i++){
for (int j=1; j<liczba+1; j++){
razem=i*j;
if(j==liczba&&i<=liczba-1){
    printf(" ");
}
if(razem<liczba){
    printf(" %i ", razem);
}  else{ printf("%i ", razem);
    if(j==liczba){
        printf("\n");
}
}
}
}
return 0;
}
