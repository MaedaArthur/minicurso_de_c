# Exercício 3 – Monitoramento de Pressão em Tanques de Armazenamento

Uma refinaria precisa monitorar a pressão em múltiplos tanques de armazenamento para garantir segurança.

## Problema

Você deve criar um programa que:

1. **Leia o número de tanques**
2. **Leia a pressão máxima segura**
3. **Para cada tanque, leia**:
   - ID do tanque
   - Pressão atual (bar)
4. **Processe os dados**:
   - Calcule pressão máxima, mínima e média
   - Identifique tanques com pressão crítica (>110% do limite)
   - Identifique tanques com pressão baixa (<70% do limite)
   - Conte tanques em condição normal
5. **Exiba relatório** com recomendações

## Entrada

```
numero_tanques
pressao_maxima_segura
id_tanque_1 pressao_1
...
```

## Exemplo de Execução

```bash
Digite o numero de tanques: 4
Digite a pressão máxima segura (bar): 100

Tanque 1:
ID: T-001
Pressão (bar): 95

Tanque 2:
ID: T-002
Pressão (bar): 115

Tanque 3:
ID: T-003
Pressão (bar): 60

Tanque 4:
ID: T-004
Pressão (bar): 98

=== Monitoramento de Pressão ===
T-001: 95.00 bar [OK]
T-002: 115.00 bar [CRÍTICO - ALIVIAR PRESSÃO]
T-003: 60.00 bar [BAIXO - REABASTECER]
T-004: 98.00 bar [OK]

Estatísticas:
Pressão máxima: 115.00 bar
Pressão mínima: 60.00 bar
Pressão média: 92.00 bar
Tanques normais: 2
Tanques críticos: 1
Tanques com baixa pressão: 1
```
