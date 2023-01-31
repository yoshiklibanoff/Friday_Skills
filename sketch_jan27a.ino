//yoshi klibanoff, fri jan 27, led blink test 
void setup() {
 pinMode(13, OUTPUT);
pinMode (12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);   
  delay(500);                      
  digitalWrite(13, LOW);    
  delay(500);        
  digitalWrite(12, HIGH);   
  delay(1000);                       
  digitalWrite(12, LOW);    
  delay(1000);                       

digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
delay(10);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
}
