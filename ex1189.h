#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ex1189()
{

  double matrix[12][12];
  double x = 0.0;
  double soma = 0.0;
  char letter[2];

  scanf("%s", letter);

  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      scanf("%lf", &matrix[i][j]);
    }
  }

  for (int i = 1; i < 11; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (i >= j + 1 && i <= 10 - j)
      {
        soma += matrix[i][j];
      }
    }
  }

  if (letter[0] == 'S')
  {
    printf("%.1lf\n", soma);
  }
  else
  {
    printf("%.1lf\n", soma / 30);
  }

  return 0;
}