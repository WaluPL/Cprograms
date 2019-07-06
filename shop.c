#include <stdio.h>

int main(){
int hh, mm;
scanf("%i %i", &hh, &mm);
if(hh<=24&&mm<=59){
if(hh==10&&mm>=30||hh==18&&mm<=30){
    printf("true");

}else{
    if(hh>=11&&hh<=17){
        printf("true");
    }else
        printf("false");}

}else{
printf("Podales syf");}


return 0;
}
