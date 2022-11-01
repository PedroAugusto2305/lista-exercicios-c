#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[50], gender[10], profession[50], street[100], district[100], city[100], state[50];
  int age, tel, cep = 0;
  float weight, height = 0;

  printf("\nInforme o nome do usuario: ");
  scanf("%c", &name);
  printf("\nInforme a idade do usuario: ");
  scanf("%i", &age);
  printf("\nInforme o sexo do usuario: ");
  scanf("%c", &gender);
  printf("\nInforme o peso do usuario: ");
  scanf("%f", &weight);
  printf("\nInforme a altura do usuario: ");
  scanf("%f", &height);

  fflush(stdin);

  printf("\nInforme a profissao do usuario: ");
  scanf("%c", &profession);
  printf("Informe a rua do usuario: ");
  scanf("%c", &street);
  printf("Informe o bairro do usuario: ");
  scanf("%c", &district);
  printf("Informe a cidade do usuario: ");
  scanf("%c", &city);
  printf("Informe o estado da pessoa: ");
  scanf("%c", &state);
  printf("Informe o CEP do usuario:");
  scanf("%i", &cep);
  printf("Informe o telefone do usuario: ");
  scanf("%i", &tel);

  printf("Nome: %c", name);
  printf("\nIdade: %i", age);
  printf("\nSexo: %c", gender);
  printf("\nPeso: %f", weight);
  printf("\nAltura: %f", height);
  printf("\nProfissao: %c", profession);
  printf("\nEndereco: %c, %c, %c - %c.", street, district, city, state);
  printf("\nCEP: %i", cep);
  printf("\nTelefone: %i\n", tel);

  system("Pause");
}