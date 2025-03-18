#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar os dados das cartas
    //                                                             //Exemplo de duas cartas(carta1, carta2):
    char estado1[50], estado2[50];                                 // Estado representado por uma letra de A a H           //A                    //B
    char codigo1[50], codigo2[50];                                 // Código da carta no formato "A01", "B03", etc.        //A01                  //B02
    char cidade1[50], cidade2[50];                                 // Nome da cidade                                       //Rio de Janeiro       //Sao Paulo
    unsigned long int populacao1, populacao2;                      // População da cidade                                  //17219679             //45973194
    float area1, area2;                                            // Área da cidade em km²                                //43750                //248219
    float pib1, pib2;                                              // PIB da cidade em bilhões de reais                    //680                  //950
    int pontos1, pontos2;                                          // Número de pontos turísticos                          //200                  //610
    float densidade1, densidade2;                                  // Densidade populacional em hab/km²                    //populacao1 / area1   //populacao2 / area2
    float pibPerCapita1, pibPerCapita2;                            // PIB per capita em reais                              //pib1 / populacao1    //pib2 / populacao2

    // Recebendo dados da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);  // Para ler o nome da cidade com espaços *

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em milhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Recebendo dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);  // Para ler o nome da cidade com espaços *

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em milhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Calcular a Densidade Populacional (população / área) **
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // Calcular o PIB per Capita (PIB / população) **
    pibPerCapita1 = (populacao1 != 0) ? (pib1 * 1e9 / populacao1) : 0.0;  // Multiplicando PIB por 1 bilhão para obter o valor real
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1e9 / populacao2) : 0.0;

    printf("\n*** EXIBINDO RESULTADOS: ***\n");

    // Exibição dos resultados para a Carta 1 ***
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos resultados para a Carta 2 ***
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparar os atributos das cartas e exibir o vencedor
    printf("\n*** Comparação de Atributos: ***\n");
    
    // Atributo escolhido para comparação (aqui está como 'P' para População)
    char atributo = 'P'; // Pode ser alterado para 'A', 'I', 'D' ou 'C' para comparar outros atributos

    // Comparação do atributo
    if (atributo == 'P') { // Comparar População
        printf("\n(Atributo: População):\n");
        printf("Carta 1 - %s(%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s(%s): %d\n", cidade2, estado2, populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } 
    else if (atributo == 'A') { // Comparar Área
        printf("\n(Atributo: Área):\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (atributo == 'I') { // Comparar PIB
        printf("\n(Atributo: PIB):\n");
        printf("Carta 1 - %s (%s): %.2f milhões\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f milhões\n", cidade2, estado2, pib2);

        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (atributo == 'D') { // Comparar Densidade Populacional
        printf("\n(Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);

        if (densidade1 < densidade2) { // A carta com menor densidade vence
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (atributo == 'C') { // Comparar PIB per capita
        printf("\n(Atributo: PIB per capita):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    //Base: 
    //#include <stdio.h> int main(){};
    //char, unsigned long int, int, float, printf, scanf, getchar, fgets, sizeof, stdin, if, else;
    //(=), (/), (*), (!=), (?), (:), (+), (>), (<).
    return 0;
}
