#include <stdio.h>

int main() {

    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade
    int densidade;


    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);  
    getchar();

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);  
    getchar();

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);  
    getchar();

    densidade = populacao / area;
   
   
    printf("População: %d\n", populacao); 
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", pib); 
    printf("Densidade: %d\n", densidade); 

    

    return 0;

}