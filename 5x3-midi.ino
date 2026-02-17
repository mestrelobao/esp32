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
    Serial.begin(31250);
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
            allsoundoff(1, 120, 0);
            playMIDINote(1, 41, 127);//F2
        }
if (kpd.key[i].kchar == '1') {
            allsoundoff(1, 120, 0);//FM
            playMIDINote(1, 48, 127);//C3
            playMIDINote(1, 53, 127);//F3
            playMIDINote(1, 57, 127);//A3
        }
if (kpd.key[i].kchar == '2') {
            allsoundoff(1, 120, 0);//Fm
            playMIDINote(1, 48, 127);//C3
            playMIDINote(1, 53, 127);//F3
            playMIDINote(1, 56, 127);//Ab3
        }
if (kpd.key[i].kchar == '3') {
            allsoundoff(1, 120, 0);
            playMIDINote(1, 36, 127);//C2
        }
if (kpd.key[i].kchar == '4') {
            allsoundoff(1, 120, 0);//CM
            playMIDINote(1, 48, 127);//G2
            playMIDINote(1, 53, 127);//C3
            playMIDINote(1, 56, 127);//E3
        }
if (kpd.key[i].kchar == '5') {
            allsoundoff(1, 120, 0);//Cm
            playMIDINote(1, 48, 127);//G2
            playMIDINote(1, 53, 127);//C3
            playMIDINote(1, 55, 127);//Eb3
        }
if (kpd.key[i].kchar == '6') {
            allsoundoff(1, 120, 0);
            playMIDINote(1, 43, 127);//G2
        }
if (kpd.key[i].kchar == '7') {
            allsoundoff(1, 120, 0);//GM
            playMIDINote(1, 50, 127);//D3
            playMIDINote(1, 55, 127);//G3
            playMIDINote(1, 59, 127);//B3
        }
if (kpd.key[i].kchar == '8') {
            allsoundoff(1, 120, 0);//Gm
            playMIDINote(1, 50, 127);//D3
            playMIDINote(1, 55, 127);//G3
            playMIDINote(1, 58, 127);//Bb3
        }
if (kpd.key[i].kchar == '9') {
            allsoundoff(1, 120, 0);
            playMIDINote(1, 38, 127);//D2
        }
if (kpd.key[i].kchar == 'a') {
            allsoundoff(1, 120, 0);//DM
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 62, 127);//D4
            playMIDINote(1, 66, 127);//F#4
        }
if (kpd.key[i].kchar == 'b') {
            allsoundoff(1, 120, 0);//Dm
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 62, 127);//D4
            playMIDINote(1, 65, 127);//F4
        }
if (kpd.key[i].kchar == 'c') {
            allsoundoff(1, 120, 0);
            playMIDINote(1, 45, 127);//A2
        }
if (kpd.key[i].kchar == 'd') {
            allsoundoff(1, 120, 0);//AM
            playMIDINote(1, 52, 127);//E3
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 61, 127);//C#4
        }
if (kpd.key[i].kchar == 'e') {
            allsoundoff(1, 120, 0);//Am
            playMIDINote(1, 52, 127);//E3
            playMIDINote(1, 57, 127);//A3
            playMIDINote(1, 60, 127);//C4
        }
                      break;
                    case RELEASED:
allsoundoff(1, 120, 0);
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

void allsoundoff(byte channel, byte note, byte velocity) {
byte noteOnStatus=0xB0 + (channel-1);  
    Serial.write(noteOnStatus);
    Serial.write(note);
    Serial.write(velocity);
}

