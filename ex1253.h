#include <stdio.h>

int ex1253()
{

  int x, key;
  char string[50];

  scanf("%d", &x);
  for (int i = 0; i < x; i++)
  {
    scanf("%s", &string);
    scanf("%d", &key);

    for (int j = 0; j < 50; j++)
    {
      if (string[j] == '\0')
        break;
      if ((string[j] - key) < 65)
        printf("%c", (string[j] - key) + 26);
      else
        printf("%c", (string[j] - key));
    }
    printf("\n");
  }

  return 0;
}