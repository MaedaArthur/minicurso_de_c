#include <stdio.h>
#include <string.h>
#include <math.h>

#define SQRT3 1.732f

// Função para calcular corrente em linha trifásica
float calcular_corrente_linha(float potencia_kw, float tensao_kv, float fator_potencia) {
    float potencia_w = potencia_kw * 1000.0f;
    float tensao_v = tensao_kv * 1000.0f;
    return potencia_w / (tensao_v * SQRT3 * fator_potencia);
}

// Função para calcular perda de potência
float calcular_perda_potencia(float corrente, float resistencia_total) {
    return 3.0f * corrente * corrente * resistencia_total;
}

// Função para calcular queda de tensão
float calcular_queda_tensao(float potencia_w, float resistencia_total, float tensao_v) {
    return (potencia_w * resistencia_total) / (tensao_v * tensao_v);
}

// Função para calcular rendimento
void calcular_rendimento(float potencia_entrada_w, float perda_w, float *rendimento) {
    *rendimento = ((potencia_entrada_w - perda_w) / potencia_entrada_w) * 100.0f;
}

// Função para analisar linha
void analisar_linha(float rendimento, float queda_tensao, char *classificacao) {
    if (queda_tensao > 5.0f || rendimento < 95.0f) {
        strcpy(classificacao, "CRITICO");
    } else if (queda_tensao > 2.0f || rendimento < 98.0f) {
        strcpy(classificacao, "ACEITAVEL");
    } else {
        strcpy(classificacao, "BOM");
    }
}

int main(void) {
    int numero_linhas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &numero_linhas);

    if (numero_linhas <= 0) {
        printf("Erro!\n");
        return 1;
    }

    char ids[numero_linhas][20];
    float potencias_kw[numero_linhas];
    float perdas_totais[numero_linhas];
    float rendimentos[numero_linhas];

    float potencia_total = 0, perda_total = 0;

    // Leitura e cálculos
    for (int i = 0; i < numero_linhas; i++) {
        float tensao_kv, resistencia_ohm_km, comprimento_km, fator_potencia;

        printf("\nLinha %d:\n", i + 1);
        printf("ID: ");
        scanf("%s", ids[i]);
        printf("Potencia (kW): ");
        scanf("%f", &potencias_kw[i]);
        printf("Tensao (kV): ");
        scanf("%f", &tensao_kv);
        printf("Resistencia (Ω/km): ");
        scanf("%f", &resistencia_ohm_km);
        printf("Comprimento (km): ");
        scanf("%f", &comprimento_km);
        printf("Fator de potencia: ");
        scanf("%f", &fator_potencia);

        float potencia_w = potencias_kw[i] * 1000.0f;
        float tensao_v = tensao_kv * 1000.0f;
        float resistencia_total = resistencia_ohm_km * comprimento_km;

        // Cálculos
        float corrente = calcular_corrente_linha(potencias_kw[i], tensao_kv, fator_potencia);
        float perda = calcular_perda_potencia(corrente, resistencia_total);
        float queda = calcular_queda_tensao(potencia_w, resistencia_total, tensao_v);
        
        calcular_rendimento(potencia_w, perda, &rendimentos[i]);

        perdas_totais[i] = perda / 1000.0f; // Converter para kW
        potencia_total += potencias_kw[i];
        perda_total += perdas_totais[i];

        char classificacao[20];
        analisar_linha(rendimentos[i], queda * 100.0f, classificacao);

        printf("I=%.2fA | P_perda=%.2fW | ΔV=%.2fV | Rendimento=%.2f%% | %s",
               corrente, perda, queda * 100.0f, rendimentos[i], classificacao);
    }

    float rendimento_geral = ((potencia_total - perda_total) / potencia_total) * 100.0f;

    printf("\n\n=== Analise de Linhas de Distribuicao ===\n");
    printf("Potencia total transmitida: %.2f kW\n", potencia_total);
    printf("Perda total: %.2f kW\n", perda_total);
    printf("Rendimento geral: %.2f%%\n", rendimento_geral);

    return 0;
}
