#include <stdio.h>
#include <math.h>

int main(void) {
    float largura, altura;

    printf("Digite a largura do retangulo (m): ");
    scanf("%f", &largura);

    printf("Digite a altura do retangulo (m): ");
    scanf("%f", &altura);

    // Cálculos
    float perimetro = 2 * (largura + altura);
    float area = largura * altura;
    float diagonal = sqrt(largura * largura + altura * altura);

    // Exibição do relatório
    printf("\n=== Medidas do Retangulo ===\n");
    printf("Largura: %.2f m\n", largura);
    printf("Altura: %.2f m\n\n", altura);

    printf("Perimetro: %.2f m\n", perimetro);
    printf("Area: %.2f m²\n", area);
    printf("Diagonal: %.2f m\n", diagonal);

    return 0;
}
