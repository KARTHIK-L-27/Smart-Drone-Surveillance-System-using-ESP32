#include "esp_camera.h"
#include <WiFi.h>

const char* ssid = "karthikIPS";
const char* password = "12345678";

void setup() {

  Serial.begin(115200);

  WiFi.begin(ssid, password);

  Serial.print("Connecting");

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());

}

void loop()
{

  Serial.println("Drone Surveillance Active");

  delay(2000);

}