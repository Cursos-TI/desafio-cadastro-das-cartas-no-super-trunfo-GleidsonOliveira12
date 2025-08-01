#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    printf("Desafio Super trunfo AVENTUREIRO\n");
    printf("Novo commit\n");

    // Declaração de variáveis para armazenar os dados da carta 1 e carta 2
    char estado1[50], estado2[50];                       // Nome do estado
    char codigodacarta1[50], codigodacarta2[50];         // Código da carta
    char nomedacidade1[50], nomedacidade2[50];           // Nome da cidade
    int populacao1, populacao2;                          // População total
    float area1, area2;                                  // Área da cidade em km²
    float PIB1, PIB2;                                    // Produto Interno Bruto (em reais)
    int pontosturisticos1, pontosturisticos2;            // Número de pontos turísticos
    float densidade1, densidade2;                        // Densidade populacional (habitantes por km²)
    float pibpercapita1, pibpercapita2;                  // PIB per capita (PIB dividido pela população)

    // ======= Entrada de dados para a CARTA 1 =======
    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em reais): \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    // ======= Entrada de dados para a CARTA 2 =======
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais): \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    // ======= CÁLCULOS =======
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpercapita1 = PIB1 / populacao1;
    pibpercapita2 = PIB2 / populacao2;

    // ======= Impressão dos dados da CARTA 1 =======
    printf("\n==== CARTA 1 ====\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\nPopulacao: %d\n", nomedacidade1, populacao1);
    printf("Area em KM²: %.2f\nPIB: %.2f reais\n", area1, PIB1);
    printf("Nº de pontos turisticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    // ======= Impressão dos dados da CARTA 2 =======
    printf("\n==== CARTA 2 ====\n");
    printf("Estado: %s\nCodigo da carta: %s\n", estado2, codigodacarta2);
    printf("Nome da cidade: %s\nPopulacao: %d\n", nomedacidade2, populacao2);
    printf("Area em KM²: %.2f\nPIB: %.2f reais\n", area2, PIB2);
    printf("Nº de pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    return 0;  // Finaliza o programa
}
