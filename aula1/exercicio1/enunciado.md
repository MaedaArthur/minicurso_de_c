# Exercício – Cálculo do custo de uma corrida de aplicativo

Um aplicativo de transporte calcula o valor de uma corrida com base nas seguintes informações fornecidas pelo usuário:

- **Distância percorrida (em km)**
- **Tempo da corrida (em minutos)**
- **Taxa base**

O preço final da corrida é calculado pela seguinte fórmula:

preco_final = taxa_base + (distancia × preco_por_km) + (tempo × preco_por_minuto)

Considere os seguintes valores fixos:

- **preco_por_km = 2.50 reais**
- **preco_por_minuto = 0.30 reais**

## Tarefa

Crie um programa em **C** que:

1. Peça ao usuário:
   - a distância da corrida (em km)
   - o tempo da corrida (em minutos)
   - a taxa base da corrida

2. Calcule o **valor total da corrida**.

3. Exiba na tela um **resumo da corrida**, mostrando:
   - distância percorrida
   - tempo da corrida
   - taxa base
   - valor total a pagar

## Requisitos

- Utilize **float** para distância, taxa base e valor total.
- Utilize **int** para o tempo da corrida.
- Utilize **scanf** para ler os dados do usuário.
- Utilize **printf** para mostrar os resultados.

## Exemplo de Execução

**Entrada (texto que você digita):**
```
8.5
15
4.00
```

**Saída esperada (o que o programa imprime):**
```
Digite a distancia da corrida (km): 8.5
Digite o tempo da corrida (min): 15
Digite a taxa base: 4.00



Resumo da corrida
Distancia: 8.50 km
Tempo: 15 minutos
taxa base: R$ 4.00
Valor total da corrida: R$ 29.75
```

## Desafios (extra)

- Implementar desconto de 10% para corridas acima de 20km
- Implementar taxa dinâmica (aumentar taxa em 50% entre 22:00 e 06:00)
- Calcular gorjeta padrão (10%, 15%, 20%) e exibir valor com gorjeta
- Validar que distância e tempo são positivos
- Calcular velocidade média da corrida (km/h)
