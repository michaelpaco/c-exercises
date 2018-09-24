
// 1-Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s  (metros por segundo). A formula de conversao  e: M = K/3.6, sendo K a velocidade em km/h e M em m/s.
#include <stdio.h>

int main () {
  
  float desc, val, valdesc;
  
  printf ("Digite o valor do produto: ");
  scanf ("%f", &val);

  desc = 0.12 * val;

  valdesc = val - desc;

  printf ("O valor com desconto é de %2.f", valdesc);

}
#include <stdio.h>

int main () {
	
	float km, ms;
	
	printf("Digite uma velocidade em Km/h: ");
	scanf("%f", &km);
	
	ms = km/3.6;
	
	printf("%2.f Km/h convertido para %2.fm/s", km, ms); 
			
}