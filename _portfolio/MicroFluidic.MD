---
title: "Microfluidic Device"
excerpt: "Microfluidic device: uses pinch flow fractionation to separate cells"
header:
  image: assets/img/Final_Device_image.jpg
  teaser: assets/img/Final_Device_image.jpg
gallery:
  - url: assets/img/Best_Testing_Image.jpg
    image_path: assets/img/Best_Testing_Image.jpg
  - url: /assets/img/Final_Device.jpg
    image_path: /assets/img/Final_Device.jpg
    alt: "final device image"
  - url: assets/img/Mold Picture.jpg
    image_path: assets/img/Mold Picture.jpg
    alt: "CAD Mold"
---
## Introduction
  Microfluidic devices are small chips created to sort, mix, and perform other functions on liquids at very small scales. Channel widths inside a microfluidic device can be as small as 60 micrometers which is smaller than a human hair. One application for microfluidic devices is the sorting of particles based on density or size using pinch flow fractionation. Pinch flow fractionation devices work by leveraging different channel and particle sizes to determine the trajectory that particles will take to get to output channels. Devices consistent of two inlets; cells enter through one inlet while a sheath fluid(a fluid used to align cells) enters through the second inlet. The cells and fluid coincide within a pinched channel where the fluid pushes the cells against the upper wall of the channel. Along the upper wall the cells begin to separate by size with larger particles sorting themselves below ones. At the of the pinched channel the materials enter a wide section where the cells divde themselves by trajectory and are sorting by entering the correct output channel that is positioned at the trajectory of each particle size. Morijiri et al.(2011) used pinch flow fractionation to separate cells based on size and density this technological development allows for the separation of blood cells to identify disease early on by capturing abnormal cells within a patients blood. 


## Instructions
  * How to go from the 3D printed mold to the final device (Lab on a Chip paper). Include
the following steps but with additional detail:
The first step in the process of creating a microfluidic device is to design the CAD model. A microfluidic device has several compoenents: inlets, pinch section, broad section, outlets. For this PFF device there were a constraints that were applied. First, no features of the model could be smaller than THIS SMALL to avoid issues when demolding the device. Second, the ratio of the pinch section to the broad section needed to be 1:20. Third, all the outlet paths needed to have the same resistance so that the flow rate was equal throughout the broad section and outlets. 
  * CAD model
  * Print and cure mold
  * Parylene device
  * Cast PDMS
  * Plasma bond glass slide

## Discussion 
  Why are resin-printed molds coated with parylene prior to casting the PDMS? What are
hypothetical applications of your microfluidic mixer or sorter?
* Why is your geometry conducive to sorting? Discuss specific dimensions (pinch width,
outlet width, location of ports, etc.)
SORTING CONDITIONS
There are several important conditions for making a microfluidic device ideal for sorting particles of different sizes. First, the pinch section need to be properly sized. Second the ratio between the pinch and broad section needs to be sufficiently large. Third, the openings of the outlet paths needs to be properly positioned for each particle sizes. Fourth, each outlet path must have the same resistance. In order to achieve all of these conditions I purposely dimensioned every section of the device to meet these requirements.

### Particle Trajectory Calculations
The trajectory of particles in pinch flow fractionation can be calculated using the standard PFF trajectory formula:

$y = \frac{r_p + w_p/2}{w_p} \cdot w_b$

Where:
* $y$ is the center position of the particle in the broad section
* $r_p$ is the radius of the particle
* $w_p$ is the width of the pinch section
* $w_b$ is the width of the broad section

Using this formula, I calculated that small particles would enter the broad section at a position of 16.7 mm above the bottom, while large particles would enter at 11.667 mm above the bottom. The outlet channels were then positioned precisely at these calculated trajectories to ensure proper separation.

### Flow Resistance Design
To ensure that each outlet received the same flow rate, I applied the principle of equivalent hydraulic resistance across all outlet channels. The basic formula for flow resistance in microfluidic channels is:

$R = \frac{12\mu L}{wh^3(1-0.63\frac{h}{w})}$

Where:
* $R$ is the hydraulic resistance
* $\mu$ is the fluid viscosity
* $L$ is the channel length
* $w$ is the channel width
* $h$ is the channel height

All outlets were designed to have the same resistance value of 16, preventing disruptions to the streamlines and maintaining proper separation. This was achieved by carefully adjusting the length and cross-sectional dimensions of each outlet channel.

### Enhanced Design Features
My design incorporates a longer pinch section than typically used in PFF devices, which improves particle separation by allowing more time for particles to align against the channel wall before entering the broad section. This modification enhances the sorting efficiency and precision of the device.

What steps or design features did you use to ensure that each outlet received the same
flow rate, preventing disruptions to the streamlines and maintaining proper separation?
* Based on the results of testing, could you implement any future changes to improve
sorting?


## Interactive CAD Model
<div class="responsive-embed">
  <iframe src="https://a360.co/4bNS3aN" width="100%" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>
</div>
