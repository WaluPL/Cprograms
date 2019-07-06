#include<stdio.h>
#include<ctype.h>

int main(int argc, char*argv[]){
FILE*plik=fopen(argv[1], "r");
char znak;
int i=0, y=0, x=0;
int table[26]={};
while(fscanf(plik, "%c", &znak)==1)
{
if(isalpha(znak)){
if(isupper(znak)){
znak=tolower(znak);
}
y=znak;
y=y-97;
x=table[y];
x=x+1;
table[y]=x;
}
}
for(y=0; y<26;y++){
    printf("%i ", table[y]);
}
fclose(plik);
return 0;}
