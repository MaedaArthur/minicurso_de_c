# Exercício 6 – Leitura de Sensor de Temperatura via ADC

Microcontroladores como o STM32 e o Arduino possuem um conversor analógico-digital (ADC) que transforma tensões analógicas em valores inteiros. Um uso muito comum é conectar um sensor de temperatura LM35, que gera **10 mV a cada grau Celsius**.

Com um ADC de **10 bits** e tensão de referência de **5V**, a conversão funciona assim:

```
Tensão (V)      = raw * 5.0 / 1023.0
Temperatura (°C) = Tensão * 100.0
```

## Problema

Escreva um programa que simule a leitura de `N` amostras do ADC e, para cada amostra, calcule a tensão e a temperatura correspondentes.

Você deve criar **duas funções**:

1. **`converter_adc()`**: recebe o valor bruto do ADC e retorna, via **ponteiros**, a tensão em volts e a temperatura em °C.
2. **`exibir_leitura()`**: recebe o índice da amostra, o valor bruto, a tensão e a temperatura, e exibe os resultados formatados.

## Entrada

```
numero_de_amostras
[para cada amostra]
valor_bruto_adc
```

Onde `valor_bruto_adc` é um inteiro entre 0 e 1023.

## Exemplo de Execução

```
Digite o numero de amostras: 3
Amostra 1 - valor ADC (0-1023): 204
Amostra 2 - valor ADC (0-1023): 512
Amostra 3 - valor ADC (0-1023): 921

=== Leituras do Sensor LM35 ===
Amostra 1: ADC=204  | Tensao=0.997V | Temperatura=99.7°C
Amostra 2: ADC=512  | Tensao=2.501V | Temperatura=250.1°C
Amostra 3: ADC=921  | Tensao=4.501V | Temperatura=450.1°C
```

## Requisitos

- Criar a função `converter_adc()` usando **ponteiros** para retornar tensão e temperatura
- Criar a função `exibir_leitura()` para imprimir cada resultado
- Usar `float` para os cálculos de tensão e temperatura
- Não fazer os cálculos diretamente no `main()` — delegar para as funções
