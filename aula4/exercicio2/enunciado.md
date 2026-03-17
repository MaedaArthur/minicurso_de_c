# Exercício 2 – Controle de Umidade em Câmara Fria

Uma câmara fria de armazenamento precisa monitorar a umidade relativa em diferentes seções para manter a qualidade dos produtos.

## Problema

Você deve criar um programa que:

1. **Leia o número de sensores de umidade**
2. **Leia a umidade máxima permitida**
3. **Para cada sensor, leia**:
   - Número do sensor
   - Umidade relativa atual (%)
4. **Processe os dados**:
   - Calcule umidade máxima, mínima e média
   - Conte sensores com umidade acima do limite
   - Identifique o sensor mais úmido
5. **Exiba relatório** com avisos de crítico

## Critérios

- **OK**: Umidade ≤ limite
- **AVISO**: Umidade entre limite e limite + 5%
- **CRÍTICO**: Umidade > limite + 5%

## Entrada

```
numero_sensores
limite_umidade
umidade_sensor_1
umidade_sensor_2
...
```

## Exemplo de Execução

```bash
Digite o número de sensores: 4
Digite a umidade máxima permitida (%): 85

Digite a umidade do sensor 1 (%): 78
Digite a umidade do sensor 2 (%): 88
Digite a umidade do sensor 3 (%): 92
Digite a umidade do sensor 4 (%): 80

=== Monitoramento de Umidade ===
Sensor 1: 78.00% [OK]
Sensor 2: 88.00% [AVISO]
Sensor 3: 92.00% [CRÍTICO!]
Sensor 4: 80.00% [OK]

Umidade máxima: 92.00%
Umidade mínima: 78.00%
Umidade média: 84.50%
Sensores em aviso ou crítico: 2
Sensor mais úmido: Sensor 3
```
