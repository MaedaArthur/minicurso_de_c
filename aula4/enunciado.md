# Desafio: Sistema de Monitoramento de Sensores de Temperatura em Transformador

## Contexto

Um transformador elétrico possui múltiplos sensores de temperatura distribuídos em diferentes pontos (núcleo, bobinas, óleo isolante, etc). É necessário monitorar esses sensores para garantir que o transformador não ultrapasse temperaturas críticas.

## Problema

Você deve criar um programa que:

1. **Leia o número de sensores** instalados no transformador
2. **Leia a temperatura máxima permitida** (limite de segurança)
3. **Leia as temperaturas** de cada sensor em graus Celsius
4. **Processe os dados** e calcule:
   - Temperatura máxima registrada
   - Temperatura mínima registrada
   - Temperatura média
   - Quantos sensores estão acima do limite
   - Localização (número) do sensor mais quente

5. **Exiba um relatório detalhado** com aviso de segurança se necessário

## Entrada

```
numero_sensores
temperatura_maxima_permitida
temperatura_sensor_1
temperatura_sensor_2
...
temperatura_sensor_n
```

## Exemplo de Execução

```bash
Digite o número de sensores: 6
Digite a temperatura máxima permitida (°C): 80
Digite a temperatura do sensor 1 (°C): 65
Digite a temperatura do sensor 2 (°C): 72
Digite a temperatura do sensor 3 (°C): 85
Digite a temperatura do sensor 4 (°C): 78
Digite a temperatura do sensor 5 (°C): 91
Digite a temperatura do sensor 6 (°C): 70

=== Relatório de Monitoramento ===
Sensor 1: 65.00°C [OK]
Sensor 2: 72.00°C [OK]
Sensor 3: 85.00°C [CRÍTICO!]
Sensor 4: 78.00°C [OK]
Sensor 5: 91.00°C [CRÍTICO!]
Sensor 6: 70.00°C [OK]

=== Estatísticas ===
Temperatura máxima: 91.00°C (Sensor 5)
Temperatura mínima: 65.00°C (Sensor 1)
Temperatura média: 76.83°C
Sensores acima do limite: 2

⚠️  AVISO DE SEGURANÇA: 2 sensores detectaram temperatura crítica!
Ação recomendada: Reduzir carga ou aumentar refrigeração.
```

## Requisitos Obrigatórios

- Utilizar um **array de floats** para armazenar as temperaturas
- Utilizar um **loop** para ler os dados dos sensores
- Utilizar outro **loop** para processar e analisar os dados
- Encontrar o máximo, mínimo e calcular a média do array
- Contar elementos acima de um valor limite
- Encontrar a posição do máximo valor
- Validar que o número de sensores é positivo
- Usar `printf` e `scanf` para entrada/saída

## Desafios Adicionais (Opcional)

- Implementar um sistema de alerta com níveis (Verde: < 70°C, Amarelo: 70-80°C, Vermelho: > 80°C)
- Calcular quantos sensores estão em "zona de alerta" (75-80°C)
- Encontrar a diferença de temperatura entre o sensor mais quente e mais frio
- Implementar ordenação do array para exibir sensores em ordem de criticidade
