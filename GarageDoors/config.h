/*   
 * GarHAge
 * a Home-Automation-friendly ESP8266-based MQTT Garage Door Controller
 * Licensed under the MIT License, Copyright (c) 2017 marthoc
 * 
 * User-configurable Parameters 
*/

// Wifi Parameters

#define WIFI_SSID "your-ssid-name"
#define WIFI_PASSWORD "your-ssid-password"

// Static IP Parameters

#define STATIC_IP false
#define IP 192,168,1,100
#define GATEWAY 192,168,1,1
#define SUBNET 255,255,255,0

// MQTT Parameters

#define MQTT_BROKER "w.x.y.z"
#define MQTT_CLIENTID "GarHAge"
#define MQTT_USERNAME "your-mqtt-username"
#define MQTT_PASSWORD "your-mqtt-password"

// Relay Parameters
#define ACTIVE_HIGH_RELAY true

// sensor Parameters check the pins for real!
#define DOOR1_OPEN_SENSOR D3
#define DOOR1_CLOSE_SENSOR D4
#define DOOR2_OPEN_SENSOR D6
#define DOOR2_CLOSE_SENSOR D8

// Door 1 Parameters

#define DOOR1 1
#define DOOR1_SENSOR_OPEN_ALIAS "Door 1 OPEN Sensor"
#define DOOR1_SENSOR_CLOSE_ALIAS "Door 1 CLOSE Sensor"
#define MQTT_DOOR1_ACTION_TOPIC "garage/door/1/action"
#define MQTT_DOOR1_STATUS_TOPIC "garage/door/1/status"
#define MQTT_DOOR1_STATUS_OPEN_TOPIC "garage/door/1/opensensor"
#define MQTT_DOOR1_STATUS_CLOSE_TOPIC "garage/door/1/closesensor"
#define DOOR1_OPEN_PIN D1
#define DOOR1_CLOSE_PIN D2
#define DOOR1_STATUS_SWITCH_LOGIC "NO"

// Door 2 Parameters

#define DOOR2 2
#define DOOR2_ALIAS "Door 2"
#define DOOR2_SENSOR_OPEN_ALIAS "Door 2 OPEN Sensor"
#define DOOR2_SENSOR_CLOSE_ALIAS "Door 2 CLOSE Sensor"
#define MQTT_DOOR2_ACTION_TOPIC "garage/door/2/action"
#define MQTT_DOOR2_STATUS_TOPIC "garage/door/2/status"
#define MQTT_DOOR2_STATUS_OPEN_TOPIC "garage/door/2/opensensor"
#define MQTT_DOOR2_STATUS_CLOSE_TOPIC "garage/door/2/closesensor"
#define DOOR2_OPEN_PIN D5
#define DOOR2_CLOSE_PIN D6
#define DOOR2_STATUS_SWITCH_LOGIC "NO"

