# ECE 445 Lab Notebook
###### By Estela Medrano

---

# Date: February 22, 2026

## Objective

Finished layout and take notes about what might have been wrong.

---

Finished the first layout. I did not take many notes because most of it was just moving parts around, routing traces, and trying to fit everything. This layout will probably not be used since we only ordered enough parts to solder one board. The second-round layout will most likely be the version we actually build, since I’ll have more time to think about it.

Couple of wrong things in this one:

- The ESP32 antenna should have been placed more separately from everything else. There should not be traces or copper under the antenna area because that can cause interference and make WiFi/Bluetooth work worse.
- The LED driver shunt resistor layout also does not look right. Since this resistor is used to sense LED current, it should be placed closer to the LED driver and routed more carefully.
- I also should have followed the reference layout examples more closely, especially for the ESP32 antenna and the LED driver section.

Couple of things I followed:

- LT3922 layout instructions 
- ![Capacitor Placement LT3922](Pictures/figure_8.png)
- Buck converter layout instructions 
- ![Suggested Layout TPS565242](Pictures/figure_9.png)


## Resources of the day

- https://docs.espressif.com/projects/esp-hardware-design-guidelines/en/latest/esp32/pcb-layout-design.html?highlight=antenna
- https://esp32.com/viewtopic.php?t=1635
