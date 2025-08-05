int main() {
    char estadoA;                // Letra de 'A' a 'H'
    char codigoA[4];             // Ex: "A01", "B03"
    char nomeCidadeA[100];       // Nome da cidade
    int populacaoA;              // Número de habitantes
    float areaA;                 // Área em km²
    float pibA;                  // PIB da cidade
    int pontosTuristicosA;       // Número de pontos turísticos

    char estadoB;                // Letra de 'A' a 'H'
    char codigoB[4];             // Ex: "A01", "B03"
    char nomeCidadeB[100];       // Nome da cidade
    int populacaoB;              // Número de habitantes
    float areaB;                 // Área em km²
    float pibB;                  // PIB da cidade
    int pontosTuristicosB;       // Número de pontos turísticos

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estadoA); // espaço antes do %c para ignorar lixo do buffer

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoA);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidadeA); // lê string com espaços

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
    scanf(" %[^\n]", nomeCidadeB);

    printf("População: ");
    scanf("%d", &populacaoB);

    printf("Área (em km²): ");
    scanf("%f", &areaB);

    printf("PIB: ");
    scanf("%f", &pibB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);

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

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Cidade: %s\n", nomeCidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais \n", pibB);
    printf("Pontos Turísticos: %d\n", pontosTuristicosB);

    return 0;

}