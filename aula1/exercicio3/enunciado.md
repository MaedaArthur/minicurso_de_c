# Exercício 3 – Cálculo de Frete e Entrega

Uma transportadora precisa calcular o valor do frete de uma encomenda baseado no peso e distância.

## Estrutura de Valores

O frete é composto por:

- **Peso da encomenda** (em kg - fornecido pelo usuário)
- **Distância** (em km - fornecida pelo usuário)
- **Tarifa por kg**: R$ 5.00
- **Tarifa por km**: R$ 2.50
- **Taxa de manuseio**: R$ 20.00 (fixa)

O valor total é calculado por:

valor_frete = (peso × tarifa_por_kg) + (distancia × tarifa_por_km) + taxa_manuseio

## Tarefa

Crie um programa em **C** que:

1. Leia o **peso da encomenda** (em kg)
2. Leia a **distância de entrega** (em km)
3. Calcule:
   - Valor por peso
   - Valor por distância
   - Valor total com taxa
4. Exiba um **comprovante de frete** detalhado

## Requisitos

- Utilize **float** para peso, distância e valores
- Utilize **scanf** para ler dados
- Utilize **printf** com 2 casas decimais
- Nenhum condicional ou desvio de fluxo

## Exemplo de Execução

```bash
Digite o peso da encomenda (kg): 15.5
Digite a distância de entrega (km): 45.0

=== Comprovante de Frete ===
Peso: 15.50 kg
Distância: 45.00 km

Valor por peso (R$ 5.00/kg): R$ 77.50
Valor por distância (R$ 2.50/km): R$ 112.50
Taxa de manuseio: R$ 20.00

Valor total do frete: R$ 210.00
```
