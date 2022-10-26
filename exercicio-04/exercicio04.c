#include <stdio.h>
#include <stdlib.h>

int main()
{

  float custFabr, custConsu, imp, distr;

  printf("Custo de Fabrica: R$");
  scanf("%f", &custFabr);
  distr = (custFabr * 0.25) + custFabr;
  custConsu = (distr * 0.45) + distr;

  printf("\nValor final do automovel: R$%.2f \n", custConsu);

  system("Pause");
}