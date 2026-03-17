# Exercício 3 – Classificação de Filmes por Faixa Etária

Um cinema precisa validar se um visitante pode assistir a um filme baseado na sua idade e se possui acompanhante.

## Informações de Entrada

- **idade**: idade do visitante (inteiro)
- **classificacao_filme**: classificação do filme (1 = L, 2 = 10, 3 = 12, 4 = 14, 5 = 16, 6 = 18)
- **tem_acompanhante**: se tem responsável (1 = sim, 0 = não)

Onde:
- **L (Livre)**: qualquer idade
- **10**: maior de 10 anos
- **12**: maior de 12 anos
- **14**: maior de 14 anos
- **16**: maior de 16 anos
- **18**: maior de 18 anos (ou com acompanhante)

## Regras de Acesso

1. Se a classificação é **L**: acesso permitido para qualquer idade
2. Se a classificação é **18**:
   - Permite se idade >= 18
   - OU se idade >= 16 e tem acompanhante
   - Caso contrário, negado
3. Para outras classificações (10, 12, 14, 16):
   - Permite se idade >= classificação
   - OU se idade > (classificação - 2) e tem acompanhante
   - Caso contrário, negado
4. Classificação inválida: exibir erro

## Entrada

```
idade
classificacao_filme
tem_acompanhante
```

## Exemplo de Execução

```bash
Digite a idade: 14
Digite a classificacao do filme (1=L, 2=10, 3=12, 4=14, 5=16, 6=18): 5
Tem acompanhante? (1=sim, 0=nao): 1

ENTRADA PERMITIDA
```
