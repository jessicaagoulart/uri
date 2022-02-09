#include <stdio.h>

int main() {
 
  int x = 0;

  scanf("%d", &x);

  int vetor[x];

  int menor = 0;
  int posicao = 0;

  for (int i=0;i<x;i++){
    scanf("%d", &vetor[i]);
   }

  menor = vetor[0];

  for (int i=1;i<x;i++){
      if(vetor[i] < menor) {
        menor = vetor[i];
        posicao = i;
      }
    }

  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", posicao);

    return 0;
}