int pin= A5;
float calc=0;
void setup() { 
  pinMode(pin, INPUT); 
  Serial.begin(9600); 
} 
void loop() { 
  calc=(5.0/1023.0)*analogRead(pin); 
  Serial.println(calc); delay(500); 
}
