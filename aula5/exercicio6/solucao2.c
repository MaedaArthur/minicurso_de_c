#include <stdio.h>

void converter_adc(int raw, float *temperatura, float *tensao){
    *tensao = raw*5.0 / 1023.0;
    *temperatura = *tensao*100;
}

void exibir_leitura(int indice, int raw, float tensao, float temperatura) {
    printf("Amostra %d: ADC=%-4d | Tensao=%.3fV | Temperatura=%.1f C\n",
           indice, raw, tensao, temperatura);
}

int main(){
    int n;
    
    printf("Digite o numero de amostras: ");
    scanf("%d", &n);
    
    int raw[n];
    float tensao[n], temperatura[n];

    

    for (int i = 0; i < n; i++){
        printf("Amostra %d - valor ADC (0-1023): ", i + 1);
        scanf("%d", &raw[i]);
    }

    printf("\n=== Leituras do Sensor LM35 ===\n");

    for (int i = 0; i<n; i++){
        converter_adc(raw[i], &tensao[i], &temperatura[i]);
        exibir_leitura(i, raw[i], tensao[i], temperatura[i]);
    }

    return 0;
}