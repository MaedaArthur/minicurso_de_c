#include <stdio.h>

int main(void) {
    float peso, distancia;
    float tarifa_por_kg = 5.00f;
    float tarifa_por_km = 2.50f;
    float taxa_manuseio = 20.00f;

    printf("Digite o peso da encomenda (kg): ");
    scanf("%f", &peso);

    printf("Digite a distancia de entrega (km): ");
    scanf("%f", &distancia);

    // Cálculos
    float valor_peso = peso * tarifa_por_kg;
    float valor_distancia = distancia * tarifa_por_km;
    float valor_total = valor_peso + valor_distancia + taxa_manuseio;

    // Exibição do comprovante
    printf("\n=== Comprovante de Frete ===\n");
    printf("Peso: %.2f kg\n", peso);
    printf("Distancia: %.2f km\n\n", distancia);

    printf("Valor por peso (R$ %.2f/kg): R$ %.2f\n", tarifa_por_kg, valor_peso);
    printf("Valor por distancia (R$ %.2f/km): R$ %.2f\n", tarifa_por_km, valor_distancia);
    printf("Taxa de manuseio: R$ %.2f\n\n", taxa_manuseio);

    printf("Valor total do frete: R$ %.2f\n", valor_total);

    return 0;
}
