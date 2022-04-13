//Himno de Alegría en ARDUINO
//Bases de las frecuencuas por: Elena Chong . Gracias
//https://github.com/tinkerall/Tutorial/blob/master/EP13buzzerPasivo_simplePractica/EP13buzzerPasivo_simplePractica.ino
//Web de las frecuencuas para las notas: https://pages.mtu.edu/~suits/notefreqs.html
//Uso la 4a escala, pero pueden agregar todas las que quieran.
//Conectar el Buzzer Pasivo en el PIN 3
//Author: Mailer Martínez

int pBuzzer = 3;       // pin del buzzer pasivo
int medio = 1000 / 2;  // tiempo de 1/4 de la nota
int cuarto = 1000 / 4; // tiempo de 1/4 de la nota
int octavo = 1000 / 8; // tiempo de 1/8 de la nota
double pausa = 1.30;   // pausar el 30% de la nota

int NOTA_C4 = 262; // Frecuencia de la nota C4 es 262Hz
int NOTA_D4 = 293;
int NOTA_E4 = 329;
int NOTA_F4 = 349;
int NOTA_G4 = 392;
int NOTA_A4 = 440;
int NOTA_B4 = 494;

void setup()
{
    // put your setup code here, to run once:
    pinMode(pBuzzer, OUTPUT);
}

void loop()
{
    for (int i = 0; i < 2; i++)
    {
        // put your main code here, to run repeatedly:
        tone(pBuzzer, NOTA_E4, medio);  // un cuarto de la nota C4.
        delay(cuarto * pausa);          // silenciar por una duración de la nota previa + 30% de la duración de esa nota
        tone(pBuzzer, NOTA_F4, octavo); // un cuarto de la nota A4.
        delay(cuarto * pausa);          // silenciar por una duración de la nota previa + 30% de la duración de esa nota
        tone(pBuzzer, NOTA_G4, cuarto); // un cuarto de la nota E5.
        delay(cuarto * pausa);          // silenciar por una duración de la nota previa + 30% de la duración de esa nota
        tone(pBuzzer, NOTA_G4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_F4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_E4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_D4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_C4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_C4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_D4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_E4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_E4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_D4, cuarto);
        delay(cuarto * pausa);
        tone(pBuzzer, NOTA_D4, cuarto);
        delay(cuarto * pausa);
        delay(1000);
    }

    tone(pBuzzer, NOTA_G4, medio);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_E4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_C4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_D4, cuarto);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_E4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_F4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_E4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_C4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_E4, cuarto);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_E4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_F4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_E4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_D4, octavo);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_C4, cuarto);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_E4, cuarto);
    delay(cuarto * pausa);
    tone(pBuzzer, NOTA_G4, medio);
    delay(cuarto * pausa);

    delay(1000);

}
