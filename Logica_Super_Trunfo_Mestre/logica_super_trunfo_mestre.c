#include <stdio.h>
#include <stdlib.h>

// Função principal
int main() {
    // Definindo os dados das cartas dos cidades (Rio de Janeiro e São Paulo)
    char nome1[] = "Rio de Janeiro";                    // Cidade 1
    char nome2[] = "São Paulo";                         // Cidade 2
    int pib1 = 680, pib2 = 950;                         // PIB
    int populacao1 = 17219679, populacao2 = 45973194;   // População
    int densidade1 = 393, densidade2 = 185;             // Densidade Demográfica
    int area1 = 43750, area2 = 248219;                  // Área (km²)

    int atributo1, atributo2; // Para armazenar os atributos escolhidos

    // Introdução:
    printf("\n***Bem Vindo ao Jogo: Super Trunfo em C***\n");

    // Menu para o primeiro atributo
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. PIB\n2. População\n3. Densidade Demográfica\n4. Área\n");
    scanf("%d", &atributo1);

    // Menu para o segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("1. PIB\n2. População\n3. Densidade Demográfica\n4. Área\n");
    scanf("%d", &atributo2);

    // Garantir que os atributos sejam diferentes
    if (atributo1 == atributo2) {
        printf("\nOs atributos não podem ser iguais! Programa encerrado.\n");
        return 0;  // Finaliza o programa
    }

    // Variáveis para os valores dos atributos escolhidos
    int valorCarta1Atributo1, valorCarta2Atributo1;
    int valorCarta1Atributo2, valorCarta2Atributo2;

    // Atribuir valores para a primeria carta
    switch (atributo1) {
        case 1: valorCarta1Atributo1 = pib1; break;
        case 2: valorCarta1Atributo1 = populacao1; break;
        case 3: valorCarta1Atributo1 = densidade1; break;
        case 4: valorCarta1Atributo1 = area1; break;
        default: valorCarta1Atributo1 = 0; break;
    }

    switch (atributo2) {
        case 1: valorCarta1Atributo2 = pib1; break;
        case 2: valorCarta1Atributo2 = populacao1; break;
        case 3: valorCarta1Atributo2 = densidade1; break;
        case 4: valorCarta1Atributo2 = area1; break;
        default: valorCarta1Atributo2 = 0; break;
    }

    // Atribuir valores para a segunda carta
    switch (atributo1) {
        case 1: valorCarta2Atributo1 = pib2; break;
        case 2: valorCarta2Atributo1 = populacao2; break;
        case 3: valorCarta2Atributo1 = densidade2; break;
        case 4: valorCarta2Atributo1 = area2; break;
        default: valorCarta2Atributo1 = 0; break;
    }

    switch (atributo2) {
        case 1: valorCarta2Atributo2 = pib2; break;
        case 2: valorCarta2Atributo2 = populacao2; break;
        case 3: valorCarta2Atributo2 = densidade2; break;
        case 4: valorCarta2Atributo2 = area2; break;
        default: valorCarta2Atributo2 = 0; break;
    }

    // Exibição dos resultados parciais
    printf("\nCartas Selecionadas:\n");
    printf("%s vs %s\n", nome1, nome2);

    // Exibe os atributos escolhidos
    printf("\nAtributo 1: ");
    switch (atributo1) {
        case 1: printf("PIB"); break;
        case 2: printf("População"); break;
        case 3: printf("Densidade Demográfica"); break;
        case 4: printf("Área"); break;
    }
    printf("\n%s: %d vs %s: %d\n", nome1, valorCarta1Atributo1, nome2, valorCarta2Atributo1);

    printf("Atributo 2: ");
    switch (atributo2) {
        case 1: printf("PIB"); break;
        case 2: printf("População"); break;
        case 3: printf("Densidade Demográfica"); break;
        case 4: printf("Área"); break;
    }
    printf("\n%s: %d vs %s: %d\n", nome1, valorCarta1Atributo2, nome2, valorCarta2Atributo2);

    // Comparação para a soma dos atributos
    int somaCarta1 = valorCarta1Atributo1 + valorCarta1Atributo2;
    int somaCarta2 = valorCarta2Atributo1 + valorCarta2Atributo2;

    // Exibição das somas
    printf("\nSoma dos Atributos:\n");
    printf("%s: %d vs %s: %d\n", nome1, somaCarta1, nome2, somaCarta2);

    // Verificar quem venceu
    if (somaCarta1 > somaCarta2) {
        printf("\nVencedor: %s\n", nome1);
    } else if (somaCarta2 > somaCarta1) {
        printf("\nVencedor: %s\n", nome2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
