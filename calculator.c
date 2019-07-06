#include <stdio.h>
#include <math.h>
int main()
{
    int liczba;
    double arg1, arg2, wynik=0;
    scanf("%i", &liczba);

    switch(liczba)
    {
        case 1:
            scanf("%lg %lg", &arg1, &arg2 );
            wynik = arg1 + arg2;
            break;

        case 2:
            scanf("%lg %lg", &arg1, &arg2 );
            wynik = arg1 - arg2;
            break;

        case 3:
            scanf("%lg %lg", &arg1, &arg2 );
            wynik = arg1 * arg2;
            break;

        case 4:
            scanf("%lg %lg", &arg1, &arg2 );
            wynik = arg1 / arg2;
            break;

        case 5:
            scanf("%lg", &arg1);
            wynik = sqrt(arg1);
            break;


        default:
           return 0;
    }

    printf("%lg", wynik);

    return 0;
}
