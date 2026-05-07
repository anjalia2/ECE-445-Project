## Anjali Aravindhan Notebook

## January 20th, 2026

This was our first ever meeting as a senior design group, right before our first lecture. Estela and I met before the first lecture of ECE 445 to discuss potential ideas that we could refine for our senior design project. As a result of this meeting, we discussed various ideas that we could narrow down between after our first lecture and receiving more direction from past projects and the scope/timeline our project should take. After this very productive meeting, we came up with the following ideas: 

* Coffee/matcha making (portable or robot)
* Build-a-Friend
* Scooter that requires a IR to turn on (Eye Detection)
* Full room light system to simulate daylight throughout (Artificial Vitamin D)
* Smart Fridge to display items, what to replenish, etc.
* Red Light Mask + analyzes skin and has a lighting sequence specific to you
* Automated Closet
* Laser Harp 2.0 (DJ Set)
* Space Solar Energy
* Aquaponic System with all the sensors
* Notes Projecter Bracelet onto palm


## January 21st, 2026

After the first lecture and understanding more specifics about the class, we all met the next day to narrow down from our potential ideas. We took into account the timeline, budget, and overall scope of the project and each decided to write a web board post about each of the top three ideas we narrowed down to from the bigger list. My personal top choice was the palm notes projector bracelet, which I ended up writing the web board post for during this meeting. Estela's top choice was the aquaponics system, and Aishwarya's was a hands-free book reader that was added to our ideas list later on. 

My web board post is linked [here](https://courses.grainger.illinois.edu/ece445/pace/view-topic.asp?id=78647). 

I eventually recieved feedback on the web board post the next day (January 22nd) from Professor Schultz and it was as follows: 

![Anjali Web Board Post Feedback](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_one.png)


## January 27th, 2026

We all posted the top three ideas on the web board and met to discuss the feedback we got on all of them, as well as decide on what our project should be to write the RFA for. Since the early RFA deadline was January 29th, we spent this meeting looking over the discussions on the web board posts that each of wrote. My own web board post had a comment that told us the idea was a bit outside the scope for senior design, so we ended up moving on to a different idea. Aishwarya's web board post about the hands free book reader also had a similar comment from Professor Schultz, where he noted that this may be over-engineering a device to perform a routine task. We recieved two comments on Estela's automated desktop aquaponics system post that noted it was a good idea and we decided to pursue this as the final project. 

Our project was decided as the following: 

[Automated Desktop Aquaponics System](https://courses.grainger.illinois.edu/ece445/pace/view-topic.asp?id=78661)

Team: 
Anjali Aravindhan, Estela Medrano, Aishwarya Manoj

Problem: 
Urban living and limited indoor space make it difficult for individuals to grow fresh produce sustainably. Aquaponic systems offer an efficient solution by combining fish cultivation and plant growth in a closed-loop ecosystem, but existing systems require frequent manual monitoring and maintenance. Current desktop-scale aquaponics kits often lack intelligent control features and are cost-prohibitive for individual users.

Solution: 
This project proposes the design and construction of a small desktop smart aquaponics system integrating automated environmental and fluid control. The system consists of a compact fish tank and plant grow bed forming a closed-loop water circulation path. An electronically controlled pump circulates water between the tank and grow bed, while a motorized dispensing mechanism provides automated fish feeding. A programmable grow-light module delivers controlled lighting cycles for plant growth. Embedded sensors monitor key system conditions such as water flow, water level and water temperature. A microcontroller schedules feeding and lighting and processes sensor data. Depending on budget and difficulty, we may add more or less capabilities.


## January 28th, 2026

Once we had decided on our project being the automated desktop aquaponics system, we met to discuss the specifics of our project and gather more information as to how this could be done. Our RFA required a definition of each subsystem we planned to implement as well as the individual parts we planned to use. We took this meeting to gather any important information as well as get more clarity on what subsystems we planned to implement. 

To start, we looked at all other previous senior design projects from other semester and had this list: 

* Spring 2018 BIOAQUARIUM: WATER SENSING WITH INDICATOR FOR SUSTAINABLE FARMING
* Spring 2025 Schedulable Autonomous Fish Feeder (completed)
* Spring 2025 AquaSense: Affordable Water Quality Monitoring for Aquariums (completed)
* Spring 2025 Climate Control Grow Box
* Spring 2025 Plant Hydration and Weather Integration System
* Fall 2024 Independently Controlled Auto-Watering System for Garden Plants
* Fall 2024 RFA: Smart Plant Pot
* Fall 2023 Plant Irrigation and Monitoring System
* Fall 2023 Grid Independent Water Monitoring/Management System
* Spring 2023 DIY Plantify
* Spring 2023 Predictive Plant Care
* Fall 2022 Efficient Light Control system for Plant Growth
* Spring 2016 Smart Garden Management Systems with Sensor Network
* Spring 2022 Low-Cost Automated System for Growing Produce at Home

From there, we looked at the amount of subsystems each of these projects had and the sensor they had chosen to implement as an example of what is doable in one semester for senior design. 

After reading over these past projects, we made a list of possible subsystems to implement: 

Mechanical Subsystems:
* Fish Tank 
* Grow Module
* Plumbing and Drain Loop
* Enclosure
* Fish Feeder (connected to motor, just briefly rotate it for feeding then rotate back)

Electrical Subsystems
* UV Lights
* AC-DC Adapter 
* Water Pump
* Warning LEDs
* Servo Motor for Fish Feeder

Controls
* MCU
* Schedule lights 
* Reads sensors
* Handles fault logic
* Controls fish feeder

Sensors
* Water flow sensor
* Water PH sensor
* Water temperature sensor

Use tilted tube for the plant root area so that only need one pump to fight against gravity, right side of system dep on gravity letting water flow downward. 

Optional Subsystems: 
* Display Subsystem
* Air Pump Subsystem

We decided that any kind of display would be optional if the main project was finished. We also decided that the air pump/oxygenation should be secondary if we had some extra time, since there are fish such as betta fish that can thrive in environments where there is low oxygenation. Also, another source of oxygenation that can be used for fish is just the water splashing on to the surface of the water on the fish tank to create air bubbles, so we figured that would be best for now. 

## January 29th, 2026

Today was the early RFA deadline, and we met as a group to write up everything we had discussed over the past two days. We decided on the exact sensors as well as wrote up a description of each subsystem in detail. I specifically wrote the lighting, power, and helped with the criteria for success portions of the RFA.

Our RFA can be found [here](https://courses.grainger.illinois.edu/ece445/projects.asp) under Team 73. 

Estela also drew an initial mockup of our project for the RFA.

![Original Drawing](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_two.jpg)


## February 2nd, 2026

Today, we didn't meet as a group, and Estela and I were in the senior design lab working on the soldering assignment. I wasn't able to finish mine due to an issue with the Arduino IDE and waiting for the programmer. While we were working we did get a comment on our RFA from a TA, which I have attached below. 

![RFA Comment](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_three.png)

## February 3th, 2026

Following the comment on our RFA, we chose a different  the microcontroller as an ESP32-WROOM-S2E since it has bluetooth and WiFi capabilities if we wanted to add some kind of display in the future. We did also consider an STM32 since it has more pins, but in the end went with an ESP32 due to wanting more of a app or software connectivity rather than more pins. Another factor was the fact that more of the TAs are more experienced with the ESP32 if we ever need help. 

## February 5th, 2026

Our RFA still had not been approved by today, which is the deadline and we met as a group to discuss what to do since if it's not approved by today. We ended up emailing several professors with a link to our RFA and asked if they could read it over and either provide feedback or approve the RFA. As a result, Professor Victor Gruev ended up seeing the email and responded with an approval of our RFA. Our senior design project was officially decided and put into motion!

## February 10th, 2026

Today, I created the current Github repository that we are using now for logs and code/PCB designs. I used the example provided by the TAs linked [here](https://gitlab.engr.illinois.edu/ece445/example-project). I made folders for the code, PCBs, CAD models, and our notebooks (this file!). From there, I shared the repository with my teammates as well as our TA, Manvi. We also met with the machine shop and got initial feedback on our design for the project. We discussed what the overall shape/size of our project should be as well as what materials we would need to purchase for the machine shop vs. what they already had on hand. The coordinator for senior design, Gregg, was not in the shop at the time, so we needed to come back another time to verify everything we talked about today would be doable for the machine shop. We also met with our senior design TA for the first time and got assigned our meeting time, locker, and went over any other project information that she needed. 

## February 12th, 2026

We worked on our initial proposal since it is due on February 13th. I wrote sections on the lighting subsystem, water pump, and the fish feeder. Estela handled all of the power subsystem and tolerance analysis. Lastly, Aishwarya worked on the water quality subsystems with pH, temperature, and flow rate sensors. 


## February 19th, 2026

On this day, I met with Estela at the Beckman Institute and we looked over all of the schematics for the project. Estela had already worked on a lot of the basic schematics for all of the components on the day prior, so I mostly came to help out with looking over everything that she did and adding the footprints to each symbol on the schematic. I took over assigning the footprints of the ICs, connectors, and all of the capacitors, while Aishwarya came later did the resistors. I created the libraries and parts folders inside the boards folder of this repository so that all of the imported parts are able to replicated across all of our computers when we are updating the footprints. By the end of the day, I had assigned over 70 footprints for the project. The following image shows my progress throughout the day in assigning the footprints. I used the program LibraryLoader to take the part zip file from Mouser and LibraryLoader was able to unzip and show them in KiCAD. 

![Footprint Assignments](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_four.png)

## February 20th - 22nd, 2026

Once the footprints were assigned, Estela was able to start the process of the PCB layout. We had our PCB review today, and were mostly asked about the schematic and why certain design choices were made. The PCB was not fully laid out yet, but we worked on it before and after the PCB review and were able to finish the layout. Over the weekend, Aishwarya and I each took two different power planes and started routing the PCB. However, since we were inexperienced, we often had Estela check our work regularly. I started with routing the 3.3V plane, which was most of the connections to the MCU. Due to the MCU having many overlapping connections and my own inexperience, I turned to Estela after trying to route myself, and she was able to clean up the routes for me afterward. Here is the picture of the initial layout before I started routing the 3.3V section I created around the MCU. 

![Initial 3.3V Plane](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_five.png)

## February 24th - 26th, 2026

After completing a first pass of the 3.3V plane on the main PCB, and letting Estela finish it up/look it over, I started working on the grow lights PCB. The grow lights PCB consisted of 5 red and 5 blue horticulture LEDs in series, which would be controlled by a LED driver on the main board. 

For the red LEDs, we used: https://www.digikey.com/en/products/detail/broadcom-limited/ASMW-L300-AFH0E/9740377

For the blue LEDs, we used: https://www.digikey.com/en/products/detail/broadcom-limited/ASMW-LL00-NKM0E/9740413

We chose this combination of red and blue LEDs since plants require the UV spectrum provided by both to grow. The red LEDs are used to promote flowering and budding in plants where there is more of a bud to fruit life cycle, while the blue LEDs are for more leafy plants such as basil and cilantro. The initial PCB looked like: 

![Round One Grow Lights PCB Front](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_six.jpg)

![Round One Grow Lights PCB Back](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_seven.jpg)

While I finished the grow lights PCB, Estela finished the controls/main PCB. Once we were both finished, I emailed both the controls/main PCB as well as the grow lights PCB to our TA, Manvi. 

Our first round control/main PCB looked like this after it was finished. 

![Round One  PCB Front](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_eight.jpg)

![Round One  PCB Back](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_nine.jpg)


# February 27th, 2026

After working on our design document all week, we turned it in today, since it was due. After submitting the design document, Aishwarya and I worked on submitting all of the orders for the ECE supply shop and through external vendors (DigiKey and Amazon). After speaking to the machine shop we reduced the size of the tank down to 0.8 gallons from 5 gallons. 

From the E=Shop we used the provided spreadsheet and looked at the inventory as well as the chosen parts on the footprints to see what could be 1 to 1 replaced with the E-Shop parts. 

![E Shop Parts](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_ten.png)

After submitting that, Aishwarya and I worked on adding things to the DigiKey cart to submit on my.ECE. I added all of the sensors, ICs, and connectors, while Aishwarya added all of the resistors. Our final cart came out to a total of $126 and is linked [here](https://www.digikey.com/short/014h0pp5). We also during this time ordered the fish tank and the wall power adapter on Amazon. I ordered the Amazon order on my own my.ECE account while Aishwarya ordered the Digikey cart on hers. 


![Amazon Order](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_eleven.png)


## March 3rd - 4th, 2026

Our design review of our design document was on March 3rd with our TA, Manvi Jha, and with our assigned professor, Professor Kim. After presenting the design document as well as looking over the first round PCB layout and design on our own, Estela went in and made the necessary adjustments and submitted our 2nd round PCB order. 

While Estela made the adjustments, Aishwarya and I started working on breadboarding. We started by trying to program the MCU of the ESP32 Dev Kit that we borrowed from the Senior Design Lab. We were able to connect to the Dev Kit with a micro USB cable and saw the COM port connection on my laptop. From there, we started by setting up the servo motor, and the code involved with the servo motor. After some research we found the [ESP32Servo](https://docs.arduino.cc/libraries/esp32servo/) Library online that we could use to program the servo rotations of 180 clockwise and then 180 degrees counterclockwise. After reading the documentation as well confirming the MCU was able to be flashed while on the breadboard and everything was connected, we tried our running our code with just the fish feeder servo rotation on the breadboard. 

We started without a level shifter to see if it was needed before adding it. In the end, we did not need a level shifter and it was moving smoothly with just 3.3V. 

```c++
#include <ESP32Servo.h>
int time_limit = 60 * 1000;

void setup() {
    ESP32PWM::allocateTimer(0);
    ESP32PWM::allocateTimer(1);
    ESP32PWM::allocateTimer(2);
    ESP32PWM::allocateTimer(3);
    myservo.setPeriodHertz(50);   
    myservo.attach(servoPin, 500, 2400);
}

void loop() {
    current = millis();
        
    if(current - last_rotation >= time_limit){
        Serial.println("Fish feeder rotation started.");
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
    }
}

```

We were able to get this code working, and the servo motor rotated once every minute to verify that it is working. 

## March 6th - 8th, 2026

Aishwarya and I met on March 6th to work more on the code. During this time, we worked on adding the water flow code and integrating into the fish feeder servo code from the previous work session. The water flow sensor contains a hall effects sensor in which we had to measure the rising and falling edge of the hall effects sensor signal to count the number of revolutions in a certain amount of time, in our case our sampling rate was every 5 seconds, and we used that to calculate the flow rate in liters per hour. According to the [water flow data sheet](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/319/G1_2_in_Water_Flow_Sensor_Web.pdf), the suggested code looks like this:

```c++

volatile int NbTopsFan;
int Calc;
int hallsensor = 2; 
void rpm (){
    NbTopsFan++;
}
void setup()
{
    pinMode(hallsensor, INPUT);
    Serial.begin(9600);
    attachInterrupt(0, rpm, RISING); 
}
void loop ()
{
    NbTopsFan = 0;
    sei();
    delay (1000);
    cli();
    Calc = (NbTopsFan * 60 / 7.5); 
    Serial.print (Calc, DEC); 
    Serial.print (" L/hour\r\n");
} 

```

When we tried to use this case as a base, we noticed that when we tried to blow air into the flow meter the servo motor also started moving. We realized after doing some research that we were having concurrency issues. After doing further research into it, I came across multiple forums that reported [servo motor jittering](https://forum.arduino.cc/t/servos-chattering-when-water-pumps-turns-on/518823/2) when running concurrently with the water flow or water pumps. We explored options such as adding decoupling capacitors, but with the amount already on the board, I decided to implement a software solution instead. To make them work as independently as possible, without reordering separate boards, since that would be the actual answer, I wrapped all of the water flow sensor code in an if loop where the condition is that the servo motor was not on. I added a boolean flag in the servo motor code that would be set false when the servo motor is not on, and only if at the time the water flow sensor is being checked, the servo is not on, then it would reduce all of the noise and pull down we were seeing. The final water flow sensor code looked like so: 

```c++

//counting revolutions
if(!servo_on){ 
    int hallState = digitalRead(flowPin);
    if(hallState == LOW && lastHallState == HIGH) {
        NbTopsFan++;
    }
    lastHallState = hallState;
}

//printing flow rate

if(current - last_flow >= time_limit_flow) {
    flowRate = ((NbTopsFan / 5) * 60.0 / 7.5); //per min -- 7.5 calibration factor
    NbTopsFan = 0;
    last_flow = millis();
    Serial.print("Flow rate: ");
    Serial.print(flowRate);
    Serial.println(" L/hr");
    last_flow = current;
    Serial.println("--------------------------------------------");
    if(flowRate < 30){
    digitalWrite(flowFaultPin, HIGH);
    //Serial.println("flow fault LED ON");
    } else {
    digitalWrite(flowFaultPin, LOW);
    //Serial.println("flow fault LED OFF");
    }
}

```

I also looked at the [pH sensor documentation](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/2200/SEN0161_SEN0169_Web.pdf), we were also able to add in the pH sensor code. The pH sensor works by sampling the voltage in millivolts over a set amount of samples and calculating the average based on that to determine the pH based on the table given below: 

![pH Table](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_twelve.png)

We weren't too focused on the actual pH value at this time, since we didn't have the tools to calibrate the sensor at this time, and instead just tried to make sure that the pH was around 7 since the storage solution 3NKCL has a pH of around 7. The pH code after reading the documentation looked like this: 

```c++

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
}
```

Lastly, we tried to test the temperature sensor as well, but ran into issues where the temperature sensor was not able to found by the ESP32 and there was no device showing. We concluded in the end after meticulous software testing and hardware testing that the sensor itself was faulty. 

## March 9th, 2026

Today was the day of our breadboard demo to our TA, Manvi, and Professor Kim. We showed that the pH, flow, and servo motor were working on the breadboard. 

## March 11th, 2026

I worked on my own to update the grow lights PCB for third round due on March 12th. We have not yet received the first round or second rounds of the PCBs so we haven't been able to find any additional changes to make to the main PCB. However, I noticed we didn't add mounting holes to the first round grow lights board, so for this updated PCB I just added some mounting holes to this new third round grow lights board. 

The new board looked like this:

![3rd round Grow Lights Board](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_thirteen.png)

## March 23rd-24th, 2026

I came back from spring break and went right back to work. Over spring break, our first and second round board came in and we were finally able to start soldering and testing the final PCB. Before spring break, Estela and I met with Gregg from the machine shop and provided additional measurements and drawings in order to articulate our ideas better to the machine shop. I made this labelled drawing of our initial sketch for the machine shop to use as well. We were finally assigned a staff member of the machine shop that we were going to work with on our project, Paul. After a meeting with Paul, we were all on the same page and he started working on building our project. 

Here is the annotated drawing that we provided the machine shop for reference, and we also gave the machine shop the sensors, a grow lights and controls PCB so they can have a physical size of those as well:

![Annotated Drawing](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_fourteen.png)

We also started soldering the main controls board, with Estela taking the lead on it. We tested the USB-UART connection and it was showing up on my laptop as a serial device instead of a CP2102 device. We decided to use a USB-UART adapter that we bought on Amazon instead of fixing the issue on the board since it's a layout issue. It was great planning that we had 

## March 25th, 2026

Estela was finishing soldering the main controls board. I started soldering the grow lights PCB. To solder the grow lights PCB since the pads were fully underneath the LED, I had to use solder paste to solder on the LEDs. I placed solder paste on both pads and used tweezers to place the red and blue LEDs on it. From there, I used a heat gun to solidify the solder and make the connection on all ten LEDs. 

After using a multimeter to check for shorts, I realized the footprints were incorrect for the blue LEDs. The footprint on the PCB had the anode and cathode flipped and the sizes were also incorrect. For a quick fix, I just flipped the directions of the blue LEDs and resoldered them, being careful about placement. 

## March 26th, 2026

Estela tested the LDO and buck convertor previously, and we had verified the wall adapter is working. So, at this point, we had the entire power subsystem working. 

We noticed that the LED driver IC was the only IC on the board that was not working properly, so Estela was trying to diagnose the issue. 

While Estela worked on the LED driver, I worked on updating and submitting the fourth round PCB. I worked on making the  pH fault and temp fault LED be on a GPIO input/output pin since it was initially assigned to a just input pin. I also fixed the labels on pH fault and flow meter fault since they were swapped. I added 10k pullup to IO0 and added 10k pulldown to PWM DIM.  

The final fourth round PCB looked like:

![Fourth Round PCB](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_fifteen.png)


## April 3rd-6th, 2026

During this time, we had our progress demo on the 6th. In order to prepare for it, our goal was to have the code that was working on the breadboard be replicated on the PCB. We soldered and used our second round PCB for the demo. We were basically able to use our old code from the breadboard demo, and just had to change the pins to the following since the breadboard was using random pins that were input/output: 

```c++

int servoPin = 26;
int phPin = 32;
int flowPin = 25;
int tempFaultPin = 12 ;
int pumpPin = 27;

```

## April 8th - 9th, 2026

After realizing that the temperature sensor was broken, we spoke to our TA and were able to order a new one from Adafruit this time instead of Digikey, where the original one was ordered. We ordered [this](https://www.adafruit.com/product/381?srsltid=AfmBOop4JLBfv5qedUGq36frDQX9vyVTusMKieUlSaGwtCNAFJlJTlm4) temperature sensor as a replacement. I had some trouble screwing the wire into the connector, but after soldering the ends of the wire I was able to connect is easily. The final temperature sensor code looked like: 

```c++

#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 19

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures(); 
  delay(750); 
  float tempC = sensors.getTempCByIndex(0);
  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println("°C");
  delay(1000);
}

```

The temperature sensor uses the OneWire communication protocol where all devices converse with the MCU through specific timings. For the temperature sensor to communicate with the ESP32, it will pull the signal LOW for a specific amount of time to start it's recieving process. It gets the temperature in Celcius so we had to use the (0°C × 9/5) + 32 = 32°F formula to convert to the standard in the United States. However, when testing the water pump, we plugged in power, flashed the PWM code, and Aishwarya saw it smoke so we left it for the day to come back and debug. 

## April 12th - 14th, 2026

Today we I met to see what the issues was from the Friday before where Aishwarya told us the there was smoke coming from the board when she tried to try the water pump code on her own. After using the multimeter and probing around the area of the board she mentioned there was smoke coming from, we ended up finding that the LDO was causing the smoke. There was a 3.3V short to ground. While trying to diagnose what went wrong to get the LDO to smoke, we found that it was an incorrect MOSFET footprint that had all three (gate, drain, and source) swapped. Estela was able to resolder a new MOSFET and LDO while I prepped simple trial code to see if the water pump was able to work. 

The water pump subsystem basic code I wrote was this: 

```c++
int pumpPin = 27; //water pump pin
int dutyCycle = 153; //30% duty cycle to start, can be changed based on flow rate
int start_time, current_time;

void setup() {
  ledcAttach(pumpPin, 1000, 8);
  start_time = millis();
  Serial.begin(9600);
}

void loop() {
  current_time = millis();
  if(current_time - start_time <= 30000){
    ledcWrite(pumpPin, dutyCycle);
    Serial.print("PWM is:");
    Serial.println(dutyCycle);
  } else if (current_time - start_time <= 60000){
    dutyCycle = 76;
    ledcWrite(pumpPin, dutyCycle);
    Serial.print("PWM is:");
    Serial.println(dutyCycle);
  } else {
    dutyCycle = 0;
    ledcWrite(pumpPin, dutyCycle);
    Serial.print("PWM is:");
    Serial.println(dutyCycle);
  }


}


```

This basic code was to be able to see the 50% duty cycle, and then go down to 25%, and then zero. I wrote this to be able to see dramatic changes in the duty cycle from each stage so we can visually identify as well as see on the serial monitor what the PWM duty cycle should be. After fixing the MOSFET, we flashed this code and it was working correctly! So I left the integration into the main code to Aishwarya since I have already integrated and tested the servo motor, flow meter, and pH sensor all in one code file running semi-concurrently for the mock demonstration. 

## April 20th, 2026

At this point, we had decided that the LED driver was not able to debugged and Estela ordered a different external module from Digikey. The new module we ordered was connected via the TCK connection pin originally meant to be used for JTAG. We bodge wired the fault LEDs as well to TMS and TDI for the incorrect pH and flow fault pins. I also resoldered the LEDs from the first grow lights board onto the new fourth round board which had the fixed footprints. With these all soldered, Estela and I spent some time testing the new LED dimming unit testing code I wrote while Estela was bodge wiring the fault pins. 

After using the JTAG pins, the new pins for the pH fault, flow fault, and the grow lights are: 

```c++

int phFaultPin = 33;
int flowFaultPin = 14 ;
int ledPin = 13;

```

The unit testing code I wrote was used from the water pump unit testing code where it goes from a 50% duty cycle, and then go down to 25%, and then zero. This means we see the light is very bright, then dims, and then turns off. I had some small code issues with the pin number I was using, but we saw this unit test working by the end of the day. From there, I handed it off to Aishwarya to write a more gradiented sunrise and sunset routine. 

My grow lights dimming code was this:

```c++

int ledPin = 18; //water pump pin
int dutyCycle = 153; //30% duty cycle to start, can be changed based on flow rate
int start_time, current_time;

void setup() {
  ledcAttach(ledPin, 1000, 8);
  start_time = millis();
  Serial.begin(9600);
}

void loop() {
  current_time = millis();
  if(current_time - start_time <= 30000){
    ledcWrite(ledPin, dutyCycle);
    Serial.print("PWM is:");
    Serial.println(dutyCycle);
  } else if (current_time - start_time <= 60000){
    dutyCycle = 76;
    ledcWrite(ledPin, dutyCycle);
    Serial.print("PWM is:");
    Serial.println(dutyCycle);
  } else {
    dutyCycle = 0;
    ledcWrite(ledPin, dutyCycle);
    Serial.print("PWM is:");
    Serial.println(dutyCycle);
  }

}


```

## April 22nd - 23rd, 2026

We were doing the final tests where we tried to unit test the LED dimming code that AIshwarya wrote as well as add it to the main code base that already had the pH, flow meter, temperature, and water pump. While testing the code, the USB to UART adapter came loose from the USB side of the adapter and in the midst of everything I believe I plugged TX into the 5V pin of the USB to UART and connected it to the board. The board immediately didn't work at all, and we saw a short from 3.3V to ground. We started removing the LDO and other ICs in the region and didn't see any changes. Estela also desoldered the microncontroller and still didn't see where the short was coming from. Only after removing the USBC-UART IC from the board did we see that the short was resolved. Since we aren't using the chip anyway, we never resoldered it back on the board. But, when removing the MCU, it had gone from silver to yellow, and we also weren't sure about if it still worked due to the short. Luckily, I ordered a full set of all the ICs earlier when we found the LDO was smoking due to the incorrect MOSFET footprint and were able to have a new MCU on hand for this. Estela used solder paste to solder the new MCU, and everything went back to working. 

## April 24th, 2026

Today we put everything together with the PCB and the full build that we got from the machine shop. We made some minor adjustments and placed a lot of the water pump and LED dimming code in the same if statement as the water flow sensor, so their operations don't interfere with the fish feeder servo. 

The fully assembled photo is attached below: 

![Full Assembly Picture #1](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_sixteen.png)


We also started gathering verification proof for the final demo and final presentation. On this day we bought the pH strips for the pH sensor verification and got the pH of the ECEB tap water, which came out to a pH of around 7. 


![pH strip](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_seventeen.png)


Here is also the code that we placed in the if statement to avoid the servo motor interupts:

```c++

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

```


## April 26-29th, 2026

Over these days, we were all mostly preparing for the final demo and the final presentation. Our final demo went well and we just made sure to calibrate all the sensors before the demo, and have it running for some time before the demo so that we could verify the high level requirement of having it run for long periods of time. The main changes I made in the code were to reduce the number of print statements, and overall make it cleaner to read since that was recommended by our TA, Manvi. After cleaning up everything, our code print statements looked like this: 

![Final Serial Monitor Output](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_eighteen.png)

## April 30th - May 4th, 2026

During this time, we had our final presentation with Manvi and Professor Kim. It went well, and we made sure to try and finish speaking a little early so we had time to take questions from Professor Kim as well as our peer reviewers. After the presentation, we found out a few days later that we had been given an honorable mention from the class! We had the ceremony to receive our award on Monday May 4th!

![Award](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/anjali/anjali_image_nineteen.png)





