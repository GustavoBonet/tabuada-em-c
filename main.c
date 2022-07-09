#include <stdio.h>

int main(void) {
  printf("\nTABUADA\n");

  int numero;
  printf("\nDigite um número:");
  scanf("%d",&numero);

  for (int i = 0; i <= 10; i++){
    int calculo = numero * i;
    printf("\n %d * %d = %d\n",numero,i,calculo);
  }
  
  return 0;
}