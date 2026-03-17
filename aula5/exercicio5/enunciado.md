# Exercício 5 – Faturamento de Energia Elétrica

Uma concessionária de energia precisa calcular faturas detalhadas para seus clientes com descontos, impostos e taxas.

## Problema

Você deve criar um programa com funções que:

1. **Função `calcular_custo_consumo()`**: Custo = Consumo × Tarifa
2. **Função `aplicar_desconto()`**: retorna valor com desconto aplicado
3. **Função `calcular_impostos()`**: ICMS, PIS e COFINS via ponteiros
4. **Função `calcular_bandeira()`**: adiciona valor de bandeira tarifária
5. **Função `gerar_fatura()`**: processa tudo e retorna total
6. **Usar struct** para organizar dados da fatura

## Bandeira Tarifária

- **Verde**: Acréscimo de R$ 0.00
- **Amarela**: Acréscimo de R$ 0.05/kWh
- **Vermelha**: Acréscimo de R$ 0.10/kWh

## Descontos

- Cliente preferencial: 5%
- Cliente com consumo > 500 kWh: 3%
- Ambas condições: 7%

## Impostos

- ICMS: 18%
- PIS: 1.65%
- COFINS: 7.6%

## Entrada

```
numero_clientes
[para cada cliente]
id_cliente consumo_kwh eh_preferencial bandeira
```

Com tarifa base de R$ 0.85/kWh

## Exemplo de Execução

```bash
Digite o número de clientes: 2

Cliente 1:
ID: CLI-001
Consumo (kWh): 450
É preferencial? (1=sim, 0=não): 1
Bandeira (1=Verde, 2=Amarela, 3=Vermelha): 2

Cliente 2:
ID: CLI-002
Consumo (kWh): 600
É preferencial? (1=sim, 0=não): 0
Bandeira (1=Verde, 2=Amarela, 3=Vermelha): 3

=== FATURAS DE ENERGIA ===

Cliente: CLI-001
Consumo: 450.00 kWh
Tarifa base: R$ 382.50
Bandeira amarela: R$ 22.50
Subtotal: R$ 405.00
Desconto preferencial: R$ 20.25
Base para impostos: R$ 384.75
ICMS (18%): R$ 69.25
PIS (1.65%): R$ 6.35
COFINS (7.6%): R$ 29.24
TOTAL: R$ 489.59

Cliente: CLI-002
Consumo: 600.00 kWh
Tarifa base: R$ 510.00
Bandeira vermelha: R$ 60.00
Subtotal: R$ 570.00
Desconto consumo: R$ 17.10
Base para impostos: R$ 552.90
ICMS (18%): R$ 99.52
PIS (1.65%): R$ 9.12
COFINS (7.6%): R$ 42.02
TOTAL: R$ 703.56
```
