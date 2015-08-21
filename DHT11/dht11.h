// FILE: dht11.h
// VERSION: 1.0.5
// PURPOSE: DHT11 Temperature & Humidity Sensor library for Arduino
// LICENSE: GPL v3 (http://www.gnu.org/licenses/gpl.html)

// include the core Wiring API and now Arduino
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
  #else
  #include "WProgram.h"
  #endif

#ifndef dht11_h
#define dht11_h

#define DHT11LIB_VERSION "0.3.2"

class dht11
{
public:
    int read(int pin);
	int humidity;
	int temperature;
};
#endif
//
// END OF FILE
//
