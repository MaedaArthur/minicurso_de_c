# 🎓 Minicurso de Programação em C

Bem-vindo ao **Minicurso de Programação em Linguagem C**! Este repositório contém material educacional completo com enunciados de exercícios desafiadores e soluções práticas.

## 📋 Sobre o Repositório

Este repositório foi desenvolvido como **material institucional do PETEEL - Programa de Educação Tutorial em Engenharia Elétrica (UFSC)**, com o objetivo de proporcionar aos alunos uma formação sólida em programação C, com exercícios contextualizados na área de **Engenharia Elétrica**.

Os exercícios foram cuidadosamente elaborados para cobrir os fundamentos da linguagem C, desde conceitos básicos até tópicos avançados como funções e ponteiros, sempre relacionados a aplicações reais em sistemas elétricos.

## 🎯 Objetivos do Minicurso

- ✅ Dominar os fundamentos da linguagem C
- ✅ Compreender variáveis, tipos de dados e operadores
- ✅ Desenvolver lógica de programação com estruturas de decisão e repetição
- ✅ Trabalhar com arrays e estruturas de armazenamento
- ✅ Implementar funções modularizadas
- ✅ Utilizar ponteiros efetivamente
- ✅ Aplicar conceitos em problemas reais de Engenharia Elétrica

## 📚 Estrutura do Curso

O minicurso é organizado em **5 aulas progressivas**, cada uma com enunciados detalhados e soluções completas:

### 📌 Aula 1 - Constantes, Variáveis e Tipos de Dados
- **Tema**: Cálculo do custo de uma corrida de aplicativo
- **Conceitos**: Variáveis, tipos de dados (int, float), entrada/saída (scanf, printf)
- **Arquivo**: `aula1/`

### 📌 Aula 2 - Operadores e Estruturas de Decisão
- **Tema**: Sistema de controle de acesso em laboratório
- **Conceitos**: Operadores relacionais e lógicos, if/else, switch
- **Arquivo**: `aula2/`

### 📌 Aula 3 - Estruturas de Repetição
- **Tema**: Análise de corrente elétrica em circuito resistivo
- **Conceitos**: Loops (for, while, do-while), Lei de Ohm, estatísticas
- **Arquivo**: `aula3/`

### 📌 Aula 4 - Estruturas de Armazenamento (Arrays)
- **Tema**: Sistema de monitoramento de sensores em transformador
- **Conceitos**: Arrays, busca de máximo/mínimo, processamento de dados
- **Arquivo**: `aula4/`

### 📌 Aula 5 - Funções e Ponteiros
- **Tema**: Análise de potência em sistema trifásico com compensação de FP
- **Conceitos**: Funções, ponteiros, biblioteca matemática (math.h)
- **Arquivo**: `aula5/`

## 🚀 Como Usar Este Repositório

### Para Alunos

1. **Acesse o enunciado** da aula que deseja realizar:
   ```bash
   cat aulaX/enunciado.md
   ```

2. **Leia o problema** com cuidado, compreendendo os requisitos obrigatórios

3. **Desenvolva sua solução** em um arquivo C próprio

4. **Compile seu código**:
   ```bash
   gcc -Wall -Wextra -std=c99 seu_arquivo.c -o seu_programa
   ```
   (Se usar math.h, adicione `-lm` no final)

5. **Teste com os exemplos** fornecidos no enunciado

6. **Consulte a solução** em `aulaX/solucao.c` para comparar e aprender

### Compilação Rápida

Para compilar todas as soluções de uma vez:
```bash
cd /home/arthur/minicurso_c
gcc -Wall -Wextra -o aula1/solucao aula1/solucao.c
gcc -Wall -Wextra -o aula2/solucao aula2/solucao.c
gcc -Wall -Wextra -std=c99 -o aula3/solucao aula3/solucao.c
gcc -Wall -Wextra -std=c99 -o aula4/solucao aula4/solucao.c
gcc -Wall -Wextra -std=c99 -o aula5/solucao aula5/solucao.c -lm
```

### Executar uma Solução

```bash
./aulaX/solucao
```

## 🔧 Requisitos de Sistema

- **Compilador C**: GCC (instalado na maioria das distribuições Linux)
- **Biblioteca Padrão C**: glibc
- **Bash** ou outro terminal Unix/Linux

### Instalação (se necessário)

**Ubuntu/Debian**:
```bash
sudo apt-get update
sudo apt-get install build-essential
```

**Fedora/RHEL**:
```bash
sudo dnf install gcc gcc-c++ make
```

## 📝 Sobre os Exercícios

Todos os exercícios possuem:

✓ **Enunciado detalhado** em Markdown  
✓ **Contexto realista** em Engenharia Elétrica  
✓ **Requisitos obrigatórios** claros  
✓ **Exemplo(s) de execução** com entrada e saída esperada  
✓ **Desafios adicionais (opcional)** para praticantes avançados  
✓ **Solução comentada** para referência  

## 👥 Créditos

Este material foi desenvolvido pelo **PETEEL - Programa de Educação Tutorial em Engenharia Elétrica** da **Universidade Federal de Santa Catarina (UFSC)**.

**Material Desenvolvido por**: Arthur Maeda  
**Instituição**: PETEEL UFSC  
**Data**: Março de 2026  
**Turma**: Turma 2

---

## 📜 Licença e Uso

Este é **material institucional** destinado **exclusivamente ao uso educacional**. Os exercícios e soluções foram preparados para fins didáticos, a fim de auxiliar na formação de engenheiros eletricistas que também dominem programação.

Você está encorajado a:
- ✅ Estudar os enunciados e soluções
- ✅ Modificar e adaptar os exercícios
- ✅ Compartilhar com colegas da UFSC
- ✅ Usar como base para seus projetos

## 🤝 Contribuições

Se você encontrou erros, bugs ou sugestões de melhorias, entre em contato com o PETEEL UFSC ou abra uma issue neste repositório.

## 📞 Contato

Para dúvidas, sugestões ou contribuições:
- **PETEEL UFSC**: Consulte o site ou entre em contato via GitHub

---

## 🎉 Boas-Vindas!

Bem-vindo a este minicurso! Esperamos que este material sirva como uma ponte eficaz entre a teoria aprendida em aula e a prática de programação. 

**Programação em C é uma habilidade essencial** para qualquer engenheiro eletricista moderno. Este curso foi desenhado para preparar você não apenas com a sintaxe da linguagem, mas com **pensamento computacional aplicado à engenharia elétrica**.

Desejamos muito sucesso em seus estudos! 🚀

---

**PETEEL UFSC** © 2026 - Material Institucional para Fins Educacionais
