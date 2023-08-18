# Rádio FM com TEA5767 e Arduino

Este é um projeto de rádio FM utilizando o módulo TEA5767 e um Arduino. O projeto permite sintonizar estações de rádio FM em diferentes frequências.

## Visão Geral

O projeto utiliza o módulo TEA5767 para sintonizar as estações de rádio FM. O controle é feito por meio de botões que permitem navegar pelas frequências das estações.

## Ligações do Módulo TEA5767

As conexões entre o módulo TEA5767 e o Arduino são as seguintes:

- SDA ----> A4
- SCL ----> A5
- VCC ----> 5V
- GND ----> GND

## Componentes Utilizados

- Arduino Uno
- Módulo TEA5767
- Botões (Esquerda e Direita)
- LEDs (Verde e Vermelho)

## Biblioteca

Este projeto utiliza a biblioteca TEA5767, que está disponível nas bibliotecas padrão do Arduino. Portanto, não é necessário fazer o download da biblioteca separadamente.

## Funcionamento

O projeto utiliza os botões para navegar pelas estações de rádio disponíveis. A frequência das estações é armazenada no array `estacao[]`. Os LEDs indicam o estado do projeto: o LED Verde indica que o rádio está ligado, e o LED Vermelho indica a estação sintonizada.

## Instruções

1. Conecte o módulo TEA5767 ao Arduino conforme descrito nas ligações.
2. Conecte os botões e LEDs de acordo com as especificações.
3. Carregue o código do projeto no Arduino.
4. Execute o projeto e utilize os botões para navegar pelas estações de rádio.

## Observações

- Este projeto foi criado para fins de aprendizado e demonstração.
- Certifique-se de ajustar as estações de rádio no array `estacao[]` de acordo com suas necessidades.

## Créditos

Autor: Elismar Silva
