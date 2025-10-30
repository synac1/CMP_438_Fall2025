// Define motor control pins
const int motorLeftPinForward = 4;  // IN3 on L293D
const int motorLeftPinBackward = 5;  // IN4 on L293D
const int motorRightPinForward = 2;  // IN1 on L293D
const int motorRightPinBackward = 3;  // IN2 on L293D

const int enable1 = 9;     // EN1 on L293D
const int enable2 = 10;    // EN2 on L293D

void setup() {
  // Set up motor control pins
  pinMode(motorLeftPinForward, OUTPUT);
  pinMode(motorLeftPinBackward, OUTPUT);
  pinMode(motorRightPinForward, OUTPUT);
  pinMode(motorRightPinBackward, OUTPUT);
  
  // Set up enable pins
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);

  // Set enable pins to max speed (255)
  analogWrite(enable1, 255); // Fully enable motor 1
  analogWrite(enable2, 255); // Fully enable motor 2
}

void loop() {
  // Your movement code here
  //moveForward();
  //moveLeft();
  delay(3000);
  // Start with motors off
  stopMotors();
  delay(2000);  // Stop for 2 seconds
}


// Function to move the robot forward
void motorLeftMoveForward(){
  digitalWrite(motorLeftPinForward, HIGH);
  digitalWrite(motorLeftPinBackward, LOW);
}
void motorRightMoveForward(){
  digitalWrite(motorRightPinForward, HIGH);
  digitalWrite(motorRightPinBackward, LOW);
}
void moveForward() {
	motorLeftMoveForward();
  	motorRightMoveForward();
}
void motorLeftMoveBackward(){
  digitalWrite(motorLeftPinForward, LOW);
  digitalWrite(motorLeftPinBackward, HIGH);
}
void motorRightMoveBackward(){
  digitalWrite(motorRightPinForward, LOW);
  digitalWrite(motorRightPinBackward, HIGH);
}
void moveBackward() {
  motorLeftMoveBackward();
  motorRightMoveBackward();
}
//turnLeft right motor moves forward, left motor stops
void turnLeft(){
  digitalWrite(motorLeftPinForward, LOW);
  digitalWrite(motorLeftPinBackward, LOW);
  motorRightMoveForward();
}
// turnRight

//spin in place 
void pivotTurn(){
	motorLeftMoveForward();
  	motorRightMoveBackward():
}


// Function to stop all motors
void stopMotors() {
  digitalWrite(motorLeftPinForward, LOW);
  digitalWrite(motorLeftPinBackward, LOW);
  digitalWrite(motorRightPinForward, LOW);
  digitalWrite(motorRightPinBackward, LOW);
}
