# ESP32_ETH_OTA

ESP32_ETH_OTA is a library for ESP32 that provides a simple login system and server functionality over Ethernet.

## Features
Built-in login page with customizable username and password.
Handles both GET and POST requests.
Supports file uploads and software updates.
Provides a customizable server index page.
Ethernet connectivity, utilizing the ETH library for ESP32.
mDNS support.

## Usage
To use the SimpleLoginETHServer library, include the header file in your sketch and create an instance of the SimpleLoginETHServer class. You can then call the begin method in your setup function and handleClient in your loop function.

## Hardware Required
ESP32

LAN 8720 Phy Ethernet Board

## Connections
LAN 8720 pin out - ESP32

VCC - 3V3

GND - GND

MDIO - 18

MDC - 23

RETCLK/nINT - 17

CRS - 27

RX0 - 25

RX1 - 26

TX_EN - 21

TX0 - 19

TX1 - 22

NC - None

## Here's a basic example:

```
#include "SimpleLoginETHServer.h"

SimpleLoginETHServer myServer;

void setup() {
  myServer.begin("admin", "admin", "esp32");  // Initialize the server with the username, password, and host
}

void loop() {
  myServer.handleClient();  // Handle client requests
}
```

The username and password are used for the login system. The host name is used for the mDNS responder, which allows you to access the ESP32 by name in your local network.

## Dependencies
ETH

WiFi

WiFiClient

WebServer

ESPmDNS

Update

## Installation
To install the SimpleLoginETHServer library, you can download the latest release from the GitHub repository and install it in your Arduino IDE. Then, include SimpleLoginETHServer.h in your Arduino sketch.

## TO-DO
1. Add comments in the code

~~2. Add connection circuit in readme~~

3. Add Login Rate Limiting to preven brute forcing

4. Add user defined host name, username and password

5. Add HTTPS instead of HTTP

6. Add password hashing

7. Authenticate Firmware before OTA