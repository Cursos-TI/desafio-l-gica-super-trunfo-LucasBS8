#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char code[3], code_2[3];
    char nameState[50], nameState_2[50];
    char nameCity[50], nameCity_2[50];
    float area, area_2;
    float pib, pib_2;
    int population, population_2;
    int turistic_points, turistic_points_2;
    float population_density, population_density_2;
    float pib_per_capita, pib_per_capita_2;
    float total_power, total_power_2;

    // Primeira rodada de entrada de dados:
    // Área para entrada de dados
    printf("Digite o nome do estado: ");
    scanf("%s", nameState);
    printf("Digite o nome da cidade: ");
    scanf("%s", nameCity);
    printf("Digite o código da cidade (A01, A02, B01, etc.): ");
    scanf("%s", code);
    printf("Digite o total da população da cidade: ");
    scanf("%d", &population);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &turistic_points);

    // Cálculo de densidade populacional e PIB per capita
    population_density = population / area;
    pib_per_capita = pib / population;

    // Cálculo do total do poder
    total_power = population + area + pib_per_capita + population_density;

    // Área para exibição dos dados da cidade
    printf("\nDados da cidade:\n");
    printf("Estado: %s\n", nameState);
    printf("Cidade: %s\n", nameCity);
    printf("Código: %s\n", code);
    printf("População: %d habitantes\n", population);
    printf("Área: %.1f km²\n", area);
    printf("PIB: %.1f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", turistic_points);
    printf("Densidade Populacional: %.1f habitantes/km²\n", population_density);
    printf("PIB per Capita: %.1f milhões\n", pib_per_capita);

    // Segunda rodada de entrada de dados:
    // Entrada de dados
    printf("Digite o nome do estado: ");
    scanf("%s", nameState_2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nameCity_2);
    printf("Digite o código da cidade (A01, A02, B01, etc.): ");
    scanf("%s", code_2);
    printf("Digite o total da população da cidade: ");
    scanf("%d", &population_2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &turistic_points_2);

    // Cálculo de densidade populacional e PIB per capita
    population_density_2 = population_2 / area_2;
    pib_per_capita_2 = pib_2 / population_2;

    // Cálculo do total do poder
    total_power_2 = population_2 + area_2 + pib_per_capita_2 + (population_density_2 / 1) + turistic_points_2;

    // Área para exibição dos dados da cidade
    printf("\nDados da cidade:\n");
    printf("Estado: %s\n", nameState_2);
    printf("Cidade: %s\n", nameCity_2);
    printf("Código: %s\n", code_2);
    printf("População: %d habitantes\n", population_2);
    printf("Área: %.1f km²\n", area_2);
    printf("PIB: %.1f milhões\n", pib_2);
    printf("Pontos Turísticos: %d\n", turistic_points_2);
    printf("Densidade Populacional: %.1f habitantes/km²\n", population_density_2);
    printf("PIB per Capita: %.1f milhões\n", pib_per_capita_2);

    // Área para exibição do resultado da comparação entre as duas cidades
    printf("\nResultado da comparação entre as duas cidades:\n");

    // Poder total
    printf("\nPoder total:\n");
    printf("Carta 1: %.2f\n", total_power);
    printf("Carta 2: %.2f\n", total_power_2);
    printf("Resultado: ");
    if (total_power > total_power_2)
    {
        printf("Carta 1 vencedora!\n\n");
    }
    else
    {
        printf("Carta 2 vencedora!\n\n");
    }

    // População
    printf("População:\n");
    printf("Carta 1: %d\n", population);
    printf("Carta 2: %d\n", population_2);
    printf("Resultado: ");
    if (population > population_2)
    {
        printf("Carta 1 vencedora!\n\n");
    }
    else
    {
        printf("Carta 2 vencedora!\n\n");
    }

    // Área
    printf("Área:\n");
    printf("Carta 1: %.1f\n", area);
    printf("Carta 2: %.1f\n", area_2);
    printf("Resultado: ");
    if (area > area_2)
    {
        printf("Carta 1 vencedora!\n\n");
    }
    else
    {
        printf("Carta 2 vencedora!\n\n");
    }

    // PIB
    printf("PIB:\n");
    printf("Carta 1: %.1f\n", pib);
    printf("Carta 2: %.1f\n", pib_2);
    printf("Resultado: ");
    if (pib > pib_2)
    {
        printf("Carta 1 vencedora!\n\n");
    }
    else
    {
        printf("Carta 2 vencedora!\n\n");
    }

    // Pontos Turísticos
    printf("Pontos Turísticos:\n");
    printf("Carta 1: %d\n", turistic_points);
    printf("Carta 2: %d\n", turistic_points_2);
    printf("Resultado: ");
    if (turistic_points > turistic_points_2)
    {
        printf("Carta 1 vencedora!\n\n");
    }
    else
    {
        printf("Carta 2 vencedora!\n\n");
    }

    // Densidade Populacional
    printf("Densidade Populacional:\n");
    printf("Carta 1: %.1f\n", population_density);
    printf("Carta 2: %.1f\n", population_density_2);
    printf("Resultado: ");
    if (population_density_2 > population_density)
    {
        printf("Carta 1 vencedora!\n\n");
    }
    else
    {
        printf("Carta 2 vencedora!\n\n");
    }

    // PIB per Capita
    printf("PIB per Capita:\n");
    printf("Carta 1: %.1f\n", pib_per_capita);
    printf("Carta 2: %.1f\n", pib_per_capita_2);
    printf("Resultado: ");
    if (pib_per_capita > pib_per_capita_2)
    {
        printf("Carta 1 vencedora!\n\n");
    }
    else
    {
        printf("Carta 2 vencedora!\n\n");
    }

    return 0;
}
