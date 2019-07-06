int count(const int *wsk1, const int *wsk2, int liczba){
int tmp=0;
for(;wsk1<wsk2;wsk1++){
if(*wsk1==liczba){
tmp++;
}
}
return tmp;
}

#include<stdio.h>
int main() {
const int table[] = {3, 7, -1, 12, -5, -1, 10};
printf("%i\n", count(table + 2, table + 7, -1));
return 0; }
