#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


 // Área para definição das variáveis para armazenar as propriedades das cidades

int main() {
  char Estado[30], nomeCidade[50], codigoCarta[10];
  int populaçao, Pontosturisticos;
  float areaemkm, PIB;

 // Área para entrada de dados

   printf("Digite o Estado: \n");
   scanf("%s", &Estado);

   printf("Digite o codigo da carta: \n");
   scanf("%s", &codigoCarta);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nomeCidade);

   printf("Digite a populaçao: \n");
   scanf("%d", &populaçao);

   printf("Digite a area em KM \n");
   scanf("%f", &areaemkm);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB);

   printf("Digite os pontos turisticos \n");
   scanf("%d", &Pontosturisticos);


  // Área para exibição dos dados da cidade

  printf("Nome do estado: %s - cidade: %s \n", Estado, nomeCidade);
  printf("codigo da carta: %s \n", codigoCarta);
  printf("populaçao: %d \n", populaçao);
  printf("area em km: %f \n", areaemkm);
  printf("PIB: %0.2f \n", PIB);
  printf("pontos turisticos %d \n", Pontosturisticos);


  return 0;
} 
