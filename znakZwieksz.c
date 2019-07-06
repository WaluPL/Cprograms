#include<stdio.h>
#include<ctype.h>

int main(){

char znak;
scanf( "%c", & znak );
if(isdigit( znak )){
printf("digit");}
else if(isupper(znak)){
printf("upper");
}
else if(islower(znak)){
printf("lower");
}
else {
printf("other");
}



return 0;}
