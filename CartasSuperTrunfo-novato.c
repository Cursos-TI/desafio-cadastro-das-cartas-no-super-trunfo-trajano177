#include <stdio.h>

int main() {
   // Definindo variáveis para armazenar os dados da cidade
   char estado[2];        // A letra do estado (ex: 'A', 'B')
   char codigo[5];        // O código da carta (ex: "A01", "B02")
   char cidade[50];       // Nome da cidade
   int populacao;         // População da cidade
   float area;            // Área da cidade em km²
   float pib;             // PIB da cidade
   int pontos_turisticos; // Número de pontos turísticos

    // Solicitação e leitura dos dados do usuário 

    printf("Digite o estado (letra de A a H): \n");
    scanf("%s", estado); 
    getchar();

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo); 
    getchar();

    printf("Digite o nome de uma cidade dentro desse estado: \n");
    fgets(cidade,49, stdin);  
    getchar();

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);  
    getchar();

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);  
    getchar();

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);  
    getchar();

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos); 
    getchar();

    // exibir no console os dados de entrada de forma organizada

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao); 
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", pib); 
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    printf("Digite o estado (letra de A a H): \n");
    scanf("%s", estado); 
    getchar();

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo); 
    getchar();

    printf("Digite o nome de uma cidade dentro desse estado: \n");
    fgets(cidade,49, stdin);  
    getchar();

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);  
    getchar();

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);  
    getchar();

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);  
    getchar();

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos); 
    getchar();

    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao); 
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", pib); 
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
