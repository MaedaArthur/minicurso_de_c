#include <stdio.h>
#include <string.h>
#include <math.h>

// Função para calcular potência aparente
float calcular_potencia_aparente(float tensao, float corrente) {
    return tensao * corrente;
}

// Função para calcular potência ativa
float calcular_potencia_ativa(float potencia_aparente, float fator_potencia) {
    return potencia_aparente * fator_potencia;
}

// Função para calcular potência reativa
float calcular_potencia_reativa(float potencia_aparente, float potencia_ativa) {
    float q_squared = potencia_aparente * potencia_aparente - potencia_ativa * potencia_ativa;
    return sqrt(q_squared >= 0 ? q_squared : 0);
}

// Função para calcular eficiência
float calcular_eficiencia(float potencia_ativa, float potencia_entrada_w) {
    return (potencia_ativa / potencia_entrada_w) * 100.0f;
}

// Função para avaliar motor
void avaliar_motor(float eficiencia, char *classificacao) {
    if (eficiencia >= 85) {
        strcpy(classificacao, "EXCELENTE");
    } else if (eficiencia >= 75) {
        strcpy(classificacao, "BOM");
    } else if (eficiencia >= 60) {
        strcpy(classificacao, "ACEITAVEL");
    } else {
        strcpy(classificacao, "RUIM");
    }
}

int main(void) {
    int numero_motores;

    printf("Digite o numero de motores: ");
    scanf("%d", &numero_motores);

    if (numero_motores <= 0) {
        printf("Erro!\n");
        return 1;
    }

    char ids[numero_motores][20];
    float potencias_entrada[numero_motores];
    float eficiencias[numero_motores];
    float potencias_aparentes[numero_motores];
    float potencias_ativas[numero_motores];
    float potencias_reativas[numero_motores];

    float soma_eficiencias = 0;
    float melhor_eficiencia = 0, pior_eficiencia = 999999;
    int idx_melhor = 0, idx_pior = 0;

    // Leitura e cálculos
    for (int i = 0; i < numero_motores; i++) {
        float tensao, corrente, fp;

        printf("\nMotor %d:\n", i + 1);
        printf("ID: ");
        scanf("%s", ids[i]);
        printf("Potencia de entrada (kW): ");
        scanf("%f", &potencias_entrada[i]);
        printf("Tensao (V): ");
        scanf("%f", &tensao);
        printf("Corrente (A): ");
        scanf("%f", &corrente);
        printf("Fator de potencia: ");
        scanf("%f", &fp);

        // Conversão de potência para watts
        float potencia_entrada_w = potencias_entrada[i] * 1000.0f;

        // Cálculos
        potencias_aparentes[i] = calcular_potencia_aparente(tensao, corrente);
        potencias_ativas[i] = calcular_potencia_ativa(potencias_aparentes[i], fp);
        potencias_reativas[i] = calcular_potencia_reativa(potencias_aparentes[i], potencias_ativas[i]);
        eficiencias[i] = calcular_eficiencia(potencias_ativas[i], potencia_entrada_w);

        soma_eficiencias += eficiencias[i];

        if (eficiencias[i] > melhor_eficiencia) {
            melhor_eficiencia = eficiencias[i];
            idx_melhor = i;
        }

        if (eficiencias[i] < pior_eficiencia) {
            pior_eficiencia = eficiencias[i];
            idx_pior = i;
        }
    }

    float eficiencia_media = soma_eficiencias / numero_motores;

    printf("\n=== Analise de Eficiencia de Motores ===\n");

    for (int i = 0; i < numero_motores; i++) {
        char classificacao[20];
        avaliar_motor(eficiencias[i], classificacao);

        printf("%s: S=%.0fVA | P=%.0fW | Q=%.0fVAR | Eficiencia=%.2f%% | %s\n",
               ids[i], potencias_aparentes[i], potencias_ativas[i], potencias_reativas[i],
               eficiencias[i], classificacao);
    }

    printf("\nEficiencia media: %.2f%%\n", eficiencia_media);
    printf("Motor mais eficiente: %s (%.2f%%)\n", ids[idx_melhor], melhor_eficiencia);
    printf("Motor menos eficiente: %s (%.2f%%)\n", ids[idx_pior], pior_eficiencia);

    return 0;
}
