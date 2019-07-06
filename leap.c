#include <stdio.h>

int main(){
int rok;
scanf("%i", &rok);
if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
{
printf("true");
}
else{
printf("false");
}
return 0;
}
