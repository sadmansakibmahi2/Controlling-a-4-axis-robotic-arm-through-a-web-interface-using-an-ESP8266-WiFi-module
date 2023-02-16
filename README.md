
# Controlling a 4-axis robotic arm through a web interface using an ESP8266 WiFi-module

## Project Description:

The aim of this project is to control a 4-axis robotic arm using a web interface. The system consists of an ESP8266 WiFi module, which connects to a local Wi-Fi network and creates an HTTP server on port 80. The HTTP server waits for incoming requests from a client, and once a request is received, it reads the incoming data and sets the position of the corresponding servo motor.

The 4-axis robotic arm is controlled using four servo motors, each attached to a digital pin of the microcontroller. The initial position of the servos is set in the setup function. Once the microcontroller is connected to the Wi-Fi network, it prints its IP address and starts the HTTP server.

The HTTP server is designed to receive requests containing data in the form of integers. The data is parsed from the HTTP request and converted to an integer value. The value is then used to set the position of the corresponding servo motor.

The system can be accessed by any device connected to the same Wi-Fi network as the microcontroller. The user can send requests to the HTTP server through a web interface, which can be accessed through a web browser. The web interface contains controls that allow the user to control the position of each servo motor.

This project can be used in various applications, including industrial automation, surveillance systems, and remote control systems. The system can be easily modified to control different types of robots or machines with servo motors.



## License

[Creative Commons Attribution 4.0 International](https://github.com/teamdigitale/licenses/blob/master/CC-BY-4.0)


## Software Used in this project

Please Install this softwares

[Arduino IDE](https://www.arduino.cc/en/software)

[Processing](https://processing.org/download)
    
## Arduino Coding
Follow this steps to code your arduino

1)Copy the arduino code from this link

[Arduino code](https://github.com/sadmansakibmahi2/Arduino-Based-Radar/blob/main/rader_code/rader_code.ino)

2)Open your arduino ide and past the code .Compile the code and upload it in your arduino. Please make sure that you have selected the right COM(port)


## Components


[SERVO](https://www.daraz.com.bd/catalog/?q=servo+motor&_keyori=ss&clickTrackInfo=textId--8508900868611874256__abId--235496__pvid--b6cd1d1f-e365-4f53-8801-89790b7d74a0__matchType--1__srcQuery--None__spellQuery--servo+motor&from=suggest_normal&sugg=servo+motor_0_1)


[ARDUINO](https://www.daraz.com.bd/catalog/?q=arduino+uno&_keyori=ss&from=input)


[Servo Power Supply](https://techshopbd.com/detail/2792/Servo_Power_Supply)

## Author

- [@sadmansakibmahi2](https://github.com/sadmansakibmahi2)
