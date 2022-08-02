//PIN Declaration
const byte LED_PIN = 13;
const byte PIR_PIN = 2;

void setup()
{
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //Set initial state of LED to off
  digitalWrite(LED_PIN, LOW);
  //Reading signal from PIR
  int signal = digitalRead(PIR_PIN);
  //CHecking if PIR dectect motion
  if(signal == HIGH)
  {
    //Blinking LED and print to Serial monitor
    digitalWrite(LED_PIN,HIGH);
    delay(500); 
    digitalWrite(LED_PIN,LOW);
    delay(500); 
    digitalWrite(LED_PIN,HIGH);
    delay(500); 
    digitalWrite(LED_PIN,LOW);
    Serial.println("There something moving");
    delay(1000); 
  }
  delay(1000); 
}
