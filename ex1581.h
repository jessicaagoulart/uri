#include <stdio.h>
#include <string.h>

int ex1581()
{
  char array[100][21];
  int x = 0;
  int y = 0;
  int lng = 0;

  scanf("%d", &x);

  for (int k = 0; k < x; k++)
  {
    scanf("%d", &y);

    for (int i = 0; i < y; i++)
    {
      scanf("%s", array[i]);
    }

    lng = 0;

    for (int i = 0; i < y; i++)
    {
      if (strcmp(array[0], array[i]) != 0)
      {
        lng = 1;
      }
    }

    if (lng == 1)
    {
      printf("ingles\n");
    }
    else
    {
      printf("%s\n", array[0]);
    }

    memset(array, '\0', 20);
  }

  return 0;
}