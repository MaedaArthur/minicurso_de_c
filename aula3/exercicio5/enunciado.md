# Exercício 5 – Relatório de Eficiência Energética

Um consultoria precisa analisar a eficiência energética de uma fábrica ao longo dos dias do mês.

## Problema

Você deve criar um programa que:

1. **Leia o número de dias** a analisar (até 31)
2. **Para cada dia, leia**:
   - Dia do mês
   - Consumo de energia (kWh)
   - Produção (kg de produtos)
3. **Calcule para cada dia**:
   - Eficiência energética: Produção / Consumo (kg/kWh)
4. **Determine**:
   - Dia com melhor eficiência (maior kg/kWh)
   - Dia com pior eficiência (menor kg/kWh)
   - Consumo total do mês
   - Produção total do mês
   - Eficiência média do mês
   - Dias com eficiência abaixo da média
5. **Exiba relatório** detalhado

## Entrada

```
numero_dias
dia_1 consumo_1 producao_1
dia_2 consumo_2 producao_2
...
```

## Exemplo de Execução

```bash
Digite o numero de dias: 3

Dia 1:
Consumo (kWh): 1000
Producao (kg): 850

Dia 2:
Consumo (kWh): 950
Producao (kg): 920

Dia 3:
Consumo (kWh): 1100
Producao (kg): 800

=== Relatório de Eficiência ===
Dia 1: 0.85 kg/kWh
Dia 2: 0.97 kg/kWh
Dia 3: 0.73 kg/kWh

Eficiência média: 0.85 kg/kWh
Melhor dia: Dia 2 (0.97 kg/kWh)
Pior dia: Dia 3 (0.73 kg/kWh)
Dias com eficiência abaixo da média: 1
Consumo total: 3050.00 kWh
Produção total: 2570.00 kg
```
