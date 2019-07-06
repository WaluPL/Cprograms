int *find(const int *begin, const int *end, int liczba){
int tmp=0;
for(;begin<end;begin++)
{
if(*begin==liczba)
{
tmp++;
return (int*)begin; break;
}
}
if(tmp==0){return (int*)end;}
}
#include<stdio.h>
int main() {
const int table[] = {1, 7, -5, 2, 8, -5, 3};

printf("%li\n", find(table + 3, table + 7,-5)-table);
return 0; }
