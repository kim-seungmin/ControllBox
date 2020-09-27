//
//a3 a4 a5
//
//a0 a1 a2
//
#include <Keyboard.h>
#include <Mouse.h>
#include <SoftwareSerial.h>

SoftwareSerial hc06(9, 10);

int onOffSwitch = 5;
int key[3] = {6, 7, 8};
int rotateSwitchPin[3] = {2, 3, 4};
int countSwitchPin[6] = {A0, A1, A2, A3, A4, A5};

int geometric[6] = {1, 2, 4, 8, 16, 32};
int rotateNum = 0;
int countNum = 0;

//ps2
int horzPin = A6;  // Analog output of horizontal joystick pin
int vertPin = A7;  // Analog output of vertical joystick pin
int selPin = 9;  // select button pin of joystick


int vertZero, horzZero;  // Stores the initial value of each axis, usually around 512
int vertValue, horzValue;  // Stores current analog output of each axis
const int sensitivity = 200;  // Higher sensitivity value = slower mouse, should be <= about 500
int mouseClickFlag = 0;


//int invertMouse = 1;        //Invert joystick based on orientation
int invertMouse = -1;         //Noninverted joystick based on orientation

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 3; i++) {
    pinMode(key[i], INPUT_PULLUP);
    pinMode(rotateSwitchPin[i], INPUT_PULLUP);
    pinMode(countSwitchPin[i], INPUT_PULLUP);
  }
  pinMode(countSwitchPin[3], INPUT_PULLUP);
  pinMode(countSwitchPin[4], INPUT_PULLUP);
  pinMode(countSwitchPin[5], INPUT_PULLUP);
  pinMode(onOffSwitch, INPUT_PULLUP);

  //ps2
  pinMode(horzPin, INPUT);  // Set both analog pins as inputs
  pinMode(vertPin, INPUT);
  pinMode(selPin, INPUT);  // set button select pin as input
  digitalWrite(selPin, HIGH);  // Pull button select pin high
  delay(1000);  // short delay to let outputs settle
  vertZero = analogRead(vertPin);  // get the initial values
  horzZero = analogRead(horzPin);  // Joystick should be in neutral position when reading these

  Mouse.begin(); //Init mouse emulation
  Keyboard.begin(); //Init keyboard emulation
}

void loop() {

  rotateNum = 0;
  for (int i = 0; i < 3; i++) {
    if (rotateSwitch[i] == 1) {
      rotateNum = i + 1;
      break;
    }
  }

  if (digitalRead(key[0]) == LOW || digitalRead(key[1]) == LOW || digitalRead(key[2]) == LOW) {
    int rotateSwitch[3] = {digitalRead(rotateSwitchPin[0]), digitalRead(rotateSwitchPin[1]), digitalRead(rotateSwitchPin[2])};
    int countSwitch[6] = {digitalRead(countSwitchPin[0]), digitalRead(countSwitchPin[1]), digitalRead(countSwitchPin[2]), digitalRead(countSwitchPin[3]), digitalRead(countSwitchPin[4]), digitalRead(countSwitchPin[5]) };

    countNum = 0;
    for (int i = 0; i < 6; i++) {
      if (countSwitch[i] == 1)countNum = countNum + geometric[i];
    }

    switch (rotateNum) {
      case 0:
        switch (countNum) {
          case 0:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 1:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 2:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 4:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 5:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 6:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 8:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 9:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 10:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 16:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 17:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 18:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 20:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 21;
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 22:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 24:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 25:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 26:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 32:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 33:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 34:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 36:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 37:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 38:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 40:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 41:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 42:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
        }
        break;

      case 1:
        switch (countNum) {
          case 0:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 1:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 2:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 4:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 5:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 6:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 8:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 9:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 10:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 16:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 17:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 18:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 20:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 21;
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 22:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 24:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 25:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 26:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 32:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 33:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 34:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 36:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 37:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 38:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 40:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 41:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 42:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
        }
        break;

      case 2:
        switch (countNum) {
          case 0:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 1:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 2:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 4:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 5:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 6:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 8:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 9:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 10:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 16:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 17:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 18:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 20:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 21;
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 22:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 24:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 25:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 26:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 32:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 33:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 34:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 36:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 37:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 38:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 40:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 41:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 42:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
        }
        break;

      case 3:
        switch (countNum) {
          case 0:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 1:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 2:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 4:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 5:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 6:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 8:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 9:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 10:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 16:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 17:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 18:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 20:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 21;
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 22:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;

          case 24:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 25:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 26:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 32:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 33:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 34:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 36:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 37:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 38:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 40:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 41:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
            
            case 42:
            if (digitalRead(key[0]) == LOW)
            {

            }
            if (digitalRead(key[1]) == LOW)
            {

            }
            if (digitalRead(key[2]) == LOW)
            {

            }
            break;
        }
        break;
    }
  }

  //ps2
  vertValue = analogRead(vertPin) - vertZero;  // read vertical offset
  horzValue = analogRead(horzPin) - horzZero;  // read horizontal offset

  if (vertValue != 0)
    Mouse.move(0, (invertMouse * (vertValue / sensitivity)), 0); // move mouse on y axis
  if (horzValue != 0)
    Mouse.move((invertMouse * (horzValue / sensitivity)), 0, 0); // move mouse on x axis

  if ((digitalRead(selPin) == 0) && (!mouseClickFlag))  // if the joystick button is pressed
  {
    switch (rotateNum) {
      case 0:
        mouseClickFlag = 1;
        Mouse.release(MOUSE_MIDDLE);  // click the middle button down
        break;
      case 1:
        mouseClickFlag = 1;
        Mouse.release(MOUSE_LEFT);  // click the left button down
        break;
      case 2:
        mouseClickFlag = 1;
        Mouse.release(MOUSE_RIGHT);  // click the lright button down
        break;
      case 3:
        mouseClickFlag = 1;
        Mouse.release(MOUSE_LEFT);  // click the left button down
        break;
    }
  }
  else if ((digitalRead(selPin)) && (mouseClickFlag)) // if the joystick button is not pressed
  {
    switch (rotateNum) {
      case 0:
        mouseClickFlag = 0;
        Mouse.release(MOUSE_MIDDLE);  // release the middle button
        break;
      case 1:
        mouseClickFlag = 0;
        Mouse.release(MOUSE_LEFT);  // release the left button
        break;
      case 2:
        mouseClickFlag = 0;
        Mouse.release(MOUSE_RIGHT);  // release the right button
        break;
      case 3:
        mouseClickFlag = 0;
        Mouse.release(MOUSE_LEFT);  // release the left button
        break;
    }
  }
}

// 0 0 0  0
// 0 0 1  1
// 0 0 2  2
// 0 1 0  4
// 0 1 1  5
// 0 1 2  6
// 0 2 0  8
// 0 2 1  9
// 0 2 2  10
// 1 0 0  16
// 1 0 1  17
// 1 0 2  18
// 1 1 0  20
// 1 1 1  21
// 1 1 2  22
// 1 2 0  24
// 1 2 1  25
// 1 2 2  26
// 2 0 0  32
// 2 0 1  33
// 2 0 2  34
// 2 1 0  36
// 2 1 1  37
// 2 1 2  38
// 2 2 0  40
// 2 2 1  41
// 2 2 2  42
// 1, 2,  4, 8,  16, 32
