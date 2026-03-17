# Exercício 4 – Monitoramento de Potência em Sistema Elétrico

Uma subestação elétrica precisa fazer análise contínua de potência em múltiplos transformadores.

## Problema

Você deve criar um programa que:

1. **Leia o número de transformadores** a monitorar
2. **Para cada transformador**, leia:
   - Identificação (número)
   - Tensão atual (volts)
   - Corrente atual (amperes)
   - Fator de potência (0.0 a 1.0)
3. **Calcule para cada transformador**:
   - Potência aparente: S = V × I
   - Potência ativa: P = V × I × FP
   - Potência reativa: Q = √(S² - P²)
4. **Identifique**:
   - Transformador com maior potência
   - Transformador com menor fator de potência
   - Potência ativa total
5. **Exiba relatório completo**

## Entrada

```
numero_transformadores
id_transf_1 tensao_1 corrente_1 fp_1
id_transf_2 tensao_2 corrente_2 fp_2
...
```

## Exemplo de Execução

```bash
Digite o numero de transformadores: 3

Transformador 1:
ID: T-001
Tensao (V): 220
Corrente (A): 50
Fator de potencia: 0.95

Transformador 2:
ID: T-002
Tensao (V): 220
Corrente (A): 45
Fator de potencia: 0.88

Transformador 3:
ID: T-003
Tensao (V): 220
Corrente (A): 55
Fator de potencia: 0.92

=== Relatório de Potência ===
T-001: S=11000.00VA | P=10450.00W | Q=3393.20VAR
T-002: S=9900.00VA | P=8712.00W | Q=5203.85VAR
T-003: S=12100.00VA | P=11132.00W | Q=4762.64VAR

Potência ativa total: 30294.00 W
Maior potência: T-003 (12100.00 VA)
Menor fator de potência: T-002 (0.88)
```
