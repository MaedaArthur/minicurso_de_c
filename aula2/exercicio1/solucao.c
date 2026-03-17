#include <stdio.h>

int main(void) {
    int idade, nivel_acesso, codigo_turno;

    scanf("%d", &idade);
    scanf("%d", &nivel_acesso);
    scanf("%d", &codigo_turno);

    // Validar turno
    if (codigo_turno < 1 || codigo_turno > 3) {
        printf("Turno invalido\n");
        return 0;
    }

    // Regra 1: Menores de 16 anos - NEGADO
    if (idade < 16) {
        printf("ACESSO NEGADO\n");
        return 0;
    }

    // Regra 2: Entre 16 e 17 anos
    if (idade <= 17) {
        if (nivel_acesso >= 3 && codigo_turno != 3) {
            printf("ACESSO PERMITIDO\n");
        } else {
            printf("ACESSO NEGADO\n");
        }
        return 0;
    }

    // Regra 3: 18 anos ou mais - decide a partir do nível de acesso
    switch (nivel_acesso) {
        case 1:
            // Apenas turno da manhã
            if (codigo_turno == 1) {
                printf("ACESSO PERMITIDO\n");
            } else {
                printf("ACESSO NEGADO\n");
            }
            break;

        case 2:
            // Turno da manhã ou tarde
            if (codigo_turno == 1 || codigo_turno == 2) {
                printf("ACESSO PERMITIDO\n");
            } else {
                printf("ACESSO NEGADO\n");
            }
            break;

        default:
            // Nível 3 ou mais: qualquer turno
            printf("ACESSO PERMITIDO\n");
    }

    return 0;
}
