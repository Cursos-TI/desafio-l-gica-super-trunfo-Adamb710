#include <stdio.h> // Biblioteca padrão para entrada e saída (printf, scanf)
 
 
int main(){   //Função principal 

//Declaração de variaveis da primeira carta

   char estado1;                 // Armazena uma única letra (A-H) para o estado da primeira carta
   char codigo1[4];              // Array de caracteres para código da carta (ex: "A01") + 0
   char cidade1[50];             // Array para nome da cidade - até 49 caracteres + 0
   int populacao1;               // Número inteiro para população da cidade
   float area1;                  // Número decimal para área da cidade em km
   float pib1;                   // Número decimal para PIB em bilhões de reais
   int pontos_turisticos1;       // Número inteiro para quantidade de pontos turísticos
   float densidade1;             // Variável calculada: densidade populacional (hab/km²)
   float pibpercapita1;          // Variável calculada: PIB per capita em reais

 //Declaração de variaveis da segunda carta

   char estado2;
   char codigo2[4];
   char cidade2[50];  
   int populacao2;
   float area2;
   float pib2;
   int pontos_turisticos2;
   float densidade2;
   float pibpercapita2;

   int opcao_menu;               // Variável para armazenar a opção escolhida no menu
  
   // Exibição das instruções do jogo para o usuário
   printf("**** SUPER TRUNFO - CADASTRO DE CARTAS*****\n\n");
   printf("Digite abaixo as informações para cadastrar suas cartas.\n\n");

   //Coleta de dados da primeira carta

   printf("----CARTA 1----\n\n"); // Exibição da indicação de cadastro da primeira carta

   printf("Digite o estado ( A - H): \n");    // Solicita ao usuario
   scanf(" %c", &estado1);                    // %c lê um caractere

   printf("Digite o codigo (01 a 04): \n");
   scanf("%s", codigo1);                      // %s lê string, codigo1 já é um ponteiro (nome do array)

   printf("Digite o nome da cidade: \n");
   scanf("%s", cidade1);                      // Lê string para o array cidade1

   printf("Digite a população: \n");
   scanf("%d", &populacao1);                  // %d lê inteiro, & indica variável população
   
   printf("Digite a area da cidade: \n");
   scanf("%f", & area1);                      // %f lê número decimal (float) area
                        
   printf("Digite o PIB: \n");
   scanf("%f", &pib1);                        // %f lê número decimal (float) area PIB

   printf("Digite o nomero de pontos turisticos: \n");
   scanf("%d", &pontos_turisticos1);         // %d lê inteiro, & indica variável ponstos turisticos


  //Coleta de dados da segunda carta

   printf("----CARTA 2----\n\n"); // Exibição da indicação de cadastro da segunda carta

   printf("Digite o estado ( A - H): \n");
   scanf(" %c", &estado2);

   printf("Digite o codigo (01 a 04): \n");
   scanf("%s", codigo2);

   printf("Digite o nome da cidade: \n");
   scanf("%s", cidade2);

   printf("Digite a população: \n");
   scanf("%d", &populacao2);

   printf("Digite a area da cidade: \n");
   scanf("%f", & area2);

   printf("Digite o PIB: \n");
   scanf("%f", &pib2);

   printf("Digite o nomero de pontos turisticos: \n");
   scanf("%d", &pontos_turisticos2);

 

 //exibição dos dados das cartas cadastradas

   printf("<><><>CARTAS CADASTRADAS<><><>\n\n");

 
   densidade1 = (float) populacao1 / area1;  // Converte populacao1 para float e calcula densidade
   pibpercapita1 = (float) (pib1 * 1000000000) / populacao1;   // Converte PIB de bilhões para unidade e divide pela população
   
   densidade2 = (float) populacao2 / area2;  // Calcula densidade da segunda carta
   pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;  // Calcula PIB per capita da segunda carta

 // Exibição da primeira carta

   printf("---- Carta 1 ---- \n\n"); // Titulo primeira carta
   printf("Estado: %c \n", estado1);              // %c exibe um caractere                      
   printf("Codigo: %s\n", codigo1);               // %s exibe string
   printf("Nome da cidade: %s\n", cidade1);       // %s exibe nome da cidade
   printf("População: %d\n", populacao1);         // %d exibe número inteiro
   printf("Area: %.2f Km²\n", area1);             // %.2f exibe float com 2 casas decimais
   printf("PIB: %.2f bilhões de reais\n", pib1);  // PIB formatado com 2 casas decimais
   printf("Numero de pontos turisticos: %d\n", pontos_turisticos1); // Número de pontos turísticos
   printf("Densidade Populacional: %.2f Hab/km²\n",densidade1);     // Densidade com 2 casas decimais
   printf ("PIB per capita: %.2f reais\n\n", pibpercapita1);        // PIB per capita com 2 casas decimais

     // Exibição da segunda carta

   printf("\n---- Carta 2 ---- \n\n"); // Titulo segunda carta
   printf("Estado: %c \n", estado2);
   printf("Codigo: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Area: %.2f Km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
   printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
   printf ("PIB per capita: %.2f reais\n\n", pibpercapita2);


   // MENU INTERATIVO PARA ESCOLHA DO ATRIBUTO DE COMPARAÇÃO
   printf("==== MENU DE COMPARAÇÃO ====\n\n");
   printf("Escolha o atributo para comparar as cartas:\n");
   printf("1 - População\n");
   printf("2 - Área\n"); 
   printf("3 - PIB\n");
   printf("4 - Número de pontos turísticos\n");
   printf("5 - Densidade populacional\n");
   printf("6 - PIB per capita\n");
   printf("\nDigite sua escolha (1-6): ");
   scanf("%d", &opcao_menu);              // Lê a opção escolhida pelo usuário

   printf("\n---- COMPARAÇÃO DE CARTAS ----\n\n");

   // ESTRUTURA SWITCH PARA PROCESSAR A ESCOLHA DO USUÁRIO
   switch(opcao_menu) {
       
       case 1: // Comparação por População
           printf("Comparação de cartas (Atributo: População):\n");
           printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
           printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
           
           // Estruturas de decisão aninhadas para escolher vencedor
           if (populacao1 > populacao2) {
               printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
               printf("Diferença: %d habitantes a mais.\n", populacao1 - populacao2);
           } else if (populacao2 > populacao1) {
               printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
               printf("Diferença: %d habitantes a mais.\n", populacao2 - populacao1);
           } else {
               printf("Resultado: Empate!\n");
               printf("Ambas as cidades têm a mesma população.\n");
           }
           break;

       case 2: // Comparação por Área
           printf("Comparação de cartas (Atributo: Área):\n");
           printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
           printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);
           
           // Estruturas de decisão aninhadas para escolher  vencedor
           if (area1 > area2) {
               printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
               printf("Diferença: %.2f km² a mais.\n", area1 - area2);
           } else if (area2 > area1) {
               printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
               printf("Diferença: %.2f km² a mais.\n", area2 - area1);
           } else {
               printf("Resultado: Empate!\n");
               printf("Ambas as cidades têm a mesma área.\n");
           }
           break;

       case 3: // Comparação por PIB
           printf("Comparação de cartas (Atributo: PIB):\n");
           printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", cidade1, estado1, pib1);
           printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", cidade2, estado2, pib2);
           
           // Estruturas de decisão aninhadas para determinar vencedor
           if (pib1 > pib2) {
               printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
               printf("Diferença: %.2f bilhões de reais a mais.\n", pib1 - pib2);
           } else if (pib2 > pib1) {
               printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
               printf("Diferença: %.2f bilhões de reais a mais.\n", pib2 - pib1);
           } else {
               printf("Resultado: Empate!\n");
               printf("Ambas as cidades têm o mesmo PIB.\n");
           }
           break;

       case 4: // Comparação por Pontos Turísticos
           printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
           printf("Carta 1 - %s (%c): %d pontos turísticos\n", cidade1, estado1, pontos_turisticos1);
           printf("Carta 2 - %s (%c): %d pontos turísticos\n", cidade2, estado2, pontos_turisticos2);
           
           // Estruturas de decisão aninhadas para escolher vencedor
           if (pontos_turisticos1 > pontos_turisticos2) {
               printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
               printf("Diferença: %d pontos turísticos a mais.\n", pontos_turisticos1 - pontos_turisticos2);
           } else if (pontos_turisticos2 > pontos_turisticos1) {
               printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
               printf("Diferença: %d pontos turísticos a mais.\n", pontos_turisticos2 - pontos_turisticos1);
           } else {
               printf("Resultado: Empate!\n");
               printf("Ambas as cidades têm o mesmo número de pontos turísticos.\n");
           }
           break;

       case 5: // Comparação por Densidade Populacional (REGRA INVERTIDA - menor valor vence)
           printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
           printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
           printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);
           printf("*** ATENÇÃO: Para densidade populacional, MENOR valor vence! ***\n");
           
           // Estruturas de decisão aninhadas - REGRA INVERTIDA para densidade
           if (densidade1 < densidade2) {
               printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
               printf("Diferença: %.2f hab/km² a menos (melhor).\n", densidade2 - densidade1);
           } else if (densidade2 < densidade1) {
               printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
               printf("Diferença: %.2f hab/km² a menos (melhor).\n", densidade1 - densidade2);
           } else {
               printf("Resultado: Empate!\n");
               printf("Ambas as cidades têm a mesma densidade populacional.\n");
           }
           break;

       case 6: // Comparação por PIB per capita
           printf("Comparação de cartas (Atributo: PIB per capita):\n");
           printf("Carta 1 - %s (%c): %.2f reais\n", cidade1, estado1, pibpercapita1);
           printf("Carta 2 - %s (%c): %.2f reais\n", cidade2, estado2, pibpercapita2);
           
           // Estruturas de decisão aninhadas para determinar vencedor
           if (pibpercapita1 > pibpercapita2) {
               printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
               printf("Diferença: %.2f reais a mais por pessoa.\n", pibpercapita1 - pibpercapita2);
           } else if (pibpercapita2 > pibpercapita1) {
               printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
               printf("Diferença: %.2f reais a mais por pessoa.\n", pibpercapita2 - pibpercapita1);
           } else {
               printf("Resultado: Empate!\n");
               printf("Ambas as cidades têm o mesmo PIB per capita.\n");
           }
           break;

       default: // Opção inválida -quando for escolhida uma opção diferente do menu
           printf("ERRO: Opção inválida!\n");
           printf("Por favor, escolha uma opção entre 1 e 6.\n");
           printf("Programa encerrado. Execute novamente e escolha uma opção válida.\n");
           break;
   }

   printf("\n**** OBRIGADO POR JOGAR SUPER TRUNFO! ****\n");

return 0;   //Retorna 0 para indicar que o programa executou com sucesso

}