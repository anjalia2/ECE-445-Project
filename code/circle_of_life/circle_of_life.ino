#include <ESP32Servo.h>

#define arrayLength 40

Servo myservo;
 
  
int servoPin = 23;
int phPin = 33;
int flowPin = 4;

int pos = 0; 
bool servo_on = false;

int offset = 0;
int pHArray[arrayLength]; 
int pHArrayIndex = 0;
float voltage, pHValue;

int time_limit = 30 * 1000; 
int time_limit_ph = 5 * 1000;
int time_limit_flow = 5 * 1000;
unsigned long last_rotation = 0;
unsigned long current, last_ph, last_flow;

int lastHallState = HIGH;
int NbTopsFan = 0;
float flowRate = 0;




double averageArray(int *array, int number){

	int max,min;
	double avg;
	long amount=0;

  if(number<=0){
 		Serial.println("Error number for the array to averaging!/n");
 		return 0;
	} 

	if(number<5){ 
		for(int i=0; i<number; i++){
			amount+=array[i];
		}
		avg = amount/number;
		return avg;
 	} else {
		if(array[0]<array[1]){
			min = array[0];max=array[1];
		}
		else {
		min=array[1];max=array[0];
		}
		for(int i=2;i<number;i++){
			if(array[i]<min){
				amount+=min; //arr<min
				min=array[i];
			} else {
				if(array[i]>max){
					amount+=max; //arr>max
					max=array[i];
			} else{
				amount+=array[i]; //min<=arr<=max
			}
 		}
 	}
 	avg = (double)amount/(number-2);
 }
 return avg;
}
 
void setup() {
	ESP32PWM::allocateTimer(0);
	ESP32PWM::allocateTimer(1);
	ESP32PWM::allocateTimer(2);
	ESP32PWM::allocateTimer(3);
	myservo.setPeriodHertz(50);   
	myservo.attach(servoPin, 500, 2400);
	pinMode(flowPin, INPUT_PULLUP);
	last_rotation = millis();
	last_ph = millis();
	last_flow = millis();

	Serial.begin(9600);
}
 
void loop() {
	current = millis();
	
  if(current - last_rotation >= time_limit){
		Serial.println("rotation start");
		servo_on = true;
		for (pos = 0; pos <= 180; pos += 1) {
			myservo.write(pos); 
			delay(1);
		}
		for (pos = 180; pos >= 0; pos -= 1) {
			myservo.write(pos);
			delay(1);
		}
		last_rotation = millis();
		servo_on = false;
 }

 if(current - last_ph >= time_limit_ph){
		pHArray[pHArrayIndex++]=analogRead(phPin);
		if(pHArrayIndex==arrayLength)pHArrayIndex=0;
		voltage = averageArray(pHArray, arrayLength)*3.3/4096;;
		pHValue = 3.5*voltage+offset;
	
		Serial.print("Voltage:");
		Serial.print(voltage,2);
		Serial.print(" pH value: ");
		Serial.println(pHValue,2);
		last_ph = millis();
 }

	if(!servo_on){
		int hallState = digitalRead(flowPin);
		if(hallState == LOW && lastHallState == HIGH) {
			NbTopsFan++;
		}
		lastHallState = hallState;
	}

	if(current - last_flow >= time_limit_flow) {
			flowRate = (NbTopsFan * 60.0 / 7.5);
					NbTopsFan = 0;
					last_flow = millis();
					Serial.print("Flow rate: ");
					Serial.print(flowRate);
					Serial.println(" L/hour");
					last_flow = millis();
	}



}