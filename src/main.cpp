#include <Arduino.h>

// Deklarasi pin LED
// Mendeklarasikan variabel konstanta integer unutuk menyimpan nomor pin LED
const int ledpin = 8;
const int ledpinkuning = 9;
const int ledpinhijau = 10;

void setup() {

  // Mengatur pin-pin yang dihubungkan ke LED sebagai output.
  // Hal ini berarti pin-pin tersebut dapat digunakan untuk mengendalikan LED.
pinMode(ledpin, OUTPUT);
pinMode(ledpinkuning, OUTPUT);
pinMode(ledpinhijau, OUTPUT);
}

void loop() {
  // LED Merah
  // Menyalakan LED Merah selama 2 detik, kemudian mematikannya
digitalWrite(ledpin, HIGH);
delay(2000);
digitalWrite(ledpin, LOW);

  //LED Kuning
  // Menyalakan LED Merah selama 2 detik, kemudian mematikannya

digitalWrite(ledpinkuning, HIGH);
delay(2000);
digitalWrite(ledpinkuning, LOW);

  // LED Hijau
  // Menyalakan LED Merah selama 2 detik, kemudian mematikannya

digitalWrite(ledpinhijau, HIGH);
delay(2000);
digitalWrite(ledpinhijau, LOW);

}
