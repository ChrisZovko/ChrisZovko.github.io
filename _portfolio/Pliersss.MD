---
title: "Multi-Material Pliers"
excerpt: "Multi-Material Pliers made of PLA and TPU"
header:
  image: assets/img/ClosedFinals.jpg
  teaser: assets/img/ClosedFinals.jpg
gallery:
  - url: /assets/img/ClosedFirstIt.jpg
    image_path: /assets/img/ClosedFirstIt.jpg
    alt: "First Iteration Closed"
  - url: /assets/img/OpenSecond.jpg
    image_path: /assets/img/OpenSecond.jpg
    alt: "Second Iteration Open"
  - url: /assets/img/OpenFinal.jpg
    image_path: /assets/img/OpenFinal.jpg
    alt: "Final Pliers Open"
  - url: assets/img/IMG_1188 (1).gif
    image_path: assets/img/IMG_1188 (1).gif
    alt: "Plier GIF"
toc: true
toc_sticky: true
---

# Introduction: What are print in place parts?
This project is a set of pliers made of PLA for the claws and handles with a flexible TPU centerpiece to allow the claws to close when used. The pliers were developed to pick up a resistor, which it is capable of, and other small items. My version of the pliers are quite large and are able to clamp onto and hold items such as pencils or cords. To design the pliers I used a print in place method where interlocking trapezoids were used to hold pieces together.

Print in place parts are one method of creating models that have movable parts. The advantage of print in place is that it can all be done in one print and you do not need to piece together smaller parts. This method is useful for creating joints such as hinges or gears. One common use of print in place is to create a spring loaded box. Spring loaded boxes use a gear shaped mechanism to 'spring' the lid of the box open. In general, print in place is effective for models that require joints and flexible movements within your model. 

# Interactive CAD Model
<div class="embed-container">
  <iframe src="https://a360.co/41PBXds" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>
</div>

# Device Design

## CAD Model Development
There are five bodies within the plier CAD model. Two for the claws, two for the handles, and 1 for the flexible TPU centerpiece. To create the model the centerpiece was created first. Following this, the handles and claws were developed around the centerpiece. The handles were made to allow whoever uses them to completely close the jaws while also providing space to close the handles further to apply more force to what is being picked up. For the claws, they were made to close completely so that the two claws come together with no gaps in-between them. On the claws there are also small teeth that help support the item being picked up by pliers through friction.

![CAD model close-up]({{ site.baseurl }}/assets/img/ClosedFinals.jpg)

## Iterative Process
There were several models made in order to develop the final model. The specific challenges with developing the model were sizing, closing the pliers, and having a sturdy connection between the TPU centerpiece and the PLA claws plus handles.

My first model was too small and too thin. Specifically, the side lengths of the centerpiece were only 20mm while the thickness was 4mm. This model was ineffective because the size of the centerpiece meant the trapezoid joints that connected the pieces were too small. Since the joints were too small the pieces of the pliers could not stay attached to the centerpiece.

![First Iteration]({{ site.baseurl }}/assets/img/ClosedFirstIt.jpg)

For the final model the centerpiece side lengths were changed to 40mm and the thickness of the pliers was increased to 7.5mm. This sizing allowed for a sturdy centerpiece that allows for a significant amount of force to be applied to the device. Another piece of the centerpiece that is important is the tolerance between it and the PLA parts. The final tolerance of the model is .1mm. However, I think that it would be better if the tolerance was slightly smaller and the thickness of the pliers also increased. Increasing the thickness and decreasing the tolerance could help the claws align better when picking items up.

![Second Iteration]({{ site.baseurl }}/assets/img/OpenSecond.jpg)

The next major challenge was to develop the pliers in a way that would allow the claws to completely shut. My first model had claws that did not completely close and instead touched at the tips of the claws. There are different methods for solving this issue and I chose to do it by adding additional material to each claw that would close the air gap created beneath the tips of the plier ends. This method ended up being quite effective and with the addition of the teeth to the plier claws items are able to be picked up easily.

There still remains very small air gaps in the final model. However, I believe these are an issue with how the teeth were modeled onto the claws. Since I filled in the material under the plier tips, the sides of claws are slanted in different ways. This made it very difficult to model teeth that would completely fit in together.

![Final Design]({{ site.baseurl }}/assets/img/OpenFinal.jpg)

## Relevant Specifications
- **Claw Length**: 100mm
- **Centerpiece Size**: 40mm x 40mm
- **Handle Size**: approximately 86mm
- **Claw Capacity**: 20-40 grams
- **Claw Gap Size**: 12mm
- **Claw Teeth Size**: Isosceles Triangles 1.8mm, 1.8mm, and base of 2mm

# Print Settings
There were no unique changes to the print setings for this project. Standard settings for 95A TPU and PLA were used.

# Demonstration
Below is a demonstration of the pliers picking up a resistor:

![Pliers in Action]({{ site.baseurl }}/assets/img/IMG_1188 (1).gif)

# Gallery
{% include gallery caption="Images of the final multi-material pliers" %}
