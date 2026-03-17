# Exercício 2 – Cálculo de Consumo de Energia Elétrica por Aparelho

Uma residência precisa calcular o consumo de energia de vários aparelhos eletrônicos para entender o consumo total.

## Problema

Você deve criar um programa que:

1. **Leia o número de aparelhos** instalados na residência
2. **Para cada aparelho, leia**:
   - Nome do aparelho (string)
   - Potência em watts (float)
   - Tempo de uso diário em horas (float)
3. **Calcule para cada aparelho**:
   - Consumo diário em kWh = (Potência em W / 1000) × Tempo em horas
   - Consumo mensal em kWh = Consumo diário × 30
   - Custo mensal = Consumo mensal × R$ 0.75/kWh
4. **Calcule**:
   - Consumo total mensal
   - Custo total mensal
   - Aparelho com maior consumo
5. **Exiba um relatório** detalhado

## Entrada

```
numero_aparelhos
nome_aparelho_1
potencia_1
tempo_uso_1
...
```

## Exemplo de Execução

```bash
Digite o número de aparelhos: 3

Aparelho 1:
Nome: Geladeira
Potência (W): 400
Tempo de uso diário (h): 24

Aparelho 2:
Nome: Chuveiro
Potência (W): 5500
Tempo de uso diário (h): 1

Aparelho 3:
Nome: TV
Potência (W): 100
Tempo de uso diário (h): 5

=== Relatório de Consumo ===
Geladeira: 288.00 kWh/mes - R$ 216.00
Chuveiro: 165.00 kWh/mes - R$ 123.75
TV: 15.00 kWh/mes - R$ 11.25

Consumo total: 468.00 kWh/mes
Custo total: R$ 351.00
Aparelho maior consumidor: Geladeira
```
