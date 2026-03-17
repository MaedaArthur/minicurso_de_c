#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20];
    float consumo;
    float tarifa_base;
    float bandeira;
    float subtotal;
    float desconto;
    float base_impostos;
    float icms;
    float pis;
    float cofins;
    float total;
} Fatura;

// Função para calcular custo do consumo
float calcular_custo_consumo(float consumo, float tarifa) {
    return consumo * tarifa;
}

// Função para calcular bandeira tarifária
float calcular_bandeira(float consumo, int tipo_bandeira) {
    float acrescimo = 0;
    if (tipo_bandeira == 2) {
        acrescimo = 0.05f;
    } else if (tipo_bandeira == 3) {
        acrescimo = 0.10f;
    }
    return consumo * acrescimo;
}

// Função para aplicar desconto
void aplicar_desconto(float *valor, float consumo, int eh_preferencial) {
    float desconto = 0;
    if (eh_preferencial && consumo > 500) {
        desconto = 0.07f;
    } else if (eh_preferencial) {
        desconto = 0.05f;
    } else if (consumo > 500) {
        desconto = 0.03f;
    }
    *valor = *valor - (*valor * desconto);
}

// Função para calcular impostos
void calcular_impostos(float base, float *icms, float *pis, float *cofins) {
    *icms = base * 0.18f;
    *pis = base * 0.0165f;
    *cofins = base * 0.076f;
}

// Função para gerar fatura
void gerar_fatura(Fatura *fatura, float tarifa_kwh) {
    fatura->tarifa_base = calcular_custo_consumo(fatura->consumo, tarifa_kwh);
    fatura->subtotal = fatura->tarifa_base + fatura->bandeira;
    fatura->desconto = fatura->subtotal - fatura->subtotal; // Inicializa
    fatura->base_impostos = fatura->subtotal;
    calcular_impostos(fatura->base_impostos, &fatura->icms, &fatura->pis, &fatura->cofins);
    fatura->total = fatura->base_impostos + fatura->icms + fatura->pis + fatura->cofins;
}

int main(void) {
    int numero_clientes;
    const float tarifa_kwh = 0.85f;

    printf("Digite o numero de clientes: ");
    scanf("%d", &numero_clientes);

    if (numero_clientes <= 0) {
        printf("Erro!\n");
        return 1;
    }

    Fatura faturas[numero_clientes];

    // Leitura e processamento
    for (int i = 0; i < numero_clientes; i++) {
        int eh_preferencial, tipo_bandeira;

        printf("\nCliente %d:\n", i + 1);
        printf("ID: ");
        scanf("%s", faturas[i].id);
        printf("Consumo (kWh): ");
        scanf("%f", &faturas[i].consumo);
        printf("E preferencial? (1=sim, 0=nao): ");
        scanf("%d", &eh_preferencial);
        printf("Bandeira (1=Verde, 2=Amarela, 3=Vermelha): ");
        scanf("%d", &tipo_bandeira);

        // Cálculos
        faturas[i].tarifa_base = calcular_custo_consumo(faturas[i].consumo, tarifa_kwh);
        faturas[i].bandeira = calcular_bandeira(faturas[i].consumo, tipo_bandeira);
        faturas[i].subtotal = faturas[i].tarifa_base + faturas[i].bandeira;

        // Desconto (simplificado)
        float valor_com_desconto = faturas[i].subtotal;
        if (eh_preferencial && faturas[i].consumo > 500) {
            faturas[i].desconto = faturas[i].subtotal * 0.07f;
        } else if (eh_preferencial) {
            faturas[i].desconto = faturas[i].subtotal * 0.05f;
        } else if (faturas[i].consumo > 500) {
            faturas[i].desconto = faturas[i].subtotal * 0.03f;
        } else {
            faturas[i].desconto = 0;
        }

        faturas[i].base_impostos = faturas[i].subtotal - faturas[i].desconto;
        calcular_impostos(faturas[i].base_impostos, &faturas[i].icms, &faturas[i].pis, &faturas[i].cofins);
        faturas[i].total = faturas[i].base_impostos + faturas[i].icms + faturas[i].pis + faturas[i].cofins;
    }

    // Exibição das faturas
    printf("\n=== FATURAS DE ENERGIA ===\n");

    for (int i = 0; i < numero_clientes; i++) {
        printf("\nCliente: %s\n", faturas[i].id);
        printf("Consumo: %.2f kWh\n", faturas[i].consumo);
        printf("Tarifa base: R$ %.2f\n", faturas[i].tarifa_base);
        printf("Bandeira: R$ %.2f\n", faturas[i].bandeira);
        printf("Subtotal: R$ %.2f\n", faturas[i].subtotal);
        printf("Desconto: R$ %.2f\n", faturas[i].desconto);
        printf("Base para impostos: R$ %.2f\n", faturas[i].base_impostos);
        printf("ICMS (18%%): R$ %.2f\n", faturas[i].icms);
        printf("PIS (1.65%%): R$ %.2f\n", faturas[i].pis);
        printf("COFINS (7.6%%): R$ %.2f\n", faturas[i].cofins);
        printf("TOTAL: R$ %.2f\n", faturas[i].total);
    }

    return 0;
}
