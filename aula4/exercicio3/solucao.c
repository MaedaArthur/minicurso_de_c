#include <stdio.h>
#include <string.h>

int main(void) {
    int numero_tanques;
    float pressao_max_segura;

    printf("Digite o numero de tanques: ");
    scanf("%d", &numero_tanques);

    printf("Digite a pressao maxima segura (bar): ");
    scanf("%f", &pressao_max_segura);

    if (numero_tanques <= 0) {
        printf("Erro!\n");
        return 1;
    }

    char ids[numero_tanques][20];
    float pressoes[numero_tanques];

    float pressao_max = 0, pressao_min = 999999;
    float soma_pressoes = 0;
    int normais = 0, criticos = 0, baixos = 0;

    // Leitura de dados
    for (int i = 0; i < numero_tanques; i++) {
        printf("\nTanque %d:\n", i + 1);
        printf("ID: ");
        scanf("%s", ids[i]);
        printf("Pressao (bar): ");
        scanf("%f", &pressoes[i]);

        // Atualizar máximo e mínimo
        if (pressoes[i] > pressao_max) {
            pressao_max = pressoes[i];
        }
        if (pressoes[i] < pressao_min) {
            pressao_min = pressoes[i];
        }

        // Somar para média
        soma_pressoes += pressoes[i];
    }

    float pressao_media = soma_pressoes / numero_tanques;
    float limite_critico = pressao_max_segura * 1.10f;
    float limite_baixo = pressao_max_segura * 0.70f;

    printf("\n=== Monitoramento de Pressao ===\n");

    for (int i = 0; i < numero_tanques; i++) {
        printf("%s: %.2f bar", ids[i], pressoes[i]);

        if (pressoes[i] > limite_critico) {
            printf(" [CRITICO - ALIVIAR PRESSAO]\n");
            criticos++;
        } else if (pressoes[i] < limite_baixo) {
            printf(" [BAIXO - REABASTECER]\n");
            baixos++;
        } else {
            printf(" [OK]\n");
            normais++;
        }
    }

    printf("\nEstatisticas:\n");
    printf("Pressao maxima: %.2f bar\n", pressao_max);
    printf("Pressao minima: %.2f bar\n", pressao_min);
    printf("Pressao media: %.2f bar\n", pressao_media);
    printf("Tanques normais: %d\n", normais);
    printf("Tanques criticos: %d\n", criticos);
    printf("Tanques com baixa pressao: %d\n", baixos);

    return 0;
}
