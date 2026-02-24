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
    Serial.begin(31250);
    loopCount = 0;
    startTime = millis();
    msg = "";
}


void loop() {
    loopCount++;
    if ( (millis()-startTime)>5000 ) {
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
            playMIDINote(2, 37, 127);//C#2
        }
if (kpd.key[i].kchar == '1') {
            playMIDINote(1, 44, 127);//G2
            playMIDINote(1, 49, 127);//C3
            playMIDINote(1, 53, 127);//E3
        }
if (kpd.key[i].kchar == '2') {
            playMIDINote(1, 44, 127);//G2
            playMIDINote(1, 49, 127);//C3
            playMIDINote(1, 52, 127);//Eb3
        }
if (kpd.key[i].kchar == '3') {
            playMIDINote(2, 44, 127);//G#2
        }
if (kpd.key[i].kchar == '4') {
            playMIDINote(1, 51, 127);//D3
            playMIDINote(1, 56, 127);//G3
            playMIDINote(1, 60, 127);//B3
        }
if (kpd.key[i].kchar == '5') {
            playMIDINote(1, 51, 127);//D3
            playMIDINote(1, 56, 127);//G3
            playMIDINote(1, 59, 127);//Bb3
        }
if (kpd.key[i].kchar == '6') {
            playMIDINote(2, 39, 127);//D#2
        }
if (kpd.key[i].kchar == '7') {
            playMIDINote(1, 46, 127);//A3
            playMIDINote(1, 51, 127);//D4
            playMIDINote(1, 55, 127);//F#4
        }
if (kpd.key[i].kchar == '8') {
            playMIDINote(1, 46, 127);//A3
            playMIDINote(1, 51, 127);//D4
            playMIDINote(1, 54, 127);//F4
        }
if (kpd.key[i].kchar == '9') {
            playMIDINote(2, 46, 127);//A#2
        }
if (kpd.key[i].kchar == 'a') {
            playMIDINote(1, 53, 127);//E3
            playMIDINote(1, 58, 127);//A3
            playMIDINote(1, 62, 127);//C#4
        }
if (kpd.key[i].kchar == 'b') {
            playMIDINote(1, 53, 127);//E3
            playMIDINote(1, 58, 127);//A3
            playMIDINote(1, 61, 127);//C4
        }
if (kpd.key[i].kchar == 'c') {
            playMIDINote(2, 41, 127);//F2
        }
if (kpd.key[i].kchar == 'd') {
            playMIDINote(1, 48, 127);//C3
            playMIDINote(1, 53, 127);//F3
            playMIDINote(1, 57, 127);//A3
        }
if (kpd.key[i].kchar == 'e') {
            playMIDINote(1, 48, 127);//C3
            playMIDINote(1, 53, 127);//F3
            playMIDINote(1, 56, 127);//Ab3
        }
if (kpd.key[i].kchar == 'f') {
            playMIDINote(2, 36, 127);//C2
        }
if (kpd.key[i].kchar == 'g') {
            playMIDINote(1, 43, 127);//G2
            playMIDINote(1, 48, 127);//C3
            playMIDINote(1, 52, 127);//E3
        }
if (kpd.key[i].kchar == 'h') {
            playMIDINote(1, 43, 127);//G2
            playMIDINote(1, 48, 127);//C3
            playMIDINote(1, 51, 127);//Eb3
        }
if (kpd.key[i].kchar == 'i') {
            playMIDINote(2, 43, 127);//G2
        }
if (kpd.key[i].kchar == 'j') {
            playMIDINote(1, 50, 127);//D3
            playMIDINote(1, 55, 127);//G3
            playMIDINote(1, 59, 127);//B3
        }
if (kpd.key[i].kchar == 'k') {
            playMIDINote(1, 50, 127);//D3
            playMIDINote(1, 55, 127);//G3
            playMIDINote(1, 58, 127);//Bb3
        }
if (kpd.key[i].kchar == 'l') {
            playMIDINote(2, 38, 127);//D2
        }
if (kpd.key[i].kchar == 'm') {
            playMIDINote(1, 45, 127);//A3
            playMIDINote(1, 50, 127);//D4
            playMIDINote(1, 54, 127);//F#4
        }
if (kpd.key[i].kchar == 'n') {
            playMIDINote(1, 45, 127);//A3
            playMIDINote(1, 50, 127);//D4
            playMIDINote(1, 53, 127);//F4
        }
if (kpd.key[i].kchar == 'o') {
            playMIDINote(2, 45, 127);//A2
        }
if (kpd.key[i].kchar == 'p') {
            playMIDINote(1, 52, 127);//E3
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 61, 127);//C#4
        }
if (kpd.key[i].kchar == 'q') {
            playMIDINote(1, 52, 127);//E3
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 60, 127);//C4
        }
if (kpd.key[i].kchar == 'r') {
            playMIDINote(2, 40, 127);//E2
        }
if (kpd.key[i].kchar == 's') {
            playMIDINote(1, 47, 127);//C3
            playMIDINote(1, 52, 127);//F3
            playMIDINote(1, 56, 127);//A3
        }
if (kpd.key[i].kchar == 't') {
            playMIDINote(1, 47, 127);//C3
            playMIDINote(1, 52, 127);//F3
            playMIDINote(1, 55, 127);//Ab3
        }
if (kpd.key[i].kchar == 'u') {
            playMIDINote(2, 47, 127);//B3
        }
if (kpd.key[i].kchar == 'v') {
            playMIDINote(1, 54, 127);//G2
            playMIDINote(1, 59, 127);//C3
            playMIDINote(1, 63, 127);//E3
        }
if (kpd.key[i].kchar == 'w') {
            playMIDINote(1, 54, 127);//G2
            playMIDINote(1, 59, 127);//C3
            playMIDINote(1, 62, 127);//Eb3
        }
if (kpd.key[i].kchar == 'x') {
            playMIDINote(2, 42, 127);//F#2
        }
if (kpd.key[i].kchar == 'y') {
            playMIDINote(1, 49, 127);//C3
            playMIDINote(1, 54, 127);//F3
            playMIDINote(1, 58, 127);//A3
        }
if (kpd.key[i].kchar == 'z') {
            playMIDINote(1, 49, 127);//C3
            playMIDINote(1, 54, 127);//F3
            playMIDINote(1, 57, 127);//Ab3
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
