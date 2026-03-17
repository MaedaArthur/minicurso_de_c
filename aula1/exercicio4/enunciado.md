# Exercício 4 – Cálculo de Perímetro e Área de um Retângulo

Um arquiteto precisa calcular as dimensões de uma peça retangular para um projeto.

## Problema

Você deve criar um programa que:

1. Leia a **largura de um retângulo** (em metros)
2. Leia a **altura de um retângulo** (em metros)
3. Calcule:
   - **Perímetro**: P = 2 × (largura + altura)
   - **Área**: A = largura × altura
   - **Diagonal** (usando Teorema de Pitágoras): d = √(largura² + altura²)
4. Exiba um **relatório** com todas as medidas

## Requisitos

- Utilize **float** para as medidas
- Utilize **scanf** para ler dados
- Utilize **printf** com 2 casas decimais
- Inclua a biblioteca `<math.h>` para a função `sqrt()`
- Nenhum condicional ou desvio

## Exemplo de Execução

```bash
Digite a largura do retângulo (m): 8.5
Digite a altura do retângulo (m): 5.0

=== Medidas do Retângulo ===
Largura: 8.50 m
Altura: 5.00 m

Perímetro: 27.00 m
Área: 42.50 m²
Diagonal: 9.89 m
```
