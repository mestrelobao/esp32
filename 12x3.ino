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
            playMIDINote(2, 37, 0);//C#2
        }
if (kpd.key[i].kchar == '1') {
            playMIDINote(1, 44, 0);//G2
            playMIDINote(1, 49, 0);//C3
            playMIDINote(1, 53, 0);//E3
        }
if (kpd.key[i].kchar == '2') {
            playMIDINote(1, 44, 0);//G2
            playMIDINote(1, 49, 0);//C3
            playMIDINote(1, 52, 0);//Eb3
        }
if (kpd.key[i].kchar == '3') {
            playMIDINote(2, 44, 0);//G#2
        }
if (kpd.key[i].kchar == '4') {
            playMIDINote(1, 51, 0);//D3
            playMIDINote(1, 56, 0);//G3
            playMIDINote(1, 60, 0);//B3
        }
if (kpd.key[i].kchar == '5') {
            playMIDINote(1, 51, 0);//D3
            playMIDINote(1, 56, 0);//G3
            playMIDINote(1, 59, 0);//Bb3
        }
if (kpd.key[i].kchar == '6') {
            playMIDINote(2, 39, 0);//D#2
        }
if (kpd.key[i].kchar == '7') {
            playMIDINote(1, 46, 0);//A3
            playMIDINote(1, 51, 0);//D4
            playMIDINote(1, 55, 0);//F#4
        }
if (kpd.key[i].kchar == '8') {
            playMIDINote(1, 46, 0);//A3
            playMIDINote(1, 51, 0);//D4
            playMIDINote(1, 54, 0);//F4
        }
if (kpd.key[i].kchar == '9') {
            playMIDINote(2, 46, 0);//A#2
        }
if (kpd.key[i].kchar == 'a') {
            playMIDINote(1, 53, 0);//E3
            playMIDINote(1, 58, 0);//A3
            playMIDINote(1, 62, 0);//C#4
        }
if (kpd.key[i].kchar == 'b') {
            playMIDINote(1, 53, 0);//E3
            playMIDINote(1, 58, 0);//A3
            playMIDINote(1, 61, 0);//C4
        }
if (kpd.key[i].kchar == 'c') {
            playMIDINote(2, 41, 0);//F2
        }
if (kpd.key[i].kchar == 'd') {
            playMIDINote(1, 48, 0);//C3
            playMIDINote(1, 53, 0);//F3
            playMIDINote(1, 57, 0);//A3
        }
if (kpd.key[i].kchar == 'e') {
            playMIDINote(1, 48, 0);//C3
            playMIDINote(1, 53, 0);//F3
            playMIDINote(1, 56, 0);//Ab3
        }
if (kpd.key[i].kchar == 'f') {
            playMIDINote(2, 36, 0);//C2
        }
if (kpd.key[i].kchar == 'g') {
            playMIDINote(1, 43, 0);//G2
            playMIDINote(1, 48, 0);//C3
            playMIDINote(1, 52, 0);//E3
        }
if (kpd.key[i].kchar == 'h') {
            playMIDINote(1, 43, 0);//G2
            playMIDINote(1, 48, 0);//C3
            playMIDINote(1, 51, 0);//Eb3
        }
if (kpd.key[i].kchar == 'i') {
            playMIDINote(2, 43, 0);//G2
        }
if (kpd.key[i].kchar == 'j') {
            playMIDINote(1, 50, 0);//D3
            playMIDINote(1, 55, 0);//G3
            playMIDINote(1, 59, 0);//B3
        }
if (kpd.key[i].kchar == 'k') {
            playMIDINote(1, 50, 0);//D3
            playMIDINote(1, 55, 0);//G3
            playMIDINote(1, 58, 0);//Bb3
        }
if (kpd.key[i].kchar == 'l') {
            playMIDINote(2, 38, 0);//D2
        }
if (kpd.key[i].kchar == 'm') {
            playMIDINote(1, 45, 0);//A3
            playMIDINote(1, 50, 0);//D4
            playMIDINote(1, 54, 0);//F#4
        }
if (kpd.key[i].kchar == 'n') {
            playMIDINote(1, 45, 0);//A3
            playMIDINote(1, 50, 0);//D4
            playMIDINote(1, 53, 0);//F4
        }
if (kpd.key[i].kchar == 'o') {
            playMIDINote(2, 45, 0);//A2
        }
if (kpd.key[i].kchar == 'p') {
            playMIDINote(1, 52, 0);//E3
            playMIDINote(1, 57, 0);//A3
            playMIDINote(1, 61, 0);//C#4
        }
if (kpd.key[i].kchar == 'q') {
            playMIDINote(1, 52, 0);//E3
            playMIDINote(1, 57, 0);//A3
            playMIDINote(1, 60, 0);//C4
        }
if (kpd.key[i].kchar == 'r') {
            playMIDINote(2, 40, 0);//E2
        }
if (kpd.key[i].kchar == 's') {
            playMIDINote(1, 47, 0);//C3
            playMIDINote(1, 52, 0);//F3
            playMIDINote(1, 56, 0);//A3
        }
if (kpd.key[i].kchar == 't') {
            playMIDINote(1, 47, 0);//C3
            playMIDINote(1, 52, 0);//F3
            playMIDINote(1, 55, 0);//Ab3
        }
if (kpd.key[i].kchar == 'u') {
            playMIDINote(2, 47, 0);//B3
        }
if (kpd.key[i].kchar == 'v') {
            playMIDINote(1, 54, 0);//G2
            playMIDINote(1, 59, 0);//C3
            playMIDINote(1, 63, 0);//E3
        }
if (kpd.key[i].kchar == 'w') {
            playMIDINote(1, 54, 0);//G2
            playMIDINote(1, 59, 0);//C3
            playMIDINote(1, 62, 0);//Eb3
        }
if (kpd.key[i].kchar == 'x') {
            playMIDINote(2, 42, 0);//F#2
        }
if (kpd.key[i].kchar == 'y') {
            playMIDINote(1, 49, 0);//C3
            playMIDINote(1, 54, 0);//F3
            playMIDINote(1, 58, 0);//A3
        }
if (kpd.key[i].kchar == 'z') {
            playMIDINote(1, 49, 0);//C3
            playMIDINote(1, 54, 0);//F3
            playMIDINote(1, 57, 0);//Ab3
        }
                      break;
            }
        }
    }
}  // End loop
void playMIDINote(byte channel, byte note, byte velocity) {
byte noteOnStatus=0x90 + (channel-1);  
    Serial.write(noteOnStatus);
    Serial.write(note);
    Serial.write(velocity);
}
