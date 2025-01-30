#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Definindo variáveis para armazenar os dados da cidade
    int codigo;
    char nome[50];
    long populacao;
    float area;
    double pib;
    int pontos_turisticos;

    // Cadastro da cidade (entrada de dados)
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    getchar();  // Consumir o caractere de nova linha deixado pelo scanf anterior
    fgets(nome, 50, stdin);
    
    // Remover o caractere de nova linha no final do nome
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados da cidade
    printf("\n=== Dados da Cidade ===\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %ld\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2lf\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
