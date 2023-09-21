# WIFI Controlled Car using Nodemcu

## Theory

<p>The IoT-based WiFi control car theory revolves around utilizing the NodeMCU ESP8266 WiFi module as the microcontroller, while servo motors and a motor driver are employed to control the steering and movement of the wheels, respectively.</p>

<p>The NodeMCU ESP8266, acting as the brain of the system, connects to a local WiFi network, enabling communication with a remote device, such as a smartphone or a computer. This connection is established through the integrated WiFi capabilities of the ESP8266 module.</p>

<p>To control the steering of the car, a servo motor is utilized. The servo motor receives instructions from the NodeMCU ESP8266, which sends signals to the motor to rotate it in the desired direction. By manipulating the rotation angle of the servo motor, the steering of the car can be controlled accurately.</p>

<p>In terms of movement, the wheels of the car are controlled by a motor driver. The motor driver is connected to the NodeMCU ESP8266 and receives commands to control the speed and direction of the motors that drive the wheels. The motor driver interprets these instructions and adjusts the voltage and current supplied to the motors accordingly, resulting in forward, backward, or rotational movement.</p>
<p>
The NodeMCU ESP8266 acts as an intermediary, receiving user commands from the remote device and converting them into appropriate signals for the servo motor and motor driver. This allows users to wirelessly control the car's steering and movement.</p>
<p>By developing a user-friendly interface on the remote device, users can send commands through the WiFi network to the NodeMCU ESP8266, providing real-time control over the car. The ESP8266 module processes these commands and translates them into actions performed by the servo motor and motor driver, ultimately dictating the car's behavior.</p>

## Required Components

![Screenshot 2023-09-21 095031](https://github.com/iamsayannayek/RemoteControlCar_ByNodeMCU/assets/129824510/f2d1f76d-0ac0-4021-be62-18a6bfa8b75c)


## Steps for making the model

### Step 1
<li>Make The Steering of the Car by Using Servo Motor.</li>

<br />

![Steps1](https://github.com/iamsayannayek/RemoteControlCar_ByNodeMCU/assets/129824510/11df06ee-376d-4250-bb7f-3b43a4c72b1f)


### Step 2

<li>Now we connect the Steering With the Chassis of the Car.</li>
<li>
  After Steering connected then we connect the other motor wheels with the
  Chassis
</li>

<br />

![Step2](https://github.com/iamsayannayek/RemoteControlCar_ByNodeMCU/assets/129824510/d17e7056-da1a-4189-840c-f039c4e08baa)


### Step 3

<li>
  After Connected the motors and steering then we have to connect the motors
  with the Motor Driver and Nodemcu.
</li>
<li>
  After we connected whole connection then we connect the power Supply with that
  Connection.
</li>

<br />

![Step3](https://github.com/iamsayannayek/RemoteControlCar_ByNodeMCU/assets/129824510/46099dc5-da83-4a1a-9800-4a9f35fc5800)


### Step 4

<li>
  After all the connection done then we import the Code into the Nodemcu where
  we written how the Car Control by the instruction
</li>

<br />

![Step 4](https://github.com/iamsayannayek/RemoteControlCar_ByNodeMCU/assets/129824510/cc60845b-3790-486e-b787-26a9a7492aae)



### Step 5

<li>Connect the Car with the Blynk IOT App through WIFI</li>

<img
  src="https://i0.wp.com/srituhobby.com/wp-content/uploads/2021/03/l.jpg?w=576&ssl=1"
/>

## Output


https://github.com/iamsayannayek/RemoteControlCar_ByNodeMCU/assets/129824510/59ecaa17-b959-48ea-9f6f-af680d9f0d42




# Arduino Code
https://github.com/iamsayannayek/RemoteControlCar_ByNodeMCU/blob/main/nodemcucar.ino
