**Hello Guys**

**This repository contains an Arduino sketch for controlling a motor and displaying the elapsed time using an LCD display.**
**> Hardware Required**

Arduino Board
Motor
Push Button
LCD Display
Jumper wires

**> Connections **

Connect the motor to Pin 3 of your Arduino Board
Connect the push button to Pin 4 of your Arduino Board
Connect the LCD display to Pins 12, 11, 10, 9, 8, 7 of your Arduino Board
Upload the code to your Arduino Board
Press the push button to turn on the motor
The elapsed time will be displayed on the LCD display

**> Code Explanation** 

This Arduino code controls a motor and displays the elapsed time on an LCD display. The code initializes the LiquidCrystal library to interface with the LCD display and sets up the pins for the motor, push button, and reset button.

In the loop() function, the code continuously checks the state of the reset button. If the reset button is pressed, the LCD display is cleared, the elapsed time is reset to zero, and the motor is turned off.

Next, the code sets the cursor position of the LCD display and prints the current elapsed time. The elapsed time is incremented by one after each print statement.

The code then checks the state of the push button. If the push button is pressed, the motor is turned on and the fun_delay() function is called. This function creates a delay of 10 seconds while displaying "Motor: ON" on the first row of the LCD display.

Finally, the motor is turned off and there is a delay of one second before the loop repeats.

The fun_delay() function is a custom function that creates a delay of the specified number of seconds while displaying "Motor: ON" on the first row of the LCD display. The elapsed time is also printed on the second row of the LCD display during this delay.
  
  
