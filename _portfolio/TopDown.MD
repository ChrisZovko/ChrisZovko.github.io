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

This project is a rotatable phone holder designed to mount securely on bicycle handlebars. The holder allows for quick rotation between landscape and portrait orientations, making it versatile for navigation, fitness tracking, or media consumption while riding. The design incorporates 3D printed components along with standard hardware for a robust, functional mounting solution.

# Interactive CAD Model
<div class="embed-container">
  <iframe src="https://a360.co/your_model_link" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>
</div>

# Top-Down Modeling Approach

## What is Top-Down Modeling?

Top-down modeling is an approach to CAD design where the overall assembly structure is created first, and individual components are designed within the context of this assembly. This method allows components to reference other components' geometry, establishing relationships that update automatically when changes are made.

## Application in This Project

For this phone holder, I utilized top-down modeling by:

1. Creating a master sketch that defined the basic dimensions of the handlebar and phone
2. Establishing key reference planes and axes for the rotation mechanism
3. Designing individual components (clamp, rotation mechanism, phone cradle) within the context of the assembly
4. Using derived geometry to ensure proper fit between components

This approach was especially valuable when designing the clamp mechanism, as it needed to precisely match the handlebar dimensions while interfacing correctly with the rotation component. When I needed to adjust the grip angle for better ergonomics, the parametric relationships established through top-down modeling allowed all dependent components to update automatically.

# Device Design

## Design Rationale

### Rotation Mechanism
I chose a detent-based rotation mechanism using a spring-loaded ball bearing against precisely positioned detents. This design offers several advantages:

- Provides tactile feedback when switching between portrait and landscape orientations
- Securely locks in position to prevent unwanted rotation during rides
- Requires minimal force to change orientations when desired
- Uses simple mechanical principles for reliability

The rotation mechanism works well in practice, offering just enough resistance to stay in position during normal riding conditions while still allowing easy orientation changes when needed. The detent positions are set at 0° and 90° for portrait and landscape orientations.

### 3D Printing Considerations
Several design modifications were necessary to account for 3D printing limitations:

- Added 0.2mm clearance between moving parts to prevent fusion during printing
- Incorporated chamfers on overhanging surfaces to reduce the need for supports
- Split larger components to optimize print orientation and reduce support material
- Designed heat-set insert cavities 0.1mm smaller than the insert diameter for secure post-print installation

### Material Selection
Different parts required different materials based on their functional requirements:
- Handlebar clamp: PETG for weather resistance and durability
- Rotation mechanism: PLA for dimensional accuracy and rigidity
- Spring housing: TPU for shock absorption and vibration dampening

![CAD rendering of phone holder]({{ site.baseurl }}/assets/img/phone_holder_rendering.jpg)

## Iterative Process

The design underwent several iterations to address specific challenges:

### First Prototype
The initial design used a friction-based rotation mechanism, which proved unreliable in testing. The holder would gradually shift orientation during rides over rough terrain. The clamp also had insufficient grip on the handlebar.

![First prototype]({{ site.baseurl }}/assets/img/first_prototype.jpg)

### Second Iteration
In the second iteration, I redesigned the clamp to include a rubber insert for better grip and implemented the detent-based rotation system. However, the detent spring was too stiff, making orientation changes difficult.

![Second iteration]({{ site.baseurl }}/assets/img/second_iteration.jpg)

### Final Design
The final design features an optimized detent system with a carefully selected spring rate and ball bearing size. The clamp now uses M5 bolts instead of M3 for more secure attachment, and I added additional rubber padding for vibration isolation.

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
