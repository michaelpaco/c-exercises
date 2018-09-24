// 9-Determine se um determinado ano lido e bissexto. Sendo que um ano e bissexto se for divisıvel por 400 ou se for divisıvel por 4 e nao for divisıvel por 100. Por exemplo: 1988, 1992, 1996

#include <stdlib.h>

int main()
{
  int ano;

  printf("Digite o ano: ");
  scanf("%d", &ano);

  if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
  {
    printf("\n E bissexto");
  }
  else {
    printf("\n Nao e bissexto");
  }
  return 0;
}