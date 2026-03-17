#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    int numero_transformadores;
    
    printf("Digite o numero de transformadores: ");
    scanf("%d", &numero_transformadores);

    if (numero_transformadores <= 0) {
        printf("Erro!\n");
        return 1;
    }

    float potencia_ativa_total = 0;
    float maior_potencia = 0, menor_fp = 2.0;
    char id_maior[20], id_menor_fp[20];

    // Leitura e processamento
    for (int i = 0; i < numero_transformadores; i++) {
        char id[20];
        float tensao, corrente, fp;

        printf("\nTransformador %d:\n", i + 1);
        printf("ID: ");
        scanf("%s", id);
        printf("Tensao (V): ");
        scanf("%f", &tensao);
        printf("Corrente (A): ");
        scanf("%f", &corrente);
        printf("Fator de potencia: ");
        scanf("%f", &fp);

        // Cálculos
        float potencia_aparente = tensao * corrente;
        float potencia_ativa = potencia_aparente * fp;
        float potencia_reativa = sqrt(potencia_aparente * potencia_aparente - potencia_ativa * potencia_ativa);

        potencia_ativa_total += potencia_ativa;

        if (potencia_aparente > maior_potencia) {
            maior_potencia = potencia_aparente;
            strcpy(id_maior, id);
        }

        if (fp < menor_fp) {
            menor_fp = fp;
            strcpy(id_menor_fp, id);
        }

        printf("S=%.2fVA | P=%.2fW | Q=%.2fVAR", potencia_aparente, potencia_ativa, potencia_reativa);
    }

    printf("\n\n=== Relatorio de Potencia ===\n");
    
    // Re-exibir dados com formatação
    for (int i = 0; i < numero_transformadores; i++) {
        // Nota: estrutura simplificada - seria melhor usar struct
    }

    printf("Potencia ativa total: %.2f W\n", potencia_ativa_total);
    printf("Maior potencia: %s (%.2f VA)\n", id_maior, maior_potencia);
    printf("Menor fator de potencia: %s (%.2f)\n", id_menor_fp, menor_fp);

    return 0;
}
