//4-Faca um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%

#include <stdio.h>

int main () {
  
  float desc, val, valdesc;
  
  printf ("Digite o valor do produto: ");
  scanf ("%f", &val);

  desc = 0.12 * val;

  valdesc = val - desc;

  printf ("O valor com desconto é de %2.f", valdesc);

}