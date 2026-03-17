# Exercício 5 – Sistema de Votação com Restrições

Um sistema de votação precisa validar se um cidadão pode votar baseado em sua idade e status de regularidade.

## Informações de Entrada

- **idade**: idade do cidadão (inteiro)
- **esta_regularizado**: situação eleitoral (1 = sim, 0 = não)
- **tipo_voto**: tipo de voto (1 = Presencial, 2 = Remoto, 3 = Ausente)

## Regras de Votação

### 1. Idade

- Menor que 16: **Não pode votar**
- De 16 a 17 anos: **Votação opcional** (só se regularizado)
- De 18 a 70 anos: **Votação obrigatória** (deve estar regularizado)
- Maior que 70 anos: **Votação facultativa** (se regularizado, pode votar)

### 2. Regularização Eleitoral

- Se não regularizado: **Não pode votar** (exibir aviso)
- Se regularizado: pode proceder

### 3. Tipo de Voto

- **Presencial (1)**: Permitido para todos (se elegível)
- **Remoto (2)**: Permitido apenas para maiores de 70 anos
- **Ausente (3)**: Permitido apenas para maiores de 60 anos

## Entrada

```
idade
esta_regularizado
tipo_voto
```

## Saída

Possibilidades:
- "PODE VOTAR"
- "VOTACAO OBRIGATORIA - PROCURE ATE (DATA)"
- "VOTACAO FACULTATIVA"
- "NAO PODE VOTAR"
- "TIPO DE VOTO INCOMPATIVEL COM SUA IDADE"

## Exemplo de Execução

```bash
Digite a idade: 22
Esta regularizado eleitoralmente? (1=sim, 0=nao): 1
Digite o tipo de voto (1=Presencial, 2=Remoto, 3=Ausente): 1

PODE VOTAR
```
