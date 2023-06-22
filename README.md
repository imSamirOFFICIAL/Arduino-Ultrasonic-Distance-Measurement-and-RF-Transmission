# Ultrasonic Distance Measurement and RF Transmission using Arduino Uno in Proteus
Measure distance using an Ultrasonic Sensor and transmit the measured distance using an RF transmitter-receiver pair.

<p align="center"><img src="https://user-images.githubusercontent.com/52858312/247861840-5f5df969-8034-4d19-9ecc-4ff5875ebf41.png"width=75% height=75%></p>

# How to run this?
First, download the [VirtualWire-1.27](http://www.airspayce.com/mikem/arduino/VirtualWire/VirtualWire-1.27.zip) zip file to your operating system.

Now, clone the repository. Then, inside the `Transmitter` folder, open the `Transmitter.ino` file in the Arduino IDE. If the `Arduino IDE` is opening for the first time on your operating system, after opening the Transmitter.ino file, go to `File` > `Preferences` > tick the `Compile` option beside `Show verbose output during`. Then, click `OK`. (No need to repeat this task from the second time onwards.)

Then, go to `Sketch` > `Include Library` > `Add .ZIP Library...` > Then, select the `VirtualWire-1.27.zip` file and click `Open`.

Now, click the `Verify` button located in the upper left corner, and from the output, copy the following path: `C:\Users\Username\AppData\Local\Temp\arduino\sketches\XXXXXXXXXX/Transmitter.ino.elf`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-Ultrasonic-Distance-Measurement-and-RF-Transmission/assets/52858312/656e533c-dc55-4258-b3c8-85c8c90b94e1)

Next, open the `Task.pdsprj` file in Proteus. Double-click on `Left Arduino Uno` and paste the `...Transmitter.ino.elf` link into the `Program File` field. Then, click `OK`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-Ultrasonic-Distance-Measurement-and-RF-Transmission/assets/52858312/ecc5986e-aa9f-4a10-9210-115f10e2dd15)

Then, inside the `Receiver` folder, open the `Receiver.ino` file in the Arduino IDE.

Now, click the `Verify` button located in the upper left corner, and from the output, copy the following path: `C:\Users\Username\AppData\Local\Temp\arduino\sketches\XXXXXXXXXX/Receiver.ino.elf`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-Ultrasonic-Distance-Measurement-and-RF-Transmission/assets/52858312/271ce293-2446-45c3-a6d9-30df1a47f01e)

Next, go back to Proteus and double-click on `Right Arduino Uno` and paste the `...Receiver.ino.elf` link into the `Program File` field. Then, click `OK`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-Ultrasonic-Distance-Measurement-and-RF-Transmission/assets/52858312/722b048f-8f1b-4e5b-a48c-84c564dda49e)

Boom! Everything is set up properly. Now, just click the `Run` button located in the bottom left corner and simulate the experiment.

# Note
After running the simulation, two `Virtual Terminal` will pop up. The Transmitter Virtual Terminal (left) provides real-time feedback on distance measurements, while the Receiver Virtual Terminal (right) confirms the successful reception of transmitted data.

<p align="center"><img src="https://user-images.githubusercontent.com/52858312/247880817-c6d4db8c-7e78-4e1d-a6cb-66ee4753e5ee.png"width=60% height=60%></p>
