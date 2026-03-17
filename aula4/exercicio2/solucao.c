#include <stdio.h>

int main(void) {
    int numero_sensores;
    float umidade_limite;

    printf("Digite o numero de sensores: ");
    scanf("%d", &numero_sensores);

    if (numero_sensores <= 0) {
        printf("Erro: numero de sensores deve ser maior que zero!\n");
        return 1;
    }

    printf("Digite a umidade maxima permitida (%%): ");
    scanf("%f", &umidade_limite);

    float umidades[numero_sensores];
    float umidade_max = umidades[0];
    float umidade_min = umidades[0];
    float soma_umidades = 0;
    int sensor_max = 0;
    int problematicos = 0;

    // Leitura das umidades
    for (int i = 0; i < numero_sensores; i++) {
        printf("Digite a umidade do sensor %d (%%): ", i + 1);
        scanf("%f", &umidades[i]);

        if (i == 0) {
            umidade_max = umidades[i];
            umidade_min = umidades[i];
        }

        // Atualizar máximo
        if (umidades[i] > umidade_max) {
            umidade_max = umidades[i];
            sensor_max = i;
        }

        // Atualizar mínimo
        if (umidades[i] < umidade_min) {
            umidade_min = umidades[i];
        }

        // Acumular para média
        soma_umidades += umidades[i];
    }

    float umidade_media = soma_umidades / numero_sensores;

    printf("\n=== Monitoramento de Umidade ===\n");

    // Exibir cada sensor
    for (int i = 0; i < numero_sensores; i++) {
        printf("Sensor %d: %.2f%%", i + 1, umidades[i]);

        if (umidades[i] <= umidade_limite) {
            printf(" [OK]\n");
        } else if (umidades[i] <= umidade_limite + 5) {
            printf(" [AVISO]\n");
            problematicos++;
        } else {
            printf(" [CRITICO!]\n");
            problematicos++;
        }
    }

    // Exibir estatísticas
    printf("\nUmidade maxima: %.2f%%\n", umidade_max);
    printf("Umidade minima: %.2f%%\n", umidade_min);
    printf("Umidade media: %.2f%%\n", umidade_media);
    printf("Sensores em aviso ou critico: %d\n", problematicos);
    printf("Sensor mais umido: Sensor %d\n", sensor_max + 1);

    return 0;
}
