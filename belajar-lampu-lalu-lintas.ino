int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
int LED7 = 7;
int LED8 = 6;

void setup() {
   pinMode (LED1, OUTPUT);
   pinMode (LED2, OUTPUT);
   pinMode (LED3, OUTPUT);
   pinMode (LED4, OUTPUT);
   pinMode (LED5, OUTPUT);
   pinMode (LED6, OUTPUT);
   pinMode (LED7, OUTPUT);
   pinMode (LED8, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);  // turn on LED1
  delay(10);                // wait for 200ms
  digitalWrite(LED2, HIGH);  // turn on LED2
  delay(15);                // wait for 200ms
  digitalWrite(LED3, HIGH);  // turn on LED3
  delay(10);                // wait for 200ms
  digitalWrite(LED4, HIGH);  // turn on LED4
  delay(15);                // wait for 200ms
  digitalWrite(LED5, HIGH);  // turn on LED5
  delay(10);                // wait for 200ms
  digitalWrite(LED6, HIGH);  // turn on LED6
  delay(15);                   // wait for 200ms
  digitalWrite(LED7, HIGH);  // turn on LED7
  delay(10);                 // wait for 200ms
  digitalWrite(LED8, HIGH);  // turn on LED8
  delay(15);                 // wait for 200ms
  digitalWrite(LED1, LOW);   // turn of LED1
  delay(15);                 // wait for 300ms
  digitalWrite(LED2, LOW);   // turn of LED2
  delay(10);                // wait for 300ms
  digitalWrite(LED3, LOW);   // turn of LED3
  delay(15);                // wait for 300ms
  digitalWrite(LED4, LOW);   // turn of LED4
  delay(10);                //wait for 300ms
  digitalWrite(LED5, LOW);  // turn of LED5
  delay(15);                // WAIT FOR 300ms
  digitalWrite(LED6, LOW);  // turn of LED6
  delay(10);                // WAIT FOR 300ms
  digitalWrite(LED7, LOW);  // turn of LED7
  delay(10);                // WAIT FOR 300ms
   digitalWrite(LED8, LOW);  // turn of LED8
  delay(10);                // WAIT FOR 300ms
  
}
