# Aishwarya Manoj Notebook

## January 22nd, 2026

Today I worked on my initial web board post. I thought it would be interesting
to create a project that is basically a manual page flipper for a physical book.
It would be similar to a page flipper for a kindle on a stand, but it would hold
physical books. It would be useful for people with physical disabilities, or
anyone who wants to read comfortably before bed without blue light entering
their eyes and disrupting their sleep. The motion would be controlled with 
hand motions covering a laser or sensor streaming out from a clip on someone's
shirt collar. I think this is a good idea because it has sensors and implementation
has uses that help people.

## January 27th, 2026

We went to office hours to talk about our project ideas and get feedback from TAs
about what would be the best project for our team (me, Anjali, and Estela) to pursue. The professor left a comment on my idea on the web board and said
it seemed more like a project searching for a problem, as in the usage isn't
really a thing that people need. So I felt, since the project idea wasn't
addressing a problem the professor sees, it was not the best idea to build off
of. The TA really liked Estela's aquaponics project idea, creating an automated desktop aquaponics system for plants and fish. We discussed a bit more and I think
we are going to submit that project idea for RFA Approval.

## January 29th, 2026

Our team met up to continue discussing our Aquaponics project idea. We decided to define subsystems that we would need to build. We figured out what a Beta fish would need to survive, as well as plants, and used that to really come up with the specific subsystems we want to build for our project. We initially had too many ideas, like building a 
water pump from scratch and also building the fish feeder, so we knew that we had to make some changes to ensure that we would be able to build a working simple version of this project for the timeline of this class. We ultimately decided on having a fish feeder subsystem with a simple servo motor used to rotate a fish feeder cylinder with an
opening. I'm thinking we can time this to feed the fish once every 24 hours. We also decided on a lighting subsystem for the plants, where we'll run a light cycle to promote plant growth. Then, I hunted for various sensors we could use for our water quality subsytem. I ended up finding water-safe temperature sensor, PH sensor, and water flow meter. We also decided on a power subsystem and a water pump subsystem. I found the water pump but we found that we will need to be able to adjust the speed of the water pump, so we continued to search for a pump with wiring so that we can actually control the circuit.

## February 3rd, 2026

We got together as a team to work on our project proposal since our Aquaponics project idea was approved. I worked on writing up the subsystem requirements and verification for the water subsystem, as well as writing up the ethics section. I also helped to edit and work on the fish feeder subsystem section and the water pump subsystem section. Overall, I read through a bunch of data sheets for the main parts of each of these systems to make sure that I could set appropriate requirements that matched with voltage readings and sensor readings of the sensors in the datasheet.

## February 11th, 2026

We had our first meeting with our TA today, her name is Manvi Jha. We talked to her about our project plans and showed her our block diagram for our project, as well as how our proposal was coming along. She said everything looked good so we are continuing to finish up our proposal which we will submit before the deadline later this week. 

## February 16th, 2026

We are working on our PCB design (the first version of our PCB) so that we can show our TA before the extra credit deadline this Friday. I helped find various parts and connectors for our PCB, specifically a ton of connectors for the water quality sensors (PH, temperature, and water flow rate) as well as resistors. Estela calculated what was needed for the resistors in the PCB schematic so I've been finding parts that will work according to the resistance value and sizing, as well as other parts such as fuses.

## February 17th, 2026

As we continue working on the PCB, I have been assigning footprints for the resistors and various things like switches and fuses. There were about 36 resistors in our schematic so it took a lot of time to find the right ones. I ended up learning a lot about how to import footprints from mouser and also find associated resistors from digikey, which is good because it allowed me to quickly and efficiently get all of the parts. I also contributed to the Bill of Materials that we are keeping to track all of our parts and footprints.

## February 21st, 2026

Since Estela completed the schematic and Anjali and I finished assigning the footprints, I began drawing the traces on our PCB for the 5 Volt area of the PCB. I ended up drawing the traces for the entire right top side of the board. This took quite a bit of effort as I was trying to make sure the traces were neat and not too long. I connected those parts and also added a separate ground plane for that area, since we want separate ground planes for that area and the 3.3 Volt area and the power area on the PCB board.
![Image description](https://github.com/anjalia2/ECE-445-Project/blob/main/notebooks/aishwarya/images/Screenshot2026-03-01165308.png)

## February 24th, 2026

I added all the resistors we can find in the eshop to the eshop order form to submit to Manvi. A lot of our resistors are only available on Digikey so I am trying to set them up in a Digikey order. I went through in Digikey and identified all the resistors we need and added them to a cart that is shared with Anjali. 

## February 27th, 2026

I worked on the design document. I completed the parts list on the design document as well as the schedule. I also ended up adding to the ethics section and looking over requirements and verifications. I then went on to find parts to order on Digikey for all of the ICs, Fuses, and other parts such as the Buck Convertor and connectors and added them to the Digikey cart. Finally, I placed the Digikey order. Now, we are just waiting for all our parts to come in.

## March 1st, 2026


We are planning out what to do this week. We split up parts of the design document for each of us to present during our Design Review this Tuesday. We also discussed the breadboard demo and what we will have to do for that. We verified that all our surface mount parts are ordered for our PCB, and we plan to ask our TA about which subsystem we can build for our breadboard demo. We are currently planning on building our servo motor subsystem (the fish feeder subsystem). Anjali and I will be primarily working on the breadboard while Estela makes updates to our PCB design.




