# Desafio: Análise de Potência em Sistema Trifásico com Compensação de Fator de Potência

## Contexto

Um sistema elétrico trifásico é usado em indústrias para distribuição eficiente de energia. Um dos principais desafios é manter o fator de potência próximo de 1.0 (ideal), pois valores baixos indicam ineficiência e geram custos extras.

Para corrigir o fator de potência, utiliza-se compensação com capacitores. Cada fase do sistema trifásico possui:
- **Tensão (V)**: tensão eficaz da fase
- **Corrente (A)**: corrente que flui pela fase  
- **Ângulo de defasagem (φ)**: ângulo entre tensão e corrente em graus

## Problema

Você deve criar um programa que:

1. **Leia dados de entrada** de um sistema trifásico (fases A, B e C)
2. **Utilize funções** para:
   - `calcular_potencia_ativa()`: calcula $P = V \times I \times \cos(\phi)$
   - `calcular_potencia_reativa()`: calcula $Q = V \times I \times \sin(\phi)$
   - `calcular_potencia_aparente()`: calcula $S = V \times I$
   - `calcular_fator_potencia()`: calcula $FP = \cos(\phi)$

3. **Utilize ponteiros** para:
   - Passar endereços das variáveis para funções
   - Retornar múltiplos valores através de ponteiros
   - Armazenar resultados em estrutura de dados

4. **Processe os cálculos** para as três fases

5. **Exiba um relatório** contendo:
   - Dados de cada fase (V, I, φ)
   - Potências (ativa, reativa, aparente) de cada fase
   - Fator de potência de cada fase
   - Totais do sistema
   - Recomendação de compensação (capacitância necessária)

## Entrada

```
tensao_A corrente_A angulo_A
tensao_B corrente_B angulo_B
tensao_C corrente_C angulo_C
```

Onde:
- Tensão em volts (V)
- Corrente em amperes (A)
- Ângulo em graus (°)

## Exemplo de Execução

```bash
Digite V, I e ângulo da fase A: 220 10 30
Digite V, I e ângulo da fase B: 220 10 30
Digite V, I e ângulo da fase C: 220 10 30

=== Análise de Potência - Sistema Trifásico ===

--- Fase A ---
Tensão: 220.00V | Corrente: 10.00A | Ângulo: 30.00°
Potência Ativa: 1904.88W
Potência Reativa: 1100.00 VAR
Potência Aparente: 2200.00 VA
Fator de Potência: 0.866 (Indutor)

--- Fase B ---
Tensão: 220.00V | Corrente: 10.00A | Ângulo: 30.00°
Potência Ativa: 1904.88W
Potência Reativa: 1100.00 VAR
Potência Aparente: 2200.00 VA
Fator de Potência: 0.866 (Indutor)

--- Fase C ---
Tensão: 220.00V | Corrente: 10.00A | Ângulo: 30.00°
Potência Ativa: 1904.88W
Potência Reativa: 1100.00 VAR
Potência Aparente: 2200.00 VA
Fator de Potência: 0.866 (Indutor)

=== Totais do Sistema ===
Potência Ativa Total: 5714.64W
Potência Reativa Total: 3300.00 VAR
Potência Aparente Total: 6600.00 VA
Fator de Potência Médio: 0.866

⚠️  Recomendação: Instalar capacitores para compensação de 1909.73 VAR
```

## Requisitos Obrigatórios

- Utilizar **pelo menos 4 funções** para cálculos
- Utilizar **ponteiros** para passar endereços de variáveis para funções
- Usar `math.h` para funções trigonométricas (`cos()`, `sin()`, `pow()`)
- Compilar com `-lm` para linkar a biblioteca matemática
- Validar que todas as entradas são positivas
- Usar `printf` e `scanf` para entrada/saída
- Estruturar o código de forma clara e modular

## Desafios Adicionais (Opcional)

- Implementar função para classificar o circuito (capacitivo ou indutivo)
- Calcular a corrente necessária do capacitor para corrigir o fator de potência a 0.95
- Implementar array de funções (ponteiros para funções)
- Calcular eficiência do sistema (razão entre potência ativa e aparente)
- Implementar validação de entrada com tratamento de erros
