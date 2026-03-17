# Exercício 5 – Análise de Dados Climáticos

Uma estação meteorológica coleta dados de temperatura, umidade e pressão de várias cidades para análise climática.

## Problema

Você deve criar um programa que:

1. **Leia o número de cidades**
2. **Para cada cidade, leia**:
   - Nome da cidade
   - Temperatura máxima do mês
   - Temperatura mínima do mês
   - Umidade máxima
   - Umidade mínima
   - Pressão média
3. **Processe os dados**:
   - Calcule a amplitude térmica de cada cidade
   - Identifique cidade mais quente e mais fria
   - Identifique cidade mais úmida e mais seca
   - Classifique o clima de cada cidade
4. **Exiba relatório** completo com análise

## Classificação de Clima

| Amplitude Térmica | Umidade Média | Classificação |
|----------|-----------|---|
| < 8°C | > 70% | Tropical úmido |
| < 8°C | ≤ 70% | Tropical seco |
| 8-15°C | > 70% | Subtropical úmido |
| 8-15°C | ≤ 70% | Subtropical seco |
| > 15°C | > 70% | Temperado úmido |
| > 15°C | ≤ 70% | Temperado seco |

## Entrada

```
numero_cidades
nome_cidade_1 temp_max_1 temp_min_1 umid_max_1 umid_min_1 press_media_1
...
```

## Exemplo de Execução

```bash
Digite o número de cidades: 3

Cidade 1: Rio de Janeiro
Temperatura máxima: 32.5
Temperatura mínima: 24.0
Umidade máxima: 85.0
Umidade mínima: 65.0
Pressão média: 1013.0

Cidade 2: São Paulo
Temperatura máxima: 28.0
Temperatura mínima: 18.0
Umidade máxima: 78.0
Umidade mínima: 55.0
Pressão média: 1015.5

Cidade 3: Fortaleza
Temperatura máxima: 35.0
Temperatura mínima: 27.5
Umidade máxima: 80.0
Umidade mínima: 62.0
Pressão média: 1012.0

=== Análise Climática ===
Rio de Janeiro: ΔT=8.50°C | Umidade média=75.00% | Subtropical úmido
São Paulo: ΔT=10.00°C | Umidade média=66.50% | Subtropical seco
Fortaleza: ΔT=7.50°C | Umidade média=71.00% | Tropical úmido

Cidade mais quente: Fortaleza (35.00°C)
Cidade mais fria: São Paulo (18.00°C)
Cidade mais úmida: Fortaleza (71.00% média)
Cidade mais seca: São Paulo (66.50% média)
```
