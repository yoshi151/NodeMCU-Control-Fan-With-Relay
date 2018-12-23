
 #define BLYNK_PRINT Serial

 #include <ESP8266WiFi.h>
 #include <BlynkSimpleEsp8266.h>

 char auth[] = "5fb37755cfce483c9e17e3afd2073cd8";
 char ssid[] = "yoshi51";
 char pass[] = "pannawish";
void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);

}

void loop() {
  // put your main code here, to run repeatedly:

  Blynk.run();
}
