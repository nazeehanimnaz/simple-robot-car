 <div align="justify"> 

## __WHAT IT DOES__
This is a simple robot car <br>
 - It moves forward for 2 seconds, then backwards for 2 seconds, then left for 2 seconds, then right for 2 seconds, and then stops for 2 seconds.
 - The process repeats until power is disconnected.
 - This is to show the basics of a robot car.
 - To change the directions as desired, you need to make changes in the loop() function. Call each function for directions when necessary in the loop() function. Functions for the directions are coded below the loop().
 - To control the car via a infra-red remote, refer to [this link](https://github.com/nazeehanimnaz/irremote-control-car) .
 
<br>

## __COMPONENTS USED__

1. Arduino UNO x1.
2. L298N Motor Driver Module x1.
3. 6V Gear Motor x4.
4. 3.7V 3500mA 18650 Li-ion Rechargeable Battery x2.
5. Switch x1.
6. Jumper wires (as needed).

## __EXTRA COMPONENTS NEEDED__

7. 4 Wheel Car Chassis Kit (this will include 4 Gear Motors) x1.
8. Battery chargers.
9. Battery holders, brackets, protective case, etc. (if needed).

_IMPORTANT NOTE: Do NOT make the robot heavy as this can put more load on the gear motors and cause the robot to NOT move._

<br>

## __THE THEORY BEHIND__

1. _How is everything powered up?_ <br>
   - The rechargeable battery powers up the L298N motor driver module. As the total voltage of the batteries do not exceed 12v, the L298N's jumper is not removed. This makes the 5V pin of the L298N to act as an output. This output is used to give power to the Arduino. <br>
  
<br>

## __TIPS__

1. Use high quality batteries for efficiency.
2. Remove the wire connected to the VIN pin of Arduino before connecting the Arduino to the PC/laptop to upload the code. Once the code is uploaded, disconnect the Arduino from the PC/laptop and connect the wire back to the VIN pin of the Arduino. This is to prevent too much voltage flowing into the Arduino via the laptop and the batteries.
3. The most common issue while making robotics projects is that the wires break too soon. Either better wires instead of jumper wires should be used, or use a multimeter to constantly check if the jumper wires are in good condition.

<br>

## __PROBLEMS FACED AND SOLUTIONS__

1. _Why do wheels rotate when off the floor, but not when on the floor?_ <br>
   If wheels are rotating when off the floor, this means that there is no problem with the supplied voltage or current. There could be 3 reasons for this:
      - It could be due to the heavy load the gear motors have when on the floor. For this reason, make the robot as light as you can. A simple body with a usual chassis would do. <br>
      - The wheels might not be rotating in the correct directions. If the 2 wheels on the left or right side are rotating opposite to each other when it is supposed to move forward, then the robot will not move. When both wheels are moving opposite to each other, the direction becomes neutral and the robot stops moving. Always ensure, the wheels are rotating in the correct directions off the floor, before keeping the robot on the floor. <br>
      - Check if the wheels are not aligned or stable and feels shakey when kept on the floor. If it is so, make sure to purchase a good quality chassis and check if all the screws used to fix the gear motors to the chassis are properly tightened. <br>

2. _Why are the wheels not moving at all, even off the floor?_ <br>
   - This could be due to several reasons from wrong connections, broken wires to short circuited boards. But if all is well and if the issue still persists, the issue could be due to the rechargeable batteries not being able to give enough power to the wheels. Recharge the batteries and try again. <br>

3. _Why are the wheels only moving at full speed instead of varying or reduced speeds?_ <br>
   - The ENA and ENB pins of the L298N should be connected to PWM pins of the Arduino. Only this allows speed to vary as given in the code. <br>
   
4. _Why do some of the wheels rotate, while the others don't?_ <br>
   This could be due to issues with the wires connected to the input pins of the L298N or the input pins of L298N itself. <br>
   - IN1 is working > If both the wheels on the right are rotating forward.
   - IN2 is working > If both the wheels on the right are rotating backward.
   - IN3 is working > If both the wheels on the left are rotating forward.
   - IN4 is working > If both the wheels on the left are rotating backward.


</div>
   

   
