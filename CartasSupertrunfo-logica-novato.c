#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1[3];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    // Variáveis da segunda carta
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    // Cadastro da primeira carta
    printf("\n=== Cadastro da Carta 1 ===\n");
    
    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%s", estado1);
    getchar();

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (sigla, ex: RJ): ");
    scanf("%s", estado2);
    getchar();

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibir os dados das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // Comparação das cartas usando PIB per capita
    printf("\n=== Comparação de Cartas (PIB per capita) ===\n");
    printf("Carta 1 (%s): %.2f\n", cidade1, pib_per_capita1);
    printf("Carta 2 (%s): %.2f\n", cidade2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
