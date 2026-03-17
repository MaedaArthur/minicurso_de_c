#include <stdio.h>
#include <string.h>

int main(void) {
    int numero_aparelhos;
    printf("Digite o numero de aparelhos: ");
    scanf("%d", &numero_aparelhos);

    if (numero_aparelhos <= 0) {
        printf("Erro: numero de aparelhos deve ser maior que zero!\n");
        return 1;
    }

    float consumo_total = 0, custo_total = 0;
    float maior_consumo = 0;
    char nome_maior[50];

    float potencias[numero_aparelhos];
    float tempos[numero_aparelhos];
    float consumos[numero_aparelhos];
    char nomes[numero_aparelhos][50];

    // Leitura de dados de cada aparelho
    for (int i = 0; i < numero_aparelhos; i++) {
        printf("\nAparelho %d:\n", i + 1);
        
        printf("Nome: ");
        scanf("%s", nomes[i]);
        
        printf("Potencia (W): ");
        scanf("%f", &potencias[i]);
        
        printf("Tempo de uso diario (h): ");
        scanf("%f", &tempos[i]);
    }

    printf("\n=== Relatorio de Consumo ===\n");

    // Cálculos e exibição
    for (int i = 0; i < numero_aparelhos; i++) {
        float consumo_diario = (potencias[i] / 1000.0f) * tempos[i];
        float consumo_mensal = consumo_diario * 30;
        float custo_mensal = consumo_mensal * 0.75f;

        consumos[i] = consumo_mensal;
        consumo_total += consumo_mensal;
        custo_total += custo_mensal;

        if (consumo_mensal > maior_consumo) {
            maior_consumo = consumo_mensal;
            strcpy(nome_maior, nomes[i]);
        }

        printf("%s: %.2f kWh/mes - R$ %.2f\n", nomes[i], consumo_mensal, custo_mensal);
    }

    printf("\nConsumo total: %.2f kWh/mes\n", consumo_total);
    printf("Custo total: R$ %.2f\n", custo_total);
    printf("Aparelho maior consumidor: %s\n", nome_maior);

    return 0;
}
