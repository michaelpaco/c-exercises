//7-Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a ́prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso contrario imprima:  Emprestimo concedido.

#include <stdlib.h>

int main()
{

  float sal, prest, porc;

  printf("Digite o salario: ");
  scanf("%f", &sal);
  printf("Digite o valor da parcela: ");
  scanf("%f", &prest);

  porc = sal * 0.2;

  if (prest > porc)
  {
    printf("\n Emprestimo nao concedido");
  }
  else
  {
    printf("\n Emprestimo concedido");
  }

  return 0;
}