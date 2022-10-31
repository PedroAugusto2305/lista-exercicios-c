#include <stdio.h>
#include <stdlib.h>

int main()
{
  float rawSalary = 3000, salary, comission, sellingPercent, qtdSelling, totalSelling;

  printf("\t\tCompanhia de carros usados João Honesto");

  printf("Informe o a quantidade de vendas: ");
  scanf("%f", &qtdSelling);
  printf("Informe o total de vendas: ");
  scanf("%f", &totalSelling);

  comission = qtdSelling * 500;
  sellingPercent = totalSelling * 0.05;

  salary = rawSalary + comission + sellingPercent;

  printf("O salario a receber sera de: %.2f\n", salary);

  system("pause");
}