#include <MIDI.h>

#define ACTIVATED LOW

const int BUTTON_C = 2;
const int BUTTON_D = 3;
const int BUTTON_E = 4;
const int BUTTON_F = 5;
const int BUTTON_G = 6;
const int BUTTON_A = 7;
const int BUTTON_B = 8;

unsigned long LastDebounceTimeC = millis();
unsigned long LastDebounceTimeD = millis();
unsigned long LastDebounceTimeE = millis();
unsigned long LastDebounceTimeF = millis();
unsigned long LastDebounceTimeG = millis();
unsigned long LastDebounceTimeA = millis();
unsigned long LastDebounceTimeB = millis();

unsigned long DebounceDuration = 50;

MIDI_CREATE_DEFAULT_INSTANCE()


void setup() {
  Serial.begin(115200);

  pinMode(BUTTON_C, INPUT_PULLUP);
  pinMode(BUTTON_D, INPUT_PULLUP);
  pinMode(BUTTON_E, INPUT_PULLUP);
  pinMode(BUTTON_F, INPUT_PULLUP);
  pinMode(BUTTON_G, INPUT_PULLUP);
  pinMode(BUTTON_A, INPUT_PULLUP);
  pinMode(BUTTON_B, INPUT_PULLUP);
}

void loop() {
    if(digitalRead(BUTTON_C) == ACTIVATED && ((millis() - LastDebounceTimeC) >= DebounceDuration))
    {
      // Send MIDI Note On message for C
      MIDI.sendNoteOn(60, 127, 1); // 60 is MIDI note number for C, 127 is velocity
      LastDebounceTimeC = millis(); // Set new debounce time
      while (digitalRead(BUTTON_C) == ACTIVATED) {} // Wait for button release
      MIDI.sendNoteOff(60, 0, 1); // Send MIDI Note Off message for C  
      LastDebounceTimeC = millis(); // Set new debounce time
    } 
    if(digitalRead(BUTTON_D) == ACTIVATED && ((millis() - LastDebounceTimeD) >= DebounceDuration))
    {
      // Send MIDI Note On message for D
      MIDI.sendNoteOn(62, 127, 1); // 62 is MIDI note number for D
      LastDebounceTimeD = millis(); // Set new debounce time
      while (digitalRead(BUTTON_D) == ACTIVATED) {} // Wait for button release
      MIDI.sendNoteOff(62, 0, 1); // Send MIDI Note Off for D 
      LastDebounceTimeD = millis(); // Set new debounce time
    }
    if(digitalRead(BUTTON_E) == ACTIVATED && ((millis() - LastDebounceTimeE) >= DebounceDuration))
    {
      // Send MIDI Note On message for E
      MIDI.sendNoteOn(64, 127, 1); // 64 is MIDI note number for E
      LastDebounceTimeE = millis(); // Set new debounce time
      while (digitalRead(BUTTON_E) == ACTIVATED) {} // Wait for button release
      MIDI.sendNoteOff(64, 0, 1); // Send MIDI Note Off for E
      LastDebounceTimeE = millis(); // Set new debounce time
    }
    if(digitalRead(BUTTON_F) == ACTIVATED && ((millis() - LastDebounceTimeF) >= DebounceDuration))
    {
      // Send MIDI Note On message for F
      MIDI.sendNoteOn(65, 127, 1); // 65 is MIDI note number for F
      LastDebounceTimeF = millis(); // Set new debounce time
      while (digitalRead(BUTTON_F) == ACTIVATED) {} // Wait for button release
      MIDI.sendNoteOff(65, 0, 1); // Send MIDI Note Off for F 
      LastDebounceTimeF = millis(); // Set new debounce time
    }
    if(digitalRead(BUTTON_G) == ACTIVATED && ((millis() - LastDebounceTimeG) >= DebounceDuration))
    {
      // Send MIDI Note On message for G
      MIDI.sendNoteOn(67, 127, 1); // 67 is MIDI note number for G
      LastDebounceTimeG = millis(); // Set new debounce time
      while (digitalRead(BUTTON_G) == ACTIVATED) {} // Wait for button release
      MIDI.sendNoteOff(67, 0, 1); // Send MIDI Note Off message for G 
      LastDebounceTimeG = millis(); // Set new debounce time
    }
    if(digitalRead(BUTTON_A) == ACTIVATED && ((millis() - LastDebounceTimeA) >= DebounceDuration))
    {
      // Send MIDI Note On message for A
      MIDI.sendNoteOn(69, 127, 1); // 69 is MIDI note number for A
      LastDebounceTimeA = millis(); // Set new debounce time
      while (digitalRead(BUTTON_A) == ACTIVATED) {} // Wait for button release
      MIDI.sendNoteOff(69, 0, 1); // Send MIDI Note Off message for A 
      LastDebounceTimeA = millis(); // Set new debounce time
    }
    if(digitalRead(BUTTON_B) == ACTIVATED && ((millis() - LastDebounceTimeB) >= DebounceDuration))
    {
      // Send MIDI Note On message for B
      MIDI.sendNoteOn(71, 127, 1); // 71 is MIDI note number for B
      LastDebounceTimeB = millis(); // Set new debounce time
      while (digitalRead(BUTTON_B) == ACTIVATED) {} // Wait for button release
      MIDI.sendNoteOff(71, 0, 1); // Send MIDI Note Off message for B
      LastDebounceTimeB = millis(); // Set new debounce time
  }
}
