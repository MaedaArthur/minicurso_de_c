#include <stdio.h>

void converter_adc(int raw, float *tensao, float *temperatura){
    *tensao = raw * 5.0/1023.0;
    *temperatura = *tensao*100.0;
}

void exibir_leitura(int indice, int raw, float tensao, float temperatura){
    printf("Amostra %d: ADC=%-4d | Tensao=%.3fV | Temperatura=%.1f C\n"
        , indice, raw, tensao, temperatura);
}

int main(){
    int indices;

    printf("Digite o número de amostras: ");
    scanf("%d", &indices);

    int raw[indices];
    float tensao[indices], temperatura[indices];

    for (int i = 0; i < indices; i++){
        printf("Amostra %d - valor ADC (0-1023): ", i + 1);
        scanf("%d", &raw[i]);
    }

    for (int i = 0; i< indices;  i++){
        converter_adc(raw[i], &tensao[i], &temperatura[i]);
        exibir_leitura(i+1, raw[i], tensao[i], temperatura[i]);
    }

    return 0;
}
