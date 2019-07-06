#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
int n=atoi(argv[1]);
int *table;
table = (int*) malloc((n+1)* sizeof(*table));
for(int i=2; i<=n; i++){
		table[i] = 0;
}
for (int i=2; i*i<=n; i++)
    {


        if(!table[i]){
		for (int j = i*i ; j<=n; j+=i){
            table[j] = 1;}
    }}

for(int i=2;i<n;i++){
		if(!table[i]){
            printf("%i ", i);}
}
free(table);
return 0;
}
