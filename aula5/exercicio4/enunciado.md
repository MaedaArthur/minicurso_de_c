# Exercício 4 – Sistema de Distribuição de Energia

Uma empresa distribuidora de energia precisa analisar o fluxo de potência entre subestações.

## Problema

Você deve criar um programa com funções que:

1. **Função `calcular_corrente_linha()`**: I = P / (V × √3 × FP) para sistema trifásico
2. **Função `calcular_perda_potencia()`**: P_perda = 3 × I² × R
3. **Função `calcular_queda_tensao()`**: ΔV = (P × R + Q × X) / V
4. **Função `calcular_rendimento()`**: Rendimento = (P_sáida / P_entrada) × 100
5. **Função `analisar_linha()`**: retorna classificação (Excelente, Bom, Crítico)
6. **Utilize ponteiros** para retornar múltiplos valores

## Entrada

```
numero_linhas
[para cada linha]
id_linha potencia_kw tensao_kv resistencia_ohm_km comprimento_km fator_potencia
```

## Exemplo de Execução

```bash
Digite o número de linhas: 2

Linha 1:
ID: L-001
Potência (kW): 500
Tensão (kV): 13.8
Resistência (Ω/km): 0.15
Comprimento (km): 5
Fator de potência: 0.92

Linha 2:
ID: L-002
Potência (kW): 1000
Tensão (kV): 13.8
Resistência (Ω/km): 0.15
Comprimento (km): 8
Fator de potência: 0.90

=== Análise de Linhas de Distribuição ===
L-001: I=23.66A | P_perda=50.36W | ΔV=0.18V | Rendimento=99.99% | BOM
L-002: I=49.13A | Perda=170.53W | ΔV=0.63V | Rendimento=99.98% | BOM

Potência total transmitida: 1500.00 kW
Perda total: 0.22 kW
Rendimento geral: 99.99%
```
