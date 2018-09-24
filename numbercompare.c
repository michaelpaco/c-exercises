//6-Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os dois numeros forem iguais, imprima a mensagem Numeros iguais.

#include <stdlib.h>
#include <string.h>

int main()
{
  int x;
  int y;
  printf("primeiro numero: ");
  scanf("%i", &x);
  printf("segundo numero: ");
  scanf("%i", &y);

  if (x > y)
  {
    printf("\n O maior valor é ");
    printf("%i", x);
    printf("\n");
  }
  else if (x < y)
  {
    printf("\n O maior valor é ");
    printf("%i", y);
    printf("\n");
  }
  else if (x == y)
  {
    printf("\n Numeros iguais");
    printf("\n");
  }
  return 0;
}