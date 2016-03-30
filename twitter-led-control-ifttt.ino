/***********************************************************
 * Twitter control of and LED example
 * By John's DIY Playground
 * Video demonstration at http://youtube.com/c/johnsdiyplayground
 * By using If This Then That (IFTTT) we can remotely control a
 * Particle Photon with and LED connected to it on pin D0.
 * To control it, setup IFTTT as specified in the tutorial video'
 * and then to control:
 * Tweet with hashtag #ledon to turn on the LED and
 * tweet hastag #ledoff to turn it off
 * *********************************************************/
 
void setup() {
  pinMode(D0, OUTPUT);
  Spark.function("led_on", led_on);
  Spark.function("led_off", led_off);
}

int led_on(String cmd) {
  digitalWrite(D0, HIGH);
}

int led_off(String cmd) {
  digitalWrite(D0, LOW);
}

void loop() {

}
