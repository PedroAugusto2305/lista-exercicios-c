#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;

  printf("Informe o valor de a: ");
  scanf("\n%d", &a);
  printf("Informe o valor de b: ");
  scanf("\n%d", &b);

  if (a == b)
  {
    c = a + b;
  }
  else if (a > b)
  {
    c = a * b;
  }
  else
  {
    c = b * a;
  }
}

printf("O valor de c eh: %d \n", c);

system("Pause");
}