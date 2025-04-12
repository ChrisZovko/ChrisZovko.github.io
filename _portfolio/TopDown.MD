---
title: "Phone Holder for Bike"
excerpt: "Rotatable bike phone holder that attaches to bike grip"
header:
  image: final_design.jpg
  teaser: /assets/img/RENDER1.png
toc: true
toc_sticky: true
---

# Introduction: Handlebar Phone Holder

This project is a rotatable phone holder designed to mount securely on bicycle handlebars. The holder allows for quick rotation between landscape and portrait orientations, making it versatile for navigation, fitness tracking, or media consumption while riding. Within the phone holder there is a detent bechanism which allows for the phone to rotate. The design is a multimaterial design, incorporating TPU and PLA parts. Moreover, the model was deisnged using top down CAD modeling. 

# Interactive CAD Model
<div class="embed-container">
  <iframe src="https://a360.co/4coyEgI" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>
</div>

# Top-Down Modeling Approach

## What is Top-Down Modeling?

Top-Down modeling is an approach to CAD design where every part within the larger assembly is created as a component. This allows for every component within the design to have its own extrusions and sketches designated to itself that can not be interacted with by other components. What this allows for is an entire assembly being made a joined together within one design. Overall, the methodology improves the accuracy and placement of the various components within the final model. 

## Application in This Project

For this phone holder, I utilized top-down modeling by creating several components to create the model. These are the following components:
- Phone case
- Detent mechanism holder
- Detent mechanism cover
- Detent mechanism centerpiece
- Bike grip

![Phone Case Component](/assets/img/A%20-%20Copy.png)
![Detent Mechanism Holder](/assets/img/AA%20-%20Copy.png)
![Detent Mechanism Cover](/assets/img/AAAA.png)
![Detent Mechanism Centerpiece](/assets/img/AAAAA%20-%20Copy.png)
![Bike Grip Component](/assets/img/AAAAAA%20-%20Copy.png)

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

- Tolerances were made to ensure proper fit and reduce the impact of shrinkage from printing
  - Added a loose tolerance of .52mm for the M5 screw holes within the model
  - Added a loose tolerance of .82mm for the hex shaped nuts that fasten the screws
- The phone case needed to have a slightly smaller width than expected in order for the phone to be properly compressed by the TPU
- Used two types of filament in order to ensure that each part of the device had the necessary properties
  - TPU was used for the phone case and bike grip so that these parts will compress around the parts put inside of them
  - PLA was used for the parts of the detent mechanism to provide rigidity to this section of the device

### Material Selection
Different parts required different materials based on their functional requirements:
- Handlebar clamp: TPU in order to compress around the bike grip
- Rotation mechanism: PLA for rigidity 
- Phone case: TPU to compress around the phone for a tight fit
 
![CAD rendering with phone](/assets/img/RENDER2.png)
![CAD rendering with phone](/assets/img/RENDER1.png)

## Iterative Process

The design process was very direct with my initial design being the concept that I followed all the way through. This design is the most straightforward approach for designing a detent based phone holder for a bike. It requires three parts to be assemblied to form the detent. Then the detent mechanism is attached to the phone and all of these parts are attached to the bike grip. 

![Final design](/assets/img/final_design.jpg)

# Manufacturing Method

## 3D Printing Technology Selection

Standard filament printing using TPU and PLA was used for this project. There were options to SLS print, however that was unecessary for my design because there were no parts that were so thin that they would break. This method was used for every parts of the print because it was the most accessible, provided all structural functions that the model needed, and could provide a variety of materials. 

![Cross-section view of internal rotation mechanism](/assets/img/SideviewAnalysis.png)
![Top view of internal rotation mechanism](/assets/img/TopDownAnalysis.png)

# Assembly Instructions

The assembly is very straight forward. First insert the ball and spring to the bottom detent component; insert the centerpiece of the detent; place the top detent piece on the prior two. Once those first steps are done the detent mechanism is screwed to the phone and the entire thing is then screwed to the bike grip. To use the device, simply slide your phone in from the top of the phone case and slide the bike grip onto your bike handle. If needed the screws on the bike grip can be loosened to help slide it onto the handles then tightened once properly positioned. To use the detent, first ensure the grip is attached to the handles then turn the phone case in any direction you want. My device is very sturdy so it is able to be used in rough road areas without the phone falling out or device breaking. 

# Demonstration

Below is a demonstration of the phone holder rotating between portrait and landscape orientations:

<video width="640" height="360" controls>
  <source src="/assets/img/IMG_2999 (online-video-cutter.com).mp4" type="video/mp4">
  Your browser does not support the video tag.
</video>

And here are views of the phone in both portrait and landscape orientations:

![Phone in Portrait Mode](/assets/img/BBBB.png)
![Phone in Landscape Mode](/assets/img/BBBBBB.png)

# Gallery
