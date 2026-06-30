#define LED_1 2   // Blue 
#define LED_2 18   // Red 
#define LED_3 21  // White 
void setup() { 
pinMode(LED_1, OUTPUT); 
pinMode(LED_2, OUTPUT);  
pinMode(LED_3, OUTPUT); 
} 
void loop() { 
// All Dim (100) 
analogWrite(LED_1, 100); 
analogWrite(LED_2, 100); 
analogWrite(LED_3, 100); 
delay(1000); 
// All Bright (255) 
analogWrite(LED_1, 255); 
analogWrite(LED_2, 255); 
analogWrite(LED_3, 255); 
delay(1000); 
}
