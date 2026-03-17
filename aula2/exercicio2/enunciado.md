# Exercício 2 – Sistema de Acesso a Biblioteca

Uma biblioteca pública precisa controlar o acesso de visitantes baseado na idade e tipo de cartão de membro.

## Informações de Entrada

Cada visitante fornece:

- **idade**: idade do visitante (inteiro)
- **tipo_cartao**: tipo de cartão (1 = Gold, 2 = Silver, 3 = Bronze, 0 = Sem cartão)
- **horario_acesso**: horário de acesso (1 = Manhã, 2 = Tarde, 3 = Noite)

## Regras de Acesso

### 1. Menores de 12 anos
**Acesso permitido apenas com acompanhante.**
- Se tiver cartão Gold ou Silver: permitido em qualquer horário
- Se tiver cartão Bronze ou sem cartão: permitido apenas durante manhã e tarde

### 2. De 12 a 17 anos
- Cartão Gold: acesso total
- Cartão Silver: acesso permitido em todas as horas
- Cartão Bronze: acesso apenas em manhã e tarde
- Sem cartão: acesso negado

### 3. 18 anos ou mais
- Cartão Gold ou Silver: acesso total
- Cartão Bronze: acesso em qualquer horário
- Sem cartão: acesso apenas durante manhã e tarde

### 4. Horário inválido
Se `horario_acesso` não for 1, 2 ou 3, deve exibir: **Horario invalido**

## Entrada

```
idade
tipo_cartao
horario_acesso
```

## Exemplo de Execução

```bash
Digite a idade: 15
Digite o tipo de cartao (0=Sem, 1=Gold, 2=Silver, 3=Bronze): 2
Digite o horario (1=Manha, 2=Tarde, 3=Noite): 3

ACESSO PERMITIDO
```
