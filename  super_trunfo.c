#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


 // Área para definição das variáveis para armazenar as propriedades das cidades

int main() {
  char Estado[10], estado2[10], nomeCidade[50], nomeCidade2[50], codigoCarta[10], codigoCarta2[10];
  int populaçao, populacao2, Pontosturisticos, pontosturisticos2;
  float areaemkm, areaemkm2, PIB, PIB2;

 // Área para entrada de dados

   printf("Digite o Estado: \n");
   scanf("%s", Estado);

   printf("Digite o codigo da carta: \n");
   scanf("%s", codigoCarta);

   printf("Digite o nome da cidade: \n");
   scanf("%s", nomeCidade);

   printf("Digite a populaçao: \n");
   scanf("%d", &populaçao);

   printf("Digite a area em km² \n");
   scanf("%f", &areaemkm);

   printf("Digite o PIB em Reais: \n");
   scanf("%f", &PIB);

   printf("Digite os pontos turisticos \n");
   scanf("%d", &Pontosturisticos);


  // Área para exibição dos dados da cidade


  printf("carta: %s \n", codigoCarta);
  printf("Nome do estado: %s \n", Estado);
  printf("codigo da carta: %s \n", codigoCarta);
  printf("populaçao: %d \n", populaçao);
  printf("area em km²: %.2f km² \n", areaemkm);
  printf("PIB: %.2f Milhoes de reais \n", PIB);
  printf("Numero de pontos Turisticos: %d \n", Pontosturisticos);

printf("Digite o Estado: \n");
   scanf("%s", estado2);

   printf("Digite o codigo da carta: \n");
   scanf("%s", codigoCarta2);

   printf("Digite o nome da cidade: \n");
   scanf("%s", nomeCidade2);

   printf("Digite a populaçao: \n");
   scanf("%d", &populacao2);

   printf("Digite a area em km² \n");
   scanf("%f", &areaemkm2);

   printf("Digite o PIB em Reais: \n");
   scanf("%f", &PIB2);

   printf("Digite os pontos turisticos \n");
   scanf("%d", &pontosturisticos2);


  printf("carta: %s \n", codigoCarta2);
  printf("Nome do estado: %s \n", estado2);
  printf("populaçao: %d \n", populacao2);
  printf("area em km²: %.2f km² \n", areaemkm2);
  printf("PIB: %.2f Milhoes de Reais\n", PIB2);
  printf("Numero de pontos Turisticos: %d \n", pontosturisticos2);

  return 0;
} 
