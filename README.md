# QuadrupedTurret
Four-legged robot with a turret mounted to the top. Created for Hack Club Highway to Undercity. <br>
A robot that can move like a spider, or a crab. It's named Rick v2, because Rick v1 was quite a failure. It uses 8 servos for movement, a 3S lipo battery for power and has 2 Servos & 2 DC Motors for it's shooter. It consists of an ESP32 wired with a perf board & jumper wires, which is controlled by a bluetooth Xbox controller.

### Breakdown of each component 
<ul>
<li> 4 Servos are use to move in the X direction and 4 other in the Y direction. <li>
<li> 1 Servo on the weapon for the weapon's rotational degree of freedom. </li>
<li> 1 Servo to reload the weapon, with a new nerf bullet </li>
<li> 1 3S Lipo 2200mAh to make run the robot for a long period of time </li>
<li> 1 ESP32 via Bluetooth connected Xbox Controller </li>
<li> Wiring will be done with a perf board and jumper wires </li>
</ul>

### CAD: Onshape
<img width="800" height="600" alt="image" src="https://github.com/user-attachments/assets/355c0bc5-b636-42b6-bc43-c417cf08b1a4" />

<img width="800" height="600" alt="image" src="https://github.com/user-attachments/assets/71d1b828-70e8-435b-aeb8-c6fed8089d45" />

### Wiring Schematic: KiCAD
<img width="800" height="600" alt="signal-2025-07-26-214057" src="https://github.com/user-attachments/assets/be48e641-0e26-4ba8-a0ec-78bfa96fa72e" />

### Programming: Arduino IDE
coming soon (once we build it)

### Bill of Materials

| **Item**             | **Cost (USD)** | **Description**                                     | **Vendor URL** |
|----------------------|----------------|-----------------------------------------------------|----------------|
| Jumper Wires (2x)    | $9.98          | Using these for our wiring                         | [Amazon](https://www.amazon.com/gp/product/B0B2L66ZFM/ref=ox_sc_act_title_6?smid=A1YZW40LYQY3L1&psc=1) |
| Wire Strippers       | $8.99          | To cut and strip wires                             | [Amazon](https://www.amazon.com/WGGE-Professional-crimping-Multi-Tool-Multi-Function/dp/B073YG65N2) |
| N20 Motors (DC)      | $5.99          | For our weapon                                      | [Amazon](https://www.amazon.com/gp/product/B0DZNTV88C/ref=ox_sc_act_title_3?smid=A2UYBS1CH53PM5&psc=1) |
| Heatset Inserts      | $9.98          | Goes along with bolts                               | [Amazon](https://www.amazon.com/gp/product/B0DK1CF7RM/ref=ox_sc_act_title_4?smid=ABMRG4Y4E0D6H&psc=1) |
| Perf Board           | $8.99          | For connecting everything (breadboard is too weak)  | [Amazon](https://www.amazon.com/gp/product/B0CMZL4T6J/ref=ox_sc_act_title_5?smid=A1YZW40LYQY3L1&psc=1) |
| M3 Bolts             | $7.99          | To keep everything in place                         | [Amazon](https://www.amazon.com/gp/product/B0D3X5CT2J/ref=ox_sc_act_title_7?smid=AXJ8GZIYRIWL2&psc=1) |
| Buck Converter       | $10.99         | 12V to 5V power conversion                          | [Amazon](https://www.amazon.com/gp/product/B09X1ZGR38/ref=ox_sc_act_title_8?smid=A31POUDF2NHFKC&psc=1) |
| XT60 Connector       | $7.99          | Battery → ESP32 power connector                     | [Amazon](https://www.amazon.com/gp/product/B0BQZW9H2Q/ref=ox_sc_act_title_9?smid=A1CK03RVBS2NYU&psc=1) |
| 2S LiPo Battery      | $16.92         | Power supply                                        | [Amazon](https://www.amazon.com/gp/product/B07L6BVRDG/ref=ox_sc_act_title_1?smid=A1KODDOPEPALCP&psc=1) |
| Servos (4x included) | $25.99         | For movement of our robot                           | [Amazon](https://www.amazon.com/gp/product/B09LS7RB5J/ref=ox_sc_act_title_10?smid=A1VTL661FOEJB1&psc=1) |
| Solder               | $3.99          | We don't have enough for this project               | [Amazon](https://www.amazon.com/Rindion-Soldering-Stained-Electrical-Components/dp/B0DT9CG5HG) |
| ESP32 (already owned)| $17.99         | Microcontroller unit                                | [Amazon](https://www.amazon.com/ESP-WROOM-32-Development-Microcontroller-Integrated-Compatible/dp/B0CR5Y2JVD) |
| Nerf Rival Bullets   | $8.87          | Ammunition                                          | [Amazon](https://www.amazon.com/gp/product/B07FRS9R63/ref=ox_sc_act_title_2?smid=AJH5PYLVP0DGO&psc=1) |
| Orange PLA           | $11.99         | For printing parts                                  | [Amazon](https://www.amazon.com/Cregrant3D-Filament-Printing-30-300mm-Accuracy/dp/B0F134B1PQ) |

---

**Subtotal:** $156.65  
**Taxes (4%):** $6.27  
**Total:** **$162.92**









