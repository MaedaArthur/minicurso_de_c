# Exercício 3 – Análise de Tensão em Circuito com Múltiplas Medições

Um técnico de manutenção precisa analisar oscilações de tensão em um circuito elétrico ao longo do tempo.

## Problema

Você deve criar um programa que:

1. **Leia o número de medições** que serão realizadas
2. **Para cada medição, leia**:
   - Número da medição (sequencial)
   - Valor de tensão em volts
3. **Processe os dados**:
   - Identifique a tensão máxima e mínima
   - Calcule a tensão média
   - Conte quantas medições estão fora da faixa normal (110V a 220V)
   - Calcule a amplitude (máx - mín)
4. **Exiba um relatório** com análise estatística

## Entrada

```
numero_medicoes
tensao_1
tensao_2
...
tensao_n
```

## Exemplo de Execução

```bash
Digite o numero de medicoes: 5

Digite a tensao 1 (V): 115
Digite a tensao 2 (V): 118
Digite a tensao 3 (V): 112
Digite a tensao 4 (V): 220
Digite a tensao 5 (V): 119

=== Análise de Tensão ===
Medição 1: 115.00V [OK]
Medição 2: 118.00V [OK]
Medição 3: 112.00V [OK]
Medição 4: 220.00V [FORA DA FAIXA]
Medição 5: 119.00V [OK]

Estatísticas:
Tensão máxima: 220.00V
Tensão mínima: 112.00V
Tensão média: 136.80V
Amplitude: 108.00V
Medições fora da faixa: 1
```
