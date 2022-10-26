#include <stdio.h>
#include <stdlib.h>

int main()
{
  float qtdHambuguer, qtdCheese, qtdBatata, qtdRefri, qtdMilki = 0;
  float valor[5] = {3.50, 4.50, 5.00, 1.50, 2.80};
  float qtd_item[5];
  float result = 0;

  printf("\t\t\tCardapio Mona's Burguer: ");

  printf("\nInsira a quantidade de hamburguer que deseja: ");
  scanf("%f", &qtd_item[0]);
  result = valor[0] * qtd_item[0];
  printf("\nInsira a quantidade de CheeseBurguer que deseja: ");
  scanf("%f", &qtd_item[1]);
  result = (valor[1] * qtd_item[1]) + result;
  printf("\nInsira a quantidade de Batata Frita que deseja: ");
  scanf("%f", &qtd_item[2]);
  result = (valor[2] * qtd_item[2]) + result;
  printf("\nInsira a quantidade de Refrigerante que deseja: ");
  scanf("%f", &qtd_item[3]);
  result = (valor[3] * qtd_item[3]) + result;
  printf("\nInsira a quantidade de Milk-Shake que deseja: ");
  scanf("%f", &qtd_item[4]);
  result = (valor[4] * qtd_item[4]) + result;

  printf("\n\nO valor total da sua compra eh de: R$%.2f\n", result);

  system("Pause");
}