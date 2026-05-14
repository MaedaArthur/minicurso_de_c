#include <stdio.h>

int main(){
    float tensao_inicial, resistencia_total, variacao_tensao;
    int numero_medicoes;

    printf("Digite a tensão inicial (V): ");
    scanf("%f", &tensao_inicial);

    printf("Digite a resistência total (Ω): ");
    scanf("%f", &resistencia_total);

    printf("Digite quantas medições serão realizadas: ");
    scanf("%d", &numero_medicoes);

    printf("Digite a variação de tensão por intervalo (V): ");
    scanf("%f", &variacao_tensao);
    
    float corrente_atual;
    float tensao_atual = tensao_inicial;
    float corrente_min = 10000000;
    float corrente_max = 0;
    float soma = 0;

    for(int i = 1;i<=numero_medicoes;i++){
        corrente_atual = tensao_atual/resistencia_total;

        printf("Med. %d: V = %.2fV → I = %.2fA\n", i, tensao_atual, corrente_atual);
    
        tensao_atual = tensao_atual + variacao_tensao;

        if (corrente_atual>corrente_max){
            corrente_max = corrente_atual;
        }
        if (corrente_atual<corrente_min){
            corrente_min = corrente_atual;
        }

        soma = soma + corrente_atual;
    }
    
    float corrente_media = soma/numero_medicoes;
    
    printf("\n=== Estatísticas ===\n");
    printf("Corrente máxima: %.2fA\n", corrente_max);
    printf("Corrente mínima: %.2fA\n", corrente_min);
    printf("Corrente média: %.2fA\n", corrente_media);
}
