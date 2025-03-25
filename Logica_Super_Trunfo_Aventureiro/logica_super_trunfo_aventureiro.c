#include <stdio.h>
#include <string.h>

// Função para comparar as cartas de acordo com o atributo escolhido
void compararCartas(char nome1[], char nome2[], int pop1, int pop2, float area1, float area2, float pib1, float pib2, int pontos1, int pontos2, float dens1, float dens2, int atributo) {
    switch(atributo) {
        case 1: // Comparação por Nome (apenas para exibição)
            printf("\nComparando as cartas dos países: %s e %s\n", nome1, nome2);
            printf("Nome do país: %s vs %s\n", nome1, nome2);
            printf("Não é possível comparar com base no nome!\n");
            break;

        case 2: // Comparação por População
            printf("\nComparando por População:\n");
            printf("%s: %d habitantes\n", nome1, pop1);
            printf("%s: %d habitantes\n", nome2, pop2);

            if (pop1 > pop2) {
                printf("%s vence com maior população!\n", nome1);
            } else if (pop1 < pop2) {
                printf("%s vence com maior população!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // Comparação por Área
            printf("\nComparando por Área:\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("%s vence com maior área!\n", nome1);
            } else if (area1 < area2) {
                printf("%s vence com maior área!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Comparação por PIB
            printf("\nComparando por PIB:\n");
            printf("%s: %.2f bilhões de USD\n", nome1, pib1);
            printf("%s: %.2f bilhões de USD\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("%s vence com maior PIB!\n", nome1);
            } else if (pib1 < pib2) {
                printf("%s vence com maior PIB!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Comparação por Número de Pontos Turísticos
            printf("\nComparando por Número de Pontos Turísticos:\n");
            printf("%s: %d pontos turísticos\n", nome1, pontos1);
            printf("%s: %d pontos turísticos\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("%s vence com mais pontos turísticos!\n", nome1);
            } else if (pontos1 < pontos2) {
                printf("%s vence com mais pontos turísticos!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // Comparação por Densidade Demográfica
            printf("\nComparando por Densidade Demográfica:\n");
            printf("%s: %.2f habitantes por km²\n", nome1, dens1);
            printf("%s: %.2f habitantes por km²\n", nome2, dens2);

            if (dens1 < dens2) {
                printf("%s vence com menor densidade demográfica!\n", nome1);
            } else if (dens1 > dens2) {
                printf("%s vence com menor densidade demográfica!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }
}

int main() {
    // Informações das duas cartas
    char nome1[] = "Rio de Janeiro";
    char nome2[] = "São Paulo";

    int pop1 = 17219679;
    int pop2 = 45973194;

    float area1 = 43750.0;
    float area2 = 248219.0;

    float pib1 = 680.0;
    float pib2 = 950.0;

    int pontos1 = 200;
    int pontos2 = 610;

    float dens1 = 393.59;
    float dens2 = 185.21;

    int opcao;

    // Menu interativo para o jogador escolher o atributo de comparação
    printf("Selecione o atributo para comparar as cartas:\n");
    printf("1. Nome do país\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Densidade Demográfica\n");
    printf("0. Sair\n");

    // Leitura da escolha do jogador
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Chamada para comparar as cartas de acordo com a escolha
    switch (opcao) {
        case 1: case 2: case 3: case 4: case 5: case 6:
            compararCartas(nome1, nome2, pop1, pop2, area1, area2, pib1, pib2, pontos1, pontos2, dens1, dens2, opcao);
            break;

        case 0:
            printf("Saindo do programa...\n");
            break;

        default:
            printf("Opção inválida! Programa encerrado.\n");
            break;
    }

    return 0;
}