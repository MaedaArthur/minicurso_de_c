#include <stdio.h>

// Função para calcular consumo em kWh
float calcular_consumo_aparelho(float potencia_w, float tempo_h) {
    return (potencia_w / 1000.0f) * tempo_h;
}

// Função para calcular custo do consumo
float calcular_custo_consumo(float consumo_kwh, float tarifa) {
    return consumo_kwh * tarifa;
}

// Função para calcular taxa de iluminação
float calcular_taxa_iluminacao(float subtotal) {
    return subtotal * 0.15f;
}

// Função para calcular taxa de imposto
void calcular_impostos(float base, float *icms, float *pis) {
    *icms = base * 0.07f;
    *pis = base * 0.0165f;
}

int main(void) {
    int numero_aparelhos;
    const float tarifa = 0.85f;

    printf("Digite o numero de aparelhos: ");
    scanf("%d", &numero_aparelhos);

    if (numero_aparelhos <= 0) {
        printf("Erro!\n");
        return 1;
    }

    float potencias[numero_aparelhos];
    float tempos[numero_aparelhos];
    float consumos[numero_aparelhos];
    float custos[numero_aparelhos];
    float subtotal = 0;

    // Leitura e cálculo
    for (int i = 0; i < numero_aparelhos; i++) {
        printf("\nAparelho %d:\n", i + 1);
        printf("Potencia (W): ");
        scanf("%f", &potencias[i]);
        printf("Tempo de uso (h): ");
        scanf("%f", &tempos[i]);

        consumos[i] = calcular_consumo_aparelho(potencias[i], tempos[i]);
        custos[i] = calcular_custo_consumo(consumos[i], tarifa);
        subtotal += custos[i];
    }

    float taxa_iluminacao = calcular_taxa_iluminacao(subtotal);
    float base_impostos = subtotal + taxa_iluminacao;
    
    float icms, pis;
    calcular_impostos(base_impostos, &icms, &pis);

    float total = base_impostos + icms + pis;

    // Exibição
    printf("\n=== FATURA DE ENERGIA ===\n");

    for (int i = 0; i < numero_aparelhos; i++) {
        printf("Aparelho %d: %.2f kWh → R$ %.2f\n", i + 1, consumos[i], custos[i]);
    }

    printf("\nSubtotal: R$ %.2f\n", subtotal);
    printf("Taxa de iluminacao: R$ %.2f\n", taxa_iluminacao);
    printf("ICMS (7%%): R$ %.2f\n", icms);
    printf("PIS (1.65%%): R$ %.2f\n", pis);
    printf("TOTAL: R$ %.2f\n", total);

    return 0;
}
