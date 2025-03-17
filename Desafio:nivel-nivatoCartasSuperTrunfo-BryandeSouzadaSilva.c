#include <stdio.h>

int main() {
    // Definindo variáveis para a primeira carta
    char estado1;
    char codigoCarta1[5]; // String para o código da carta
    char nomeCidade1[50]; // String para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Definindo variáveis para a segunda carta
    char estado2;
    char codigoCarta2[10]; // String para o código da carta
    char nomeCidade2[50]; // String para o nome da cidade
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Recebendo os dados da primeira carta
    printf("Informe o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("Informe o código da carta (ex: A01): ");
    scanf("%4s", codigoCarta1); // Evita buffer overflow
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Recebendo os dados da segunda carta
    printf("Informe o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("Informe o código da carta (ex: A01): ");
    scanf("%9s", codigoCarta2); // Evita buffer overflow
    getchar(); // Limpa o buffer antes de ler a string completa
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
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}