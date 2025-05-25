#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char estado1[] = "SP";
    char codigo1[] = "C001";
    char nome1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 799.0;
    int pontos1 = 15;

    // Dados da Carta 2
    char estado2[] = "RJ";
    char codigo2[] = "C002";
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1182.30;
    float pib2 = 411.6;
    int pontos2 = 10;

    // Cálculo da densidade populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Cálculo do PIB per capita
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Escolha do atributo para comparação
    // Você pode trocar para: "populacao", "area", "pib", "densidade", "pib_per_capita"
    char atributo[] = "pib";

    // Mostrando a comparação
    printf("Comparação de cartas (Atributo: %s):\n\n", atributo);

    // Comparar População
    if (strcmp(atributo, "populacao") == 0) {
        printf("Carta 1 - %s (%s): %d habitantes\n", nome1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", nome2, estado2, populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    // Comparar Área
    else if (strcmp(atributo, "area") == 0) {
        printf("Carta 1 - %s (%s): %.2f km²\n", nome1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", nome2, estado2, area2);

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    // Comparar PIB
    else if (strcmp(atributo, "pib") == 0) {
        printf("Carta 1 - %s (%s): R$ %.2f bilhões\n", nome1, estado1, pib1);
        printf("Carta 2 - %s (%s): R$ %.2f bilhões\n", nome2, estado2, pib2);

        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    // Comparar Densidade Populacional (MENOR vence)
    else if (strcmp(atributo, "densidade") == 0) {
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome2, estado2, densidade2);

        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    // Comparar PIB per capita
    else if (strcmp(atributo, "pib_per_capita") == 0) {
        printf("Carta 1 - %s (%s): R$ %.6f\n", nome1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%s): R$ %.6f\n", nome2, estado2, pib_per_capita2);

        if (pib_per_capita1 > pib_per_capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    // Atributo inválido
    else {
        printf("Erro: Atributo inválido. Verifique o nome do atributo no código.\n");
    }

    return 0;
}
