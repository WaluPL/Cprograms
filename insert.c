#include<stdlib.h>
char *insert(char *napis, int indeks, const char *napiss){
static int uruchom=1;static int a=0;int b=0; static int wynik=0;
if (uruchom==1){
for(int i=0;napiss[i]!='\0';i++){
a++;wynik=a;
}
napis = (char*) malloc((a+1) * sizeof(*napis));
for(int i=0;i<a;i++)
{
napis[i]=napiss[i];
}uruchom++;
return napis;
}
else{
for(int i=0;napiss[i]!='\0';i++){
b++;
}wynik+=b;
napis= (char*)realloc(napis, 2*(wynik)*sizeof(*napis));
for(int i=wynik-1;i>=indeks;i--){napis[i+b]=napis[i];}
for(int i=0;i<b;i++){napis[indeks+i]=napiss[i];}
napis[wynik]=0;
return napis;
}}
#include<stdio.h>
int main() {
char *string = calloc(1, 1);
string = insert(string, 0, "BOZENA");
    string = insert(string, 5, "to");
    string = insert(string, 5, "dzban");
    string = insert(string, 0, "Haha ");

printf("%s\n", string);
free(string);
return 0; }

