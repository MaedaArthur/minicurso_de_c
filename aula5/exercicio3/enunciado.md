# Exercício 3 – Análise de Eficiência de Motor Elétrico

Uma indústria precisa analisar a eficiência de vários motores elétricos em sua planta produtiva.

## Problema

Você deve criar um programa com funções que:

1. **Função `calcular_potencia_aparente()`**: S = V × I
2. **Função `calcular_potencia_ativa()`**: P = S × FP
3. **Função `calcular_potencia_reativa()`**: Q = √(S² - P²)
4. **Função `calcular_eficiencia()`**: Eficiência = (P / Potência_entrada) × 100
5. **Função `avaliar_motor()`**: retorna classificação (Excelente, Bom, Aceitável, Ruim)
6. **Utilize ponteiros** para retornar múltiplos valores

## Entrada

```
numero_motores
[para cada motor]
id_motor potencia_entrada_kw tensao_v corrente_a fator_potencia
```

## Exemplo de Execução

```bash
Digite o número de motores: 2

Motor 1:
ID: M-001
Potência de entrada (kW): 10
Tensão (V): 220
Corrente (A): 35
Fator de potência: 0.92

Motor 2:
ID: M-002
Potência de entrada (kW): 15
Tensão (V): 220
Corrente (A): 45
Fator de potência: 0.85

=== Análise de Eficiência de Motores ===
M-001: S=7700VA | P=7084W | Q=2847VAR | Eficiência=70.84% | BOM
M-002: S=9900VA | P=8415W | Q=5204VAR | Eficiência=56.10% | ACEITÁVEL

Eficiência média: 63.47%
Motor mais eficiente: M-001 (70.84%)
Motor menos eficiente: M-002 (56.10%)
```
