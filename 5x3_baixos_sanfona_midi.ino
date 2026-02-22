/* @file MultiKey.ino
|| @version 1.0
|| @author Mark Stanley
|| @contact mstanley@technologist.com
||
|| @description
|| | The latest version, 3.0, of the keypad library supports up to 10
|| | active keys all being pressed at the same time. This sketch is an
|| | example of how you can get multiple key presses from a keypad or
|| | keyboard.
|| # falta consertar o acorde de C e D
*/

#include <Keypad.h>

const byte ROWS = 5; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'0','1','2'},
  {'3','4','5'},
  {'6','7','8'},
  {'9','a','b'},
  {'c','d','e'}
};
byte rowPins[ROWS] = {19, 21, 13, 12, 14}; //connect to the row pinouts of the kpd
byte colPins[COLS] = {4, 22, 23}; //connect to the column pinouts of the kpd

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
//        Serial.print("Average loops per second = ");
//                                                                          Serial.println(loopCount/5);
        startTime = millis();
        loopCount = 0;
    }

    // Fills kpd.key[ ] array with up-to 10 active keys.
    // Returns true if there are ANY active keys.
    if (kpd.getKeys())
    {
        for (int i=0; i<LIST_MAX; i++)   // Scan the whole key list.
        {
            if ( kpd.key[i].stateChanged )   // Only find keys that have changed state.
            {
                switch (kpd.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
                    case PRESSED:
                  if (kpd.key[i].kchar == '0') {
            playMIDINote(1, 41, 127);//F2
        }
        if (kpd.key[i].kchar == '1') {
            playMIDINote(1, 48, 127);//C3
            playMIDINote(1, 53, 127);//F3
            playMIDINote(1, 57, 127);//A3
        }
        if (kpd.key[i].kchar == '2') {
            playMIDINote(1, 48, 127);//C3
            playMIDINote(1, 53, 127);//F3
            playMIDINote(1, 56, 127);//Ab3
        }
                if (kpd.key[i].kchar == '3') {
            playMIDINote(1, 48, 127);//C2
        }
                if (kpd.key[i].kchar == '4') {
            playMIDINote(1, 55, 127);//G2
            playMIDINote(1, 60, 127);//C3
            playMIDINote(1, 64, 127);//E3
        }
                if (kpd.key[i].kchar == '5') {
            playMIDINote(1, 55, 127);//G2
            playMIDINote(1, 60, 127);//C3
            playMIDINote(1, 63, 127);//Eb3
        }
                if (kpd.key[i].kchar == '6') {
            playMIDINote(1, 43, 127);//G2
        }
                if (kpd.key[i].kchar == '7') {
            playMIDINote(1, 50, 127);//D3
            playMIDINote(1, 55, 127);//G3
            playMIDINote(1, 59, 127);//B3
        }
                if (kpd.key[i].kchar == '8') {
            playMIDINote(1, 50, 127);//D3
            playMIDINote(1, 55, 127);//G3
            playMIDINote(1, 58, 127);//Bb3
        }
                if (kpd.key[i].kchar == '9') {
            playMIDINote(1, 50, 127);//D2
        }
                if (kpd.key[i].kchar == 'a') {
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 62, 127);//D4
            playMIDINote(1, 66, 127);//F#4
        }
                if (kpd.key[i].kchar == 'b') {
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 62, 127);//D4
            playMIDINote(1, 65, 127);//F4
        }
                if (kpd.key[i].kchar == 'c') {
            playMIDINote(1, 45, 127);//A2
        }
                if (kpd.key[i].kchar == 'd') {
            playMIDINote(1, 52, 127);//E3
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 61, 127);//C#4
        }
                if (kpd.key[i].kchar == 'e') {
            playMIDINote(1, 52, 127);//E3
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 60, 127);//C4
        }
                break;
                  case HOLD:
                  msg = " HOLD.";
                break;
                    case RELEASED:
if (kpd.key[i].kchar == '0') {
          playMIDINote(1, 41, 0);//F2
        }
        if (kpd.key[i].kchar == '1') {
            playMIDINote(1, 48, 0);//C3
            playMIDINote(1, 53, 0);//F3
            playMIDINote(1, 57, 0);//A3
        }
        if (kpd.key[i].kchar == '2') {
            playMIDINote(1, 48, 0);//C3
            playMIDINote(1, 53, 0);//F3
            playMIDINote(1, 56, 0);//Ab3
        }
if (kpd.key[i].kchar == '3') {
            playMIDINote(1, 36, 0);//C2
        }
if (kpd.key[i].kchar == '4') {
            playMIDINote(1, 55, 0);//G2
            playMIDINote(1, 60, 0);//C3
            playMIDINote(1, 64, 0);//E3
        }
if (kpd.key[i].kchar == '5') {
            playMIDINote(1, 55, 0);//G2
            playMIDINote(1, 60, 0);//C3
            playMIDINote(1, 63, 0);//Eb3
        }
if (kpd.key[i].kchar == '6') {
            playMIDINote(1, 43, 0);//G2
        }
if (kpd.key[i].kchar == '7') {
            playMIDINote(1, 50, 0);//D3
            playMIDINote(1, 55, 0);//G3
            playMIDINote(1, 59, 0);//B3
        }
if (kpd.key[i].kchar == '8') {
            playMIDINote(1, 50, 0);//D3
            playMIDINote(1, 55, 0);//G3
            playMIDINote(1, 58, 0);//Bb3
        }
if (kpd.key[i].kchar == '9') {
            playMIDINote(1, 38, 0);//D2
        }
if (kpd.key[i].kchar == 'a') {
            playMIDINote(1, 57, 0);//A3
            playMIDINote(1, 62, 0);//D4
            playMIDINote(1, 66, 0);//F#4
        }
if (kpd.key[i].kchar == 'b') {
            playMIDINote(1, 57, 0);//A3
            playMIDINote(1, 62, 0);//D4
            playMIDINote(1, 65, 0);//F4
        }
if (kpd.key[i].kchar == 'c') {
            playMIDINote(1, 45, 0);//A2
        }
if (kpd.key[i].kchar == 'd') {
            playMIDINote(1, 52, 0);//E3
            playMIDINote(1, 57, 0);//A3
            playMIDINote(1, 61, 0);//C#4
        }
if (kpd.key[i].kchar == 'e') {
            playMIDINote(1, 52, 0);//E3
            playMIDINote(1, 57, 0);//A3
            playMIDINote(1, 60, 0);//C4
        }
     
    //            break;
    //                case IDLE:
    //                msg = " IDLE.";
    //            }

            }
        }
    }
}  // End loop
}
void playMIDINote(byte channel, byte note, byte velocity) {
byte noteOnStatus=0x90 + (channel-1);  
    Serial.write(noteOnStatus);
    Serial.write(note);
    Serial.write(velocity);
}
