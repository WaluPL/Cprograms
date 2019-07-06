int compare(char napis1[], char napis2[]){
int i=0, wynik=0;
while(napis1[i]!='\0'||napis2[i]!='\0'){
if(napis1[i]<napis2[i]){
wynik=1; break;
}else{
if(napis1[i]>napis2[i]){
wynik=0; break;}
}
i++;
}
return wynik;
}



#include<stdio.h>
int main() {
printf("%s\n", compare("einsta", "einstein") ? "true" : "false");
return 0; }

