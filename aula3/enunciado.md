# Desafio: Análise de Corrente Elétrica em Circuito Resistivo

## Contexto

Um circuito eletrônico possui uma série de resistores conectados em série, e você precisa analisar o comportamento da corrente elétrica que passa por ele ao longo do tempo.

Quando há variações de tensão (por exemplo, em sistemas de energia com ripple ou oscilações), a corrente pode ser calculada em intervalos de tempo regulares.

## Problema

Você deve criar um programa que:

1. **Leia a tensão inicial (em volts)** do circuito
2. **Leia a resistência total (em ohms)** do circuito
3. **Leia o número de medições** que serão realizadas
4. **Leia a variação de tensão** (em volts) que ocorre a cada intervalo de tempo
5. **Calcule iterativamente** a corrente em cada intervalo usando a **Lei de Ohm**: 
   $$I = \frac{V}{R}$$

6. **Acompanhe estatísticas**:
   - Corrente máxima observada
   - Corrente mínima observada
   - Média das correntes

7. **Exiba um relatório** com:
   - Cada medição com número, tensão e corrente correspondente
   - Estatísticas finais

## Entrada

```
tensao_inicial
resistencia_total
numero_medicoes
variacao_tensao
```

## Exemplo de Execução

```bash
Digite a tensão inicial (V): 100
Digite a resistência total (Ω): 50
Digite quantas medições serão realizadas: 5
Digite a variação de tensão por intervalo (V): -5

=== Análise de Corrente Elétrica ===
Med. 1: V = 100.00V → I = 2.00A
Med. 2: V = 95.00V → I = 1.90A
Med. 3: V = 90.00V → I = 1.80A
Med. 4: V = 85.00V → I = 1.70A
Med. 5: V = 80.00V → I = 1.60A

=== Estatísticas ===
Corrente máxima: 2.00A
Corrente mínima: 1.60A
Corrente média: 1.80A
```

## Requisitos Obrigatórios

- Utilizar **pelo menos um tipo de loop** (`for`, `while` ou `do-while`)
- Utilizar a **Lei de Ohm** para calcular corrente
- Rastrear correntes máxima, mínima e calcular a média
- Usar tipos `float` para tensão, resistência e corrente
- Usar tipo `int` para número de medições
- Validar se a resistência é maior que zero (evitar divisão por zero)
- Usar `printf` e `scanf` para entrada/saída

## Desafios Adicionais (Opcional)

- Implementar validação de entrada (tensão e resistência não negativas)
- Identificar o intervalo de tempo em que há maior oscilação de corrente
- Calcular a potência dissipada ($P = V \times I$) em cada medição
