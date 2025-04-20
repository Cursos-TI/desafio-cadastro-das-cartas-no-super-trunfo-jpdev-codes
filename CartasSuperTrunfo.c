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
   

    //usar atributos para compara las e dicidir qual carta venceu, usando a estrutura de if else, ou seja, tenho q mudar a estrutra acima de printf para if else 
    
    // Comparação do superpoder
    if (superpoder1 > superpoder2) {
        printf("A carta 1 venceu, atributo superpoder: %.2f\n", superpoder1);
    } else if (superpoder2 > superpoder1) {
        printf("A carta 2 venceu, atributo superpoder: %.2f\n", superpoder2);
    } else {
        printf("As cartas são iguais no atributo superpoder!\n");
    }

    // Comparação da densidade populacional
    if (densidade1 < densidade2) {
        printf("A carta 1 venceu na densidade populacional, com: %.2f habitantes/km²\n", densidade1);
    } else if (densidade2 < densidade1) {
        printf("A carta 2 venceu na densidade populacional, com: %.2f habitantes/km²\n", densidade2);
    } else {
        printf("As cartas são iguais na densidade populacional!\n");
    }

    // Comparação da população
    if (populacao1 > populacao2) {
        printf("A carta 1 venceu na população, com: %d habitantes\n", populacao1);
    } else if (populacao2 > populacao1) {
        printf("A carta 2 venceu na população, com: %d habitantes\n", populacao2);
    } else {
        printf("As cartas são iguais na população!\n");
    }

    // Comparação da área
    if (area1 > area2) {
        printf("A carta 1 venceu na área, com: %.2f km²\n", area1);
    } else if (area2 > area1) {
        printf("A carta 2 venceu na área, com: %.2f km²\n", area2);
    } else {
        printf("As cartas são iguais na área!\n");
    }

    // Comparação do PIB
    if (PIB1 > PIB2) {
        printf("A carta 1 venceu no PIB, com: %.2f bilhões\n", PIB1);
    } else if (PIB2 > PIB1) {
        printf("A carta 2 venceu no PIB, com: %.2f bilhões\n", PIB2);
    } else {
        printf("As cartas são iguais no PIB!\n");
    }

    // Comparação do número de pontos turísticos
    if (pontosturisticos1 > pontosturisticos2) {
        printf("A carta 1 venceu no número de pontos turísticos, com: %d pontos\n", pontosturisticos1);
    } else if (pontosturisticos2 > pontosturisticos1) {
        printf("A carta 2 venceu no número de pontos turísticos, com: %d pontos\n", pontosturisticos2);
    } else {
        printf("As cartas são iguais no número de pontos turísticos!\n");
    }

    // Comparação do PIB per capita
    if (PIBpercapita1 > PIBpercapita2) {
        printf("A carta 1 venceu no PIB per capita, com: %.2f\n", PIBpercapita1);
    } else if (PIBpercapita2 > PIBpercapita1) {
        printf("A carta 2 venceu no PIB per capita, com: %.2f\n", PIBpercapita2);
    } else {
        printf("As cartas são iguais no PIB per capita!\n");
    }

    // Comparação do inverso da densidade populacional
    if (inversodadensidade1 > inversodadensidade2) {
        printf("A carta 1 venceu no inverso da densidade populacional, com: %.2f\n", inversodadensidade1);
    } else if (inversodadensidade2 > inversodadensidade1) {
        printf("A carta 2 venceu no inverso da densidade populacional, com: %.2f\n", inversodadensidade2);
    } else {
        printf("As cartas são iguais no inverso da densidade populacional!\n");
    }


    return 0;
}
