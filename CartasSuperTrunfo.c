#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: cadastrar e exibir os dados de DUAS cartas (sem if/for/while).

int main() {

    // =========================
    // Variáveis da Carta A
    // =========================
    char estadoA[3];          // 2 letras + '\0'
    char codigoCartaA[21];    // até 20 chars + '\0'
    char nomeCidadeA[21];     // até 20 chars + '\0'
    int populacaoA, pontosTuristicosA;
    float pibA, areaA;

    // =========================
    // Variáveis da Carta B
    // =========================
    char estadoB[3];
    char codigoCartaB[21];
    char nomeCidadeB[21];
    int populacaoB, pontosTuristicosB;
    float pibB, areaB;

    // =========================
    // Entrada de dados - Carta A
    // =========================
    printf("=== CADASTRO DA CARTA A ===\n");

    printf("Digite a sigla do Estado (ex: SP): ");
    scanf("%2s", estadoA);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%20s", codigoCartaA);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%20s", nomeCidadeA);

    printf("Digite a populacao: ");
    scanf("%d", &populacaoA);

    printf("Digite a area (km2): ");
    scanf("%f", &areaA);

    printf("Digite o PIB: ");
    scanf("%f", &pibA);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicosA);

    // =========================
    // Entrada de dados - Carta B
    // =========================
    printf("\n=== CADASTRO DA CARTA B ===\n");

    printf("Digite a sigla do Estado (ex: RJ): ");
    scanf("%2s", estadoB);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%20s", codigoCartaB);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%20s", nomeCidadeB);

    printf("Digite a populacao: ");
    scanf("%d", &populacaoB);

    printf("Digite a area (km2): ");
    scanf("%f", &areaB);

    printf("Digite o PIB: ");
    scanf("%f", &pibB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicosB);

    // =========================
    // Exibição - Carta A
    // =========================
    printf("\n==============================\n");
    printf("        CARTA A (DADOS)        \n");
    printf("==============================\n");
    printf("Estado: %s\n", estadoA);
    printf("Codigo da carta: %s\n", codigoCartaA);
    printf("Cidade: %s\n", nomeCidadeA);
    printf("Populacao: %d\n", populacaoA);
    printf("Area (km2): %.2f\n", areaA);
    printf("PIB: %.2f\n", pibA);
    printf("Pontos turisticos: %d\n", pontosTuristicosA);

    // =========================
    // Exibição - Carta B
    // =========================
    printf("\n==============================\n");
    printf("        CARTA B (DADOS)        \n");
    printf("==============================\n");
    printf("Estado: %s\n", estadoB);
    printf("Codigo da carta: %s\n", codigoCartaB);
    printf("Cidade: %s\n", nomeCidadeB);
    printf("Populacao: %d\n", populacaoB);
    printf("Area (km2): %.2f\n", areaB);
    printf("PIB: %.2f\n", pibB);
    printf("Pontos turisticos: %d\n", pontosTuristicosB);

    return 0;
}
