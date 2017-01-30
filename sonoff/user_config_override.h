/*****************************************************************************************************\
 * User specific configuration parameters to override user_config.h
 * 
 * ATTENTION: - Changes to most PARAMETER defines will only override flash settings if you change
 *              define CFG_HOLDER. 
 *            - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *            - You still need to update user_config.h for major defines MODULE and USE_MQTT_TLS.
 *            - Changing MODULE defines are not being tested for validity as they are in user_config.h.
 *            - Most parameters can be changed online using commands via MQTT, WebConsole or serial.
 *            - So I see no use in this but anyway, your on your own.
\*****************************************************************************************************/

// Examples
//#ifdef CFG_HOLDER
//#undef CFG_HOLDER
//#endif
//#define CFG_HOLDER             0x20161210

#ifdef STA_SSID1
#undef STA_SSID1
#endif
#ifdef STA_PASS1
#undef STA_PASS1
#endif
#ifdef STA_SSID2
#undef STA_SSID2
#endif
#ifdef STA_PASS2
#undef STA_PASS2
#endif
#define STA_SSID1              "H_DOM"
#define STA_PASS1              ""

//#define STA_SSID2              "H_DOM"
//#define STA_PASS2              ""
#define STA_SSID2              ""
#define STA_PASS2              ""


#ifdef APP_BAUDRATE
#undef APP_BAUDRATE
#endif
#define APP_BAUDRATE           74880       // Default serial baudrate

#undef NTP_SERVER1
#undef NTP_SERVER2
#undef NTP_SERVER3

#define NTP_SERVER1            "0.pl.pool.ntp.org"
#define NTP_SERVER2            "1.pl.pool.ntp.org"
#define NTP_SERVER3            "3.pl.pool.ntp.org"

#undef MQTT_HOST
#undef MQTT_PORT
#undef MQTT_USER
#undef MQTT_PASS
#define MQTT_MAX_PACKET_SIZE 300
#define MQTT_HOST            "192.168.201.1"     // [MqttHost]
#define MQTT_PORT            1883         // [MqttPort] MQTT port (10123 on CloudMQTT)
#define MQTT_USER            "DVES_USER"  // [MqttUser] Optional user
#define MQTT_PASS            "DVES_PASS"  // [MqttPassword] Optional password

