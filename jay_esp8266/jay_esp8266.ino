



#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "sz_a4FA-WU_QlGX2tRaUZ9dETqT9Tdan";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "vivo 1727";
char pass[] = "jay12345";


void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
