# Exercício 2 – Cálculo de Conta de Energia Elétrica

Uma empresa de distribuição de energia precisa calcular a conta mensal dos consumidores baseado no consumo de kilowatt-hora (kWh).

## Estrutura da Conta

A conta é composta por:

- **Consumo em kWh** (fornecido pelo usuário)
- **Tarifa por kWh**: R$ 0.75
- **Taxa de iluminação pública**: R$ 15.00 (fixa)
- **Taxa de manutenção**: R$ 8.50 (fixa)

O valor total é calculado por:

total = (consumo × tarifa_por_kwh) + taxa_iluminacao + taxa_manutencao

## Tarefa

Crie um programa em **C** que:

1. Leia o **consumo em kWh** do mês
2. Calcule o **valor total da conta**
3. Calcule o **valor médio por dia** (dividindo pelo número de dias do mês)
4. Exiba um **extrato detalhado** mostrando:
   - Consumo em kWh
   - Valor do consumo (consumo × tarifa)
   - Taxas (iluminação e manutenção)
   - Valor total
   - Valor médio por dia

## Requisitos

- Utilize **float** para consumo e valores monetários
- Utilize **int** para número de dias (30 dias)
- Utilize **scanf** para ler dados
- Utilize **printf** para exibir os resultados com 2 casas decimais

## Exemplo de Execução

```bash
Digite o consumo em kWh: 350
Número de dias do mês: 30

=== Extrato de Energia ===
Consumo: 350.00 kWh
Valor do consumo: R$ 262.50
Taxa de iluminação: R$ 15.00
Taxa de manutenção: R$ 8.50
Valor total: R$ 286.00
Valor médio diário: R$ 9.53
```
