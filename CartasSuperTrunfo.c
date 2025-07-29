#include<stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Variáveis para armazenar os dados das duas cartas
    char estado1[50], estado2[50];
    char codigodacarta1[50], codigodacarta2[50];
    char nomedacidade1[50], nomedacidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;

    // Coletando os dados da primeira carta
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

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    // Agora os dados da segunda carta
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

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    // Exibindo os dados da primeira carta
    printf("==== CARTA 1 ====\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em KM²: %.2f\n", area1);
    printf("PIB : %.2f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos1);

    printf("\n"); // só pra dar um espaço entre as cartas

    // Exibindo os dados da segunda carta
    printf("==== CARTA 2 ====\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em KM²: %.2f\n", area2);
    printf("PIB : %.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}


