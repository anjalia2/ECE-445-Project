#include <ESP32Servo.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define arrayLength 40
#define ONE_WIRE_BUS 19

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);


Servo myservo;
 
  
int servoPin = 26;
int phPin = 32;
int flowPin = 25;
int phFaultPin = 33;

//AISHWARYA'S LED CODE
int ledPin = 18;
unsigned long startLedSeq = 0;
unsigned long sunrise = 10000; //some default vals
unsigned long dayLength = 15000;
unsigned long sunset = 10000;
unsigned long nightLength = 15000;


int pos = 0; 
bool servo_on = false;

int offset = 2.19;
int pHArray[arrayLength]; 
int pHArrayIndex = 0;
float voltage, pHValue;

int time_limit = 30 * 1000; 
int time_limit_ph = 5 * 10;
int time_limit_flow = 5 * 1000;
int time_limit_temp = 5 * 1000;
int time_limit_ph_print = 5 * 1000;
unsigned long last_rotation = 0;
unsigned long current, last_ph, last_flow, last_ph_print, last_temp;

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
	pinMode(phFaultPin, OUTPUT);
	last_rotation = millis();
	last_ph = millis();
	last_flow = millis();
	last_ph_print = millis();
	last_temp = millis();

	//AISHWARYA'S LED CODE
  //ledcAttach(ledPin, 5000, 8);
	pinMode(ledPin, OUTPUT);
  startLedSeq = millis(); //start time of the led seq initially
	//startIntensity = 155;//for estela's test
	Serial.begin(9600);
	sensors.begin();
}
 
void loop() {

	sensors.requestTemperatures(); 


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

 if(current - last_temp >= time_limit_temp){
	float tempC = sensors.getTempCByIndex(0);
  Serial.print("Temperature: ");
	tempC = tempC * 1.8;
	tempC = tempC + 32;
  Serial.print(tempC);
  Serial.println("°F");
	last_temp = millis();
 }

 if(current - last_ph_print >= time_limit_ph_print){
		Serial.print("Voltage:");
		Serial.print(voltage,2);
		Serial.print(" pH value: ");
		Serial.println(pHValue,2);
		last_ph_print = millis();
		if(pHValue < 5 || pHValue > 8){
			digitalWrite(phFaultPin, HIGH);
			Serial.println("pH fault LED ON");
		} else {
			digitalWrite(phFaultPin, LOW);
			Serial.println("pH fault LED OFF");
		}
 }

 if(current - last_ph >= time_limit_ph){
	  pHArray[pHArrayIndex++]=analogRead(phPin);
		if(pHArrayIndex==arrayLength)pHArrayIndex=0;
		voltage = averageArray(pHArray, arrayLength)*3.3/4096; // 4096 is 2^12 since ADC is 12 volts
		pHValue = 3.5*voltage+offset;
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
			flowRate = (NbTopsFan * 60.0 / 7.5); //per min -- 7.5 calibration factor
					NbTopsFan = 0;
					last_flow = millis();
					Serial.print("Flow rate: ");
					Serial.print(flowRate);
					Serial.println(" L/hour");
					last_flow = millis();
	}

	//AISHWARYA'S LED CODE

    // int pwmMin = 75;
    // int pwmMax = 155;
    // if(current - startLedSeq >= sunrise + dayLength + sunset + nightLength){
    //     startLedSeq = millis(); //start a new sequence now
    // }
    // int intensity; //light brightness
    // if(current - startLedSeq < sunrise){
    //     //start sunrise
    //     intensity = (current - startLedSeq)*(pwmMax - pwmMin)/sunrise; //increase brightness with time until reach daytime brightness
    // }
    // else if(current - startLedSeq < sunrise + dayLength){ //daytime
    //     intensity = 155;
    // }
    // else if(current - startLedSeq < sunrise + dayLength + sunset){
    //     unsigned long timeSunset = (current - startLedSeq) - (sunrise + dayLength);
    //     intensity = -1*((timeSunset)*(pwmMax - pwmMin)/sunset) + pwmMax;
    // }
    // else{
    //     intensity = 75;
    // }
    // ledcWrite(0,intensity);
		//ledcWrite(0, HIGH);
		//estela's test
		// if (intensity > 0) {
    //     intensity -= 10;
    //     if (intensity < 0) intensity = 0;
    // }
    // delay(1000); // optional so you can see it step down
		// ledcWrite(ledPin, intensity);

}