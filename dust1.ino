int sensorValue=0;
int sensorPin=A0;

void setup()
{
Serial.begin(9600);
//analogReference(EXTERNAL);
}
 
void loop()
{

sensorValue = analogRead(sensorPin); 
Serial.println(sensorValue);
Serial.println("x");
delay(500);

}
