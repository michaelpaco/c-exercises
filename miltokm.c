//2-Leia uma distancia em milhas e apresente-a convertida em quilometros. A formula de conversao e:K = 1. 61 ∗ M, sendo K a distancia em quilometros e M em milhas.

#include <stdio.h>

int main () {
  
  float mil, km;
  
  printf ("Digite a distancia em milhas: ");
  scanf ("%f", &mil);

  km = 1.61 * mil;

  printf ("%2.f milhas e igual a %2.f km", mil, km);

}