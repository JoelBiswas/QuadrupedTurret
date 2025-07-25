---
title: "Quadruped Turret"
author: "Joel Biswas and Ayush Jaiswal"
description: "Four-legged robot with a rotating turret on top"
created_at: "2025-07-19"
---

**Total Time Spent: 32 hrs**

# Day 1: July 19, 2025
### Time Spent: Ayush: 4 hrs; Joel: 7 hrs
**Ayush**- After failing to make a quadruped shooter at Undercity, We decided to make another one- a working one this time. I didn't start the CAD, but I was just watching a lot of videos on robotics 
and walking robots. I spent around 2 hours watching videos, and then polishing some CAD that Joel made. <br> <br>


**Joel:** During Undercity, we got the idea to build a four-legged robot with a turret on top. However, ultimately, not a single part of our original design worked. Coming back from Undercity, Ayush and I wanted to recreate everything from scratch. During Undercity, we were sleep-deprived, and our CAD and wiring had many flaws. For this project, I decided to start by redesigning the robot in Onshape with a different design and more attention to detail. I spent today creating the body, four legs, and the start of a turret system. I also made sure that all the legs would be able to rotate using servo motors.

<img height="400" alt="image" src="https://github.com/user-attachments/assets/20979d30-2c24-416a-980f-54d21327ebbc" />

# Day 2: July 20, 2025
### Time Spent: Ayush: 0 hrs; Joel: 5 hrs
**Ayush**- Didn't work today because I was preparing for some summer course.


**Joel:** Today I spent my time finishing building the turret mechanism. This is one of the things that was planned during Undercity but never actually designed or built properly. I created a flywheel mechanism with the purpose of shooting out Nerf Rival bullets at high speeds. In order to relad the turret, I created a servo-based crankshaft mechanism that pushes the Rival bullets into the flywheel.


<img height="400" alt="Screenshot 2025-07-24 at 11 42 42 PM" src="https://github.com/user-attachments/assets/e43f0437-3493-4733-9774-96ece1836688" />

# Day 3: July 21, 2025
### Time Spent: Ayush: 4 hrs; Joel: 4 hrs
**Ayush**- Made a design change, I was mostly polishing out the CAD. We decided to change our leg design to achieve more stability & I tried to create a walking animation.


**Joel** - I spent today combining the mechanisms that I made on Day 1 and Day 2. I wanted the turret to attach to the body in a way that it can rotate freely on the pitch axis. I mounted the turret on top of a servo that is mounted to the body using bolts.

<img height="400" alt="image" src="https://github.com/user-attachments/assets/1beeaf86-8559-4725-90f0-9c1da43af324" />

# Day 4: July 22, 2025
### Time Spent: Joel 5 hrs
**Joel:** Now that the CAD is finished, I decided to start working on the wiring schematic. The project is going to be controlled by an ESP32 Development Board. The wiring consists of 4 servos for moving the base of the leg, 4 servos for moving the bottom of the legs, one servo for the turret's pitch rotation, and one servo or reloading. The project also uses two N20 DC motors for the turret flywheels. These motors are controlled using a BJT transistor connected to a GPIO on the ESP32. 

<img height="400" alt="Screenshot 2025-07-24 at 11 24 46 PM" src="https://github.com/user-attachments/assets/276dce7c-deb0-4760-ab75-3fb3b7cf6eac" />

# Day 5: July 24, 2025
### Time Spent: Joel: 3 hrs
**Joel:** I spent today shipping the project. I added all the CAD and Electrical files to this Git repo and wrote all of the journal entries. I also worked on the README file to provide more information about the project. The project is now ready to be submitted.
