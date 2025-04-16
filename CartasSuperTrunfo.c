#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1[3]; 
    char codigodacarta1[20];
    char nomedacidade1[50];
    unsigned int populacao1;
    float area1; 
    float PIB1;
    int pontosturisticos1; 
    float densidade1; 
    float PIBpercapita1; 
    float inversodadensidade1; 
    float superpoder1;

    // Variáveis da carta 2
    char estado2[3]; 
    char codigodacarta2[20];
    char nomedacidade2[50];
    unsigned int populacao2;
    float area2; 
    float PIB2;
    int pontosturisticos2; 
    float densidade2; 
    float PIBpercapita2; 
    float inversodadensidade2; 
    float superpoder2;

    // Dados da carta 1
    printf("Dados da Carta 1\n"); 
    printf("Digite a sigla do estado: ");
    scanf("%2s", estado1); 

    printf("Digite o codigo da carta: ");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade1);

    printf("Digite a população atual: ");
    scanf("%d", &populacao1); 

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);


    printf("Digite o número de pontos turísticos: "); 
    scanf("%d", &pontosturisticos1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1; 
    PIBpercapita1 = PIB1 / populacao1; 
    inversodadensidade1 = area1 / populacao1;
    superpoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + PIBpercapita1 + inversodadensidade1;

    // Dados da carta 2
    printf("\nDados da Carta 2\n");
    printf("Digite a sigla do estado: ");
    scanf("%2s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade2);

    printf("Digite a população atual: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);


    printf("Digite o número de pontos turísticos: "); 
    scanf("%d", &pontosturisticos2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2; 
    PIBpercapita2 = PIB2 / populacao2; 
    inversodadensidade2 = area2 / populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + pontosturisticos2 + PIBpercapita2 + inversodadensidade2;

    // Comparação entre os atributos das cartas
    printf("\n\n--- Comparação entre os atributos das cartas ---\n");
    printf("Vencedor na população: %s\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
    printf("Vencedor na área: %s\n", (area1 > area2) ? "Carta 1" : "Carta 2");
    printf("Vencedor no PIB: %s\n", (PIB1 > PIB2) ? "Carta 1" : "Carta 2");
    printf("Vencedor no número de pontos turísticos: %s\n", (pontosturisticos1 > pontosturisticos2) ? "Carta 1" : "Carta 2");
    printf("Vencedor no PIB per capita: %s\n", (PIBpercapita1 > PIBpercapita2) ? "Carta 1" : "Carta 2");
    printf("Vencedor no inverso da densidade populacional: %s\n", (inversodadensidade1 > inversodadensidade2) ? "Carta 1" : "Carta 2");
    printf("Vencedor no superpoder: %s\n", (superpoder1 > superpoder2) ? "Carta 1" : "Carta 2");
    printf("Vencedor na densidade populacional (menor vence): %s\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2");

    return 0;
}
