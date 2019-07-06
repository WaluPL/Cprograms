int days(int rok, int miesiac)
{int przestepny;
static int tab[4]={28, 29, 30, 31};
if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)){
    przestepny = 1;}
else{
    przestepny = 0;}
if (miesiac == 2)
{
    if (przestepny==1){
        return tab[1];
        }
    else{
        return tab[0];}
}
if (miesiac==1||miesiac==3||miesiac==5||miesiac==7||miesiac==8||miesiac==10||miesiac==12){
         return tab[3];}
else    {return tab[2];
        }
}
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

int rok=atof(argv[1]);
int miesiac=atof(argv[2]);
printf("%i", days(rok, miesiac));
return 0;}
