/*
 ESP8266 Blink by Idayu Sabri
 Blink LED Using ESP8266 NodeMCU Lua WiFi

 Note that this sketch uses BUILTIN_LED to find the pin with the internal LED
*/

#define BUILTIN_LED 5

void setup() {
  pinMode(BUILTIN_LED, OUTPUT);     // Initialize the BUILTIN_LED pin as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(BUILTIN_LED, LOW);   // Turn the LED on (Note that LOW is the voltage level
                                    // but actually the LED is on; this is because 
                                    // it is acive low on the ESP-01)
  delay(1000);                      // Wait for a second
  digitalWrite(BUILTIN_LED, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(1000);                      // Wait for two seconds (to demonstrate the active low LED)
}
