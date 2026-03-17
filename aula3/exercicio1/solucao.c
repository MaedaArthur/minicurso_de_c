#include <stdio.h>

int main(void) {
    float tensao_inicial, resistencia, variacao_tensao;
    int numero_medicoes;

    printf("Digite a tensão inicial (V): ");
    scanf("%f", &tensao_inicial);

    printf("Digite a resistência total (Ω): ");
    scanf("%f", &resistencia);

    printf("Digite quantas medições serão realizadas: ");
    scanf("%d", &numero_medicoes);

    printf("Digite a variação de tensão por intervalo (V): ");
    scanf("%f", &variacao_tensao);

    // Validação
    if (resistencia <= 0) {
        printf("Erro: A resistência deve ser maior que zero!\n");
        return 1;
    }

    if (numero_medicoes <= 0) {
        printf("Erro: O número de medições deve ser maior que zero!\n");
        return 1;
    }

    // Variáveis para estatísticas
    float tensao_atual = tensao_inicial;
    float corrente_atual = 0;
    float corrente_max = 0, corrente_min = 1e9;
    float soma_correntes = 0;

    printf("\n=== Análise de Corrente Elétrica ===\n");

    // Loop principal para realizar as medições
    for (int i = 1; i <= numero_medicoes; i++) {
        // Lei de Ohm: I = V / R
        corrente_atual = tensao_atual / resistencia;

        // Atualizar máximo e mínimo
        if (corrente_atual > corrente_max) {
            corrente_max = corrente_atual;
        }
        if (corrente_atual < corrente_min) {
            corrente_min = corrente_atual;
        }

        // Acumular para calcular média
        soma_correntes += corrente_atual;

        // Exibir resultado da medição
        printf("Med. %d: V = %.2fV → I = %.2fA\n", i, tensao_atual, corrente_atual);

        // Atualizar tensão para a próxima medição
        tensao_atual += variacao_tensao;
    }

    // Calcular média
    float corrente_media = soma_correntes / numero_medicoes;

    // Exibir estatísticas
    printf("\n=== Estatísticas ===\n");
    printf("Corrente máxima: %.2fA\n", corrente_max);
    printf("Corrente mínima: %.2fA\n", corrente_min);
    printf("Corrente média: %.2fA\n", corrente_media);

    return 0;
}
