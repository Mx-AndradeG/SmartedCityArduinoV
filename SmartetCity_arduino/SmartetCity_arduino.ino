int pinRele = 2;

int pinLDRSol  = A0;
int valorLDRsol = 0;

int pinLDRFoco  =  A1;
int valorLDRFoco =   0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRele, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorLDRsol = analogRead(pinLDRSol);
  valorLDRFoco = analogRead(pinLDRFoco);
  Serial.print("F");
  Serial.println(valorLDRFoco);
  Serial.print("S");
  Serial.println(valorLDRsol);
  
  
  if(valorLDRsol > 50){
    digitalWrite(pinRele, HIGH);
    Serial.println("Apagado");
    }
    else{
      digitalWrite(pinRele, LOW);
      Serial.println("Prendido");
      }
    delay(2000);
}
