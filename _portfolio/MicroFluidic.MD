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

## Introduction
  Microfluidic devices are small chips created to sort, mix, and perform other functions on liquids at very small scales. Channel widths inside a microfluidic device can be as small as 60 micrometers which is smaller than a human hair. One application for microfluidic devices is the sorting of particles based on density or size using pinch flow fractionation. Pinch flow fractionation devices work by leveraging different channel and particle sizes to determine the trajectory that particles will take to get to output channels. Devices consistent of two inlets; cells enter through one inlet while a sheath fluid(a fluid used to align cells) enters through the second inlet. The cells and fluid coincide within a pinched channel where the fluid pushes the cells against the upper wall of the channel. Along the upper wall the cells begin to separate by size with larger particles sorting themselves below ones. At the of the pinched channel the materials enter a wide section where the cells divde themselves by trajectory and are sorting by entering the correct output channel that is positioned at the trajectory of each particle size. Morijiri et al.(2011) used pinch flow fractionation to separate cells based on size and density this technological development allows for the separation of blood cells to identify disease early on by capturing abnormal cells within a patients blood. 


## Instructions
  • How to go from the 3D printed mold to the final device (Lab on a Chip paper). Include
the following steps but with additional detail:
o CAD model
o Print and cure mold
o Parylene device
o Cast PDMS
o Plasma bond glass slide

## Discussion 
  Why are resin-printed molds coated with parylene prior to casting the PDMS? What are
hypothetical applications of your microfluidic mixer or sorter?
• Why is your geometry conducive to sorting? Discuss specific dimensions (pinch width,
outlet width, location of ports, etc.)
What steps or design features did you use to ensure that each outlet received the same
flow rate, preventing disruptions to the streamlines and maintaining proper separation?
• Based on the results of testing, could you implement any future changes to improve
sorting?
• Did you attempt the bonus opportunity? If so, describe your approach and success.


## Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a460390ca15d5c3379?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Arduino Code
  [Arduino Code Ex. 1](/DF2100_Syringe_Pump_Project.ino)
  [Arduino Code Ex. 2](/extraCredit.ino)
