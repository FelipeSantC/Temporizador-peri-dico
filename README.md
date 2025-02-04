# Programa para Controle de LEDs com o Raspberry Pi Pico

Este programa controla uma sequência de LEDs conectados ao Raspberry Pi Pico, acendendo-os de forma sequencial com um intervalo de 3 segundos. Cada LED fica aceso por 3 segundos antes de apagar e acionar o próximo na sequência. Após a sequência completa de LEDs, o ciclo é reiniciado.

## Requisitos

- **Raspberry Pi Pico** ou qualquer microcontrolador compatível com a biblioteca `pico/stdlib.h`.
- **Ambiente de desenvolvimento C** configurado com o SDK do Raspberry Pi Pico.
- Um conjunto de LEDs conectados aos pinos GPIO 11 a 13.

## Arquivo Principal

O código principal está no arquivo `main.c` e faz o seguinte:

- Controla os LEDs conectados aos pinos GPIO 11, 12 e 13.
- O programa faz o ciclo dos LEDs com um intervalo de 3 segundos entre cada LED.
- Cada LED acende por 3 segundos, sendo apagado e acionado o próximo.
- O ciclo é repetido indefinidamente.
  
## Funcionalidade

- **Controle de LEDs**: O programa acende o LED conectado no pino 11, depois no pino 12, e finalmente no pino 13. Quando o LED do pino 13 é acionado, o ciclo recomeça no LED do pino 11.
  
- **Timer de 3 segundos**: A cada 3 segundos, um novo LED é acionado.

- **Impressão no Terminal**: A cada 1 segundo, o programa imprime a mensagem `Marca de Xs`, onde `X` é o número de segundos que o programa está em execução.


