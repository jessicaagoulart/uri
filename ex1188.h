#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ex1188()
{

  double matrix[12][12];
  double x = 0.0;
  double soma = 0.0;
  char letter[2];
  int counter = 1;

  scanf("%s", letter);

  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      scanf("%lf", &matrix[i][j]);
    }
  }

  for (int i = 7; i < 12; i++)
  {
    for (int j = 1; j < 11; j++)
    {
      if (j >= i - 2 * counter && j < i)
      {
        soma += matrix[i][j];
      }
    }
    counter++;
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