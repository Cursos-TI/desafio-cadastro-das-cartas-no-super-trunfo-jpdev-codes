#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   // Inicio do programa, onde eu declaro as variaveis que vou usar
   char estado[3]; 
   char codigodacarta[20];
   char nomedacidade[50];
   int populacao;
   float area; 
   float PIB;
   int pontosturisticos; 

   // Dados da carta 1
   printf("Dados da Carta 1\n"); 
   
   // Onde começa a leitura dos dados
   printf("Digite a sigla do estado: ");
   scanf("%2s", estado); // Lê a sigla do estado (2 caracteres + '\0'), por isso o %2s
   

   printf("Digite o codigo da carta: ");
   scanf("%s", codigodacarta); // Lê o código da carta, o codigodacarta nao contem & porque é uma string, ou seja, um vetor de char
   // O mesmo vale para o nomedacidade e o estado 
   

   printf("Digite o nome da cidade: ");
   scanf("%s", nomedacidade);
  

   printf("Digite a populaçao atual:");
   scanf("%d", &populacao); // Lê a população atual, o & é necessário porque é um inteiro, ou seja, um valor escalar

 // Limpa o buffer antes de ler floats
 while (getchar() != '\n'); // Consome qualquer caractere residual no buffer
   
 printf("Digite a area da cidade: ");
   scanf("%f", &area); // Lê a área da cidade, o & é necessário porque é um float, ou seja, um valor escalar
    
   // Limpa o buffer novamente
    while (getchar() != '\n');
   
   printf("Digite o numero de pontos turisticos:"); 
   scanf("%d", &pontosturisticos);// Lê o número de pontos turísticos, o & é necessário porque é um inteiro, ou seja, um valor escalar
  
   
   printf("Digite o PIB da cidade: ");
   scanf("%f", &PIB); // Lê o PIB da cidade, o & é necessário porque é um float, ou seja, um valor escalar
  
  
  
  
  
  
   printf("A inicial do seu estado e: %s\n ", estado); 
   printf("O codigo da carta e: %s\n", codigodacarta);
   printf("O nome da cidade e: %s\n", nomedacidade);
   printf(" A população atual e: %d pessoas\n", populacao); 
   printf("A area da cidade e: %.2f km\n", area); 
   printf("O numero de pontos turistcos e: %d\n", pontosturisticos); 
   printf("O PIB da cidade e: %.2f bilhões\n", PIB); 
  
   
   
   
   
   
   
   printf("Dados da carta 2\n"); 

   printf("Digite a sigla do estado: ");
   scanf("%2s", estado); 
   

   printf("Digite o codigo da carta: ");
   scanf("%s", codigodacarta);
   

   printf("Digite o nome da cidade: ");
   scanf("%s", nomedacidade);
  

   printf("Digite a populaçao atual:");
   scanf("%d", &populacao); 

 // Limpa o buffer antes de ler floats
 while (getchar() != '\n'); // Consome qualquer caractere residual no buffer
   
 printf("Digite a area da cidade: ");
   scanf("%f", &area);
    
   // Limpa o buffer novamente
    while (getchar() != '\n');
   
   printf("Digite o numero de pontos turisticos:"); 
   scanf("%d", &pontosturisticos);
   while (getchar() != '\n'); // Limpa o buffer novamente
   
   printf("Digite o PIB da cidade: ");
   scanf("%f", &PIB);
  
  
  
  
  
  
   printf("A inicial do seu estado e: %s\n ", estado); 
   printf("O codigo da carta e: %s\n", codigodacarta);
   printf("O nome da cidade e: %s\n", nomedacidade);
   printf(" A população atual e: %d pessoas\n", populacao); 
   printf("A area da cidade e: %.2f km\n", area); 
   printf("O numero de pontos turistcos e: %d\n", pontosturisticos); 
   printf("O PIB da cidade e: %.2f bilhões\n", PIB); 
   
    return 0;
}
