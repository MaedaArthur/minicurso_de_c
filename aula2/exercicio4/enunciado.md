# Exercício 4 – Controle de Acesso ao Parque de Diversões

Um parque de diversões possui regras de segurança para cada brinquedo baseadas na idade e altura do visitante.

## Informações de Entrada

- **idade**: idade do visitante (inteiro)
- **altura**: altura do visitante em centímetros (inteiro)
- **brinquedo**: código do brinquedo (1 a 5)

## Brinquedos e Regras

| Código | Brinquedo | Idade Mín. | Altura Mín. | Restrição Extra |
|--------|-----------|-----------|-----------|-----------------|
| 1 | Carrossel | 3 | 80 cm | Nenhuma |
| 2 | Escorregador | 4 | 90 cm | Nenhuma |
| 3 | Montanha-russa | 8 | 120 cm | Nenhuma |
| 4 | Torre de Queda | 12 | 140 cm | Sem problemas cardíacos |
| 5 | Maior Montanha-russa | 14 | 150 cm | Sem problemas cardíacos |

## Informação Adicional

Alguns brinquedos pedem se o visitante tem problemas cardíacos (1 = sim, 0 = não).

## Regras

1. Validar código do brinquedo (1-5)
2. Se não atende à idade mínima: "Voce e muito novo para este brinquedo"
3. Se não atende à altura mínima: "Voce nao atinge a altura minima para este brinquedo"
4. Para brinquedos com restrição cardíaca: "Voce nao pode usar este brinquedo por restricoes medicas"
5. Se tudo válido: "Bem-vindo! Aproveite o brinquedo!"

## Entrada

```
idade
altura
brinquedo
[problemas_cardiacos - se necessário]
```

## Exemplo de Execução

```bash
Digite a idade: 12
Digite a altura (cm): 142
Digite o brinquedo (1-5): 4
Tem problemas cardiacos? (1=sim, 0=nao): 0

Bem-vindo! Aproveite o brinquedo!
```
