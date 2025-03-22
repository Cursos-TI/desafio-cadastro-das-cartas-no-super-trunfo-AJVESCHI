#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1[2], estado2[2];
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float PIBper1, PIBper2;
    float INVERdensidade1, INVERdensidade2;
    float superPoder1, superPoder2;

    // Leitura dos dados da primeira carta
    printf("\nCarta 1:\n");

    printf("Digite o Estado (A-H): \n");
    scanf("%s", estado1);

    printf("Digite o Código da Carta (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nome1);

    printf("Digite a População: \n");
    scanf("%u", &populacao1);

    printf("Digite a Área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da segunda carta
    printf("\nCarta 2:\n");

    printf("Digite o Estado (A-H): \n");
    scanf("%s", estado2);

    printf("Digite o Código da Carta (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nome2);

    printf("Digite a População: \n");
    scanf("%u", &populacao2);

    printf("Digite a Área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Calcular a Densidade Populacional (pop/area - numero de hab por m²)
    // Calcular o PIB per Capita (PIB/pop - riqueza médica por pessoa na cidade)

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    PIBper1 = pib1 / (float)populacao1;
    PIBper2 = pib2 / (float)populacao2;
    INVERdensidade1 = area1 / (float)populacao1;
    INVERdensidade2 = area2 / (float)populacao2;

    // SUPERPODER - calculando
    superPoder1 = (float)populacao1 + area1 + pontos_turisticos1 + PIBper1 + INVERdensidade1;
    superPoder2 = (float)populacao2 + area2 + pontos_turisticos2 + PIBper2 + INVERdensidade2;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBper1);
    printf("Super poder: %.5f\n", superPoder1);

    printf("\n");

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBper2);
    printf("Super poder: %.5f\n", superPoder2);

    // Variáveis para calculo do vencedor
    int resultadoPOP;
    int resultadoAREA;
    int resultadoPONTOST;
    int resultadoPIB;
    int resultadoPCAPITA;
    int resultadoDENSI;
    int resultadoSUPERP;

    // Mostrar resultado vencedor - População
    printf("\nResultado do vencedor\n");
    printf("Carta 1 - %s (%s): %u\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %u\n", nome2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
      } else {
        printf("Carta 2 venceu!\n");
      }

    
    return 0;
}