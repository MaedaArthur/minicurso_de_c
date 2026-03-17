#include <stdio.h>

int main(void) {
    int numero_dias;
    
    printf("Digite o numero de dias: ");
    scanf("%d", &numero_dias);

    if (numero_dias <= 0 || numero_dias > 31) {
        printf("Erro: numero de dias invalido!\n");
        return 1;
    }

    int dias[numero_dias];
    float consumos[numero_dias];
    float producoes[numero_dias];
    float eficiencias[numero_dias];

    float consumo_total = 0, producao_total = 0;
    float melhor_eficiencia = 0, pior_eficiencia = 999999;
    int dia_melhor = 0, dia_pior = 0;

    // Leitura de dados
    for (int i = 0; i < numero_dias; i++) {
        printf("\nDia %d:\n", i + 1);
        printf("Consumo (kWh): ");
        scanf("%d %f", &dias[i], &consumos[i]);
        printf("Producao (kg): ");
        scanf("%f", &producoes[i]);

        // Cálculos
        eficiencias[i] = producoes[i] / consumos[i];
        consumo_total += consumos[i];
        producao_total += producoes[i];

        if (eficiencias[i] > melhor_eficiencia) {
            melhor_eficiencia = eficiencias[i];
            dia_melhor = i;
        }

        if (eficiencias[i] < pior_eficiencia) {
            pior_eficiencia = eficiencias[i];
            dia_pior = i;
        }
    }

    float eficiencia_media = producao_total / consumo_total;
    int dias_abaixo = 0;

    printf("\n=== Relatorio de Eficiencia ===\n");

    for (int i = 0; i < numero_dias; i++) {
        printf("Dia %d: %.2f kg/kWh\n", dias[i], eficiencias[i]);
        if (eficiencias[i] < eficiencia_media) {
            dias_abaixo++;
        }
    }

    printf("\nEficiencia media: %.2f kg/kWh\n", eficiencia_media);
    printf("Melhor dia: Dia %d (%.2f kg/kWh)\n", dias[dia_melhor], melhor_eficiencia);
    printf("Pior dia: Dia %d (%.2f kg/kWh)\n", dias[dia_pior], pior_eficiencia);
    printf("Dias com eficiencia abaixo da media: %d\n", dias_abaixo);
    printf("Consumo total: %.2f kWh\n", consumo_total);
    printf("Producao total: %.2f kg\n", producao_total);

    return 0;
}
