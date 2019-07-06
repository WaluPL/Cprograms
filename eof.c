#include <stdio.h>

int main()
{
FILE *plik = fopen("ekg.txt", "r");    // plik otwarty do odczytu
int n;
if (plik == NULL)    // otwarcie nie powiod³o siê
{
    printf("Otwarcie nieudane");
}
while (fscanf(plik, "%n", &n) != EOF)
{    // czytanie do koñca pliku
    printf("%n\n", n);
}
fclose(plik);
    return(0);
}
