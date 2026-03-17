#include <stdio.h>

int main(void) {
    int numero_medicoes;
    
    printf("Digite o numero de medicoes: ");
    scanf("%d", &numero_medicoes);

    if (numero_medicoes <= 0) {
        printf("Erro: numero de medicoes deve ser maior que zero!\n");
        return 1;
    }

    float tensoes[numero_medicoes];
    float tensao_max = -999999, tensao_min = 999999;
    float soma_tensoes = 0;
    int fora_da_faixa = 0;

    // Leitura das tensões
    for (int i = 0; i < numero_medicoes; i++) {
        printf("Digite a tensao %d (V): ", i + 1);
        scanf("%f", &tensoes[i]);

        // Atualizar máximo e mínimo
        if (tensoes[i] > tensao_max) {
            tensao_max = tensoes[i];
        }
        if (tensoes[i] < tensao_min) {
            tensao_min = tensoes[i];
        }

        // Somar para calcular média
        soma_tensoes += tensoes[i];

        // Contar fora da faixa
        if (tensoes[i] < 110 || tensoes[i] > 220) {
            fora_da_faixa++;
        }
    }

    float tensao_media = soma_tensoes / numero_medicoes;
    float amplitude = tensao_max - tensao_min;

    printf("\n=== Analise de Tensao ===\n");

    // Exibir cada medição
    for (int i = 0; i < numero_medicoes; i++) {
        printf("Medicao %d: %.2fV", i + 1, tensoes[i]);
        
        if (tensoes[i] >= 110 && tensoes[i] <= 220) {
            printf(" [OK]\n");
        } else {
            printf(" [FORA DA FAIXA]\n");
        }
    }

    // Exibir estatísticas
    printf("\nEstatisticas:\n");
    printf("Tensao maxima: %.2fV\n", tensao_max);
    printf("Tensao minima: %.2fV\n", tensao_min);
    printf("Tensao media: %.2fV\n", tensao_media);
    printf("Amplitude: %.2fV\n", amplitude);
    printf("Medicoes fora da faixa: %d\n", fora_da_faixa);

    return 0;
}
