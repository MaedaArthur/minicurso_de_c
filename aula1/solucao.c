#include <stdio.h>

int main(void) {
    float distancia, tarifa_base, valor_total;
    int tempo;
    const float preco_por_km = 2.50f;
    const float preco_por_minuto = 0.30f;

    printf("Digite a distancia da corrida (km): ");
    if (scanf("%f", &distancia) != 1) return 1;

    printf("Digite o tempo da corrida (min): ");
    if (scanf("%d", &tempo) != 1) return 1;

    printf("Digite a tarifa base: ");
    if (scanf("%f", &tarifa_base) != 1) return 1;

    valor_total = tarifa_base + distancia * preco_por_km + tempo * preco_por_minuto;

    printf("\nResumo da corrida\n");
    printf("Distancia: %.2f km\n", distancia);
    printf("Tempo: %d minutos\n", tempo);
    printf("Tarifa base: R$ %.2f\n", tarifa_base);
    printf("Valor total da corrida: R$ %.2f\n", valor_total);

    return 0;
}
