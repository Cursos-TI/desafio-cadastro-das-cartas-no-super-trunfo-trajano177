#include <stdio.h>

int main() {
    // Definindo variáveis para armazenar os dados da cidade
    int codigo, pontos_turisticos;
    char nome_pais[50], nome_estado[50], nome_cidade[50];  // Variáveis para armazenar o nome do país, estado e cidade
    int populacao; // variável para armazenar a população
    int area;     // variável para armazenar a área
    int pib;     // variável para armazenar o PIB

    // Solicitação e leitura dos dados do usuário
    printf("Digite o nome do seu país: \n");
    scanf("%s", nome_pais);  // Agora o nome do país é armazenado em 'nome_pais'

    printf("Digite o nome de 1 estado do país: \n");
    scanf("%s", nome_estado); // Agora o nome do estado é armazenado em 'nome_estado'

    printf("Digite o nome de 1 cidade dentro desse estado: \n");
    scanf("%s", nome_cidade); // Agora o nome da cidade é armazenado em 'nome_cidade'

    printf("Digite a população da cidade: \n");
    scanf("%d", populacao);  // Corrigido: '%ld' para long

    printf("Digite a área da cidade: \n");
    scanf("%d", area);  // Corrigido: '%f' para float

    printf("Digite o PIB da cidade: \n");
    scanf("%d", pib);  // Corrigido: '%lf' para double

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", pontos_turisticos);  // Corrigido: '%d' para int

    // Exibindo os resultados de forma organizada
    printf("\nSeu resultado a seguir...\n");
    printf("Seu país: %s\n", nome_pais);  // Exibe o nome do país
    printf("Seu estado: %s\n", nome_estado);  // Exibe o nome do estado
    printf("Sua cidade: %s\n", nome_cidade);  // Exibe o nome da cidade
    printf("População: %d\n", populacao);  // Exibe a população
    printf("Área: %d km²\n", area);  // Exibe a área
    printf("PIB: %d\n", pib);  // Exibe o PIB
    printf("Pontos turísticos: %d\n", pontos_turisticos);  // Exibe os pontos turísticos

    return 0;
}
