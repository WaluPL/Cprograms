#include<stdio.h>
int selection_sort(int table[], int ilosc)
{   int change=0, pom, zamiana=0;
    for(int i=0;i<ilosc-1;i++){
    zamiana=0;
    change=table[i];
    pom=i;
    for(int j=i+1;j<ilosc;j++){
        if(change>table[j]){
            change=table[j];
            pom=j;

        }
    } for(int a=0; a<ilosc;a++){
        if(table[a]>table[a+1])
            {
                zamiana++;
            }
        }
      table[pom]=table[i];
      table[i]=change;


        if(zamiana!=0){
        for(int b=0;b<ilosc;b++)
        {
            printf("%i ", table[b]);
            if(b==ilosc-1){
        printf("\n");}
        }}else{
            return 0;
        }
}
}
int main() {
int table[] = {3, 7, -1, 12, -5, 7, 10};
selection_sort(table, 7);
return 0; }
