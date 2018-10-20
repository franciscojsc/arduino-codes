/*
 *   Desenvolvido por Francisco Chaves.
 *   https://www.franciscochaves.com.br
 */

#define led 13

void setup()
{
    pinMode(led, OUTPUT);
}

void loop()
{
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
}