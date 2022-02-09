#include <stdio.h>
#include <math.h>

int ex1175() {
 
  int vetor[20];
  int aux = 0;
  int i = 0;

  for (i=0;i<20;i++){
    scanf("%d", &vetor[i]);
  }

  for (i=0;i<10;i++){
      aux = vetor[i];
      vetor[i] = vetor[20-i-1];
      vetor[20-i-1] = aux;
    }

   for (i=0;i<20;i++){
      printf("N[%d] = %d\n", i, vetor[i]);
   }

    return 0;
}