void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
  int wait_time=1200; //delay time in ms
  digitalWrite(LED_BUILTIN,HIGH);
  delay(wait_time); 
  digitalWrite(LED_BUILTIN,LOW);
  Serial.print("After waiting ");
  Serial.print(wait_time);
  Serial.print(" milliseconds, the LED will turn on...");
  delay(wait_time);
  Serial.println("Blink!");
}
