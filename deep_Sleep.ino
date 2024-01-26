#include <ESP8266WiFi.h>

//puts your WiFi credentials
const char* ssid = "";
const char* password = "";


void setup() {
  Serial.begin(115200);
  delay(4000);
  
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(2000);
    Serial.println("Connecting to WiFi..");
  }
 
  Serial.println("Connected to the WiFi network");

  pinMode(04,OUTPUT);
  delay(5000);
  
}

void loop() {
  digitalWrite(04,HIGH);
  delay(5000);
  Serial.print("Device is going in deepSleep mode. Need to press the RST key to restarte");
  ESP.deepSleep(0);
  
}
