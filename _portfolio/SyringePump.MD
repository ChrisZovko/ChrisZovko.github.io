---
title: "Syringe Pump"
excerpt: "DIY Syringe Pump made using CAD, and Arduino!"
header:
  image: /assets/img/Screenshot 2025-01-21 015922.png
  teaser: /assets/img/Screenshot 2025-01-21 015922.png
gallery:
  - url: /assets/img/Screenshot 2025-01-21 015922.png
    image_path: /assets/img/Screenshot 2025-01-21 015922.png
---

## Syringe Purpose and Features
  The purpose of the syringe pump device is to provide precise volumes of fluid at various flow rates. On the pump there is an LCD display which shows the selected flow rate based on the inputs from the potentiometer. The pump also as the option to adjust the position of the syringe using buttons that rotate the motor clockwise or coutner-clockwise. 


| Off the Shelf Parts | Quantity |
| ----------- | ----------- |
| 250mm lead screw with 2mm pitch and 2mm lead | 1 |
| 1/4' x 8mm Flexible Coupling | 1 |
| 200mm linear rod with 8mm diameter | 2 |
| LM8UU Linear bearing for 8mm diameter rod | 2 |
| 2040 Aluminum Extrusion 1' Length | 1 |
| Nema 17 Stepper Motor | 1 |
| MEAN WELL RQ-65D AC-DC POWER SUPPLY Quad Output 5V 12V 24V 12V 4 Amp | 1 |
| Adruino Uno | 1 |
| A4988 Sepper Driver| 1 |
| Small Breadboard | 1 |
| Panel Mount Latching Push Button (On/Off) | 1 |
| Panel Mount Momentary Push Buttons(Bonus only) | 1 |
| Limit Switch | 1 |
| RGB Common Cathode LED | 1 |
| LCD Display | 1 |

| 3D Printed Parts | Quantity |
| ----------- | ----------- |
| Electronics Enclosure | 1 |
| Motor Support  | 1 |
| Syringe Holder | 2 |
| Carriage | 1 |
| Adjustable Syringe Attachment | 1 |

## Pump Operation
  Once the pump is on the flow rate can be chosen using the potentiometer with the selected flow rate being displayed on the LCD panel. The syringe can be retracted to a starting position and pushed forward using the larger pair of red buttons. Once the flow rate is chosen and the syringe is set into its starting position the syringe can be turned on by pressing the smallest red button on the enclosure. The syringe will turn off once the carriage hits the limit switch that is on the front support underneath the barrel flange. 

## Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/g/projects/20220916557357901/data/dXJuOmFkc2sud2lwcHJvZDpmcy5mb2xkZXI6Y28uWDk5MEFzZUtUN0NrZnU4T3UxSmtGdw/dXJuOmFkc2sud2lwcHJvZDpkbS5saW5lYWdlOjJNUkpTN1R0U0VxSUFnWVhoaXlwc0E/overview" width ="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

## Arduino Code
  [Arduino Code Ex. 1](/DF2100_Syringe_Pump_Project.ino)
  [Arduino Code Ex. 2](/extraCredit.ino)
