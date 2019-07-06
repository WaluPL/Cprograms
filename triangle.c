#include <stdio.h>

int main(){
float odc1, odc2, odc3;
scanf("%f %f %", &odc1, &odc2, &odc3);
if(odc1<odc2+odc3&&odc2<odc1+odc3&&odc3<odc1+odc2)
{
    printf("true");
}
else{
    printf("false");

}




return 0;
}
