#include <stdio.h>

int main(void) {
    int numero_sensores;
    float temperatura_maxima_permitida;

    printf("Digite o número de sensores: ");
    scanf("%d", &numero_sensores);

    if (numero_sensores <= 0) {
        printf("Erro: O número de sensores deve ser maior que zero!\n");
        return 1;
    }

    printf("Digite a temperatura máxima permitida (°C): ");
    scanf("%f", &temperatura_maxima_permitida);

    // Array para armazenar as temperaturas dos sensores
    float temperaturas[numero_sensores];

    // Ler as temperaturas de cada sensor
    for (int i = 0; i < numero_sensores; i++) {
        printf("Digite a temperatura do sensor %d (°C): ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    // Variáveis para cálculos
    float temp_max = temperaturas[0];
    float temp_min = temperaturas[0];
    float soma_temperaturas = 0;
    int sensor_max = 0;
    int sensores_criticos = 0;

    // Loop para processar as temperaturas
    for (int i = 0; i < numero_sensores; i++) {
        // Atualizar máximo
        if (temperaturas[i] > temp_max) {
            temp_max = temperaturas[i];
            sensor_max = i;
        }

        // Atualizar mínimo
        if (temperaturas[i] < temp_min) {
            temp_min = temperaturas[i];
        }

        // Acumular para calcular média
        soma_temperaturas += temperaturas[i];

        // Contar sensores críticos
        if (temperaturas[i] > temperatura_maxima_permitida) {
            sensores_criticos++;
        }
    }

    // Calcular média
    float temperatura_media = soma_temperaturas / numero_sensores;

    // Exibir relatório
    printf("\n=== Relatório de Monitoramento ===\n");
    for (int i = 0; i < numero_sensores; i++) {
        printf("Sensor %d: %.2f°C ", i + 1, temperaturas[i]);
        if (temperaturas[i] > temperatura_maxima_permitida) {
            printf("[CRÍTICO!]\n");
        } else {
            printf("[OK]\n");
        }
    }

    // Exibir estatísticas
    printf("\n=== Estatísticas ===\n");
    printf("Temperatura máxima: %.2f°C (Sensor %d)\n", temp_max, sensor_max + 1);
    printf("Temperatura mínima: %.2f°C (Sensor ", temp_min);
    
    // Encontrar e exibir qual sensor tem temperatura mínima
    for (int i = 0; i < numero_sensores; i++) {
        if (temperaturas[i] == temp_min) {
            printf("%d", i + 1);
            break;
        }
    }
    printf(")\n");

    printf("Temperatura média: %.2f°C\n", temperatura_media);
    printf("Sensores acima do limite: %d\n", sensores_criticos);

    // Aviso de segurança
    if (sensores_criticos > 0) {
        printf("\n⚠️  AVISO DE SEGURANÇA: %d sensores detectaram temperatura crítica!\n", sensores_criticos);
        printf("Ação recomendada: Reduzir carga ou aumentar refrigeração.\n");
    } else {
        printf("\n✓ Todos os sensores estão dentro dos limites de segurança.\n");
    }

    return 0;
}
