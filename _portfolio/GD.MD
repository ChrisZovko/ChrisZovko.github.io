---
title: "Controller and Headphone Stand"
excerpt: "Controller and Headphone stand that used generative design to find the optimal topology"
header:
  image: /assets/img/Screenshot 2025-01-20 182627.png
  teaser: /assets/img/Screenshot 2025-01-20 182627.png
gallery:
  - url: /assets/img/ObjectGeo.png

    image_path: /assets/img/ObjectGeo.png

 
    image_path: assets/img/Mold Picture.jpg
    alt: "CAD Mold"

assets/img/Basic_Image_of_stand.jpg

assets/img/BestStand.jpg

assets/img/Birdseye.jpg


---



## Overview of Part + Applications
  The object I designed is a PS5 and Bose Headphone stand that also contains a platform for holding other small items as necessary. All the holders are extruded from a center pillar which provides most of the stability for the model. There is also some support below the general items platform to support uneven loads along the platform. As its name suggests the item can be used to hold PS5 controllers, but also any video game controllers can be supported by the stand, and headphones which have a specific slot to be put in. Besides the specific things the stand can hold the user could also place other small items such as pens, glasses, snacks etc. which makes it a very versatile stand to use on your desk or gaming area.

## Problem being Solved
  For me, this device is great for me because I wanted a very simple and easy to use device to place my videogame controllers after my friends and I play. Similarly, I added a headphone stand to the device because I often put them somewhere random and then have to find them before I go out. This stand will make it a lot easier for me to organize items that I used often. For others who might use the device it solves a similar issue. It is very easy to lose controllers around a house when people do not play so often or if there are a lot of people using a gaming console in a house. A controller stand makes it very easy for everyone to know where to find the controllers and put them once they are done playing. Having the headphone stand can be useful for people who use headphones when they play games.


## Obstacle Geometries
  Obstacle geometries are areas in the generative design process that are sectioned off as places where the device cannot be expanded into because the user will need access to that area around the model. My obstacle geomtries are very intuitive. I have preserve geometries for the controllers, headphones, and the area on the general holding platform where items can go. My obstacle geoemtries are very large to ensure that there would be plenty of space around the stand for people to use the device as they need to, rather than how it was specifically designed to be used. If a user wanted to put TV remotes on it rather than PS5 controllers, the preserve geoemtries ensure that there wont be any issues. PICTURE. 
  
## Preserve Geomtries
  Preserve Geomtries are shapes in the originally designed CAD model that you do not want to be distorted by the generative design optimization process. I used a technique for my preserve geometries which involved separted the parts of the stand which hold items into two separate bodies. The first body is the area of the stand which would be directly or very close to being in contact with an item, this was preserved. The second body is the area that is further beneath the item being held by the stand which was not preserved. What this technique allows to happen is for the geoemtry that is needed to hold each item is preserved but areas of the stand that are not directly involved in holding the item are maintained. PICTURE



## Forces
  For my forces I chose to exxagerate the weight and value of each in order to see how the generative design method would respond and to get more unique geometries. In reality, the headphones weight should be around 1-3N or Nmm while the controller weight should be about 4-5N when the two controllers are together. Most forces are downward because that would be the most basic direction that the forces of items on the stand would be applied. As for moment forces that were incldued, the direction was determined by the direction I was most conerned about the stand falling over. Even with the moment that was placed in the headphone slot, but the stand does not have the proper weight distribution to stop from turning over if the earmuffs of the headphones are not supported by a table or other surface. Due to the forces and constraints that I applied there were some extra support applied to a few different platforms. For example the headphones platform received a full block underneath it when in my initial CAD design it was sitting in the air; the general holdings platform received a support on one side to support a heavy load on one end; the controller platform all received some underneath support to handle an uneven load if one controller is on the platform at a time.

| Forces| Magnitude | Rational
| ----------- | ----------- |
| Downward Force | 18N | Downward force to represent the weight of the PS5 controllers
| Moment | 18 Nmm | Moment to represent the weight of the headpgones trying to turn out of the headphone stand
| Remote Downward Force | 11N | Remote downward force to represent unequal weight on the general holdings platform
| Downward Force | 12N | Downward force on general holdings platform to represent weight on platform
| 2040 Aluminum Extrusion 1' Length | 1 |
| Moment | 15Nmm | Moment around center pillar to support any twisting or turning applied to stand
| Remote Moment x2 | 9Nmm | Two remote moment forces on the controller stand platform to support only one controller being on the stand by itself
| Downward Force | 6N | Downward Force to represent the headphones weight in the holder 
 


## Critique of Generative Design
  The generative design process sounds very effective for making parts that go into more technical devices like cars or planes etc.. However, for my purposes I am not sure how much benefit was added to the quality of my device by using generative design. It would have taken me less time to adjust my original model with a few extra supports below the platforms of my stand to get a nearly identical result to what I made with generative design. However, I do think that there are some devices that benefit from the aesthetics of what generative design does to a model. For example, I saw one model of a headphones stand where the center pillar looked almost like a DNA helix which was interested and a similar design for sunglasses frames. For the purpose of aesthetic in basic devices it is worthwhile to use generative design. Even in my device, I do like the style of the generatively designed parts. 
  Industries where generative design will be very useful are likely automotive, industrial, or aerospace. What generative design is great for is modeling what is necesarry for a part or model to do its intended function in the most material friendly way possible. Id also say generative design could be very useful for art. If you are a sculptor, then designing new pieces using generative design or gaining inspiriation from what can be created with generative design seems very useful.
  As for industries where generative design is not going to be useful I would say any basic household item. For example, as I said, my headphones/controller stand did not have to be generatively designed it was just an intuitive model for this project. Another example is a mug holder that was made by a friend of mine. Most consumers just want the simplest, most cost effective item possible and the uniqueness of a generatively designed toothbrush holder or gaming stand is not going to make them want to buy a product rather than a basic, cheap item. 


## Future Iterations
  In the project I worked within a size limitation that the height, width, and length of the part could not pass 100mm. This challenged me to find a way for the headphones to sit on the stand but it could not be a traditional method where the headphones band was supported from the bottom since the muffs would touch the floor. Some designs I want to work on in the future are a variation that worked within similar size limitation but uses a table clamp so that the headphones could be support from underneath without touching the floor because the device would hang off a table. Another design I am going to work on is a larger model which is made with enough space to very easily hold everything. Overall, the model I created has functional flaws in the headphone section that need to be repaired while the controller and general holdings platforms work exceptionally well. 











• Multimedia:
o Real life image(s) of the model serving its desired purpose. Comparison to nongenerative design component if applicable.
o .GIF if there is motion in normal use
o Screenshot of the different iterations or solutions in the Fusion Generative
Design workspace.
