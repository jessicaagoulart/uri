
#include <stdio.h>
#include "ex1013.h"
#include "ex1017.h"
#include "ex1066.h"
#include "ex1080.h"
#include "ex1113.h"
#include "ex1175.h"
#include "ex1180.h"
#include "ex2060.h"
#include "ex2163.h"

int main() {

  int x;

  printf("Digite o numero do exercicio: ");
  scanf("%d", &x);
 
 switch (x){
  case 1013:
    ex1013();
    break;
  case 1017:
    ex1017();
    break;
  case 1066:
    ex1066();
    break;
  case 1080:
    ex1080();
    break;
  case 1113:
    ex1113();
    break;
  case 1180:
    ex1180();
    break;
  case 2060:
    ex2060();
    break;
  case 2163:
    ex2163();
    break;
 }

    return 0;
}