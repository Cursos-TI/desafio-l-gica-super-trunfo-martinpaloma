#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[50];
    char codigo1[4];
    char nomeCidade1[50];
    float populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2[50];
    char codigo2[4];
    char nomeCidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Informe o Estado (ex: RJ): ");
    scanf("%s", estado1);
    getchar();

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();

    printf("Informe o Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Informe a População (em milhões, ex: 6.8): ");
    scanf("%f", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2\n");

    printf("Informe o Estado (ex: SP): ");
    scanf("%s", estado2);
    getchar();

    printf("Informe o Código da Carta (ex: A02): ");
    scanf("%s", codigo2);
    getchar();

    printf("Informe o Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Informe a População (em milhões, ex: 12.4): ");
    scanf("%f", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibe os dados das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %.1f milhões\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %.1f milhões\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // Comparações
    printf("\n--- Comparações ---\n");

    if (populacao1 > populacao2)
        printf("População: %s vence com %.1f milhões de habitantes.\n", nomeCidade1, populacao1);
    else if (populacao2 > populacao1)
        printf("População: %s vence com %.1f milhões de habitantes.\n", nomeCidade2, populacao2);
    else
        printf("População: Empate com %.1f milhões.\n", populacao1);

    if (area1 > area2)
        printf("Área: %s vence com %.2f km².\n", nomeCidade1, area1);
    else if (area2 > area1)
        printf("Área: %s vence com %.2f km².\n", nomeCidade2, area2);
    else
        printf("Área: Empate com %.2f km².\n", area1);

    if (pib1 > pib2)
        printf("PIB: %s vence com R$ %.2f bilhões.\n", nomeCidade1, pib1);
    else if (pib2 > pib1)
        printf("PIB: %s vence com R$ %.2f bilhões.\n", nomeCidade2, pib2);
    else
        printf("PIB: Empate com R$ %.2f bilhões.\n", pib1);

    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: %s vence com %d pontos.\n", nomeCidade1, pontosTuristicos1);
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Pontos Turísticos: %s vence com %d pontos.\n", nomeCidade2, pontosTuristicos2);
    else
        printf("Pontos Turísticos: Empate com %d pontos.\n", pontosTuristicos1);

    return 0;
}