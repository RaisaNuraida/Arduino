int pinLED = 13;
int pinLED = 12;
int pinLED = 11;
int pinLED = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode (pinLED, OUTPUT); // Menyiapkan LED siap berkerja
  Serial.begin(9600); // Menyiapkan Serial Monitor
  Serial.println("Alat menyala dan siap digunakan !");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (pinLED, HIGH); // Mematikan LED Board Arduino
  Serial.println("Lampu Nyala");
  delay (50) ; 
  digitalWrite (pinLED, LOW); // Menyalakan LED Board Arduino
  Serial.println("Lampu Mati");
  delay (50) ; 
  digitalWrite (pinLED, HIGH); // Mematikan LED Board Arduino
  Serial.println("Lampu Nyala");
  delay (50) ; 
  digitalWrite (pinLED, LOW); // Mematikan LED Board Arduino
  Serial.println("Lampu Nyala");
  delay (50) ; 
}
