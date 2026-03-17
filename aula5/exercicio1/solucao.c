#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

// Função para calcular potência ativa (resultado via ponteiro)
void calcular_potencia_ativa(float tensao, float corrente, float angulo_graus, float *potencia_ativa) {
    float angulo_rad = angulo_graus * PI / 180.0;
    *potencia_ativa = tensao * corrente * cos(angulo_rad);
}

// Função para calcular potência reativa (resultado via ponteiro)
void calcular_potencia_reativa(float tensao, float corrente, float angulo_graus, float *potencia_reativa) {
    float angulo_rad = angulo_graus * PI / 180.0;
    *potencia_reativa = tensao * corrente * sin(angulo_rad);
}

// Função para calcular potência aparente (resultado via ponteiro)
void calcular_potencia_aparente(float tensao, float corrente, float *potencia_aparente) {
    *potencia_aparente = tensao * corrente;
}

// Função para calcular fator de potência (resultado via ponteiro)
void calcular_fator_potencia(float angulo_graus, float *fator_potencia) {
    float angulo_rad = angulo_graus * PI / 180.0;
    *fator_potencia = cos(angulo_rad);
}

// Função para classificar o tipo de circuito
void classificar_circuito(float angulo_graus, char *tipo) {
    if (angulo_graus > 0) {
        sprintf(tipo, "Indutor");
    } else if (angulo_graus < 0) {
        sprintf(tipo, "Capacitor");
    } else {
        sprintf(tipo, "Resistivo Puro");
    }
}

int main(void) {
    float tensao_A, corrente_A, angulo_A;
    float tensao_B, corrente_B, angulo_B;
    float tensao_C, corrente_C, angulo_C;

    // Leitura de dados
    printf("Digite V, I e ângulo da fase A: ");
    scanf("%f %f %f", &tensao_A, &corrente_A, &angulo_A);

    printf("Digite V, I e ângulo da fase B: ");
    scanf("%f %f %f", &tensao_B, &corrente_B, &angulo_B);

    printf("Digite V, I e ângulo da fase C: ");
    scanf("%f %f %f", &tensao_C, &corrente_C, &angulo_C);

    // Validação de entrada
    if (tensao_A <= 0 || corrente_A <= 0 || tensao_B <= 0 || corrente_B <= 0 || 
        tensao_C <= 0 || corrente_C <= 0) {
        printf("Erro: Tensão e corrente devem ser positivas!\n");
        return 1;
    }

    // Variáveis para armazenar resultados
    float P_A, Q_A, S_A, FP_A;
    float P_B, Q_B, S_B, FP_B;
    float P_C, Q_C, S_C, FP_C;
    char tipo_A[20], tipo_B[20], tipo_C[20];

    // Cálculos para Fase A
    calcular_potencia_ativa(tensao_A, corrente_A, angulo_A, &P_A);
    calcular_potencia_reativa(tensao_A, corrente_A, angulo_A, &Q_A);
    calcular_potencia_aparente(tensao_A, corrente_A, &S_A);
    calcular_fator_potencia(angulo_A, &FP_A);
    classificar_circuito(angulo_A, tipo_A);

    // Cálculos para Fase B
    calcular_potencia_ativa(tensao_B, corrente_B, angulo_B, &P_B);
    calcular_potencia_reativa(tensao_B, corrente_B, angulo_B, &Q_B);
    calcular_potencia_aparente(tensao_B, corrente_B, &S_B);
    calcular_fator_potencia(angulo_B, &FP_B);
    classificar_circuito(angulo_B, tipo_B);

    // Cálculos para Fase C
    calcular_potencia_ativa(tensao_C, corrente_C, angulo_C, &P_C);
    calcular_potencia_reativa(tensao_C, corrente_C, angulo_C, &Q_C);
    calcular_potencia_aparente(tensao_C, corrente_C, &S_C);
    calcular_fator_potencia(angulo_C, &FP_C);
    classificar_circuito(angulo_C, tipo_C);

    // Exibir resultados
    printf("\n=== Análise de Potência - Sistema Trifásico ===\n\n");

    printf("--- Fase A ---\n");
    printf("Tensão: %.2fV | Corrente: %.2fA | Ângulo: %.2f°\n", tensao_A, corrente_A, angulo_A);
    printf("Potência Ativa: %.2fW\n", P_A);
    printf("Potência Reativa: %.2f VAR\n", Q_A);
    printf("Potência Aparente: %.2f VA\n", S_A);
    printf("Fator de Potência: %.3f (%s)\n\n", FP_A, tipo_A);

    printf("--- Fase B ---\n");
    printf("Tensão: %.2fV | Corrente: %.2fA | Ângulo: %.2f°\n", tensao_B, corrente_B, angulo_B);
    printf("Potência Ativa: %.2fW\n", P_B);
    printf("Potência Reativa: %.2f VAR\n", Q_B);
    printf("Potência Aparente: %.2f VA\n", S_B);
    printf("Fator de Potência: %.3f (%s)\n\n", FP_B, tipo_B);

    printf("--- Fase C ---\n");
    printf("Tensão: %.2fV | Corrente: %.2fA | Ângulo: %.2f°\n", tensao_C, corrente_C, angulo_C);
    printf("Potência Ativa: %.2fW\n", P_C);
    printf("Potência Reativa: %.2f VAR\n", Q_C);
    printf("Potência Aparente: %.2f VA\n", S_C);
    printf("Fator de Potência: %.3f (%s)\n\n", FP_C, tipo_C);

    // Cálculos de totais
    float P_total = P_A + P_B + P_C;
    float Q_total = Q_A + Q_B + Q_C;
    float S_total = S_A + S_B + S_C;
    float FP_medio = P_total / S_total;

    printf("=== Totais do Sistema ===\n");
    printf("Potência Ativa Total: %.2fW\n", P_total);
    printf("Potência Reativa Total: %.2f VAR\n", Q_total);
    printf("Potência Aparente Total: %.2f VA\n", S_total);
    printf("Fator de Potência Médio: %.3f\n\n", FP_medio);

    // Recomendação de compensação (simplificada)
    float Q_compensacao = Q_total * 0.578; // Aprox. 57.8% para corrigir a ~0.95
    printf("⚠️  Recomendação: Instalar capacitores para compensação de %.2f VAR\n", Q_compensacao);

    return 0;
}
