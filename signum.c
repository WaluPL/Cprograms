#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
srand(time(NULL));
int r = rand()%(100+1-(-50))+(-50);
for(int i=0; i<50; i++){
printf("%i\n", rand()%(100+1-(-50))+(-50));
}



return 0;
}
