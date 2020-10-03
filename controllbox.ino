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
}

void turnoff(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);

  Keyboard.println("cmd");
  delay(100);
  Keyboard.println("shutdown -f -s -t 0");
  delay(100);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
}

void loop() {

  rotateNum = 0;
  for (int i = 0; i < 3; i++) {
    if (rotateSwitch[i] == 1) {
      rotateNum = i + 1;
      break;
    }
  }
  
  if(onOffSwitch==LOW){


   if(onOffSwitch==LOW){
    turnoff();
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
