// Include necessary libraries
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

// Create a servo object
Servo myservo;

// Define servo positions for turning angles
int s_right = 10;
int s_left = 170;
int s_straight = 90;

// Define motor pins
#define ENA D0
#define IN1 D1
#define IN2 D2
#define IN3 D3
#define IN4 D4
#define ENB D5

// Define variables for controlling the smart car
bool forward = false;
bool backward = false;
bool left = false;
bool right = false;
int Speed;

// Blynk authentication token, WiFi credentials
char auth[] = " "; // Replace with your Blynk application auth token
char ssid[] = " "; // Replace with your WiFi name
char pass[] = " "; // Replace with your WiFi password

// Setup function, runs once at the beginning
void setup() {
  Serial.begin(9600);
  
  // Attach the servo to pin D7
  myservo.attach(D7);
  
  // Set motor pins as outputs
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
 
  // Initialize Blynk with authentication and WiFi details
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

// Blynk callback for controlling forward motion
BLYNK_WRITE(V0) {
  forward = param.asInt();
}

// Blynk callback for controlling backward motion
BLYNK_WRITE(V1) {
  backward = param.asInt();
}

// Blynk callback for controlling left turn
BLYNK_WRITE(V2) {
  left = param.asInt();
}

// Blynk callback for controlling right turn
BLYNK_WRITE(V3) {
  right = param.asInt();
}

// Blynk callback for controlling speed
BLYNK_WRITE(V4) {
  Speed = param.asInt();
}

// Function to control the smart car based on Blynk input
void smartcar() {
  if (forward) {
    carforward();
    Serial.println("carforward");
  } else if (backward) {
    carbackward();
    Serial.println("carbackward");
  } else if (left) {
    carturnleft();
    Serial.println("carfleft");
  } else if (right) {
    carturnright();
    Serial.println("carright");
  } else {
    carStop();
    Serial.println("carstop");
  }
}

// Main loop
void loop() {
  Blynk.run();
  smartcar();
}

// Function to move the car forward
void carforward() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// Function to move the car backward
void carbackward() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// Function to turn the car left
void carturnleft() {
  myservo.write(s_left);
  Serial.print("Set angle to: ");
  Serial.println(s_left);
  delay(1000);
  myservo.write(s_straight); // Reset to straight position
  delay(500);
}

// Function to turn the car right
void carturnright() {
  myservo.write(s_right);
  Serial.print("Set angle to: ");
  Serial.println(s_right);
  delay(1000);
  myservo.write(s_straight); // Reset to straight position
  delay(500);
}

// Function to stop the car
void carStop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
