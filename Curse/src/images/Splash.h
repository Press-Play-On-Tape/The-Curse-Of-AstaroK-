#pragma once

namespace Images {
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_Buttons[] = {
  0x23, 0x47, 0x4d, 0x47, 0x46, 0x46, 0xf3, 0xdb, 0x46, 0xb3, 0xf8, 0x39, 0xac, 0x74, 0x1c, 0x59, 
  0xe9, 0xd8,
  };
  #else
  const uint8_t PROGMEM Ppot_Buttons[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_ButtonUp[] = {
  0x8d, 0x8f, 0x11, 0x92, 0x25, 0x24, 0x4b, 0x48, 0x96, 0x90, 0x2c, 0x21, 0x59, 0x42, 0xb2, 0x04, 
  0x76, 0x2e, 0xeb, 0xb2, 0x2e, 0xeb, 0xb2, 0x2e, 0xeb, 0xb2, 0x8e,
  };
  #else
  const uint8_t PROGMEM Ppot_ButtonUp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_ButtonDown[] = {
  0x0d, 0x0f, 0x0c, 0xa4, 0xc0, 0x40, 0x0a, 0x0c, 0xa4, 0xc0, 0x40, 0x0a, 0x0c, 0xa4, 0xc0, 0x40, 
  0x0a, 0x0c, 0x78, 0xc1, 0x99, 0x33, 0x67, 0xce, 0x9c, 0x79, 0x04,
  };
  #else
  const uint8_t PROGMEM Ppot_ButtonDown[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  

  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_Caption[] = {
  0xcd, 0x87, 0xdd, 0xd2, 0x13, 0xc7, 0x01, 0x87, 0x02, 0xdc, 0xba, 0x45, 0x39, 0x72, 0x81, 0xe0,
  0x91, 0x0b, 0x04, 0xbf, 0xd5, 0x2d, 0x3d, 0x71, 0xdc, 0x9b, 0xc5, 0x31, 0x97, 0x5e, 0x72, 0x96,
  0xec, 0xe0, 0x73, 0x0f, 0x18, 0x38, 0x78, 0x2c, 0xdc, 0xd6, 0xa7, 0xc6, 0x1e, 0xa7, 0xe0, 0x4d,
  0x72, 0xeb, 0x96, 0x9e, 0x38, 0x0e, 0xdc, 0x08,
  };
  #else
  const uint8_t PROGMEM Ppot_Caption[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_Loading[] = {
  0xa1, 0x87, 0xdd, 0x0d, 0x9b, 0xbb, 0x20, 0x1b, 0xc4, 0x6b, 0x2e, 0xbd, 0xe4, 0x38, 0x64, 0xe3,
  0x38, 0x78, 0xdc, 0xb7, 0x5e, 0xc0, 0x4b, 0x6f, 0xa1, 0x1b, 0xc5, 0x1b,
  };
  #else
  const uint8_t PROGMEM Ppot_Loading[] = {
  0x00 ,0x07, 0x3d
  };
  #endif   

  const unsigned char PROGMEM Sounds[] = {
  8, 8,
  0x1c, 0x14, 0x22, 0x41, 0x7f, 0x00, 0x00, 0x00, 
  0x1c, 0x1c, 0x3e, 0x7f, 0x7f, 0x00, 0x2a, 0x49, 
  };

};