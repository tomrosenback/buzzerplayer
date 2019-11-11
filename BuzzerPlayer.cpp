#include "BuzzerPlayer.h"

BuzzerPlayer::BuzzerPlayer(unsigned int pin) {
  _pin = pin;
}

void BuzzerPlayer::Init() {
  for(int i = 0; i < 3; i++) {
    tone(_pin, 1000);
    delay(100);
    noTone(_pin);
    delay(100);
  }
}

void BuzzerPlayer::Success() {
  for(uint8_t  i = 0; i < 2; i++) {
    tone(_pin, NOTE_A5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_B5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_C5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_B5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_C5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_D5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_C5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_D5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_E5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_D5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_E5);
    delay(NOTE_SUSTAIN);
    tone(_pin, NOTE_E5);
    delay(NOTE_SUSTAIN);
  }

  noTone(_pin);
}

void BuzzerPlayer::Chirp(unsigned int repeatTimes) {
  for(int i = 0; i < repeatTimes; i++) {
    tone(_pin,NOTE_G4);
    delay(25);
    tone(_pin,NOTE_C4);
    delay(50);
    noTone(_pin);
  }
}
