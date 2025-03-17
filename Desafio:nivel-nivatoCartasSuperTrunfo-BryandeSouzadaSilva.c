#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[10]; // Código da carta (string)
    char nomeCidade1[50], nomeCidade2[50]; // Nome da cidade (string)
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2; // População e pontos turísticos
    float area1, area2, pib1, pib2; // Área e PIB

    // Entrada de dados para a primeira carta
    printf("Informe o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c evita problemas com buffer
    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigoCarta1); // Lê string sem espaço
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê o nome completo da cidade
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
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
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados cadastrados
    printf("\nDados Cadastrados:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}