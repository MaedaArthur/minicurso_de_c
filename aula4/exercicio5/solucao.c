#include <stdio.h>
#include <string.h>

int main(void) {
    int numero_cidades;

    printf("Digite o numero de cidades: ");
    scanf("%d", &numero_cidades);

    if (numero_cidades <= 0) {
        printf("Erro!\n");
        return 1;
    }

    char nomes[numero_cidades][50];
    float temps_max[numero_cidades];
    float temps_min[numero_cidades];
    float umids_max[numero_cidades];
    float umids_min[numero_cidades];
    float press_media[numero_cidades];
    float amplitudes[numero_cidades];
    float umids_media[numero_cidades];

    float temp_max_geral = -999999, temp_min_geral = 999999;
    float umid_max_geral = -999999, umid_min_geral = 999999;
    int idx_mais_quente = 0, idx_mais_frio = 0;
    int idx_mais_umida = 0, idx_mais_seca = 0;

    // Leitura de dados
    for (int i = 0; i < numero_cidades; i++) {
        printf("\nCidade %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Temperatura maxima: ");
        scanf("%f", &temps_max[i]);
        printf("Temperatura minima: ");
        scanf("%f", &temps_min[i]);
        printf("Umidade maxima: ");
        scanf("%f", &umids_max[i]);
        printf("Umidade minima: ");
        scanf("%f", &umids_min[i]);
        printf("Pressao media: ");
        scanf("%f", &press_media[i]);

        // Cálculos
        amplitudes[i] = temps_max[i] - temps_min[i];
        umids_media[i] = (umids_max[i] + umids_min[i]) / 2.0f;

        // Rastrear extremos
        if (temps_max[i] > temp_max_geral) {
            temp_max_geral = temps_max[i];
            idx_mais_quente = i;
        }
        if (temps_min[i] < temp_min_geral) {
            temp_min_geral = temps_min[i];
            idx_mais_frio = i;
        }
        if (umids_media[i] > umid_max_geral) {
            umid_max_geral = umids_media[i];
            idx_mais_umida = i;
        }
        if (umids_media[i] < umid_min_geral) {
            umid_min_geral = umids_media[i];
            idx_mais_seca = i;
        }
    }

    printf("\n=== Analise Climatica ===\n");

    for (int i = 0; i < numero_cidades; i++) {
        printf("%s: ΔT=%.2f°C | Umidade media=%.2f%% | ", nomes[i], amplitudes[i], umids_media[i]);

        // Classificação
        if (amplitudes[i] < 8.0f) {
            if (umids_media[i] > 70.0f) {
                printf("Tropical umido");
            } else {
                printf("Tropical seco");
            }
        } else if (amplitudes[i] <= 15.0f) {
            if (umids_media[i] > 70.0f) {
                printf("Subtropical umido");
            } else {
                printf("Subtropical seco");
            }
        } else {
            if (umids_media[i] > 70.0f) {
                printf("Temperado umido");
            } else {
                printf("Temperado seco");
            }
        }
        printf("\n");
    }

    printf("\nCidade mais quente: %s (%.2f°C)\n", nomes[idx_mais_quente], temp_max_geral);
    printf("Cidade mais fria: %s (%.2f°C)\n", nomes[idx_mais_frio], temp_min_geral);
    printf("Cidade mais umida: %s (%.2f%% media)\n", nomes[idx_mais_umida], umid_max_geral);
    printf("Cidade mais seca: %s (%.2f%% media)\n", nomes[idx_mais_seca], umid_min_geral);

    return 0;
}
