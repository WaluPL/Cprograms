#include <stdio.h>

int main(){
int n;
    unsigned long long x=1;
        unsigned long long y=0;
scanf("%i", &n);
if(n>0){
for(int i=0;i<n;i++){
    y=x+y;
    x=y-x;
    printf("%llu ", x);
}
}

return 0;
}





