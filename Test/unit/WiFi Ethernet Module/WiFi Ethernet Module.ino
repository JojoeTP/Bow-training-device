#define BLYNK_PRINT Serial
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>
#include <BlynkApiArduino.h>
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "t_S8iNAWV6BNB6_K9_ybEKWRkls3xxR3";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Homechill";
char pass[] = "Homechill117";


#include <SoftwareSerial.h>
SoftwareSerial EspSerial(0, 1); // RX, TX

// Your ESP8266 baud rate:
#define ESP8266_BAUD 9600


ESP8266 wifi(&EspSerial);

void setup()
{
  // Debug console
  Serial.begin(9600);

  // Set ESP8266 baud rate
  EspSerial.begin(ESP8266_BAUD);
  delay(10);

  Blynk.begin(auth, wifi, ssid, pass);
}

void loop()
{
  Blynk.run();
}

