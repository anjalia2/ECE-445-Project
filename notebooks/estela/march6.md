# ECE 445 Lab Notebook
###### By Estela Medrano

---

# Date: March 6, 2026

## Objective

Worked on breadboard testing.

---

Couple of notes from today’s session:

- All sensors work well, except the temperature sensor DS18B20. Re-checked everything, and the multimeter probed the power going in.
- Tested with 3.3V and 5V. Checked with a multimeter and stripped wire better. No change, no data is received.
- Bought a new temperature sensor just in case.
- Decoupling capacitors are not super necessary for testing purposes, I will add the normal ones but will not solder the electrolytic in our PCB unless we see very bad voltage spikes.
- Tested servo motor using a 3.3V PWM signal, worked fine! No need to add the level shifter anymore -> Removed from PCB layout.

## Resources of the day

- https://www.adafruit.com/product/381?srsltid=AfmBOop4JLBfv5qedUGq36frDQX9vyVTusMKieUlSaGwtCNAFJlJTlm4m4
