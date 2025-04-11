---
title: "Handlebar Phone Holder"
excerpt: "Rotatable bike handlebar phone holder with 3D printed components"
header:
  image: assets/img/phone_holder_header.jpg
  teaser: assets/img/phone_holder_teaser.jpg
gallery:
  - url: /assets/img/holder_portrait.jpg
    image_path: /assets/img/holder_portrait.jpg
    alt: "Phone Holder in Portrait Mode"
  - url: /assets/img/holder_landscape.jpg
    image_path: /assets/img/holder_landscape.jpg
    alt: "Phone Holder in Landscape Mode"
  - url: /assets/img/rotation_mechanism.jpg
    image_path: /assets/img/rotation_mechanism.jpg
    alt: "Rotation Mechanism Close-up"
  - url: /assets/img/holder_installation.jpg
    image_path: /assets/img/holder_installation.jpg
    alt: "Phone Holder Installation"
toc: true
toc_sticky: true
---

# Introduction: Handlebar Phone Holder

This project is a rotatable phone holder designed to mount securely on bicycle handlebars. The holder allows for quick rotation between landscape and portrait orientations, making it versatile for navigation, fitness tracking, or media consumption while riding. Within the phone holder there is a detent bechanism which allows for the phone to rotate. The design is a multimaterial design, incorporating TPU and PLA parts. Moreover, the model was deisnged using top down CAD modeling. 

# Interactive CAD Model
<div class="embed-container">
  <iframe src="https://a360.co/your_model_link" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>
</div>

# Top-Down Modeling Approach

## What is Top-Down Modeling?

Top-Down modeling is an approach to CAD design where every part within the larger assembly is created as a component. This allows for every component within the design to have its own extrusions and sketches designated to itself that can not be interacted with by other components. What this allows for is an entire assembly being made a joined together within one design. Overall, the methodology improves the accuracy and placement of the various components within the final model. 

## Application in This Project

For this phone holder, I utilized top-down modeling by creating several components to create the model. These are the following components:
-Phone case
-Detent mechanism holder
-Detent mechanism cover
-Detent mechanism centerpiece
-Bike grip

Using top-down modeling was very effective for this design because there were a variety of parts that needed to be properly aligned in order for screws to fit properly within multiple parts. The method also made it easier to build parts ontop of each other in precisely the right location.

# Device Design

## Design Rationale

### Rotation Mechanism
I chose a detent-based rotation mechanism using a spring-loaded ball bearing against precisely positioned detents. This design offers several advantages:

- Provides tactile feedback when switching between portrait and landscape orientations
- Securely locks in position to prevent unwanted rotation during rides
- Requires minimal force to change orientations when desired
- Uses simple mechanical principles for reliability

The mechanism works very well and makes a great click sound at each interval. My design moves at 90 degree angles which allows the user to easily move their phone from portrait to landscape mode. Detent mechanisms are very simple to design and are one of the easiest ways to incorporate rotation into a model. My detent mechanism takes up slightly to much space which is one modification I am looking to make to this project. 

### 3D Printing Considerations
Several design modifications were necessary to account for 3D printing limitations:

-Tolerances were made to ensure proper fit and reduce the impact of shrinkage from printing
  - Added a loose tolerance of .52mm for the M5 screw holes within the model
  - Added a loose tolerance of .82mm for the hex shaped nuts that fasten the screws
-The phone case needed to have a slightly smaller width than expected in order for the phone to be properly compressed by the TPU
- Used two types of filament in order to ensure that each part of the device had the necessary properties
  - TPU was used for the phone case and bike grip so that these parts will compress around the parts put inside of them
  - PLA was used for the parts of the detent mechanism to provide rigidity to this section of the device

### Material Selection
Different parts required different materials based on their functional requirements:
- Handlebar clamp: TPU in order to compress around the bike grip
- Rotation mechanism: PLA for rigidity 
- Phone case: TPU to compress around the phone for a tight fit

![CAD rendering of phone holder]({{ site.baseurl }}/assets/img/phone_holder_rendering.jpg)

## Iterative Process

The design process was very direct with my initial design being the concept that I followed all the way through. This design is the most straightforward approach for designing a detent based phone holder for a bike. It requires three parts to be assemblied to form the detent. Then the detent mechanism is attached to the phone and all of these parts are attached to the bike grip. 

![Final design]({{ site.baseurl }}/assets/img/final_design.jpg)

## Detailed Specifications
- **Handlebar Compatibility**: 22-31.8mm diameter
- **Phone Size Accommodation**: 65-95mm width
- **Weight Capacity**: 350g
- **Rotation Angles**: 0° (portrait) and 90° (landscape)
- **Materials**: PLA, PETG, TPU
- **Hardware**: 
  - 4× M5×25mm bolts
  - 4× M5 heat-set inserts
  - 2× M3×10mm bolts
  - 2× M3 heat-set inserts
  - 1× 5mm ball bearing
  - 1× Compression spring (4mm OD, 15mm length)

# Manufacturing Method

## 3D Printing Technology Selection

### FDM Printing (Fused Deposition Modeling)
I used FDM printing for most components due to:
- Accessibility and cost-effectiveness
- Sufficient strength for the application
- Ability to use different materials for different functional requirements
- Easy post-processing for heat-set insert installation

### Material Selection Rationale
- **PETG** for the handlebar clamp: Weather-resistant, UV-stable, and has excellent toughness for outdoor use
- **PLA** for the rotation mechanism and phone cradle: Provides good dimensional accuracy and rigidity
- **TPU** for vibration damping elements: Offers flexibility and shock absorption

## Print Settings
- **Layer Height**: 0.2mm for most parts, 0.12mm for detailed features
- **Infill**: 40% gyroid pattern for structural components
- **Perimeters**: 3 for strength
- **Supports**: Generated only where necessary, with 10% density
- **Print Orientation**: Optimized to minimize supports and maximize strength along load-bearing axes

![Cross-section view of internal rotation mechanism]({{ site.baseurl }}/assets/img/cross_section.jpg)

# Assembly Instructions

1. Install M5 heat-set inserts into the handlebar clamp base using a soldering iron
2. Install M3 heat-set inserts into the rotation mechanism housing
3. Insert the ball bearing and compression spring into the designated cavity
4. Assemble the rotation mechanism by connecting the detent plate to the housing with M3 bolts
5. Attach the phone cradle to the rotation mechanism
6. Mount the assembled unit to the handlebar clamp
7. Secure the clamp to the handlebar using M5 bolts

## Usage
1. Open the phone cradle by pulling outward on the spring-loaded side
2. Insert phone securely into the cradle
3. To rotate, firmly grip phone and turn 90° until the mechanism clicks into position
4. To remove, pull outward on the spring-loaded side of the cradle and lift phone out

# Demonstration

Below is a demonstration of the phone holder rotating between portrait and landscape orientations:

![Phone Holder Rotation Demonstration]({{ site.baseurl }}/assets/img/rotation_demo.gif)

# Gallery
{% include gallery caption="Images of the handlebar phone holder in various configurations" %}
