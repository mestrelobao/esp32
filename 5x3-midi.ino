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

