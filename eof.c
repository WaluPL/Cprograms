#include <stdio.h>

int main()
{
FILE *plik = fopen("ekg.txt", "r");    // plik otwarty do odczytu
int n;
if (plik == NULL)    // otwarcie nie powiod�o si�
{
    printf("Otwarcie nieudane");
}
while (fscanf(plik, "%n", &n) != EOF)
{    // czytanie do ko�ca pliku
    printf("%n\n", n);
}
fclose(plik);
    return(0);
}
