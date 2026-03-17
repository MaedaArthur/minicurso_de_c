#include <stdio.h>

int main(void) {
    float consumo, tarifa_por_kwh = 0.75f;
    float taxa_iluminacao = 15.00f;
    float taxa_manutencao = 8.50f;
    int dias_mes = 30;
    float valor_consumo, valor_total, valor_medio;

    printf("Digite o consumo em kWh: ");
    if (scanf("%f", &consumo) != 1) return 1;

    // Cálculos
    valor_consumo = consumo * tarifa_por_kwh;
    valor_total = valor_consumo + taxa_iluminacao + taxa_manutencao;
    valor_medio = valor_total / dias_mes;

    // Exibição do extrato
    printf("\n=== Extrato de Energia ===\n");
    printf("Consumo: %.2f kWh\n", consumo);
    printf("Valor do consumo: R$ %.2f\n", valor_consumo);
    printf("Taxa de iluminacao: R$ %.2f\n", taxa_iluminacao);
    printf("Taxa de manutencao: R$ %.2f\n", taxa_manutencao);
    printf("Valor total: R$ %.2f\n", valor_total);
    printf("Valor medio diario: R$ %.2f\n", valor_medio);

    return 0;
}
