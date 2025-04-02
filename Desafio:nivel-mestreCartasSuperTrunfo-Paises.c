#include <stdio.h>

// Desafio de Super Trunfo - Paises
// Tema 1 - Cadastro das Cartas

int main() {

    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[10]; // Código da carta (string)
    char nomeCidade1[50], nomeCidade2[50]; // Nome da cidade (string)
    unsigned long int populacao1, populacao2; // População 
    int pontosTuristicos1, pontosTuristicos2; //  pontos turísticos
    double area1, area2; // Área
    double pib1, pib2; //  PIB
    double densidade1, densidade2; // Densidade populacional
    double pibPerCapita1, pibPerCapita2; // PIB per capita
    double superPoder1, superPoder2; // Super Poder

    // Entrada de dados para a primeira carta
    printf("Informe o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a população: ");
    scanf("%lu", &populacao1);

    printf("Informe a área (em km²): ");
    scanf("%lf", &area1);

    printf("Informe o PIB (em bilhões): ");
    scanf("%lf", &pib1);

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
    scanf("%lu", &populacao2);

    printf("Informe a área (em km²): ");
    scanf("%lf", &area2);

    printf("Informe o PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita 
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Cálculo do super poder somando todos os atributos numéricos
    superPoder1 = populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição dos dados cadastrados
    printf("\nDados Cadastrados:\n");

    printf("\nCarta 1:\n");
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\nComparação das cartas:\n");
    printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Área: %s\n", (area1 > area2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Número de pontos turísticos: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB per capita: %s\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Densidade Populacional (inversa): %s\n", (1.0 / densidade1) > (1.0 / densidade2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Super Poder: %s\n", (superPoder1 > superPoder2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");