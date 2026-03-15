# Exercício – Cálculo do custo de uma corrida de aplicativo

Um aplicativo de transporte calcula o valor de uma corrida com base nas seguintes informações fornecidas pelo usuário:

- **Distância percorrida (em km)**
- **Tempo da corrida (em minutos)**
- **Tarifa base**

O preço final da corrida é calculado pela seguinte fórmula:

preco_final = tarifa_base + (distancia × preco_por_km) + (tempo × preco_por_minuto)

Considere os seguintes valores fixos:

- **preco_por_km = 2.50 reais**
- **preco_por_minuto = 0.30 reais**

## Tarefa

Crie um programa em **C** que:

1. Peça ao usuário:
   - a distância da corrida (em km)
   - o tempo da corrida (em minutos)
   - a tarifa base da corrida

2. Calcule o **valor total da corrida**.

3. Exiba na tela um **resumo da corrida**, mostrando:
   - distância percorrida
   - tempo da corrida
   - tarifa base
   - valor total a pagar

## Requisitos

- Utilize **float** para distância, tarifa base e valor total.
- Utilize **int** para o tempo da corrida.
- Utilize **scanf** para ler os dados do usuário.
- Utilize **printf** para mostrar os resultados.

## Exemplo de execução

```bash

Digite a distancia da corrida (km): 8.5
Digite o tempo da corrida (min): 15
Digite a tarifa base: 4.00

Resumo da corrida
Distancia: 8.50 km
Tempo: 15 minutos
Tarifa base: R$ 4.00
Valor total da corrida: R$ 29.75
```
