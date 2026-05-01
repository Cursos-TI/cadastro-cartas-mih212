#include <stdio.h>

int main()
{

    char estado;
    char codigo_da_carta[3];
    char nome_da_cidade[31];
    int numero_da_populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    float desidade_populacional;
    float pib_per_capita;

  
    char estado2;
    char codigo_da_carta2[3];
    char nome_da_cidade2[31];
    int numero_da_populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    float desidade_populacional2;
    float pib_per_capita2;


    printf("      Carta1: \n\n");
    printf("Digite seu estado: ");
    scanf("  %c", &estado);
    // printf("O estado é: %c\n", estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta);
    // printf("O codigo da carta é: %s\n", codigo_da_carta);
 
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade);
    // printf("O nome da cidade é: %s\n", nome_da_cidade);

    printf("Digite o número da população: ");
    scanf("%d", &numero_da_populacao);
    // printf("O numero da populacao é: %d\n", numero_da_populacao);

    printf("Digite a area: ");
    scanf("%f", &area);
    // printf("A area é: %f\n", area);

    printf("digite o PIB: ");
    scanf("%f", &PIB);
    // printf("O PIB é: %f\n", PIB);

    printf("Digite os de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    //    printf("Os de pontos turisticos é: %d\n", pontos_turisticos);

    printf("      Carta2: \n\n");
    printf("Digite seu estado: ");
    scanf(" %c", &estado2);
    // printf("O estado é: %c\n", estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta2);
    // printf("O codigo da carta é: %s\n", codigo_da_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade2);
    // printf("O nome da cidade é: %s\n", nome_da_cidade);

    printf("Digite o número da população: ");
    scanf("%d", &numero_da_populacao2);
    // printf("O numero da populacao é: %d\n", numero_da_populacao);

    printf("Digite a area: ");
    scanf("%f", &area2);
    // printf("A area é: %f\n", area);

    printf("digite o PIB: ");
    scanf("%f", &PIB2);
    // printf("O PIB é: %f\n", PIB);

    printf("Digite os de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    //    printf("Os de pontos turisticos é: %d\n", pontos_turisticos);

     desidade_populacional = numero_da_populacao / area;
    pib_per_capita = PIB / numero_da_populacao;

    desidade_populacional2 = numero_da_populacao2 / area2;
    pib_per_capita2 = PIB2 / numero_da_populacao2;

    printf("\n\nCarta 1:\n");
    printf("O estado é: %c\n", estado);
    printf("O codigo da carta é: %s\n", codigo_da_carta);
    printf("O nome da cidade é: %s\n", nome_da_cidade);
    printf("O numero da populacao é: %d\n", numero_da_populacao);
    printf("A area é: %f\n", area);
    printf("O PIB é: %f\n", PIB);
    printf("Os de pontos turisticos é: %d\n", pontos_turisticos);
    printf("A densidade populacional é: %f\n", desidade_populacional);
    printf("O PIB per capita é: %f\n", pib_per_capita);
    printf("\n\nCarta 2:\n");
    printf("O estado é: %c\n", estado2);
    printf("O codigo da carta é: %s\n", codigo_da_carta2);
    printf("O nome da cidade é: %s\n", nome_da_cidade2);
    printf("O numero da populacao é: %d\n", numero_da_populacao2);
    printf("A area é: %f\n", area2);
    printf("O PIB é: %f\n", PIB2);
    printf("Os de pontos turisticos é: %d\n", pontos_turisticos2);
    printf("A densidade populacional é: %f\n", desidade_populacional2);
    printf("O PIB per capita é: %f\n", pib_per_capita2);

    // return 0;
}
