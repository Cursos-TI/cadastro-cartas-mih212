#include <stdio.h>

int main()
{
    char estado;
    char codigo_da_carta[3];
    char nome_da_cidade[31];
    int numero_da_populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float desidade_populacional;
    float pib_per_capita;
    float super_poder;

    char estado2;
    char codigo_da_carta2[3];
    char nome_da_cidade2[31];
    int numero_da_populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float desidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    int result_pop, result_area, result_pib, result_pts_turisticos;
    int result_densidade_pop, result_pib_perCapita, result_poder;

    printf("      Carta1: \n\n");
    printf("Digite seu estado: ");
    scanf(" %c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade: ");
    scanf("     %s", &nome_da_cidade);

    printf("Digite o número da população: ");
    scanf("%d", &numero_da_populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite os de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    desidade_populacional = numero_da_populacao / area;
    pib_per_capita = pib / numero_da_populacao;
    super_poder = numero_da_populacao + area + pib + pontos_turisticos + pib_per_capita - desidade_populacional;
    printf("\nDensidade Populaciolal: %.2f \n", desidade_populacional);
    printf("PIB per Capita: %.2f \n", pib_per_capita);
    printf("Super Poder: %.2f", super_poder);

    printf("      \n\nCarta2: \n\n");
    printf("Digite seu estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf("     %s", &nome_da_cidade2);

    printf("Digite o número da população: ");
    scanf("%d", &numero_da_populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite os de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    desidade_populacional2 = numero_da_populacao2 / area2;
    pib_per_capita2 = pib2 / numero_da_populacao2;
    super_poder2 = numero_da_populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 - desidade_populacional2;
    printf("\nDensidade Populaciolal: %.2f \n", desidade_populacional2);
    printf("PIB per Capita: %.2f \n", pib_per_capita2);
    printf("Super Poder: %.2f", super_poder2);

    result_pop = numero_da_populacao > numero_da_populacao2;
    result_area = area > area2;
    result_pib = pib > pib2;
    result_pts_turisticos = pontos_turisticos > pontos_turisticos2;
    result_densidade_pop = desidade_populacional < desidade_populacional2;
    result_pib_perCapita = pib_per_capita > pib_per_capita2;
    result_poder = super_poder > super_poder2;

    printf("\n\nResultados\n\n");
    printf("População: %d \n", result_pop);
    printf("Área: %d \n", result_area);
    printf("PIB: %d \n", result_pib);
    printf("Pontos Turísticos: %d \n", result_pts_turisticos);
    printf("Densidade Populacional: %d \n", result_densidade_pop);
    printf("PIB per Capita: %d \n", result_pib_perCapita);
    printf("Super Poder: %d \n\n", result_poder);

    printf("Gabarito: \n");
    printf("0 - Carta 2\n");
    printf("1 - Carta 1");

    /* printf("\n\nCarta 1:\n");
    printf("O estado é: %c\n", estado);
    printf("O codigo da carta é: %s\n", codigo_da_carta);
    printf("O nome da cidade é: %s\n", nome_da_cidade);
    printf("O numero da populacao é: %d\n", numero_da_populacao);
    printf("A area é: %f\n", area);
    printf("O PIB é: %f\n", PIB);
    printf("Os de pontos turisticos é: %d\n", pontos_turisticos);
    printf("A densidade populacional é: %.2f\n", desidade_populacional);
    printf("O pib per capital é: %.2f reais\n", pib_per_capita);
    printf("O super poder é: %f\n",  super_poder);

    printf("\n\nCarta 2:\n");
    printf("O estado é: %c\n", estado2);
    printf("O codigo da carta é: %s\n", codigo_da_carta2);
    printf("O nome da cidade é: %s\n", nome_da_cidade2);
    printf("O numero da populacao é: %d\n", numero_da_populacao2);
    printf("A area é: %f\n", area2);
    printf("O PIB é: %f\n", PIB2);
    printf("Os de pontos turisticos é: %d\n", pontos_turisticos2);
    printf("A densidade populacional é: %.2f\n", desidade_populacional2);
    printf("O pib per capita é: %.2f reais\n", pib_per_capita2);
    printf("O super poder é: %f\n",  super_poder2); */

    return 0;
}