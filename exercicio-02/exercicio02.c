#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 0, b = 0, c = 0;

  printf("Informe o valor de a: ");
  scanf("%d", &a);
  printf("\nInforme o valor de b: ");
  scanf("%d", &b);
  printf("\nInforme o valor de c: ");
  scanf("%d", &c);

  if (a + b > c)
  {
    printf("\nA soma entre a e b eh MAIOR que c \n\n");
  }
  else if (a + b < c)
  {
    printf("\nA soma entre a e b eh MENOR que c \n\n");
  }
  else
  {
    printf("\nA soma entre a e b eh igual que c \n\n");
  }

  system("Pause");
}
