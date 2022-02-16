#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int comparar(const void *a, const void *b)
{
  return strcmp(a, b);
}

int ex2174()
{
  char array[1000][1000];
  int x = 0;

  int poke = 0;

  scanf("%d", &x);

  for (int i = 0; i < x; i++)
  {
    scanf("%s", array[i]);
  }

  qsort(array, x, 1000, comparar);

  for (int i = 0; i < x; i++)
  {
    if (strcmp(array[i - 1], array[i]))
    {
      poke++;
    }
  }

  printf("Falta(m) %d pomekon(s).\n", 151 - poke);

  return 0;
}