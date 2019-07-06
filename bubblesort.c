#include <stdio.h>
void bubble_sort(int tab[], int n)
{
  int i, j, pom;

  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (tab[j] > tab[j+1])
      {
        pom       = tab[j];
        tab[j]   = tab[j+1];
        tab[j+1] = pom;
      }
    }
  }
}
int main()
{
  int tab[100], n, i, j;
  scanf("%ld", &n);

  for (i = 0; i < n; i++)
    scanf("%ld", &tab[i]);

  bubble_sort(tab, n);

  for (i = 0; i < n; i++)
     printf("%ld ", tab[i]);

  return 0;
}

