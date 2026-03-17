#include <stdio.h>

int main(void) {
    int numero_salas;

    printf("Digite o numero de salas: ");
    scanf("%d", &numero_salas);

    if (numero_salas <= 0) {
        printf("Erro!\n");
        return 1;
    }

    int numeros_salas[numero_salas];
    float temps_atuais[numero_salas];
    float temps_desejadas[numero_salas];
    float diferencas[numero_salas];

    int desligados = 0, resfriando = 0, aquecendo = 0;

    // Leitura de dados
    for (int i = 0; i < numero_salas; i++) {
        printf("\nSala %d:\n", i + 1);
        printf("Numero: ");
        scanf("%d", &numeros_salas[i]);
        printf("Temperatura atual (°C): ");
        scanf("%f", &temps_atuais[i]);
        printf("Temperatura desejada (°C): ");
        scanf("%f", &temps_desejadas[i]);

        diferencas[i] = temps_atuais[i] - temps_desejadas[i];
    }

    printf("\n=== Sistema de Ar Condicionado ===\n");

    for (int i = 0; i < numero_salas; i++) {
        printf("Sala %d: %.1f°C → %.1f°C | ", numeros_salas[i], temps_atuais[i], temps_desejadas[i]);

        if (diferencas[i] <= -2.0f) {
            printf("ATIVO - COOLING\n");
            resfriando++;
        } else if (diferencas[i] < -0.5f) {
            printf("ATIVO - PRE-COOLING\n");
            resfriando++;
        } else if (diferencas[i] >= -0.5f && diferencas[i] <= 0.5f) {
            printf("OK - DESLIGADO\n");
            desligados++;
        } else if (diferencas[i] <= 2.0f) {
            printf("ATIVO - PRE-HEATING\n");
            aquecendo++;
        } else {
            printf("ATIVO - HEATING\n");
            aquecendo++;
        }
    }

    printf("\nSalas do lado seguro: %d\n", desligados);
    printf("Salas resfriando: %d\n", resfriando);
    printf("Salas aquecendo: %d\n", aquecendo);

    return 0;
}
