#include<stdlib.h>
char *password(int dlugosc){
char*tablica;
char a;
tablica = (char*) malloc(dlugosc*sizeof(*tablica));
for(int i=0;i<dlugosc;i++){
a=rand()%36+'0';
if(a>'9'){a+=39;}
tablica[i]=a;
}
tablica[dlugosc]=0;
return tablica;
free(tablica);
}

#include<time.h>
#include<stdio.h>
int main(int argc, char *argv[]) {
srand(time(NULL));
char *string = password(6);
printf("%s\n", string);
free(string);
return 0; }
