# Exercício 2 – Cálculo de Consumo em Instalação Residencial

Uma residência necessita calcular o consumo total de energia e o valor da fatura de forma detalhada.

## Problema

Você deve criar um programa com funções que:

1. **Função `calcular_consumo_aparelho()`**: recebe potência (W) e tempo (h), retorna consumo (kWh)
2. **Função `calcular_custo_consumo()`**: recebe consumo (kWh) e tarifa, retorna custo
3. **Função `calcular_taxa_iluminacao()`**: calcula taxa fixa de 15% sobre consumo
4. **Função `processar_residencia()`**: processa todos os aparelhos e gera relatório
5. **Utilize ponteiros** para retornar múltiplos valores

## Entrada

```
numero_aparelhos
[para cada aparelho]
potencia tempo_uso
```

Com tarifa fixa de R$ 0.85/kWh

## Estrutura da Fatura

1. Consumo de cada aparelho
2. Subtotal de consumo
3. Taxa de iluminação (15% do consumo)
4. ICMS (7% do subtotal + taxa)
5. PIS (1.65% do subtotal + taxa)
6. Total com imposed

## Exemplo de Execução

```bash
Digite o número de aparelhos: 2

Aparelho 1:
Potência (W): 1000
Tempo de uso (h): 5

Aparelho 2:
Potência (W): 500
Tempo de uso (h): 10

=== FATURA DE ENERGIA ===
Aparelho 1: 5.00 kWh → R$ 4.25
Aparelho 2: 5.00 kWh → R$ 4.25

Subtotal: R$ 8.50
Taxa de iluminação: R$ 1.28
ICMS (7%): R$ 0.69
PIS (1.65%): R$ 0.16
TOTAL: R$ 10.63
```
