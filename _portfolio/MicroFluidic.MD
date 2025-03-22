---
title: "Microfluidic Device"
excerpt: "Microfluidic device: uses pinch flow fractionation to separate cells"
header:
  image: assets/img/Final_Device_image.jpg
  teaser: assets/img/Final_Device_image.jpg
gallery:
  - url: assets/img/Best_Testing_Image.jpg
    image_path: assets/img/Best_Testing_Image.jpg
    alt: "Best testing results"
  - url: /assets/img/Birdseye_image_2.jpg
    image_path: /assets/img/Birdseye_image_2.jpg
    alt: "Final device image"
  - url: assets/img/Mold Picture.jpg
    image_path: assets/img/Mold Picture.jpg
    alt: "CAD Mold"
toc: true
toc_sticky: true
---

## Introduction

Microfluidic devices are small chips created to sort, mix, and perform other functions on liquids at very small scales. Channel widths inside a microfluidic device can be as small as 60 micrometers, which is smaller than a human hair. 

One application for microfluidic devices is the sorting of particles based on density or size using pinch flow fractionation (PFF). PFF devices work by leveraging different channel and particle sizes to determine the trajectory that particles will take to reach output channels. 

These devices consist of two inlets:
1. Cells enter through one inlet
2. A sheath fluid (used to align cells) enters through the second inlet

The cells and fluid coincide within a pinched channel where the fluid pushes the cells against the upper wall of the channel. Along the upper wall, the cells begin to separate by size with larger particles sorting themselves below smaller ones. At the end of the pinched channel, the materials enter a wide section where the cells divide themselves by trajectory and are sorted by entering the correct output channel positioned at the trajectory of each particle size.

Morijiri et al. (2011) used pinch flow fractionation to separate cells based on size and density. This technological development allows for the separation of blood cells to identify disease early on by capturing abnormal cells within a patient's blood.

{% include gallery caption="Images of the final device, testing, and demolding process." %}

## Device Design and Fabrication

### CAD Model Development
The first step in creating a microfluidic device is designing the CAD model. A microfluidic device has several components:
- Inlets
- Pinch section
- Broad section
- Outlets

For this PFF device, several constraints were applied:
1. No features could be smaller than a minimum size to avoid issues when demolding the device
2. The ratio of the pinch section to the broad section needed to be 1:20
3. All outlet paths needed to have the same resistance so that the flow rate was equal throughout the broad section and outlets

### Fabrication Process
The device fabrication followed these key steps:
* CAD model design
  -A model designed in Fusion 360 made to be used as a mold for PDMS to be applied to later in the process
* 3D printing and curing of the mold
  -Using resin vat polymerization the CAD model is turned into a physical model
  -The resin model is cured using UV light, washed in alcohol, and then heat treated 
* Parylene coating of the mold
  -A parylene coating is applied to the resin model 
  -There are two benefits to the parylene coating
    -Creates a non-stick surface that makes it easy to remove the PDMS cast 
    -Improves the smoothness of the surfaces, leading to a better final product
* Casting PDMS
  -Polydimethylsiloxane(PDMS) is a sillicone based material that is used to make microfluidic devives
  -PDMS is carefully poured over the parylene coated resin mold to create a cast of the final device
  -Must be carefully removed to ensure final device integrity
* Plasma bonding to a glass slide
  -The device is plasma bonded to a microscope glass to provide a flat surface and allow a viewing window

## Particle Separation Mechanics

### Particle Trajectory Calculations
The trajectory of particles in pinch flow fractionation can be calculated using the standard PFF trajectory formula:

$$y = \frac{r_p + w_p/2}{w_p} \cdot w_b$$

Where:
* $y$ is the center position of the particle in the broad section
* $r_p$ is the radius of the particle
* $w_p$ is the width of the pinch section
* $w_b$ is the width of the broad section

Using this formula, I calculated that small particles would enter the broad section at a position of 16.7 mm above the bottom, while large particles would enter at 11.667 mm above the bottom. The outlet channels were then positioned precisely at these calculated trajectories to ensure proper separation.

### Flow Resistance Design
To ensure that each outlet received the same flow rate, I applied the principle of equivalent hydraulic resistance across all outlet channels. The basic formula for flow resistance in microfluidic channels is:

$$R = \frac{12\mu L}{wh^3\left(1-0.63\frac{h}{w}\right)}$$

Where:
* $R$ is the hydraulic resistance
* $\mu$ is the fluid viscosity
* $L$ is the channel length
* $w$ is the channel width
* $h$ is the channel height

All outlets were designed to have the same resistance value of 16, preventing disruptions to the streamlines and maintaining proper separation. This was achieved by carefully adjusting the length and cross-sectional dimensions of each outlet channel.

### Enhanced Design Features
My design incorporates a longer pinch section than typically used in PFF devices, which improves particle separation by allowing more time for particles to align against the channel wall before entering the broad section. This modification enhances the sorting efficiency and precision of the device.

## Discussion

### Parylene Coating
Resin-printed molds are coated with parylene prior to casting PDMS for several important reasons:
1. It creates a barrier between the potentially toxic resin and the PDMS
2. It improves the surface properties for PDMS demolding
3. It prevents chemicals from the resin leaching into the microfluidic channels
4. It provides a more uniform and smooth surface for better channel formation

### Sorting Mechanism
The geometry of this device is specifically optimized for sorting through these key design elements:
1. **Precise pinch width**: The narrow pinch section ensures particles align properly against the wall
2. **Optimal expansion ratio**: The 1:20 ratio between pinch and broad sections creates sufficient space for particle trajectories to diverge
3. **Strategic outlet positioning**: Outlets are placed at calculated positions (16.7 mm and 11.667 mm) that correspond to different particle sizes
4. **Balanced flow resistance**: All outlet paths have equal resistance (value of 16) to maintain stable flow conditions
5. **Outlet Distance**: All outlet must be 11mm apart from each other at their ends so that the barb outlets fit properly on the device

### Future Improvements
A key future improvement would be to create a device where every outlet path is equal in length and resistance. This was not possible for this project due to size constraints that made it very difficult to create a device with equal channels that did not cause other issues(for example bubbles developing around corners). In a device where every channel is equal in size then it is much more likely that the channels will experience equal flow which significantly improves the quality of the devices output. 

## Interactive CAD Model
<div class="responsive-embed">
  <iframe src="https://a360.co/4bNS3aN" width="100%" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>
</div>
