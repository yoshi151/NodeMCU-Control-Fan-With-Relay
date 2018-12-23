
 #define BLYNK_PRINT Serial

 #include <ESP8266WiFi.h>
 #include <BlynkSimpleEsp8266.h>

 char auth[] = "your Blynk token";
 char ssid[] = "your wifi name";
 char pass[] = "your wifi password";
void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);

}

void loop() {
  // put your main code here, to run repeatedly:

  Blynk.run();
}
