// 8-Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
// Para homens: (72.7*h) – 58
// Para mulheres: (62.1*h) – 44.7 (h = altura)

#include <stdlib.h>

int main()
{

  float alt, idealm, idealf;
  char sexo;

  printf("Digite a altura: ");
  scanf("%f", &alt);
  printf("Digite o sexo(m ou f): ");
  scanf("%s", &sexo);

  if (sexo == "m")
  {
    idealm = (72.7 * alt) - 58;
    printf("\n Seu peso ideal é %.2f", idealm);
  }
  else 
  {
    idealf = (62.1 * alt) - 44.7;
    printf("\n Seu peso ideal é %.2f", idealf);
  }

  return 0;
}