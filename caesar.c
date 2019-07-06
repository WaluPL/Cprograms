#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[]){
double przesuniecie=atof(argv[1]);
FILE*odczyt=fopen(argv[2], "r");
FILE*zapis=fopen(argv[3], "w");
char znak;
char cezar;
while(fscanf(odczyt,"%c", &znak)==1){
    cezar = znak + przesuniecie;
 if((znak >= 'A') && (znak <= 'Z'))
  {
    if(cezar > 'Z') cezar-= 26;
    if(cezar < 'A') cezar+= 26;
    fprintf(zapis,"%c", cezar);
  }
    else if((znak >= 'a') && (znak <= 'z')){
    if(cezar > 'z') cezar-= 26;
    if(cezar < 'a') cezar+= 26;
    fprintf(zapis,"%c", cezar);
}
  else{
  fprintf(zapis,"%c", znak);
}
}
fclose(zapis);
fclose(odczyt);
return 0;}





















/*

if('a'<znak&&znak<'z'||'A'<znak&&znak<'Z')
{znak=znak+(przesuniecie);}
else if(znak=='a'||znak=='A'&&przesuniecie>=1){
znak=znak+przesuniecie;
}else if(znak=='z'||znak=='Z'&&przesuniecie<=-1){
znak=znak-przesuniecie;
}
else if(znak=='a'&&przesuniecie<0){
znak='z'+(przesuniecie+1);
}else if(znak=='A'&&przesuniecie<0){
znak='Z'+(przesuniecie+1);
}
else if(znak=='z'&&przesuniecie>0){
znak='a'+(przesuniecie-1);}
else if(znak=='Z'&&przesuniecie>0){
znak='A'+(przesuniecie-1);
}}
fprintf(zapis,"%c", znak);*/

