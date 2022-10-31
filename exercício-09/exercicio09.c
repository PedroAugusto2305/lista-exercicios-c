#include <stdio.h>
#include <stdlib.h>

int main()
{
  int diary = 0, totalDiary = 0, totalPayment, result;
  char name[20];

  printf("Informe o nome do cliente: ");
  scanf("%s", &name);

  printf("Informe a quantidade de dias de estadia: ");
  scanf("%i", &totalDiary);

  if (totalDiary < 15)
  {
    diary = (totalDiary * 300) + 20;
  }
  else if (totalDiary > 15)
  {
    diary = (totalDiary * 300) + 12;
  }
  else
  {
    diary = (totalDiary * 300) + 14;
  }

  printf("O total a ser pago por %s e de: %i\n", name, diary);

  system("Pause");
}