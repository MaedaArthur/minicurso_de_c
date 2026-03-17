#include <stdio.h>
#include <math.h>

int main(void) {
    float nota1, nota2, nota3, nota4;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Cálculos
    float media_aritmetica = (nota1 + nota2 + nota3 + nota4) / 4.0f;
    float media_ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3 + nota4 * 4) / 10.0f;
    float soma = nota1 + nota2 + nota3 + nota4;

    // Encontrar maior e menor usando funções de biblioteca
    float maior = fmaxf(nota1, fmaxf(nota2, fmaxf(nota3, nota4)));
    float menor = fminf(nota1, fminf(nota2, fminf(nota3, nota4)));

    // Exibição do boletim
    printf("\n=== BOLETIM ESCOLAR ===\n");
    printf("Notas: %.2f | %.2f | %.2f | %.2f\n\n", nota1, nota2, nota3, nota4);

    printf("Media aritmetica: %.2f\n", media_aritmetica);
    printf("Media ponderada: %.2f\n", media_ponderada);
    printf("Soma das notas: %.2f\n", soma);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}
