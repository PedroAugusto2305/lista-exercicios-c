#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;

  printf("Forneca o valor de a: ");
  scanf("%d", &a);
  printf("Forneca o valor de b: ");
  scanf("%d", &b);
  printf("Forneca o valor de c: ");
  scanf("%d", &c);

  if (a + b > c)
  {
    printf("A soma de a e b eh MAIOR que c \n");
  }
  else if (a + b < c)
  {
    printf("A soma de a e b eh MENOR que c \n");
  }
  else
  {
    printf("A soma de a e b eh IGUAL a c \n");
  }

  system("Pause");
}