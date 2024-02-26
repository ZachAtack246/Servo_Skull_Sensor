const int tempSensorPin = A0;
const float baselineTemp = 20.0;
const int tempPinNumber = 2;
const float volSensorPin = A1;


//int val;
 //val=analogRead(0);   //connect mic sensor to Analog 0
//Serial.println(val,DEC);//print the sound value to serial
//delay(100);


void setup() {
    Serial.begin(9600);
 
    pinMode (tempPinNumber, OUTPUT);
    pinMode (tempSensorPin, INPUT);
    digitalWrite(tempPinNumber, LOW);
  
}
void loop() {

  int tempSensorVal = analogRead(tempSensorPin);
  float voltage = (tempSensorVal/1024.0) * 5.0;
  Serial.print(", degrees C: ");
  float temperture = (voltage - .5) * 100;
  Serial.println(temperture);

  int volSensorVal = analogRead(volSensorPin);
  Serial.println(volSensorVal);

  if(temperture < baselineTemp+2){
    digitalWrite(2, LOW);
  }else if(temperture >= baselineTemp+2 && temperture < baselineTemp+4){
    digitalWrite(2, HIGH);
  }
  delay(1);
}