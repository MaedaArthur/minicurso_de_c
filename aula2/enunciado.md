# Desafio: Sistema de Controle de Acesso de Laboratório

Um laboratório de pesquisa possui um sistema simples de controle de acesso baseado em regras de segurança.

## Informações de Entrada

Cada pessoa que tenta entrar fornece três informações:

- **idade**: idade da pessoa (inteiro)
- **nivel_acesso**: nível de acesso (inteiro de 1 a 5)
- **codigo_turno**: período do dia

### Códigos de Turno

| Código | Turno |
|--------|-------|
| 1      | Manhã |
| 2      | Tarde |
| 3      | Noite |

## Regras de Acesso

### 1. Menores de 16 anos
**Acesso automaticamente negado.**

### 2. Entre 16 e 17 anos
Acesso permitido **somente se**:
- `nivel_acesso >= 3` **E**
- `codigo_turno != 3` (não pode ser noite)

Caso contrário, ao acesso é **negado**.

### 3. Com 18 anos ou mais
Acesso depende apenas do nível de acesso:

| Nível de Acesso | Permissão |
|--|--|
| 1 | Apenas manhã (turno 1) |
| 2 | Manhã e tarde (turnos 1 e 2) |
| 3 ou mais | Qualquer turno |

### 4. Turno inválido
Se `codigo_turno` não for 1, 2 ou 3, deve exibir: **Turno invalido**


## Entrada

Três inteiros, um por linha:
```
idade
nivel_acesso
codigo_turno
```

## Saída

Uma das seguintes mensagens:
- `ACESSO PERMITIDO`
- `ACESSO NEGADO`
- `Turno invalido`


## Exemplos

### Exemplo 1

**Entrada:**
```
17
3
2
```

**Saída:**
```
ACESSO PERMITIDO
```

Justificativa: Tem 17 anos, nível de acesso 3 (≥3), turno 2 (não é noite).

### Exemplo 2

**Entrada:**
```
15
5
1
```

**Saída:**
```
ACESSO NEGADO
```

Justificativa: Tem 15 anos, o que é menor que 16.

### Exemplo de Execução Completo

**Entrada (texto que você digita):**
```
17
3
2
```

**Saída esperada (o que o programa imprime):**
```
Digite a idade: Digite o nível de acesso: Digite o código do turno: 
ACESSO PERMITIDO
```

---

## Requisitos

Seu programa **obrigatoriamente** deve utilizar:

- Operadores relacionais (`<`, `>`, `<=`, `>=`, `==`, `!=`)
- Operadores lógicos (`&&`, `||`)
- Estruturas de decisão (`if`, `else if`, `else`)
- Um `switch` para tratar os turnos

## Desafios Adicionais (Opcional)

- Implementar horário específico (hora do dia) para validação mais precisa
- Calcular tempo de acesso permitido (quantas horas a pessoa pode ficar)
- Implementar sistema de pontuação de segurança (registrar acessos negados)
- Validar múltiplas tentativas de acesso e gerar relatório
- Adicionar logs detalhados de cada acesso (data, hora, resultado)