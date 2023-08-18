
/*
  Radio FM Tea5767
  Projeto desenvolvido por Elismar S S
  26 de janeiro de 2023


*/

/*

     ligações do Modulo Tea5767

           Arduino Uno
          ______________
           SDA ----> A4
           SCL ----> A5
           VCC ----> 5V
           GND ----> GND
          ______________

*/




#include <Wire.h>
#include <TEA5767Radio.h>

const int  btnEsq = 2;
const int  btnDir = 3;
const int  ledGreen = 5;
const int  ledRed   = 7;



TEA5767Radio radio = TEA5767Radio();

float estacao[25] = {87.1, 89.1, 89.9, 90.5, 91.1, 91.7, 92.3, 93.7, 94.5,
                     95.3, 96.9, 97.5, 98.7, 99.3, 100.9, 101.3, 101.7,         // frequencia das Radios de Brasilia
                     102.7, 103.1, 103.3, 104.1, 105.5, 106.3, 107.9, 108.0,
                    };


int cont = 0;

int estadoBtnEsq ;
int estadoBtnDir;


void radioFM();



void setup()
{
  pinMode(btnEsq, INPUT_PULLUP);
  pinMode(btnDir, INPUT_PULLUP);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);

  Wire.begin();
  Serial.begin(9600);

  digitalWrite(ledGreen, 1);
  digitalWrite(ledRed, 1);
}

void loop() 
{

  radioFM();

}


void radioFM() 
{



  estadoBtnEsq = digitalRead(btnEsq);
  estadoBtnDir = digitalRead(btnDir);

  if (!estadoBtnEsq) {
    cont++;
    delay(100);

  }

  if (!estadoBtnDir) {
    cont--;
    delay(100);
  }
  if (cont < 0) {
    cont = 0;
  } else if (cont > 25) {
    cont = 25;
  }

  radio.setFrequency(estacao[cont]);
  Serial.print(estacao[cont]);
  Serial.println(" MHz");
  delay(800);


}
