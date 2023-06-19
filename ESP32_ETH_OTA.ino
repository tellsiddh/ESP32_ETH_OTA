#include "ESP32_ETH_OTA.h"

ESP32_ETH_OTA myServer;

void setup() {
  Serial.begin(115200);
  myServer.begin();  // Initialize the server
}

void loop() {
  myServer.handleClient();  // Handle client requests
}
