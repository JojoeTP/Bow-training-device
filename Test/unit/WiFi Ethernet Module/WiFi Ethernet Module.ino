#define BLYNK_PRINT Serial
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>

char auth[] = "t_S8iNAWV6BNB6_K9_ybEKWRkls3xxR3";

char ssid[] = "Homechill";
char pass[] = "Homechill117";

#include <SoftwareSerial.h>
SoftwareSerial EspSerial(3, 2); // RX, TX

#define ESP8266_BAUD 38400
ESP8266 wifi(&EspSerial);

WidgetTerminal Terminal(V0);

BlynkTimer timer;

int degree;

void setup() {
  Serial.begin(9600);

  EspSerial.begin(ESP8266_BAUD);
  delay(10);

  Blynk.begin(auth, wifi, ssid, pass);

  Terminal.clear();
  Terminal.println("Wifi Connected");
  Terminal.flush();
}



void loop() {
    degree = random(1,90);
  Blynk.run();
  Blynk.virtualWrite(V1, degree);
}

