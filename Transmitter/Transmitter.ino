#include <VirtualWire.h>

char msg[4];

void setup() {
  Serial.begin(9600);
  vw_set_ptt_inverted(true);
  vw_setup(2000);
  vw_set_tx_pin(12);
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
}

void loop() {
  digitalWrite(10, LOW);
  delayMicroseconds(10);
  digitalWrite(10, HIGH);
  delayMicroseconds(10);
  digitalWrite(10, LOW);

  long duration = pulseIn(9, HIGH);
  long distance = (duration * 0.034) / 2;

  Serial.print("Distance from object: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(100);

  itoa(distance, msg, 10);

  vw_send((uint8_t*)msg, sizeof(distance));
  delay(100);
}