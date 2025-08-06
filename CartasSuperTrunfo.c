#include <stdio.h>

int main() {
    char estadoA;                 // Letra de 'A' a 'H'
    char codigoA[4];              // Ex: "A01", "B03"
    char nomeCidadeA[100];        // Nome da cidade
    unsigned long int populacaoA; // Número de habitantes
    float areaA;                  // Área em km²
    float pibA;                   // PIB da cidade
    int pontosTuristicosA;        // Número de pontos turísticos
    float densidadePopulacionalA; // Densidade Populacional
    float pibPerCapitaA;          // PIB per Capita
    float superPoderA;            // Super Poder

    char estadoB;                 // Letra de 'A' a 'H'
    char codigoB[4];              // Ex: "A01", "B03"
    char nomeCidadeB[100];        // Nome da cidade
    unsigned long int populacaoB; // Número de habitantes
    float areaB;                  // Área em km²
    float pibB;                   // PIB da cidade
    int pontosTuristicosB;        // Número de pontos turísticos
    float densidadePopulacionalB; // Densidade Populacional
    float pibPerCapitaB;          // PIB per Capita
    float superPoderB;            // Super Poder


    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estadoA); // espaço antes do %c para ignorar lixo do buffer

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoA);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidadeA); // lê string com espaços

    printf("População: ");
    scanf("%d", &populacaoA);

    printf("Área (em km²): ");
    scanf("%f", &areaA);

    printf("PIB: ");
    scanf("%f", &pibA);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosA);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estadoB);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoB);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidadeB);

    printf("População: ");
    scanf("%d", &populacaoB);

    printf("Área (em km²): ");
    scanf("%f", &areaB);

    printf("PIB: ");
    scanf("%f", &pibB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);

    // Cálculos necessários
    densidadePopulacionalA = (float)populacaoA / areaA;
    densidadePopulacionalB = (float)populacaoB / areaB;

    pibPerCapitaA = (float)(pibA * 1000000000.0) / populacaoA;
    pibPerCapitaB = (float)(pibB * 1000000000.0) / populacaoB;

    superPoderA = (float)(populacaoA + areaA + pibA + pibPerCapitaB + pontosTuristicosA) + (1 / densidadePopulacionalA);
    superPoderB = (float)(populacaoB + areaB + pibB + pibPerCapitaB + pontosTuristicosB) + (1 / densidadePopulacionalB);

    // Exibindo os dados cadastrados
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("Cidade: %s\n", nomeCidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais \n", pibA);
    printf("Pontos Turísticos: %d\n", pontosTuristicosA);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalA);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaA);
    printf("Super Poder: %.2f\n", superPoderA);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Cidade: %s\n", nomeCidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais \n", pibB);
    printf("Pontos Turísticos: %d\n", pontosTuristicosB);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalB);
    printf("Super Poder: %.2f\n", superPoderB);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu %d\n", populacaoA > populacaoB);
    printf("Área: Carta 1 venceu %d\n", areaA > areaB);
    printf("PIB: Carta 1 venceu %d\n", pibA > pibB);
    printf("Pontos Turísticos: Carta 1 venceu %d\n", pontosTuristicosA > pontosTuristicosB);
    printf("Densidade Populacional: Carta 1 venceu %d\n", densidadePopulacionalA < densidadePopulacionalB);
    printf("PIB per Capita: Carta 1 venceu %d\n", pibPerCapitaA > pibPerCapitaB);
    printf("Super Poder: Carta 1 venceu %d\n", superPoderA > superPoderB);

    return 0;

}