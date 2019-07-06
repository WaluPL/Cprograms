#include<stdlib.h>
struct Histogram{
    int size;
    double *tablica;
    int *bins;
    };
struct Histogram *alloc(double poczatek, double koniec, int wielk){
    struct Histogram *histogram=malloc(sizeof(struct Histogram));
    histogram->size=wielk;
    histogram->tablica=malloc(histogram->size*sizeof(double));
    histogram->bins=malloc(histogram->size*sizeof(int));
    for(int i=0;i<histogram->size;i++)
    {
     histogram->tablica[i]=0;
     histogram->bins[i]=0;
    }
    double dlugosc_komorki;
    dlugosc_komorki=(koniec-poczatek)/histogram->size;
    for(int i=0;i<histogram->size;i++){
    if(i==0){
    histogram->tablica[i]=poczatek+dlugosc_komorki;
    histogram->tablica[histogram->size-1]=koniec;}
    else{histogram->tablica[i]=histogram->tablica[i-1]+dlugosc_komorki;}
    }
    return histogram;
    }
void dealloc(struct Histogram *histogram){
    free(histogram->tablica);
    free(histogram->bins);
    free(histogram);
    }
void insert(struct Histogram *histogram, double liczba){
    for(int i=0;i<histogram->size;i++){
    if(liczba<=histogram->tablica[i]){
    histogram->bins[i]=histogram->bins[i]+1;
    break;}
    }
    }
int get(const struct Histogram*histogram, int index){
    return histogram->bins[index];
    }
#include<stdio.h>
int main() {
struct Histogram *histogram = alloc(0., 1., 2);
insert(histogram, 0.17);
insert(histogram, 0.75);
insert(histogram, 0.33);
for (int index = 0; index < histogram->size;) {
printf("%i ", get(histogram, index++)); }
printf("\n");
dealloc(histogram);
return 0; }
