# ECE 445 Lab Notebook
###### By Estela Medrano

---

# Date: March 23, 2026

## Objective

Solder LED 12 V input components, ESP32, and USB-to-UART.

---

PCB arrived after almost a month 🙁 but at least it’s here. What's the plan for today?

Soldered the following:

- ESP32
- LDO
- USB-to-UART

5V input from the USB works.

LDO works. Outputs 3.3V

USB-to-UART bridge tested, does not work. The computer recognizes the IC as a USB Serial Input, but cannot program the ESP32.

ESP32 is programmable with external USB-to-UART programmers.

Is it a driver problem?

Download driver -> Did not change anything, still recognized as USB Serial.

I will not continue testing cause I have no time.

Soldered 12V input, did not test. I will test tomorrow.

## Resources of the day

- https://www.silabs.com/software-and-tools/usb-to-uart-bridge-vcp-drivers?tab=overview