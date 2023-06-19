#ifndef ESP32_ETH_OTA_h
#define ESP32_ETH_OTA_h

#include <ETH.h>
#include <WiFiAP.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>
#include <Update.h>

#define ETH_CLK_MODE ETH_CLOCK_GPIO17_OUT
#define ETH_POWER_PIN -1
#define ETH_TYPE ETH_PHY_LAN8720
#define ETH_ADDRESS 1
#define ETH_MDC_PIN 23
#define ETH_MDIO_PIN 18

class ESP32_ETH_OTA {
public:
  ESP32_ETH_OTA();
  static ESP32_ETH_OTA* instance;  // Add static keyword
  static bool eth_connected;              // Declare as static

  void begin();
  void handleClient();
private:
  void handleRoot();
  void handleServerIndex();
  void handleUpdatePOST();
  void handleUpdateUpload();
  void WiFiEvent(arduino_event_id_t event, arduino_event_info_t info);
  WebServer server;
  const char* host;
  const char* loginIndex;
  const char* serverIndex;
};

#endif
