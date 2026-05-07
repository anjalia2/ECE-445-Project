# ECE 445 Lab Notebook
###### By Estela Medrano

---

# Date: March 26, 2026

## Objective
Modify the PCB for round 4 to fix issues.

---

Modified PCB for round 4 to fix issues.

Issues:

- Made pH fault and temp fault LED be on a GPIO input pin only, thus cannot turn on.
- Important cause this is required for functionality and the demo! It’s in our high level requirements.
- Mislabeled pH fault and flow meter fault
- Add 10k pullup to IO0.
- Changed jumpers on TX/RX to net-tie instead -> Hope this is smoother for the signal.
- Added 10k pulldown to PWM DIM.