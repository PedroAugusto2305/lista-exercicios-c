#include <stdio.h>
#include <stdlib.h>

int main()
{

  float custFabr, custConsu, imp, distr;

  printf("Custo de Fabrica: R$");
  scanf("%f", &custFabr);
  distr = (custFabr * 0.25);
  imp = (custFabr * 0.45);
  custConsu = distr + imp + custFabr;

  printf("\nValor final do automovel: R$%.2f \n", custConsu);

  system("Pause");
}