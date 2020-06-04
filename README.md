# SIT210-Task11.1P-ProjectSourceCode
The components involved in this system are:
-	Arduino board
-	Arduino connecting wire
-	Ultrasonic sensor
-	Buzzer
-	Jumper wires
-	Breadboard
-	Raspberry pi
-	Power source for raspberry pi
-	The Raspbian interface
-	The Arduino ide.

First, I established a connection between the Arduino, ultrasonic sensor and the buzzer. This was accomplished using the six male to male jumper wires and the breadboard. After the ultrasonic sensor was attached to the breadboard, the following connections were established between the Arduino and the ultrasonic sensor:
-	Gnd is connected to the gnd on the Arduino.
-	Echo is connected to pin 12 on the Arduino.
-	Trig is connected to pin 13 on the Arduino.
-	VCC is connect to the 5V pin on the Arduino.

Then the buzzer was attached to the breadboard. The buzzer contains a positive leg and a negative leg. The connections are as follows:
-	The positive leg was connected to pin 9 of the Arduino.
-	The negative leg was connected to the gnd on the Arduino.

Once the ultrasonic sensor and buzzer were connected to the Arduino, the raspberry pi needed to be connected in order to run the code. The arduino ide needed to be installed on the raspberry pi. This involved entering this sudo command “apt-get install arduino” on the raspberry pi terminal. After the Arduino IDE installed, the code had to be entered. This is the code for the door alarm.  

So, as you can see, we firstly defined the pin numbers along with the variables required.
Then we have the setup function where we established the serial monitor, set the trigpin as output, the echopin as the input and obviously the buzzer would be an output. Then we have a few lines of code to clear up and set the trigpin, plus we also assigned the duration variable to read the echopin and return the sound wave travel time in microseconds.
Then we assigned the distance variable to calculate the distance and print it on the serial monitor. Finally, we have the main condition statements for when the buzzer will turn on. As you can see, according to the code, if the safety distance becomes less than or equal to 35 cm, then the serial monitor will print door open along with the distance and the buzzer will turn on. Otherwise if the distance is not breached, the buzzer will remain off and the serial monitor will print door closed. Since this is within a loop function, this section of code will continue to loop.

After the code is run, this is how the door alarm will function.
