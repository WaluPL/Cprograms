#include <stdio.h>
#include <time.h>

int main()
{
    struct tm rokdzien;
    int liczbadni=1, i;
    int table[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %02d %02d",&rokdzien.tm_year, &rokdzien.tm_mon, &rokdzien.tm_mday);
    if (rokdzien.tm_year % 4 == 0 && rokdzien.tm_year % 100 != 0 || rokdzien.tm_year % 400 == 0)
    {table[1]=29;}
     for(i=1;i<=rokdzien.tm_mon;i++){
        for(int j=1;j<=table[i-1];j++)
        {
            if(j==rokdzien.tm_mday&&i==rokdzien.tm_mon){break;}
            liczbadni++;
        }
     }
    printf("%i", liczbadni);
    return 0;
}
