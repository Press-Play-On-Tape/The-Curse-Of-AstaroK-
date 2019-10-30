#include <ArduboyTones.h>

namespace Sounds {

  const uint16_t title[] PROGMEM = {
    NOTE_REST,250, NOTE_B4,250, NOTE_G5,250, NOTE_FS5,750, NOTE_REST,250, NOTE_CS5,250, NOTE_REST,250, NOTE_B4,250,
    NOTE_G5,250, NOTE_FS5,750, NOTE_REST,250, NOTE_CS5,250, NOTE_REST,250, NOTE_B4,250, NOTE_B5,250, NOTE_A5,750,
    NOTE_REST,750, NOTE_G4,250, NOTE_C5,250, NOTE_D5,500, NOTE_E5,250,
    TONES_REPEAT
  };

  const uint16_t main[] PROGMEM = {
    NOTE_F5,250, NOTE_G5,250, NOTE_A5,375, NOTE_F5,125, NOTE_G5,125, NOTE_A5,125, NOTE_F5,250, NOTE_G5,250,
    NOTE_F5,250, NOTE_D5,250, NOTE_C6,250, NOTE_AS5,250, NOTE_A5,250, NOTE_G5,250, NOTE_A5,500, NOTE_G5,250,
    NOTE_G5,250, NOTE_F5,125, NOTE_G5,125, NOTE_A5,375, NOTE_F5,125, NOTE_G5,125, NOTE_A5,125, NOTE_F5,250,
    NOTE_G5,250, NOTE_D5,250, NOTE_D5,250, NOTE_C6,250, NOTE_AS5,250, NOTE_A5,250, NOTE_G5,250, NOTE_F5,500,
    NOTE_REST,250, NOTE_F6,250, NOTE_E6,250, NOTE_E5,250, NOTE_G5,250, NOTE_C6,375, NOTE_E5,125, NOTE_G5,250,
    NOTE_C6,250, NOTE_AS5,125, NOTE_C6,125, NOTE_G5,250, NOTE_A5,125, NOTE_G5,125, NOTE_A5,125, NOTE_G5,125,
    NOTE_A5,375, NOTE_G5,125, NOTE_A5,250, NOTE_G5,250, NOTE_F5,250, NOTE_G5,125, NOTE_F5,125, NOTE_E5,250,
    NOTE_G5,250, NOTE_C6,375, NOTE_E5,125, NOTE_G5,250, NOTE_C6,250, NOTE_AS5,125, NOTE_C6,125, NOTE_G5,250,
    NOTE_A5,500, NOTE_D6,500, NOTE_A5,500, NOTE_F6,250, NOTE_E6,250, NOTE_E5,250, NOTE_G5,250, NOTE_C6,375,
    NOTE_E5,125, NOTE_G5,250, NOTE_C6,250, NOTE_F5,250, NOTE_G5,125, NOTE_F5,125, NOTE_E5,250, NOTE_G5,250,
    NOTE_C6,375, NOTE_E5,125, NOTE_G5,250, NOTE_C6,250, NOTE_F5,250, NOTE_G5,125, NOTE_F5,125, NOTE_AS5,125,
    NOTE_A5,125, NOTE_AS5,125, NOTE_A5,125, NOTE_AS5,375, NOTE_F5,125, NOTE_E5,375, NOTE_G5,125, NOTE_F5,250,
    NOTE_G5,125, NOTE_F5,125, NOTE_AS5,125, NOTE_A5,125, NOTE_AS5,125, NOTE_A5,125, NOTE_AS5,375, NOTE_F5,125,
    NOTE_E5,375, NOTE_G5,125,
    TONES_END
  };


  // const uint16_t main[] PROGMEM = { // Down one ocatve
  //   NOTE_F4,250, NOTE_G4,250, NOTE_A4,375, NOTE_F4,125, NOTE_G4,125, NOTE_A4,125, NOTE_F4,250, NOTE_G4,250,
  //   NOTE_F4,250, NOTE_D4,250, NOTE_C5,250, NOTE_AS4,250, NOTE_A4,250, NOTE_G4,250, NOTE_A4,500, NOTE_G4,250,
  //   NOTE_G4,250, NOTE_F4,125, NOTE_G4,125, NOTE_A4,375, NOTE_F4,125, NOTE_G4,125, NOTE_A4,125, NOTE_F4,250,
  //   NOTE_G4,250, NOTE_D4,250, NOTE_D4,250, NOTE_C5,250, NOTE_AS4,250, NOTE_A4,250, NOTE_G4,250, NOTE_F4,500,
  //   NOTE_REST,250, NOTE_F5,250, NOTE_E5,250, NOTE_E4,250, NOTE_G4,250, NOTE_C5,375, NOTE_E4,125, NOTE_G4,250,
  //   NOTE_C5,250, NOTE_AS4,125, NOTE_C5,125, NOTE_G4,250, NOTE_A4,125, NOTE_G4,125, NOTE_A4,125, NOTE_G4,125,
  //   NOTE_A4,375, NOTE_G4,125, NOTE_A4,250, NOTE_G4,250, NOTE_F4,250, NOTE_G4,125, NOTE_F4,125, NOTE_E4,250,
  //   NOTE_G4,250, NOTE_C5,375, NOTE_E4,125, NOTE_G4,250, NOTE_C5,250, NOTE_AS4,125, NOTE_C5,125, NOTE_G4,250,
  //   NOTE_A4,500, NOTE_D5,500, NOTE_A4,500, NOTE_F5,250, NOTE_E5,250, NOTE_E4,250, NOTE_G4,250, NOTE_C5,375,
  //   NOTE_E4,125, NOTE_G4,250, NOTE_C5,250, NOTE_F4,250, NOTE_G4,125, NOTE_F4,125, NOTE_E4,250, NOTE_G4,250,
  //   NOTE_C5,375, NOTE_E4,125, NOTE_G4,250, NOTE_C5,250, NOTE_F4,250, NOTE_G4,125, NOTE_F4,125, NOTE_AS4,125,
  //   NOTE_A4,125, NOTE_AS4,125, NOTE_A4,125, NOTE_AS4,375, NOTE_F4,125, NOTE_E4,375, NOTE_G4,125, NOTE_F4,250,
  //   NOTE_G4,125, NOTE_F4,125, NOTE_AS4,125, NOTE_A4,125, NOTE_AS4,125, NOTE_A4,125, NOTE_AS4,375, NOTE_F4,125,
  //   NOTE_E4,375, NOTE_G4,125,
  //   TONES_END
  // };

  // const uint16_t main[] PROGMEM = {// Down two octaves
  //   NOTE_F3,250, NOTE_G3,250, NOTE_A3,375, NOTE_F3,125, NOTE_G3,125, NOTE_A3,125, NOTE_F3,250, NOTE_G3,250,
  //   NOTE_F3,250, NOTE_D3,250, NOTE_C4,250, NOTE_AS3,250, NOTE_A3,250, NOTE_G3,250, NOTE_A3,500, NOTE_G3,250,
  //   NOTE_G3,250, NOTE_F3,125, NOTE_G3,125, NOTE_A3,375, NOTE_F3,125, NOTE_G3,125, NOTE_A3,125, NOTE_F3,250,
  //   NOTE_G3,250, NOTE_D3,250, NOTE_D3,250, NOTE_C4,250, NOTE_AS3,250, NOTE_A3,250, NOTE_G3,250, NOTE_F3,500,
  //   NOTE_REST,250, NOTE_F4,250, NOTE_E4,250, NOTE_E3,250, NOTE_G3,250, NOTE_C4,375, NOTE_E3,125, NOTE_G3,250,
  //   NOTE_C4,250, NOTE_AS3,125, NOTE_C4,125, NOTE_G3,250, NOTE_A3,125, NOTE_G3,125, NOTE_A3,125, NOTE_G3,125,
  //   NOTE_A3,375, NOTE_G3,125, NOTE_A3,250, NOTE_G3,250, NOTE_F3,250, NOTE_G3,125, NOTE_F3,125, NOTE_E3,250,
  //   NOTE_G3,250, NOTE_C4,375, NOTE_E3,125, NOTE_G3,250, NOTE_C4,250, NOTE_AS3,125, NOTE_C4,125, NOTE_G3,250,
  //   NOTE_A3,500, NOTE_D4,500, NOTE_A3,500, NOTE_F4,250, NOTE_E4,250, NOTE_E3,250, NOTE_G3,250, NOTE_C4,375,
  //   NOTE_E3,125, NOTE_G3,250, NOTE_C4,250, NOTE_F3,250, NOTE_G3,125, NOTE_F3,125, NOTE_E3,250, NOTE_G3,250,
  //   NOTE_C4,375, NOTE_E3,125, NOTE_G3,250, NOTE_C4,250, NOTE_F3,250, NOTE_G3,125, NOTE_F3,125, NOTE_AS3,125,
  //   NOTE_A3,125, NOTE_AS3,125, NOTE_A3,125, NOTE_AS3,375, NOTE_F3,125, NOTE_E3,375, NOTE_G3,125, NOTE_F3,250,
  //   NOTE_G3,125, NOTE_F3,125, NOTE_AS3,125, NOTE_A3,125, NOTE_AS3,125, NOTE_A3,125, NOTE_AS3,375, NOTE_F3,125,
  //   NOTE_E3,375, NOTE_G3,125,
  //   TONES_END
  // };

  // const uint16_t main[] PROGMEM = { // Down three octaves
  //   NOTE_F2,250, NOTE_G2,250, NOTE_A2,375, NOTE_F2,125, NOTE_G2,125, NOTE_A2,125, NOTE_F2,250, NOTE_G2,250,
  //   NOTE_F2,250, NOTE_D2,250, NOTE_C2,250, NOTE_AS2,250, NOTE_A2,250, NOTE_G2,250, NOTE_A2,500, NOTE_G2,250,
  //   NOTE_G2,250, NOTE_F2,125, NOTE_G2,125, NOTE_A2,375, NOTE_F2,125, NOTE_G2,125, NOTE_A2,125, NOTE_F2,250,
  //   NOTE_G2,250, NOTE_D2,250, NOTE_D2,250, NOTE_C3,250, NOTE_AS2,250, NOTE_A2,250, NOTE_G2,250, NOTE_F2,500,
  //   NOTE_REST,250, NOTE_F3,250, NOTE_E3,250, NOTE_E2,250, NOTE_G2,250, NOTE_C3,375, NOTE_E2,125, NOTE_G2,250,
  //   NOTE_C3,250, NOTE_AS2,125, NOTE_C3,125, NOTE_G2,250, NOTE_A2,125, NOTE_G2,125, NOTE_A2,125, NOTE_G2,125,
  //   NOTE_A2,375, NOTE_G2,125, NOTE_A2,250, NOTE_G2,250, NOTE_F2,250, NOTE_G2,125, NOTE_F2,125, NOTE_E2,250,
  //   NOTE_G2,250, NOTE_C3,375, NOTE_E2,125, NOTE_G2,250, NOTE_C3,250, NOTE_AS2,125, NOTE_C3,125, NOTE_G2,250,
  //   NOTE_A2,500, NOTE_D3,500, NOTE_A2,500, NOTE_F3,250, NOTE_E3,250, NOTE_E2,250, NOTE_G2,250, NOTE_C3,375,
  //   NOTE_E2,125, NOTE_G2,250, NOTE_C3,250, NOTE_F2,250, NOTE_G2,125, NOTE_F2,125, NOTE_E2,250, NOTE_G2,250,
  //   NOTE_C3,375, NOTE_E2,125, NOTE_G2,250, NOTE_C3,250, NOTE_F2,250, NOTE_G2,125, NOTE_F2,125, NOTE_AS2,125,
  //   NOTE_A2,125, NOTE_AS2,125, NOTE_A2,125, NOTE_AS2,375, NOTE_F2,125, NOTE_E2,375, NOTE_G2,125, NOTE_F2,250,
  //   NOTE_G2,125, NOTE_F2,125, NOTE_AS2,125, NOTE_A2,125, NOTE_AS2,125, NOTE_A2,125, NOTE_AS2,375, NOTE_F2,125,
  //   NOTE_E2,375, NOTE_G2,125,
  //   TONES_END
  // };


  const uint16_t purchase[] PROGMEM = {
    NOTE_B5,100, NOTE_D5,100, NOTE_F5,100,
    TONES_END
  };

  const uint16_t cast[] PROGMEM = {
    NOTE_C5,75, NOTE_REST, 15, NOTE_A5,75, NOTE_REST, 15, NOTE_E5,75,  
    TONES_END
  };

  const uint16_t touch[] PROGMEM = {
    NOTE_C5,75, NOTE_REST, 15, NOTE_C5,75, 
    TONES_END
  };

  const uint16_t playerHit[] PROGMEM = {
    NOTE_E4,150, NOTE_REST, 15, NOTE_C3,150, NOTE_REST, 15, NOTE_A2,150, 
    TONES_END
  };

  const uint16_t playerDead[] PROGMEM = {
    NOTE_E5,136, NOTE_B5,136, NOTE_A5,136, NOTE_B5,136, NOTE_G5,136, NOTE_B5,136, NOTE_FS5,136, NOTE_B5,136,
    NOTE_E5,136, NOTE_B5,136, NOTE_DS5,136, NOTE_B5,136, NOTE_E5,136, NOTE_B5,136, NOTE_FS5,136, NOTE_B5,136,
    NOTE_E5,272, NOTE_B4,272, NOTE_A4,272, NOTE_B4,272, NOTE_E4,1090,
    TONES_END
  };

  const uint16_t enemyHit[] PROGMEM = {
    NOTE_A2,150, NOTE_REST, 15, NOTE_C3,150, NOTE_REST, 15, NOTE_E4,150, 
    TONES_END
  };

  const uint16_t enemyDead[] PROGMEM = {
    NOTE_C5,133, NOTE_G4,133, NOTE_A4,133, NOTE_C5,266, NOTE_G4,133, NOTE_G4,266, NOTE_D5,133, NOTE_C5,133,
    NOTE_A5,133, NOTE_D5,266, NOTE_C5,133, NOTE_A4,266, NOTE_DS5,133, NOTE_DS5,133, NOTE_DS5,266, NOTE_D5,266,
    NOTE_D5,133, NOTE_C5,133, NOTE_C5,533,
    TONES_END
  };

  const uint16_t hpOrGPGained[] PROGMEM = {
    NOTE_A5,25, NOTE_E5,25, NOTE_C5,25, NOTE_A6,25, 
    TONES_END
  };

}
