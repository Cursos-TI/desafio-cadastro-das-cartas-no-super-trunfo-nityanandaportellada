#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Declaração das variáveis para as duas cidades de maneira independente
    int codigo_da_cidade1 = 1;
    char nome1[60];
    int populacao1 = 0;
    float area1 = 0.0;
    float pib1 = 0.0;
    int numero_de_pontos_turisticos1 = 0;
    char estado1;

    int codigo_da_cidade2 = 1;
    char nome2[60];
    int populacao2 = 0;
    float area2 = 0.0;
    float pib2 = 0.0;
    int numero_de_pontos_turisticos2 = 0;
    char estado2;

    // Captura dos dados da primeira cidade através do uso de pritf e scanf
    printf("Insira o código do estado da primeira cidade, entre A e H: ");
    scanf(" %c", &estado1); 
    printf("Insira o código da primeira cidade, entre 1 e 8: ");
    scanf("%d", &codigo_da_cidade1);
    printf("Insira o nome da primeira cidade: ");
    scanf(" %[^\n]s", nome1);
    printf("Insira a população da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("Insira a área da primeira cidade: ");
    scanf("%f", &area1);
    printf("Insira o PIB da primeira cidade: ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Captura dos dados da segunda cidade através do uso de pritf e scanf
    printf("Insira o código do estado da segunda cidade, entre A e H: ");
    scanf(" %c", &estado2); 
    printf("Insira o código da segunda cidade, entre 1 e 8: ");
    scanf("%d", &codigo_da_cidade2);  
    printf("Insira o nome da segunda cidade: ");
    scanf(" %[^\n]s", nome2);  
    printf("Insira a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Insira a área da segunda cidade: ");
    scanf("%f", &area2);
    printf("Insira o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Exibição dos dados das cartas conforme digitado pelo usuário
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%d\n", estado1, codigo_da_cidade1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%d\n", estado2, codigo_da_cidade2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);

    return 0;
}
