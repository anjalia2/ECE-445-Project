#include <ESP32Servo.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define arrayLength 100
#define ONE_WIRE_BUS 19

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);


Servo myservo;
 
  
int servoPin = 26;
int phPin = 32;
int flowPin = 25;
int phFaultPin = 33;
int flowFaultPin = 14 ;
int tempFaultPin = 12 ;
int pumpPin = 27; //water pump pin
int ledPin = 13;


//Water pump code
int dutyCycle = 0;
int max_flow = 350;
int min_flow = 300;

int dutyCycleLeds = 125;

int pos = 0; 
bool servo_on = false;

float offset = 0.00;
int pHArray[arrayLength]; 
int pHArrayIndex = 0;
float voltage = 0;
float pHValue = 0;

int time_limit = 60 * 1000; 
int time_limit_ph = 5 * 10;
int time_limit_flow = 5 * 1000;
int time_limit_temp = 5 * 1000;
int time_limit_ph_print = 5 * 1000;
unsigned long last_rotation = 0;
unsigned long current, last_ph, last_flow, last_ph_print, last_temp, start_time, start_time_led;
float temp_for_ph = 0;

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
	pinMode(flowFaultPin, OUTPUT);
	pinMode(tempFaultPin, OUTPUT);
	last_rotation = millis();
	last_ph = millis();
	last_flow = millis();
	last_ph_print = millis();
	last_temp = millis();
	start_time = millis();
	start_time_led = millis();

  ledcAttachChannel(ledPin, 3000, 8,7);
	analogSetPinAttenuation(phPin, ADC_11db); 

  ledcAttachChannel(pumpPin, 500, 8, 6);
	Serial.begin(9600);
	sensors.begin();
	sensors.setWaitForConversion(false);
}
 
void loop() {

	sensors.requestTemperatures(); 


	current = millis();
	
  if(current - last_rotation >= time_limit){
		//Serial.println("rotation start");
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
	temp_for_ph = tempC;
	Serial.println("--------------------------------------------");
  Serial.print("Temperature: ");
	tempC = tempC * 1.8;
	tempC = tempC + 32;
  Serial.print(tempC);
  Serial.println("°F");
	last_temp = millis();
	if(tempC < 78 || tempC > 80){
			digitalWrite(tempFaultPin, HIGH);
			//Serial.println("temp fault LED ON");
		} else {
			digitalWrite(tempFaultPin, LOW);
			//Serial.println("temp fault LED OFF");
		}
 }

 if(current - last_ph_print >= time_limit_ph_print){
		Serial.print("Voltage:");
		Serial.print(voltage,2);
		Serial.print(" pH value: ");
		Serial.println(pHValue,2);
		last_ph_print = millis();
		if(pHValue < 6 || pHValue > 8){
			digitalWrite(phFaultPin, HIGH);
			//Serial.println("pH fault LED ON");
		} else {
			digitalWrite(phFaultPin, LOW);
			//Serial.println("pH fault LED OFF");
		}
 }

 if(current - last_ph >= time_limit_ph){
	 	pHArray[pHArrayIndex++]=analogRead(phPin);
		if(pHArrayIndex==arrayLength)pHArrayIndex=0;
		// voltage = (averageArray(pHArray, arrayLength)*3.3/4096 )* 1.515; // 4096 is 2^12 since ADC is 12 volts
		// pHValue = 3.5*voltage+offset;
		// pHValue = pHValue + (temp_for_ph - 25) * ((0.05916 * temp_for_ph)/298.15);
		// last_ph = millis();

		float rawAvg = averageArray(pHArray, arrayLength);
    voltage = (rawAvg * 3.3 / 4096.0) * 1.515; 
    float neutralVoltage = 1.86; 
    float slope = 16.67; 
    pHValue = (7.0 + (voltage - neutralVoltage) * slope) + offset;
		//pHValue = (voltage/3.3)*14;
    if (pHValue < 0) pHValue = 0;
    if (pHValue > 14) pHValue = 14;

    last_ph = millis();

 }

	if(!servo_on){
		int hallState = digitalRead(flowPin);
		if(hallState == LOW && lastHallState == HIGH) {
			NbTopsFan++;
		}
		lastHallState = hallState;

		//water pump
		if(current - start_time <= 30000){
			dutyCycle = 0;
			ledcWrite(pumpPin, dutyCycle);
		}
		else if (flowRate < min_flow) {
			dutyCycle = 25;
			ledcWrite(pumpPin, dutyCycle);
		}

	//led driver
        if(current - start_time_led <= 15000)
		{ //first 15 seconds are night
			dutyCycleLeds = 0;
			ledcWrite(ledPin, dutyCycleLeds); //starts off at 0
		} 
		else if (current - start_time_led <= 60000)
		{ //sunrise
			uint32_t sunrise_covered = current - start_time_led - 15000;
			dutyCycleLeds = (uint8_t)(255.0f * sunrise_covered / 45000.0f);
			ledcWrite(ledPin, dutyCycleLeds);
    		
		}
		else if(current - start_time_led <= 75000)
		{ //daytime
			dutyCycleLeds = 255;
			ledcWrite(ledPin, dutyCycleLeds);
		}
		else if(current - start_time_led <= 120000)
		{ //sunset
			dutyCycleLeds = 0;
			uint32_t sunset_covered = current - start_time_led - 75000;
			dutyCycleLeds = (uint8_t)(255.0f - (255.0f * sunset_covered / 45000.0f));
			ledcWrite(ledPin, dutyCycleLeds);
		}
		else
		{ //just in case
			dutyCycleLeds = 0;
			ledcWrite(ledPin, dutyCycleLeds);
			start_time_led = millis();
		}

	}

	if(current - last_flow >= time_limit_flow) {
			flowRate = (NbTopsFan * 60.0 / 7.5); //per min -- 7.5 calibration factor
					NbTopsFan = 0;
					last_flow = millis();
					Serial.print("Flow rate: ");
					Serial.print(flowRate);
					Serial.println(" L/hour");
					last_flow = millis();
					Serial.println("--------------------------------------------");
		if(flowRate < 200 || flowRate > 800){
			digitalWrite(flowFaultPin, HIGH);
			//Serial.println("flow fault LED ON");
		} else {
			digitalWrite(flowFaultPin, LOW);
			//Serial.println("flow fault LED OFF");
		}
	}

		

}