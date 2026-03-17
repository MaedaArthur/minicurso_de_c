#include <stdio.h>

int main(void) {
    int idade, altura, brinquedo;
    int problemas_cardiacos = 0;

    scanf("%d", &idade);
    scanf("%d", &altura);
    scanf("%d", &brinquedo);

    if (brinquedo < 1 || brinquedo > 5) {
        printf("Brinquedo invalido\n");
        return 0;
    }

    int idade_minima, altura_minima;
    int requer_validacao_cardiaca = 0;

    switch (brinquedo) {
        case 1:
            idade_minima = 3;
            altura_minima = 80;
            break;
        case 2:
            idade_minima = 4;
            altura_minima = 90;
            break;
        case 3:
            idade_minima = 8;
            altura_minima = 120;
            break;
        case 4:
            idade_minima = 12;
            altura_minima = 140;
            requer_validacao_cardiaca = 1;
            break;
        case 5:
            idade_minima = 14;
            altura_minima = 150;
            requer_validacao_cardiaca = 1;
            break;
    }

    if (idade < idade_minima) {
        printf("Voce e muito novo para este brinquedo\n");
        return 0;
    }

    if (altura < altura_minima) {
        printf("Voce nao atinge a altura minima para este brinquedo\n");
        return 0;
    }

    if (requer_validacao_cardiaca) {
        scanf("%d", &problemas_cardiacos);
        if (problemas_cardiacos == 1) {
            printf("Voce nao pode usar este brinquedo por restricoes medicas\n");
            return 0;
        }
    }

    printf("Bem-vindo! Aproveite o brinquedo!\n");

    return 0;
}
