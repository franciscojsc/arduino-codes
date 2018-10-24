/*
 *   Desenvolvido por Francisco Chaves.
 *   https://www.franciscochaves.com.br
 */

#define botao 10
#define led 13


byte estado = 0; 


void setup()
{
    pinMode(botao, INPUT);
    pinMode(led, OUTPUT);
}


void loop()
{ 
    if(digitalRead(botao)){
        delay(50);
        estado = !estado;
        digitalWrite(led, estado);
    }
}