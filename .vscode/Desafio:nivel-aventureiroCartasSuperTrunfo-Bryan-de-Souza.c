#include <stdio.h>  

int main() {  
    // Declaração das variáveis para armazenar os dados das cartas  
    char estado1, estado2;  
    char codigoCarta1[5], codigoCarta2[10];  
    char nomeCidade1[50], nomeCidade2[50];  
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;  
    float area1, area2, pib1, pib2;  
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;  

    // Entrada de dados para a primeira carta  

    printf("Informe o estado da primeira carta (A-H): ");  
    scanf(" %c", &estado1);  

    printf("Informe o código da carta (ex: A01): ");  
    scanf("%s", codigoCarta1);  

    printf("Informe o nome da cidade: ");  
    scanf(" %[^\n]", nomeCidade1);  

    printf("Informe a população: ");  
    scanf("%d", &populacao1);  

    printf("Informe a área (em km²): ");  
    scanf("%f", &area1);  

    printf("Informe o PIB (em bilhões de reais): ");  
    scanf("%f", &pib1);  

    printf("Informe o número de pontos turísticos: ");  
    scanf("%d", &pontosTuristicos1);  

    // Entrada de dados para a segunda carta  
    printf("Informe o estado da segunda carta (A-H): ");  
    scanf(" %c", &estado2);  

    printf("Informe o código da carta (ex: A01): ");  
    scanf("%s", codigoCarta2);  

    printf("Informe o nome da cidade: ");  
    scanf(" %[^\n]", nomeCidade2);  

    printf("Informe a população: ");  
    scanf("%d", &populacao2);  

    printf("Informe a área (em km²): ");  
    scanf("%f", &area2);  

    printf("Informe o PIB (em bilhões de reais): ");  
    scanf("%f", &pib2);  

    printf("Informe o número de pontos turísticos: ");  
    scanf("%d", &pontosTuristicos2);  

    // Cálculos de densidade populacional e PIB per capita  
    densidade1 = populacao1 / area1;  
    densidade2 = populacao2 / area2;  

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;  

    // Exibição dos dados cadastrados  
    printf("\nDados Cadastrados:\n");  

    printf("\nCarta 1:\n");  
    printf("Estado: %c\n", estado1);  
    printf("Código da Carta: %s\n", codigoCarta1);  
    printf("Nome da Cidade: %s\n", nomeCidade1);  
    printf("População: %d\n", populacao1);  
    printf("Área: %.2f km²\n", area1);  
    printf("PIB: %.2f bilhões\n", pib1);  
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);  
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);  
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);  

    printf("\nCarta 2:\n");  
    printf("Estado: %c\n", estado2);  
    printf("Código da Carta: %s\n", codigoCarta2);  
    printf("Nome da Cidade: %s\n", nomeCidade2);  
    printf("População: %d\n", populacao2);  
    printf("Área: %.2f km²\n", area2);  
    printf("PIB: %.2f bilhões\n", pib2);  
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);  
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);  
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);  

    return 0;  
}