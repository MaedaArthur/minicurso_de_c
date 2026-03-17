# Exercício 5 – Cálculo de Média e Conversão de Notas

Um professor precisa calcular a média de notas de seus alunos para avaliação.

## Problema

Você deve criar um programa que:

1. Leia **4 notas** de um aluno (0 a 10)
2. Calcule:
   - **Média aritmética**: (nota1 + nota2 + nota3 + nota4) / 4
   - **Média ponderada**: (nota1×1 + nota2×2 + nota3×3 + nota4×4) / 10
   - **Maior nota** dentre as 4
   - **Menor nota** dentre as 4
   - **Soma total** das notas
3. Exiba um **boletim** com todos os resultados

## Requisitos

- Utilize **float** para as notas
- Utilize **scanf** para ler dados
- Utilize **printf** com 2 casas decimais
- Nenhum condicional ou desvio de fluxo

## Fórmula da Média Ponderada

Considerando pesos 1, 2, 3 e 4 para as notas respectivamente:

$$MP = \frac{nota_1 \times 1 + nota_2 \times 2 + nota_3 \times 3 + nota_4 \times 4}{1+2+3+4}$$

## Exemplo de Execução

```bash
Digite a primeira nota: 7.5
Digite a segunda nota: 8.0
Digite a terceira nota: 9.5
Digite a quarta nota: 8.5

=== BOLETIM ESCOLAR ===
Notas: 7.50 | 8.00 | 9.50 | 8.50

Média aritmética: 8.38
Média ponderada: 8.60
Soma das notas: 33.50
Maior nota: 9.50
Menor nota: 7.50
```
