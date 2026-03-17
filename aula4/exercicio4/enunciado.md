# Exercício 4 – Sistema de Ar Condicionado Automático

Um prédio comercial possui múltiplas salas com sistemas de ar condicionado que ajustam automaticamente baseado na temperatura.

## Problema

Você deve criar um programa que:

1. **Leia o número de salas**
2. **Para cada sala, leia**:
   - Número da sala
   - Temperatura atual
   - Temperatura desejada
3. **Processe os dados**:
   - Calcule a diferença de temperatura (atual - desejada)
   - Determine ação do AC: desligar, manutenção, cooling ou heating
4. **Gere relatório** com recomendações

## Lógica de Controle

| Diferença | Ação | Status |
|-----------|------|--------|
| ≤ -2°C | Resfriar (cooling) | ATIVO - COOLING |
| -2 a -0.5°C | Resfriar (cooling suave) | ATIVO - PRE-COOLING |
| -0.5 a 0.5°C | Nenhuma | OK - DESLIGADO |
| 0.5 a 2°C | Aquecer (heating) | ATIVO - PRE-HEATING |
| > 2°C | Aquecer (heating) | ATIVO - HEATING |

## Entrada

```
numero_salas
numero_sala_1 temp_atual_1 temp_desejada_1
...
```

## Exemplo de Execução

```bash
Digite o número de salas: 3

Sala 1:
Número: 101
Temperatura atual (°C): 22.0
Temperatura desejada (°C): 21.0

Sala 2:
Número: 102
Temperatura atual (°C): 18.0
Temperatura desejada (°C): 20.0

Sala 3:
Número: 103
Temperatura atual (°C): 25.0
Temperatura desejada (°C): 20.0

=== Sistema de Ar Condicionado ===
Sala 101: 22.0°C → 21.0°C | ATIVO - PRE-HEATING
Sala 102: 18.0°C → 20.0°C | ATIVO - PRE-COOLING
Sala 103: 25.0°C → 20.0°C | ATIVO - COOLING

Salas do lado seguro: 0
Salas resfriando: 1
Salas aquecendo: 2
```
