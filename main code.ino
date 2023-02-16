/////////////////////////////
//NodeMCU 1.0 (ESP-12E Module).
/// controlling a 4-axis robotic arm through a web interface using ESP8266 WiFi module. The code creates an HTTP server on port 80, connects to a local Wi-Fi network, and waits for incoming requests from a client. Once the client sends a request, the server reads the incoming data, converts it to an integer value, and sets the corresponding servo motor's position.
#include <ESP8266WiFi.h>
int recived_value;
String  i;
WiFiServer server(80);

#include <Servo.h>
Servo servo_0;
Servo servo_1;
Servo servo_2;
Servo servo_3;
int servo;


void setup()
{
// Attaching the servo objects to the corresponding digital pins of the microcontroller
  servo_0.attach(5);//D1
  servo_1.attach(4);//D2
  servo_2.attach(16);//D0
  servo_3.attach(0); //D3

// Setting initial position of servos
  servo_0.write(180);
  delay(10);
  servo_2.write(180);
  delay(10);
  servo_1.write(2);
  delay(10); 
  i = "";

Serial.begin(9600);
  WiFi.disconnect();
  delay(3000);

  // Initializing the serial communication and connecting to a Wi-Fi network

   WiFi.begin("Wifi name","Wifi password");
  Serial.println("Connecting to wifi");

    // Waiting for the microcontroller to connect to the Wi-Fi network
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print("....");

  }

 // Once connected to the Wi-Fi network, printing the microcontroller's IP address and starting the HTTP server
  Serial.println("I am Connected ");
  Serial.println((WiFi.localIP().toString()));
  server.begin();

}


void loop()
{
 // Checking for incoming client requests
    WiFiClient client = server.available();
    if (!client) { return; }

// Reading the HTTP request from the client
    while(!client.available()){  delay(1); }
    i = (client.readStringUntil('\r'));

 // Parsing the HTTP request and converting the received data to an integer value
    i.remove(0, 5);
    i.remove(i.length()-9,9);
    int recived_value = i.toInt();//string converted into int
    if (recived_value >= 1000 && recived_value <= 1180) {
      servo = recived_value - 1000;
      servo_0.write(servo);
      delay(10);
      Serial.print("recived : ");
      Serial.print(recived_value);
      Serial.println();
      Serial.print("servo1 write :  ");
      Serial.print(servo);
      Serial.println();
          }

    if (recived_value >= 2000 && recived_value <= 2180) {
      servo = recived_value - 2000;
      servo_1.write(servo);
      delay(10);
            Serial.print("recived : ");
      Serial.print(recived_value);
      Serial.println();
      Serial.print("servo2 write :  ");
      Serial.print(servo);
      Serial.println();
          }

    if (recived_value >= 3000 && recived_value <= 3180) {
      servo = recived_value - 3000;
      servo_2.write(servo);
      delay(10);
            Serial.print("recived : ");
      Serial.print(recived_value);
      Serial.println();
      Serial.print("servo3 write :  ");
      Serial.print(servo);
      Serial.println();
          }  
    if (recived_value >= 4000 && recived_value <= 4180) {
      servo = recived_value - 4000;
      servo_3.write(servo);
      delay(10);
            Serial.print("recived : ");
      Serial.print(recived_value);
      Serial.println();
      Serial.print("servo4 write :  ");
      Serial.print(servo);
      Serial.println();
          }
                  
}
