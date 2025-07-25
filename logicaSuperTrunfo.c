#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis
    char estado1[50], estado2[50];
    char codCarta1[10], codCarta2[10];
    char nomeCidade1[50], nomeCidade2[50];

    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidade1, densidade2;

    // Entrada de dados da carta 1
    printf("Informe o Estado da Carta 1: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Informe o Código da Carta 1: ");
    fgets(codCarta1, sizeof(codCarta1), stdin);
    codCarta1[strcspn(codCarta1, "\n")] = 0;

    printf("Informe o Nome da Cidade da Carta 1: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Informe a População da Carta 1: ");
    scanf("%lu", &populacao1);
    getchar(); // limpa o \n

    printf("Informe a Área (em km²) da Carta 1: ");
    scanf("%f", &area1);
    getchar();

    printf("Informe o PIB (em bilhões) da Carta 1: ");
    scanf("%f", &pib1);
    getchar();

    printf("Informe o Número de Pontos Turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);
    getchar();

    // Entrada de dados da carta 2
    printf("\nInforme o Estado da Carta 2: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Informe o Código da Carta 2: ");
    fgets(codCarta2, sizeof(codCarta2), stdin);
    codCarta2[strcspn(codCarta2, "\n")] = 0;

    printf("Informe o Nome da Cidade da Carta 2: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Informe a População da Carta 2: ");
    scanf("%lu", &populacao2);
    getchar();

    printf("Informe a Área (em km²) da Carta 2: ");
    scanf("%f", &area2);
    getchar();

    printf("Informe o PIB (em bilhões) da Carta 2: ");
    scanf("%f", &pib2);
    getchar();

    printf("Informe o Número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);
    getchar();

    // Cálculo da Densidade Populacional
    if (area1 != 0) {
        densidade1 = (float)populacao1 / area1;
    } else {
        densidade1 = 0.0;
        printf("Aviso: Área da Carta 1 é zero.\n");
    }

    if (area2 != 0) {
        densidade2 = (float)populacao2 / area2;
    } else {
        densidade2 = 0.0;
        printf("Aviso: Área da Carta 2 é zero.\n");
    }

    // Exibição dos dados e comparação
    printf("\nComparação de cartas (Atributo: Densidade Populacional - menor vence):\n\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}