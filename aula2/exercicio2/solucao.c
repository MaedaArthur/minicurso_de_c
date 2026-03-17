#include <stdio.h>

int main(void) {
    int idade, tipo_cartao, horario_acesso;

    scanf("%d", &idade);
    scanf("%d", &tipo_cartao);
    scanf("%d", &horario_acesso);

    if (horario_acesso < 1 || horario_acesso > 3) {
        printf("Horario invalido\n");
        return 0;
    }

    if (idade < 12) {
        if (tipo_cartao == 1 || tipo_cartao == 2) {
            printf("ACESSO PERMITIDO\n");
        } else if (horario_acesso == 1 || horario_acesso == 2) {
            printf("ACESSO PERMITIDO\n");
        } else {
            printf("ACESSO NEGADO\n");
        }
        return 0;
    }

    if (idade <= 17) {
        if (tipo_cartao == 1 || tipo_cartao == 2) {
            printf("ACESSO PERMITIDO\n");
        } else if (tipo_cartao == 3 && (horario_acesso == 1 || horario_acesso == 2)) {
            printf("ACESSO PERMITIDO\n");
        } else {
            printf("ACESSO NEGADO\n");
        }
        return 0;
    }

    if (tipo_cartao == 0) {
        if (horario_acesso == 1 || horario_acesso == 2) {
            printf("ACESSO PERMITIDO\n");
        } else {
            printf("ACESSO NEGADO\n");
        }
    } else {
        printf("ACESSO PERMITIDO\n");
    }

    return 0;
}
