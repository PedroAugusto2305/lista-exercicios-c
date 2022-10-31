#include <stdio.h>
#include <stdlib.h>

int main()
{
  float DC, FF, DA, MA, LI, CS, DG;
  float conv, conv1, conv2, conv3, result = 0;
  int option;

  FF = 0.2155;
  DA = 1.06;
  MA = 0.432;
  LI = 1.84;
  CS = 0.2425;
  DG = 0.0295;

  printf("\tSistema de conversao de moedas.\n");

  printf("Escolha qual Conversao deseja fazer");
  printf("\nAo escolher 1 voce converte Francos Franceses em Dolares Canadenses.\n");
  printf("\nAo escolher 2 voce converte Dolares americanos em Coroas Suecas e Franco Franceses.\n");
  printf("\nAo escolher 3 voce converte Dracmas Gregos em Libras Inglesas.\n");
  printf("\nAo escolher 4 voce converte Dolares Canadenses em Dolares Americanos e Marcos Alemaes.\n");
  scanf("\n%i", &option);

  switch (option)
  {
  case 1:
    printf("Informe a quantidade de Francos Franceses que deseja converter em dolares canadenses: ");
    scanf("%f", &result);
    conv = FF * result;
    printf("Valor convertido em Dolares canadenses: %.2f\n\n", conv);
    break;
  case 2:
    printf("Informe a quantidade de dolares americanos que deseja converter em coroas suecas e franco franceses: ");
    scanf("%f", &result);
    conv = DA * result;
    conv1 = conv * CS;
    conv2 = conv * FF;
    printf("Valor convertido em Coroas Suecas: %.2f\n\n", conv1);
    printf("Valor convertido em Francos Franceses: %.2f\n\n", conv2);
    break;
  case 3:
    printf("Informe a quantidade de Dracmas Gregos que deseja converter em Libras Inglesas:");
    scanf("%f", &result);
    conv = result * DG;
    conv1 = conv * LI;
    printf("Valor convertido em Libras Inglesas: %.2f\n\n", conv1);
    break;
  case 4:
    printf("Informe a quantidade de Dolares Canadenses que deseja converter em Dolares Americanos e Marcos Alemaes:");
    scanf("%f", &result);
    conv = DA * result;
    conv1 = conv * MA;
    printf("Valor convertido em Dolares Americanos: %.2f\n\n", conv);
    printf("Valor convertido em Marcos: %.2f\n\n", conv1);
    break;
  default:
    if (option != 1 || option != 2 || option != 3 || option != 4)
    {
      printf("\nEscolha uma opcao valida!\n\n");
      system("cls");
      return main();
    }
    else
    {
      printf("\nPrograma encerrado!\n\n");
    }
    break;
  }
  system("Pause");
}
