#include <stdio.h>

int ex2060() {
 
  int mult2 = 0;
  int mult3 = 0;
  int mult4 = 0;
  int mult5 = 0;
  int x;

  scanf("%d", &x);

  int vetor[x];

  for (int i=0;i<x;i++){
    scanf("%d", &vetor[i]);
   }


  for (int i=0;i<x;i++){
      if(vetor[i] % 2 == 0) {
        mult2 += 1;
      }
      if (vetor[i] % 3 == 0){
        mult3 += 1;
      }
      if (vetor[i] % 4 == 0){
        mult4 += 1;
      }
      if (vetor[i]%5 == 0){
        mult5 += 1;
      }
    }

  printf("%d Multiplo(s) de 2\n", mult2);
  printf("%d Multiplo(s) de 3\n", mult3);
  printf("%d Multiplo(s) de 4\n", mult4);
  printf("%d Multiplo(s) de 5\n", mult5);

    return 0;
}