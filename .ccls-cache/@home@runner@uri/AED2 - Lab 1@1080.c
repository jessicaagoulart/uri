#include <stdio.h>
#include <math.h>

int EX1080() {
 
  int maior, aux, i, position;

  scanf("%d", &aux);

  maior = aux;
  position = 0;

  for (i=1;i<100;i++){
    scanf("%d", &aux);

    if (aux > maior){
      maior = aux;
      position = i;
    }
  }

  printf("%d\n", maior);
  printf("%d\n", position);

    return 0;
}