//5-Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, sabendo que ele recebeu um aumento de 25%.

#include <stdio.h>

int main () {
  
  float sal, inc, salinc;
  
  printf ("Digite o salario do funcionario: ");
  scanf ("%f", &sal);

  inc = 0.25 * sal;

  salinc = sal + inc;

  printf ("O novo salário com aumento é %2.f", salinc);

}