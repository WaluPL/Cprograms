#include<stdio.h>
#include<ctype.h>
int main(){
char znak;
scanf("%c", &znak);

if(isalpha(znak)){
if(isupper(znak)){
znak=tolower(znak);
}}
printf("%c", znak);
}
