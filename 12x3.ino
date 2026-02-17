#include <Keypad.h>

const byte ROWS = 12; 
const byte COLS = 3; 
char keys[ROWS][COLS] = {
  {'0','1','2'},
  {'3','4','5'},
  {'6','7','8'},
  {'9','a','b'},
  {'c','d','e'},
  {'f','g','h'},
  {'i','j','k'},
  {'l','m','n'},
  {'o','p','q'},
  {'r','s','t'},
  {'u','v','w'},
  {'x','y','z'}
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
if (kpd.key[i].kchar == 'f') {
            Serial.println("number f pressed");
        }
if (kpd.key[i].kchar == 'g') {
            Serial.println("number g pressed");
        }
if (kpd.key[i].kchar == 'h') {
            Serial.println("number h pressed");
        }
if (kpd.key[i].kchar == 'i') {
            Serial.println("number i pressed");
        }
if (kpd.key[i].kchar == 'j') {
            Serial.println("number j pressed");
        }
if (kpd.key[i].kchar == 'k') {
            Serial.println("number k pressed");
        }
if (kpd.key[i].kchar == 'l') {
            Serial.println("number l pressed");
        }
if (kpd.key[i].kchar == 'm') {
            Serial.println("number m pressed");
        }
if (kpd.key[i].kchar == 'n') {
            Serial.println("number n pressed");
        }
if (kpd.key[i].kchar == 'o') {
            Serial.println("number o pressed");
        }
if (kpd.key[i].kchar == 'p') {
            Serial.println("number p pressed");
        }
if (kpd.key[i].kchar == 'q') {
            Serial.println("number q pressed");
        }
if (kpd.key[i].kchar == 'r') {
            Serial.println("number r pressed");
        }
if (kpd.key[i].kchar == 's') {
            Serial.println("number s pressed");
        }
if (kpd.key[i].kchar == 't') {
            Serial.println("number t pressed");
        }
if (kpd.key[i].kchar == 'u') {
            Serial.println("number u pressed");
        }
if (kpd.key[i].kchar == 'v') {
            Serial.println("number v pressed");
        }
if (kpd.key[i].kchar == 'w') {
            Serial.println("number w pressed");
        }
if (kpd.key[i].kchar == 'x') {
            Serial.println("number x pressed");
        }
if (kpd.key[i].kchar == 'y') {
            Serial.println("number y pressed");
        }
if (kpd.key[i].kchar == 'z') {
            Serial.println("number z pressed");
        }
                      break;
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
if (kpd.key[i].kchar == 'f') {
            Serial.println("number f released");
        }
if (kpd.key[i].kchar == 'g') {
            Serial.println("number g released");
        }
if (kpd.key[i].kchar == 'h') {
            Serial.println("number h released");
        }
if (kpd.key[i].kchar == 'i') {
            Serial.println("number i released");
        }
if (kpd.key[i].kchar == 'j') {
            Serial.println("number j released");
        }
if (kpd.key[i].kchar == 'k') {
            Serial.println("number k released");
        }
if (kpd.key[i].kchar == 'l') {
            Serial.println("number l released");
        }
if (kpd.key[i].kchar == 'm') {
            Serial.println("number m released");
        }
if (kpd.key[i].kchar == 'n') {
            Serial.println("number n released");
        }
if (kpd.key[i].kchar == 'o') {
            Serial.println("number o released");
        }
if (kpd.key[i].kchar == 'p') {
            Serial.println("number p released");
        }
if (kpd.key[i].kchar == 'q') {
            Serial.println("number q released");
        }
if (kpd.key[i].kchar == 'r') {
            Serial.println("number r released");
        }
if (kpd.key[i].kchar == 's') {
            Serial.println("number s released");
        }
if (kpd.key[i].kchar == 't') {
            Serial.println("number t released");
        }
if (kpd.key[i].kchar == 'u') {
            Serial.println("number u released");
        }
if (kpd.key[i].kchar == 'v') {
            Serial.println("number v released");
        }
if (kpd.key[i].kchar == 'w') {
            Serial.println("number w released");
        }
if (kpd.key[i].kchar == 'x') {
            Serial.println("number x released");
        }
if (kpd.key[i].kchar == 'y') {
            Serial.println("number y released");
        }
if (kpd.key[i].kchar == 'z') {
            Serial.println("number z released");
        }
                      break;
            }
        }
    }
}  // End loop
