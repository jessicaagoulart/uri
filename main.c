// LISTA 1
#include <stdio.h>
#include "ex1013.h"
#include "ex1017.h"
#include "ex1036.h"
#include "ex1066.h"
#include "ex1080.h"
#include "ex1113.h"
#include "ex1175.h"
#include "ex1180.h"
#include "ex2060.h"
#include "ex2163.h"

// LISTA 2
#include "ex1253.h"
#include "ex1187.h"
#include "ex1188.h"
#include "ex1189.h"
#include "ex1190.h"
#include "ex2174.h"

int main()
{

  int x;

  printf("Digite o numero do exercicio: ");
  scanf("%d", &x);

  switch (x)
  {
  case 1013:
    ex1013();
    break;
  case 1017:
    ex1017();
    break;
  case 1036:
    ex1036();
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
  case 1253:
    ex1253();
    break;
  case 1187:
    ex1187();
    break;
  case 1188:
    ex1188();
    break;
  case 1189:
    ex1189();
    break;
  case 1190:
    ex1190();
    break;
  case 2174:
    ex2174();
    break;

  default:
    printf("Exercício não encontrado!");
    break;
  }

  return 0;
}