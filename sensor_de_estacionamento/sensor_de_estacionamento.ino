#define trigPin 2
#define echoPin 3
int cm;

void setup() {
  // put your setup code here, to run once:
 pinMode (trigPin,OUTPUT);
 pinMode (echoPin,INPUT);

Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
lerDistancia();
Serial.println(cm);

}

void lerDistancia(){
  digitalWrite (trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite (trigPin,LOW);
  int distancia = pulseIn(echoPin,HIGH);


  cm = distancia / 58;
  }
