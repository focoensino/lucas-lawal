#define trigPin 3
#define echoPin 2
#define buzzerPin 4
#define led 5
int cm;

void setup (){
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  
  Serial.begin(9600);
  
}

 void loop () {
  lerDistancia();
  
 if(cm < 6)
 {
  digitalWrite(buzzerPin,HIGH);
  delay(50);
digitalWrite(buzzerPin,LOW);
delay(50);
 }else if(cm < 15){
  digitalWrite(buzzerPin,HIGH);
delay(100);
digitalWrite(buzzerPin,LOW);
delay(100);
 
 }else if(cm < 25){
 
  digitalWrite(buzzerPin,HIGH);

  delay(150);
digitalWrite(buzzerPin,LOW);
delay(150);
 }else{
  digitalWrite(buzzerPin,LOW);
 }
  Serial.print("SENSOR: ");
  Serial.println(cm);

  
 }
void lerDistancia(){
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  int distancia = pulseIn(echoPin,HIGH);
  
  cm = distancia / 58 ;
}
