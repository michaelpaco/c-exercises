//3-Leia um valor de comprimento em polegadas e apresente-o convertido em centımetros. A formula de conversao ̃e: ́ C = P ∗ 2, 54, sendo C o comprimento em centımetros e P o comprimento em polegadas.

#include <stdio.h>

int main () {
  
  float pol, cm;
  
  printf ("Digite o comprimento em Polegadas: ");
  scanf ("%f", &pol);

  cm = 2.54 * pol;

  printf ("%2.f pol e igual a %2.f cm", pol, cm);

}