#include <Keypad.h>

const byte ROWS = 5; 
const byte COLS = 3; 
char keys[ROWS][COLS] = {
  {'0','1','2'},
  {'3','4','5'},
  {'6','7','8'},
  {'9','a','b'},
  {'c','d','e'}
};
byte rowPins[ROWS] = {19, 21, 13, 12, 14}; 
byte colPins[COLS] = {4, 22, 23}; 

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

unsigned long loopCount;
unsigned long startTime;
String msg;


void setup() {
    Serial.begin(9600);
    loopCount = 0;
    startTime = millis();
    msg = "";
}


void loop() {
    loopCount++;
    if ( (millis()-startTime)>5000 ) {
        Serial.print("Average loops per second = ");
        Serial.println(loopCount/5);
        startTime = millis();
        loopCount = 0;
    }

    if (kpd.getKeys())
    {
        for (int i=0; i<LIST_MAX; i++)   // Scan the whole key list.
        {
            if ( kpd.key[i].stateChanged )   // Only find keys that have changed state.
            {
                switch (kpd.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
                    case PRESSED:
if (kpd.key[i].kchar == '0') {
            Serial.println("number 0 pressed");
        }
if (kpd.key[i].kchar == '1') {
            Serial.println("number 1 pressed");
        }
if (kpd.key[i].kchar == '2') {
            Serial.println("number 2 pressed");
        }
if (kpd.key[i].kchar == '3') {
            Serial.println("number 3 pressed");
        }
if (kpd.key[i].kchar == '4') {
            Serial.println("number 4 pressed");
        }
if (kpd.key[i].kchar == '5') {
            Serial.println("number 5 pressed");
        }
if (kpd.key[i].kchar == '6') {
            Serial.println("number 6 pressed");
        }
if (kpd.key[i].kchar == '7') {
            Serial.println("number 7 pressed");
        }
if (kpd.key[i].kchar == '8') {
            Serial.println("number 8 pressed");
        }
if (kpd.key[i].kchar == '9') {
            Serial.println("number 9 pressed");
        }
if (kpd.key[i].kchar == 'a') {
            Serial.println("number a pressed");
        }
if (kpd.key[i].kchar == 'b') {
            Serial.println("number b pressed");
        }
if (kpd.key[i].kchar == 'c') {
            Serial.println("number c pressed");
        }
if (kpd.key[i].kchar == 'd') {
            Serial.println("number d pressed");
        }
if (kpd.key[i].kchar == 'e') {
            Serial.println("number e pressed");
        }
                      break;
      //              case HOLD:
      //              msg = " HOLD.";
      //          break;
                    case RELEASED:
if (kpd.key[i].kchar == '0') {
            Serial.println("number 0 released");
        }
if (kpd.key[i].kchar == '1') {
            Serial.println("number 1 released");
        }
if (kpd.key[i].kchar == '2') {
            Serial.println("number 2 released");
        }
if (kpd.key[i].kchar == '3') {
            Serial.println("number 3 released");
        }
if (kpd.key[i].kchar == '4') {
            Serial.println("number 4 released");
        }
if (kpd.key[i].kchar == '5') {
            Serial.println("number 5 released");
        }
if (kpd.key[i].kchar == '6') {
            Serial.println("number 6 released");
        }
if (kpd.key[i].kchar == '7') {
            Serial.println("number 7 released");
        }
if (kpd.key[i].kchar == '8') {
            Serial.println("number 8 released");
        }
if (kpd.key[i].kchar == '9') {
            Serial.println("number 9 released");
        }
if (kpd.key[i].kchar == 'a') {
            Serial.println("number a released");
        }
if (kpd.key[i].kchar == 'b') {
            Serial.println("number b released");
        }
if (kpd.key[i].kchar == 'c') {
            Serial.println("number c released");
        }
if (kpd.key[i].kchar == 'd') {
            Serial.println("number d released");
        }
if (kpd.key[i].kchar == 'e') {
            Serial.println("number e released");
        }
                      break;
            }
        }
    }
}  // End loop
