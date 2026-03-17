#include <stdio.h>

int main(void) {
    int idade, classificacao, acompanhante;

    scanf("%d", &idade);
    scanf("%d", &classificacao);
    scanf("%d", &acompanhante);

    if (classificacao < 1 || classificacao > 6) {
        printf("Classificacao invalida\n");
        return 0;
    }

    int idade_minima;

    switch (classificacao) {
        case 1: // Livre
            printf("ENTRADA PERMITIDA\n");
            return 0;
        case 2: // 10 anos
            idade_minima = 10;
            break;
        case 3: // 12 anos
            idade_minima = 12;
            break;
        case 4: // 14 anos
            idade_minima = 14;
            break;
        case 5: // 16 anos
            idade_minima = 16;
            break;
        case 6: // 18 anos
            idade_minima = 18;
            break;
    }

    if (classificacao == 6) {
        if (idade >= 18) {
            printf("ENTRADA PERMITIDA\n");
        } else if (idade >= 16 && acompanhante == 1) {
            printf("ENTRADA PERMITIDA\n");
        } else {
            printf("ENTRADA NEGADA\n");
        }
    } else {
        if (idade >= idade_minima) {
            printf("ENTRADA PERMITIDA\n");
        } else if (idade > (idade_minima - 2) && acompanhante == 1) {
            printf("ENTRADA PERMITIDA\n");
        } else {
            printf("ENTRADA NEGADA\n");
        }
    }

    return 0;
}
