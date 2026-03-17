#include <stdio.h>

int main(void) {
    int idade, regularizado, tipo_voto;

    scanf("%d", &idade);
    scanf("%d", &regularizado);
    scanf("%d", &tipo_voto);

    if (tipo_voto < 1 || tipo_voto > 3) {
        printf("Tipo de voto invalido\n");
        return 0;
    }

    // Validar idade mínima
    if (idade < 16) {
        printf("NAO PODE VOTAR\n");
        return 0;
    }

    // Validar regularização
    if (regularizado == 0) {
        printf("NAO PODE VOTAR - Procure se regularizar eleitoralmente\n");
        return 0;
    }

    // Validar compatibilidade do tipo de voto com idade
    if (tipo_voto == 2 && idade <= 70) {
        printf("TIPO DE VOTO INCOMPATIVEL COM SUA IDADE\n");
        return 0;
    }

    if (tipo_voto == 3 && idade < 60) {
        printf("TIPO DE VOTO INCOMPATIVEL COM SUA IDADE\n");
        return 0;
    }

    // Determinar o tipo de votação
    if (idade >= 18 && idade <= 70) {
        printf("PODE VOTAR - Votacao obrigatoria\n");
    } else if (idade == 16 || idade == 17) {
        printf("PODE VOTAR - Votacao facultativa\n");
    } else if (idade > 70) {
        printf("PODE VOTAR - Votacao facultativa\n");
    }

    return 0;
}
