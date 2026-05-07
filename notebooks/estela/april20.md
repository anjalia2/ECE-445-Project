# ECE 445 Lab Notebook
###### By Estela Medrano

---

# Date: April 20, 2026

## Objective

Bodge wire fault LEDs from V2.

---

I do not wanna desolder all components from V2 onto V3. I will bodge wire whatever is needed.

What pins are GPIO input and output so that I can replace them?

No available analog pins. Can we use GPIO? Yes.

Used TMS and TDI for cleanliness. We aren’t using JTAG anyways. The flow meter fault LED is at the correct pin, no need to bodge wire it.

TCK is also available  -> Will be used for ESP32 PWM dimming using jumper wire.

- TMS -> pH fault
- TDI -> temp fault
- TCK -> PWM dimming

Tested LED driver with 12V and load of 10 LEDs (5 blue and 5 red). Works well! LEDs using this LED Driver were too bright. Reduced the amount of blue LEDs.

Tested lowering the voltage -> Shuts down at around 8-9V.

For the blue LEDs, 2 x 2.9 = 5.8V  For the red LEDS, 5 x 1.8 = 9V  In total, 5.8V + 9V = 14.8V Based on this, we know that the forward voltage is around that range when at a minimal condition. Thus, this requirement is still met, especially since the lights were still decently bright.

When using PWM dimming, it’s less bright, so it’s easier to test.

Weird thing we found -> Blue LEDS are brighter than red. Why?

Random reddit user -> “the brightnesses still won't match up - different color LEDs work at different efficiencies and your eye responds to each color differently. There really is no way to get the brightnesses to match up without some experimentation.”

## Resources of the day

- https://cdn.sparkfun.com/datasheets/IoT/esp32_datasheet_en.pdf
- https://www.digikey.com/en/products/detail/broadcom-limited/ASMW-L300-AFH0E/9740377
- https://www.digikey.com/en/products/detail/broadcom-limited/ASMW-LL00-NKM0E/9740413
- https://www.reddit.com/r/AskElectronics/comments/12j6p6/optimum_resistance_when_wiring_different_colored/#:~:text=Even%20if%20you%20analytically%20determine,nobody%20can%20futz%20with%20them.
- https://www.ledsupply.com/blog/wiring-leds-correctly-series-parallel-circuits-explained/
