# ECE 445 Lab Notebook
###### By Estela Medrano

---

# Date: March 25, 2026

## Objective

Solder LED driver and test.

---

Notes of the day:

LT3922 boost converter was not switching when turned on.

Probed all pinouts and found the following:

- EN a bit too close to the off range -> Changed divider -> Nothing happened.
- Changed R1 from 1.1M to 1M
- All of the other pins where normal operation, except the feedback pin being too low, but this is just an indicator that the boost converter isn't switching, which we already know
- Checked schematic values against datasheet.
- Maybe ask Manvi to check?
- Tested with and without load -> No change
- Tested with PWM dimming set high and with PWM at 1kHz frequency -> No change

Table of everything I did, with values:

| Area checked | What I tested/measured | Result | Conclusion |
|---|---|---|---|
| Switching node | Measured SW | Flat at 12V, no switching | No switching |
| Feedback divider | FB = 1M / 43.2k and measured FB | FB = 0.5V | Low value, meaning output is below target voltage, aka not boosting |
| Current control | CTRL tied to VRED with 1uF and measured CTRL | CTRL = 1.8V | Valid value |
| Enable/protection thresholds | Measured EN/UVLO and OVLO | In valid range | Normal operation |
| Fault output | Measured FAULT | High | No open/short LED fault |
| Soft-start | Measured SS | High | Normal operation |
| Internal bias rail | Measured INTVCC | Around 2.3-2.4V | A bit low |
| PWM input | Drove PWM from ESP32 and felt it high at 3.3V | No change | PWM_DIM is not a problem |
| PWMTG | Measure PWMTG gate | Gate is at 12V | This means its OFF |
| Schematic values | Checked RT, SS, FB, CTRL, EN/OVLO, INTVCC cap, BST cap, VOUT caps, PMOS path | Values match datasheet recommendations or equations | Nothing wrong with design |

Next time, I’ll replace the IC with the new one we bought.

## Resources of the day

- https://www.analog.com/en/products/lt3922.html
