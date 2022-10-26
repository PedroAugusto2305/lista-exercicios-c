#include <stdio.h>
#include <stdlib.h>

int main()
{

  float ff, dc, conversao;

  printf("Insira a quantidade de Francos Franceses desejada: ");
  scanf("%f", &ff);
  conversao = 0.21 * ff;
  printf("A conversão de Francos Franceses para Dolares Canadenses eh: %.2f \n", conversao);

  system("Pause");
}
