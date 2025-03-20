#pragma once

#include "tas5805m.h"

namespace esphome {
namespace tas5805m {

static const uint8_t CFG_META_DELAY = 254;

static const tas5805m_cfg_reg_t tas5805m_registers[] = {
  // RESET
      { 0x00, 0x00 },
      { 0x7f, 0x00 },
      { 0x03, 0x02 },
      { 0x01, 0x11 },
      { 0x03, 0x02 },
      { CFG_META_DELAY, 5 },
      { 0x03, 0x00 },
      { 0x46, 0x01 },
      { 0x03, 0x02 },
      { 0x61, 0x0b },
      { 0x60, 0x01 },
      { 0x7d, 0x11 },
      { 0x7e, 0xff },
      { 0x00, 0x01 },
      { 0x51, 0x05 },
      { 0x00, 0x00 },
      { 0x66, 0x87 }, //   EQReg
      { 0x7f, 0x8c },
      { 0x00, 0x29 },
      { 0x18, 0x00 }, //  Input Mixer Left to left = 0 dB
      { 0x19, 0x80 },
      { 0x1a, 0x00 },
      { 0x1b, 0x00 },
      { 0x1c, 0x00 }, //  Input Mixer Right to left = -110 dB
      { 0x1d, 0x00 },
      { 0x1e, 0x00 },
      { 0x1f, 0x00 },
      { 0x20, 0x00 }, //  Input Mixer Left to right = -110 dB
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
      { 0x24, 0x00 }, //  Input Mixer Right to right = 0 dB
      { 0x25, 0x80 },
      { 0x26, 0x00 },
      { 0x27, 0x00 },
      { 0x00, 0x2a },
      { 0x24, 0x00 }, //  Volume Left = -20 dB
      { 0x25, 0x0C },
      { 0x26, 0xCC },
      { 0x27, 0xCD },
      { 0x28, 0x00 }, //  Volume Right = -20 dB
      { 0x29, 0x0C },
      { 0x2a, 0xCC },
      { 0x2b, 0xCD },
      { 0x30, 0x00 }, //  Volume Alpha = 3 ms
      { 0x31, 0x71 },
      { 0x32, 0x94 },
      { 0x33, 0x9a },
      { 0x00, 0x2c },
      { 0x0c, 0x00 }, //  Left Input to Left Level Meter = -110 dB
      { 0x0d, 0x00 },
      { 0x0e, 0x00 },
      { 0x0f, 0x00 },
      { 0x10, 0x00 }, //  Right Input to Left Level Meter = -110 dB
      { 0x11, 0x00 },
      { 0x12, 0x00 },
      { 0x13, 0x00 },
      { 0x14, 0x00 }, //  Left Output to Left Level Meter = 0 dB
      { 0x15, 0x80 },
      { 0x16, 0x00 },
      { 0x17, 0x00 },
      { 0x18, 0x00 }, //  Right Output to Left Level Meter = -110 dB
      { 0x19, 0x00 },
      { 0x1a, 0x00 },
      { 0x1b, 0x00 },
      { 0x1c, 0x00 }, //  Output Crossbar Left to Amp Left = 0 dB
      { 0x1d, 0x80 },
      { 0x1e, 0x00 },
      { 0x1f, 0x00 },
      { 0x20, 0x00 }, //  Output Crossbar Right to Amp Left = -110 dB
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
      { 0x28, 0x00 }, //  Output Crossbar Left to Amp Right = -110 dB
      { 0x29, 0x00 },
      { 0x2a, 0x00 },
      { 0x2b, 0x00 },
      { 0x2c, 0x00 }, //  Output Crossbar Right to Amp Right = 0 dB
      { 0x2d, 0x80 },
      { 0x2e, 0x00 },
      { 0x2f, 0x00 },
      { 0x34, 0x00 }, //  Output Crossbar Left to I2S Left = 0 dB
      { 0x35, 0x80 },
      { 0x36, 0x00 },
      { 0x37, 0x00 },
      { 0x38, 0x00 }, //  Output Crossbar Right to I2S Left = -110 dB
      { 0x39, 0x00 },
      { 0x3a, 0x00 },
      { 0x3b, 0x00 },
      { 0x48, 0x00 }, //  Output Crossbar Left to I2S Right = -110 dB
      { 0x49, 0x00 },
      { 0x4a, 0x00 },
      { 0x4b, 0x00 },
      { 0x4c, 0x00 }, //  Output Crossbar Right to I2S Right = 0 dB
      { 0x4d, 0x80 },
      { 0x4e, 0x00 },
      { 0x4f, 0x00 },
      { 0x5c, 0x00 }, //  AGL Release Rate: 0.001
      { 0x5d, 0x00 },
      { 0x5e, 0x57 },
      { 0x5f, 0x62 },
      { 0x60, 0x00 }, //  AGL Attack Rate: 0.2
      { 0x61, 0x89 },
      { 0x62, 0x37 },
      { 0x63, 0x4c },
      { 0x64, 0x08 }, //  AGL Threshold: 0 dB
      { 0x65, 0x00 },
      { 0x66, 0x00 },
      { 0x67, 0x00 },
      { 0x68, 0x40 }, //  AGL OnOff: 0
      { 0x69, 0x00 },
      { 0x6a, 0x00 },
      { 0x6b, 0x00 },
      { 0x6c, 0x02 }, //  AGL Softening Alpha: 0.55 ms
      { 0x6d, 0x66 },
      { 0x6e, 0xc4 },
      { 0x6f, 0x1b },
      { 0x74, 0x00 }, //  Thermal Foldback Scale: 0 dB
      { 0x75, 0x80 },
      { 0x76, 0x00 },
      { 0x77, 0x00 },
      { 0x00, 0x2d },
      { 0x18, 0x7d }, //  AGL Softening Omega: 0.55 ms
      { 0x19, 0x99 },
      { 0x1a, 0x3b },
      { 0x1b, 0xe5 },
      { 0x1c, 0x00 }, //  Level Meter Time Constant = 1000 ms
      { 0x1d, 0x00 },
      { 0x1e, 0x57 },
      { 0x1f, 0x62 },
      { 0x20, 0x00 }, //  Left Input to Right Level Meter = -110 dB
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
      { 0x24, 0x00 }, //  Right Input to Right Level Meter = -110 dB
      { 0x25, 0x00 },
      { 0x26, 0x00 },
      { 0x27, 0x00 },
      { 0x28, 0x00 }, //  Left Output to Right Level Meter = -110 dB
      { 0x29, 0x00 },
      { 0x2a, 0x00 },
      { 0x2b, 0x00 },
      { 0x2c, 0x00 }, //  Right Output to Right Level Meter = 0 dB
      { 0x2d, 0x80 },
      { 0x2e, 0x00 },
      { 0x2f, 0x00 },
      { 0x00, 0x2e },
      { 0x24, 0x01 }, //  Thermal Foldback Time Constant: 1 ms
      { 0x25, 0x53 },
      { 0x26, 0x8f },
      { 0x27, 0xcc },
      { 0x00, 0x00 },
      { 0x7f, 0xaa },
      { 0x00, 0x24 },
      { 0x18, 0x08 }, //  Biquad -  BQ1 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x19, 0x00 },
      { 0x1a, 0x00 },
      { 0x1b, 0x00 },
      { 0x1c, 0x00 },
      { 0x1d, 0x00 },
      { 0x1e, 0x00 },
      { 0x1f, 0x00 },
      { 0x20, 0x00 },
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
      { 0x24, 0x00 },
      { 0x25, 0x00 },
      { 0x26, 0x00 },
      { 0x27, 0x00 },
      { 0x28, 0x00 },
      { 0x29, 0x00 },
      { 0x2a, 0x00 },
      { 0x2b, 0x00 },
      { 0x2c, 0x08 }, //  Biquad -  BQ2 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x2d, 0x00 },
      { 0x2e, 0x00 },
      { 0x2f, 0x00 },
      { 0x30, 0x00 },
      { 0x31, 0x00 },
      { 0x32, 0x00 },
      { 0x33, 0x00 },
      { 0x34, 0x00 },
      { 0x35, 0x00 },
      { 0x36, 0x00 },
      { 0x37, 0x00 },
      { 0x38, 0x00 },
      { 0x39, 0x00 },
      { 0x3a, 0x00 },
      { 0x3b, 0x00 },
      { 0x3c, 0x00 },
      { 0x3d, 0x00 },
      { 0x3e, 0x00 },
      { 0x3f, 0x00 },
      { 0x40, 0x08 }, //  Biquad -  BQ3 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x41, 0x00 },
      { 0x42, 0x00 },
      { 0x43, 0x00 },
      { 0x44, 0x00 },
      { 0x45, 0x00 },
      { 0x46, 0x00 },
      { 0x47, 0x00 },
      { 0x48, 0x00 },
      { 0x49, 0x00 },
      { 0x4a, 0x00 },
      { 0x4b, 0x00 },
      { 0x4c, 0x00 },
      { 0x4d, 0x00 },
      { 0x4e, 0x00 },
      { 0x4f, 0x00 },
      { 0x50, 0x00 },
      { 0x51, 0x00 },
      { 0x52, 0x00 },
      { 0x53, 0x00 },
      { 0x54, 0x08 }, //  Biquad -  BQ4 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x55, 0x00 },
      { 0x56, 0x00 },
      { 0x57, 0x00 },
      { 0x58, 0x00 },
      { 0x59, 0x00 },
      { 0x5a, 0x00 },
      { 0x5b, 0x00 },
      { 0x5c, 0x00 },
      { 0x5d, 0x00 },
      { 0x5e, 0x00 },
      { 0x5f, 0x00 },
      { 0x60, 0x00 },
      { 0x61, 0x00 },
      { 0x62, 0x00 },
      { 0x63, 0x00 },
      { 0x64, 0x00 },
      { 0x65, 0x00 },
      { 0x66, 0x00 },
      { 0x67, 0x00 },
      { 0x68, 0x08 }, //  Biquad -  BQ5 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x69, 0x00 },
      { 0x6a, 0x00 },
      { 0x6b, 0x00 },
      { 0x6c, 0x00 },
      { 0x6d, 0x00 },
      { 0x6e, 0x00 },
      { 0x6f, 0x00 },
      { 0x70, 0x00 },
      { 0x71, 0x00 },
      { 0x72, 0x00 },
      { 0x73, 0x00 },
      { 0x74, 0x00 },
      { 0x75, 0x00 },
      { 0x76, 0x00 },
      { 0x77, 0x00 },
      { 0x78, 0x00 },
      { 0x79, 0x00 },
      { 0x7a, 0x00 },
      { 0x7b, 0x00 },
      { 0x7c, 0x08 }, //  Biquad -  BQ6 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x7d, 0x00 },
      { 0x7e, 0x00 },
      { 0x7f, 0x00 },
      { 0x00, 0x25 },
      { 0x08, 0x00 },
      { 0x09, 0x00 },
      { 0x0a, 0x00 },
      { 0x0b, 0x00 },
      { 0x0c, 0x00 },
      { 0x0d, 0x00 },
      { 0x0e, 0x00 },
      { 0x0f, 0x00 },
      { 0x10, 0x00 },
      { 0x11, 0x00 },
      { 0x12, 0x00 },
      { 0x13, 0x00 },
      { 0x14, 0x00 },
      { 0x15, 0x00 },
      { 0x16, 0x00 },
      { 0x17, 0x00 },
      { 0x18, 0x08 }, //  Biquad -  BQ7 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x19, 0x00 },
      { 0x1a, 0x00 },
      { 0x1b, 0x00 },
      { 0x1c, 0x00 },
      { 0x1d, 0x00 },
      { 0x1e, 0x00 },
      { 0x1f, 0x00 },
      { 0x20, 0x00 },
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
      { 0x24, 0x00 },
      { 0x25, 0x00 },
      { 0x26, 0x00 },
      { 0x27, 0x00 },
      { 0x28, 0x00 },
      { 0x29, 0x00 },
      { 0x2a, 0x00 },
      { 0x2b, 0x00 },
      { 0x2c, 0x08 }, //  Biquad -  BQ8 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x2d, 0x00 },
      { 0x2e, 0x00 },
      { 0x2f, 0x00 },
      { 0x30, 0x00 },
      { 0x31, 0x00 },
      { 0x32, 0x00 },
      { 0x33, 0x00 },
      { 0x34, 0x00 },
      { 0x35, 0x00 },
      { 0x36, 0x00 },
      { 0x37, 0x00 },
      { 0x38, 0x00 },
      { 0x39, 0x00 },
      { 0x3a, 0x00 },
      { 0x3b, 0x00 },
      { 0x3c, 0x00 },
      { 0x3d, 0x00 },
      { 0x3e, 0x00 },
      { 0x3f, 0x00 },
      { 0x40, 0x08 }, //  Biquad -  BQ9 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x41, 0x00 },
      { 0x42, 0x00 },
      { 0x43, 0x00 },
      { 0x44, 0x00 },
      { 0x45, 0x00 },
      { 0x46, 0x00 },
      { 0x47, 0x00 },
      { 0x48, 0x00 },
      { 0x49, 0x00 },
      { 0x4a, 0x00 },
      { 0x4b, 0x00 },
      { 0x4c, 0x00 },
      { 0x4d, 0x00 },
      { 0x4e, 0x00 },
      { 0x4f, 0x00 },
      { 0x50, 0x00 },
      { 0x51, 0x00 },
      { 0x52, 0x00 },
      { 0x53, 0x00 },
      { 0x54, 0x08 }, //  Biquad -  BQ10 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x55, 0x00 },
      { 0x56, 0x00 },
      { 0x57, 0x00 },
      { 0x58, 0x00 },
      { 0x59, 0x00 },
      { 0x5a, 0x00 },
      { 0x5b, 0x00 },
      { 0x5c, 0x00 },
      { 0x5d, 0x00 },
      { 0x5e, 0x00 },
      { 0x5f, 0x00 },
      { 0x60, 0x00 },
      { 0x61, 0x00 },
      { 0x62, 0x00 },
      { 0x63, 0x00 },
      { 0x64, 0x00 },
      { 0x65, 0x00 },
      { 0x66, 0x00 },
      { 0x67, 0x00 },
      { 0x68, 0x08 }, //  Biquad -  BQ11 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x69, 0x00 },
      { 0x6a, 0x00 },
      { 0x6b, 0x00 },
      { 0x6c, 0x00 },
      { 0x6d, 0x00 },
      { 0x6e, 0x00 },
      { 0x6f, 0x00 },
      { 0x70, 0x00 },
      { 0x71, 0x00 },
      { 0x72, 0x00 },
      { 0x73, 0x00 },
      { 0x74, 0x00 },
      { 0x75, 0x00 },
      { 0x76, 0x00 },
      { 0x77, 0x00 },
      { 0x78, 0x00 },
      { 0x79, 0x00 },
      { 0x7a, 0x00 },
      { 0x7b, 0x00 },
      { 0x7c, 0x08 }, //  Biquad -  BQ12 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x7d, 0x00 },
      { 0x7e, 0x00 },
      { 0x7f, 0x00 },
      { 0x00, 0x26 },
      { 0x08, 0x00 },
      { 0x09, 0x00 },
      { 0x0a, 0x00 },
      { 0x0b, 0x00 },
      { 0x0c, 0x00 },
      { 0x0d, 0x00 },
      { 0x0e, 0x00 },
      { 0x0f, 0x00 },
      { 0x10, 0x00 },
      { 0x11, 0x00 },
      { 0x12, 0x00 },
      { 0x13, 0x00 },
      { 0x14, 0x00 },
      { 0x15, 0x00 },
      { 0x16, 0x00 },
      { 0x17, 0x00 },
      { 0x18, 0x08 }, //  Biquad -  BQ13 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x19, 0x00 },
      { 0x1a, 0x00 },
      { 0x1b, 0x00 },
      { 0x1c, 0x00 },
      { 0x1d, 0x00 },
      { 0x1e, 0x00 },
      { 0x1f, 0x00 },
      { 0x20, 0x00 },
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
      { 0x24, 0x00 },
      { 0x25, 0x00 },
      { 0x26, 0x00 },
      { 0x27, 0x00 },
      { 0x28, 0x00 },
      { 0x29, 0x00 },
      { 0x2a, 0x00 },
      { 0x2b, 0x00 },
      { 0x2c, 0x08 }, //  Biquad -  BQ14 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x2d, 0x00 },
      { 0x2e, 0x00 },
      { 0x2f, 0x00 },
      { 0x30, 0x00 },
      { 0x31, 0x00 },
      { 0x32, 0x00 },
      { 0x33, 0x00 },
      { 0x34, 0x00 },
      { 0x35, 0x00 },
      { 0x36, 0x00 },
      { 0x37, 0x00 },
      { 0x38, 0x00 },
      { 0x39, 0x00 },
      { 0x3a, 0x00 },
      { 0x3b, 0x00 },
      { 0x3c, 0x00 },
      { 0x3d, 0x00 },
      { 0x3e, 0x00 },
      { 0x3f, 0x00 },
      { 0x40, 0x08 }, //  Biquad -  BQ15 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x41, 0x00 },
      { 0x42, 0x00 },
      { 0x43, 0x00 },
      { 0x44, 0x00 },
      { 0x45, 0x00 },
      { 0x46, 0x00 },
      { 0x47, 0x00 },
      { 0x48, 0x00 },
      { 0x49, 0x00 },
      { 0x4a, 0x00 },
      { 0x4b, 0x00 },
      { 0x4c, 0x00 },
      { 0x4d, 0x00 },
      { 0x4e, 0x00 },
      { 0x4f, 0x00 },
      { 0x50, 0x00 },
      { 0x51, 0x00 },
      { 0x52, 0x00 },
      { 0x53, 0x00 },
      { 0x54, 0x08 }, //  Biquad -  BQ1 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x55, 0x00 },
      { 0x56, 0x00 },
      { 0x57, 0x00 },
      { 0x58, 0x00 },
      { 0x59, 0x00 },
      { 0x5a, 0x00 },
      { 0x5b, 0x00 },
      { 0x5c, 0x00 },
      { 0x5d, 0x00 },
      { 0x5e, 0x00 },
      { 0x5f, 0x00 },
      { 0x60, 0x00 },
      { 0x61, 0x00 },
      { 0x62, 0x00 },
      { 0x63, 0x00 },
      { 0x64, 0x00 },
      { 0x65, 0x00 },
      { 0x66, 0x00 },
      { 0x67, 0x00 },
      { 0x68, 0x08 }, //  Biquad -  BQ2 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x69, 0x00 },
      { 0x6a, 0x00 },
      { 0x6b, 0x00 },
      { 0x6c, 0x00 },
      { 0x6d, 0x00 },
      { 0x6e, 0x00 },
      { 0x6f, 0x00 },
      { 0x70, 0x00 },
      { 0x71, 0x00 },
      { 0x72, 0x00 },
      { 0x73, 0x00 },
      { 0x74, 0x00 },
      { 0x75, 0x00 },
      { 0x76, 0x00 },
      { 0x77, 0x00 },
      { 0x78, 0x00 },
      { 0x79, 0x00 },
      { 0x7a, 0x00 },
      { 0x7b, 0x00 },
      { 0x7c, 0x08 }, //  Biquad -  BQ3 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x7d, 0x00 },
      { 0x7e, 0x00 },
      { 0x7f, 0x00 },
      { 0x00, 0x27 },
      { 0x08, 0x00 },
      { 0x09, 0x00 },
      { 0x0a, 0x00 },
      { 0x0b, 0x00 },
      { 0x0c, 0x00 },
      { 0x0d, 0x00 },
      { 0x0e, 0x00 },
      { 0x0f, 0x00 },
      { 0x10, 0x00 },
      { 0x11, 0x00 },
      { 0x12, 0x00 },
      { 0x13, 0x00 },
      { 0x14, 0x00 },
      { 0x15, 0x00 },
      { 0x16, 0x00 },
      { 0x17, 0x00 },
      { 0x18, 0x08 }, //  Biquad -  BQ4 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x19, 0x00 },
      { 0x1a, 0x00 },
      { 0x1b, 0x00 },
      { 0x1c, 0x00 },
      { 0x1d, 0x00 },
      { 0x1e, 0x00 },
      { 0x1f, 0x00 },
      { 0x20, 0x00 },
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
      { 0x24, 0x00 },
      { 0x25, 0x00 },
      { 0x26, 0x00 },
      { 0x27, 0x00 },
      { 0x28, 0x00 },
      { 0x29, 0x00 },
      { 0x2a, 0x00 },
      { 0x2b, 0x00 },
      { 0x2c, 0x08 }, //  Biquad -  BQ5 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x2d, 0x00 },
      { 0x2e, 0x00 },
      { 0x2f, 0x00 },
      { 0x30, 0x00 },
      { 0x31, 0x00 },
      { 0x32, 0x00 },
      { 0x33, 0x00 },
      { 0x34, 0x00 },
      { 0x35, 0x00 },
      { 0x36, 0x00 },
      { 0x37, 0x00 },
      { 0x38, 0x00 },
      { 0x39, 0x00 },
      { 0x3a, 0x00 },
      { 0x3b, 0x00 },
      { 0x3c, 0x00 },
      { 0x3d, 0x00 },
      { 0x3e, 0x00 },
      { 0x3f, 0x00 },
      { 0x40, 0x08 }, //  Biquad -  BQ6 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x41, 0x00 },
      { 0x42, 0x00 },
      { 0x43, 0x00 },
      { 0x44, 0x00 },
      { 0x45, 0x00 },
      { 0x46, 0x00 },
      { 0x47, 0x00 },
      { 0x48, 0x00 },
      { 0x49, 0x00 },
      { 0x4a, 0x00 },
      { 0x4b, 0x00 },
      { 0x4c, 0x00 },
      { 0x4d, 0x00 },
      { 0x4e, 0x00 },
      { 0x4f, 0x00 },
      { 0x50, 0x00 },
      { 0x51, 0x00 },
      { 0x52, 0x00 },
      { 0x53, 0x00 },
      { 0x54, 0x08 }, //  Biquad -  BQ7 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x55, 0x00 },
      { 0x56, 0x00 },
      { 0x57, 0x00 },
      { 0x58, 0x00 },
      { 0x59, 0x00 },
      { 0x5a, 0x00 },
      { 0x5b, 0x00 },
      { 0x5c, 0x00 },
      { 0x5d, 0x00 },
      { 0x5e, 0x00 },
      { 0x5f, 0x00 },
      { 0x60, 0x00 },
      { 0x61, 0x00 },
      { 0x62, 0x00 },
      { 0x63, 0x00 },
      { 0x64, 0x00 },
      { 0x65, 0x00 },
      { 0x66, 0x00 },
      { 0x67, 0x00 },
      { 0x68, 0x08 }, //  Biquad -  BQ8 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x69, 0x00 },
      { 0x6a, 0x00 },
      { 0x6b, 0x00 },
      { 0x6c, 0x00 },
      { 0x6d, 0x00 },
      { 0x6e, 0x00 },
      { 0x6f, 0x00 },
      { 0x70, 0x00 },
      { 0x71, 0x00 },
      { 0x72, 0x00 },
      { 0x73, 0x00 },
      { 0x74, 0x00 },
      { 0x75, 0x00 },
      { 0x76, 0x00 },
      { 0x77, 0x00 },
      { 0x78, 0x00 },
      { 0x79, 0x00 },
      { 0x7a, 0x00 },
      { 0x7b, 0x00 },
      { 0x7c, 0x08 }, //  Biquad -  BQ9 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x7d, 0x00 },
      { 0x7e, 0x00 },
      { 0x7f, 0x00 },
      { 0x00, 0x28 },
      { 0x08, 0x00 },
      { 0x09, 0x00 },
      { 0x0a, 0x00 },
      { 0x0b, 0x00 },
      { 0x0c, 0x00 },
      { 0x0d, 0x00 },
      { 0x0e, 0x00 },
      { 0x0f, 0x00 },
      { 0x10, 0x00 },
      { 0x11, 0x00 },
      { 0x12, 0x00 },
      { 0x13, 0x00 },
      { 0x14, 0x00 },
      { 0x15, 0x00 },
      { 0x16, 0x00 },
      { 0x17, 0x00 },
      { 0x18, 0x08 }, //  Biquad -  BQ10 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x19, 0x00 },
      { 0x1a, 0x00 },
      { 0x1b, 0x00 },
      { 0x1c, 0x00 },
      { 0x1d, 0x00 },
      { 0x1e, 0x00 },
      { 0x1f, 0x00 },
      { 0x20, 0x00 },
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
      { 0x24, 0x00 },
      { 0x25, 0x00 },
      { 0x26, 0x00 },
      { 0x27, 0x00 },
      { 0x28, 0x00 },
      { 0x29, 0x00 },
      { 0x2a, 0x00 },
      { 0x2b, 0x00 },
      { 0x2c, 0x08 }, //  Biquad -  BQ11 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x2d, 0x00 },
      { 0x2e, 0x00 },
      { 0x2f, 0x00 },
      { 0x30, 0x00 },
      { 0x31, 0x00 },
      { 0x32, 0x00 },
      { 0x33, 0x00 },
      { 0x34, 0x00 },
      { 0x35, 0x00 },
      { 0x36, 0x00 },
      { 0x37, 0x00 },
      { 0x38, 0x00 },
      { 0x39, 0x00 },
      { 0x3a, 0x00 },
      { 0x3b, 0x00 },
      { 0x3c, 0x00 },
      { 0x3d, 0x00 },
      { 0x3e, 0x00 },
      { 0x3f, 0x00 },
      { 0x40, 0x08 }, //  Biquad -  BQ12 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x41, 0x00 },
      { 0x42, 0x00 },
      { 0x43, 0x00 },
      { 0x44, 0x00 },
      { 0x45, 0x00 },
      { 0x46, 0x00 },
      { 0x47, 0x00 },
      { 0x48, 0x00 },
      { 0x49, 0x00 },
      { 0x4a, 0x00 },
      { 0x4b, 0x00 },
      { 0x4c, 0x00 },
      { 0x4d, 0x00 },
      { 0x4e, 0x00 },
      { 0x4f, 0x00 },
      { 0x50, 0x00 },
      { 0x51, 0x00 },
      { 0x52, 0x00 },
      { 0x53, 0x00 },
      { 0x54, 0x08 }, //  Biquad -  BQ13 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x55, 0x00 },
      { 0x56, 0x00 },
      { 0x57, 0x00 },
      { 0x58, 0x00 },
      { 0x59, 0x00 },
      { 0x5a, 0x00 },
      { 0x5b, 0x00 },
      { 0x5c, 0x00 },
      { 0x5d, 0x00 },
      { 0x5e, 0x00 },
      { 0x5f, 0x00 },
      { 0x60, 0x00 },
      { 0x61, 0x00 },
      { 0x62, 0x00 },
      { 0x63, 0x00 },
      { 0x64, 0x00 },
      { 0x65, 0x00 },
      { 0x66, 0x00 },
      { 0x67, 0x00 },
      { 0x68, 0x08 }, //  Biquad -  BQ14 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x69, 0x00 },
      { 0x6a, 0x00 },
      { 0x6b, 0x00 },
      { 0x6c, 0x00 },
      { 0x6d, 0x00 },
      { 0x6e, 0x00 },
      { 0x6f, 0x00 },
      { 0x70, 0x00 },
      { 0x71, 0x00 },
      { 0x72, 0x00 },
      { 0x73, 0x00 },
      { 0x74, 0x00 },
      { 0x75, 0x00 },
      { 0x76, 0x00 },
      { 0x77, 0x00 },
      { 0x78, 0x00 },
      { 0x79, 0x00 },
      { 0x7a, 0x00 },
      { 0x7b, 0x00 },
      { 0x7c, 0x08 }, //  Biquad -  BQ15 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x7d, 0x00 },
      { 0x7e, 0x00 },
      { 0x7f, 0x00 },
      { 0x00, 0x29 },
      { 0x08, 0x00 },
      { 0x09, 0x00 },
      { 0x0a, 0x00 },
      { 0x0b, 0x00 },
      { 0x0c, 0x00 },
      { 0x0d, 0x00 },
      { 0x0e, 0x00 },
      { 0x0f, 0x00 },
      { 0x10, 0x00 },
      { 0x11, 0x00 },
      { 0x12, 0x00 },
      { 0x13, 0x00 },
      { 0x14, 0x00 },
      { 0x15, 0x00 },
      { 0x16, 0x00 },
      { 0x17, 0x00 },
      { 0x00, 0x2e },
      { 0x7c, 0x08 }, //  AMP EQ -  BQ1 Left   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x7d, 0x00 },
      { 0x7e, 0x00 },
      { 0x7f, 0x00 },
      { 0x00, 0x2f },
      { 0x08, 0x00 },
      { 0x09, 0x00 },
      { 0x0a, 0x00 },
      { 0x0b, 0x00 },
      { 0x0c, 0x00 },
      { 0x0d, 0x00 },
      { 0x0e, 0x00 },
      { 0x0f, 0x00 },
      { 0x10, 0x00 },
      { 0x11, 0x00 },
      { 0x12, 0x00 },
      { 0x13, 0x00 },
      { 0x14, 0x00 },
      { 0x15, 0x00 },
      { 0x16, 0x00 },
      { 0x17, 0x00 },
      { 0x1c, 0x08 }, //  AMP EQ -  BQ1 Right   -     Filter: All Pass  Frequency: 1000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x1d, 0x00 },
      { 0x1e, 0x00 },
      { 0x1f, 0x00 },
      { 0x20, 0x00 },
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
      { 0x24, 0x00 },
      { 0x25, 0x00 },
      { 0x26, 0x00 },
      { 0x27, 0x00 },
      { 0x28, 0x00 },
      { 0x29, 0x00 },
      { 0x2a, 0x00 },
      { 0x2b, 0x00 },
      { 0x2c, 0x00 },
      { 0x2d, 0x00 },
      { 0x2e, 0x00 },
      { 0x2f, 0x00 },
      { 0x00, 0x2a },
      { 0x48, 0x00 }, //  Low F2 BQ2   -     Filter: Low Pass-ButterWorth 2  Frequency: 200 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x49, 0x01 },
      { 0x4a, 0x64 },
      { 0x4b, 0x0a },
      { 0x4c, 0x00 },
      { 0x4d, 0x01 },
      { 0x4e, 0x64 },
      { 0x4f, 0x0a },
      { 0x50, 0x00 },
      { 0x51, 0x01 },
      { 0x52, 0x64 },
      { 0x53, 0x0a },
      { 0x54, 0x7e },
      { 0x55, 0xd0 },
      { 0x56, 0xb5 },
      { 0x57, 0x2d },
      { 0x58, 0x82 },
      { 0x59, 0x59 },
      { 0x5a, 0x05 },
      { 0x5b, 0x7b },
      { 0x00, 0x00 },
      { 0x7f, 0x8c },
      { 0x00, 0x2b },
      { 0x34, 0x00 }, //   DRC Settings of band1:   attack: 25 ms, release: 50 ms, energy: 25 ms, Region1 - Threshold: -124 dB, Offset: 0 dB, Ratio: 100   Region2 - Threshold: -60 dB, Offset: 0 dB, Ratio: 100   Region3 - Threshold: 0 dB, Offset: 0 dB, Ratio: 100
      { 0x35, 0x0d },
      { 0x36, 0xa6 },
      { 0x37, 0x86 },
      { 0x38, 0x00 },
      { 0x39, 0x0d },
      { 0x3a, 0xa6 },
      { 0x3b, 0x86 },
      { 0x3c, 0x00 },
      { 0x3d, 0x06 },
      { 0x3e, 0xd3 },
      { 0x3f, 0x72 },
      { 0x40, 0x00 },
      { 0x41, 0x00 },
      { 0x42, 0x00 },
      { 0x43, 0x00 },
      { 0x44, 0x00 },
      { 0x45, 0x00 },
      { 0x46, 0x00 },
      { 0x47, 0x00 },
      { 0x48, 0xff },
      { 0x49, 0x81 },
      { 0x4a, 0x47 },
      { 0x4b, 0xae },
      { 0x4c, 0xf9 },
      { 0x4d, 0x06 },
      { 0x4e, 0x21 },
      { 0x4f, 0xa9 },
      { 0x50, 0xfe },
      { 0x51, 0x01 },
      { 0x52, 0xc0 },
      { 0x53, 0x79 },
      { 0x54, 0x00 },
      { 0x55, 0x00 },
      { 0x56, 0x00 },
      { 0x57, 0x00 },
      { 0x58, 0x00 },
      { 0x59, 0x00 },
      { 0x5a, 0x00 },
      { 0x5b, 0x00 },
      { 0x00, 0x2d },
      { 0x58, 0x01 }, //   DRC Settings of band3:   attack: 1 ms, release: 10 ms, energy: 1 ms, Region1 - Threshold: -124 dB, Offset: 0 dB, Ratio: 100   Region2 - Threshold: -60 dB, Offset: 0 dB, Ratio: 100   Region3 - Threshold: 0 dB, Offset: 0 dB, Ratio: 100
      { 0x59, 0x53 },
      { 0x5a, 0x8f },
      { 0x5b, 0xcc },
      { 0x5c, 0x01 },
      { 0x5d, 0x53 },
      { 0x5e, 0x8f },
      { 0x5f, 0xcc },
      { 0x60, 0x00 },
      { 0x61, 0x22 },
      { 0x62, 0x1d },
      { 0x63, 0x95 },
      { 0x64, 0x00 },
      { 0x65, 0x00 },
      { 0x66, 0x00 },
      { 0x67, 0x00 },
      { 0x68, 0x00 },
      { 0x69, 0x00 },
      { 0x6a, 0x00 },
      { 0x6b, 0x00 },
      { 0x6c, 0xff },
      { 0x6d, 0x81 },
      { 0x6e, 0x47 },
      { 0x6f, 0xae },
      { 0x70, 0xf9 },
      { 0x71, 0x06 },
      { 0x72, 0x21 },
      { 0x73, 0xa9 },
      { 0x74, 0xfe },
      { 0x75, 0x01 },
      { 0x76, 0xc0 },
      { 0x77, 0x79 },
      { 0x78, 0x00 },
      { 0x79, 0x00 },
      { 0x7a, 0x00 },
      { 0x7b, 0x00 },
      { 0x7c, 0x00 },
      { 0x7d, 0x00 },
      { 0x7e, 0x00 },
      { 0x7f, 0x00 },
      { 0x00, 0x00 },
      { 0x7f, 0xaa },
      { 0x00, 0x2e },
      { 0x40, 0x01 }, //  Mid F3 BQ3   -     Filter: Low Pass-ButterWorth 2  Frequency: 4000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x41, 0xd7 },
      { 0x42, 0xe8 },
      { 0x43, 0x0a },
      { 0x44, 0x01 },
      { 0x45, 0xd7 },
      { 0x46, 0xe8 },
      { 0x47, 0x0a },
      { 0x48, 0x01 },
      { 0x49, 0xd7 },
      { 0x4a, 0xe8 },
      { 0x4b, 0x0a },
      { 0x4c, 0x68 },
      { 0x4d, 0x82 },
      { 0x4e, 0xf5 },
      { 0x4f, 0xbf },
      { 0x50, 0xa7 },
      { 0x51, 0x9a },
      { 0x52, 0x74 },
      { 0x53, 0x5a },
      { 0x00, 0x2b },
      { 0x20, 0x6a }, //  High F2 BQ2   -     Filter: High Pass-ButterWorth 2  Frequency: 4000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x21, 0x5a },
      { 0x22, 0xdd },
      { 0x23, 0xc9 },
      { 0x24, 0x95 },
      { 0x25, 0xa5 },
      { 0x26, 0x22 },
      { 0x27, 0x37 },
      { 0x28, 0x6a },
      { 0x29, 0x5a },
      { 0x2a, 0xdd },
      { 0x2b, 0xc9 },
      { 0x2c, 0x68 },
      { 0x2d, 0x82 },
      { 0x2e, 0xf5 },
      { 0x2f, 0xbf },
      { 0x30, 0xa7 },
      { 0x31, 0x9a },
      { 0x32, 0x74 },
      { 0x33, 0x5a },
      { 0x0c, 0x6a }, //  High F1 BQ1   -     Filter: High Pass-ButterWorth 2  Frequency: 4000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x0d, 0x5a },
      { 0x0e, 0xdd },
      { 0x0f, 0xc9 },
      { 0x10, 0x95 },
      { 0x11, 0xa5 },
      { 0x12, 0x22 },
      { 0x13, 0x37 },
      { 0x14, 0x6a },
      { 0x15, 0x5a },
      { 0x16, 0xdd },
      { 0x17, 0xc9 },
      { 0x18, 0x68 },
      { 0x19, 0x82 },
      { 0x1a, 0xf5 },
      { 0x1b, 0xbf },
      { 0x1c, 0xa7 },
      { 0x1d, 0x9a },
      { 0x1e, 0x74 },
      { 0x1f, 0x5a },
      { 0x00, 0x2a },
      { 0x34, 0x00 }, //  Low F1 BQ1   -     Filter: Low Pass-ButterWorth 2  Frequency: 200 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x35, 0x01 },
      { 0x36, 0x64 },
      { 0x37, 0x0a },
      { 0x38, 0x00 },
      { 0x39, 0x01 },
      { 0x3a, 0x64 },
      { 0x3b, 0x0a },
      { 0x3c, 0x00 },
      { 0x3d, 0x01 },
      { 0x3e, 0x64 },
      { 0x3f, 0x0a },
      { 0x40, 0x7e },
      { 0x41, 0xd0 },
      { 0x42, 0xb5 },
      { 0x43, 0x2d },
      { 0x44, 0x82 },
      { 0x45, 0x59 },
      { 0x46, 0x05 },
      { 0x47, 0x7b },
      { 0x00, 0x00 },
      { 0x7f, 0x8c },
      { 0x00, 0x2d },
      { 0x30, 0x01 }, //   DRC Settings of band2:   attack: 1 ms, release: 100 ms, energy: 1 ms, Region1 - Threshold: -124 dB, Offset: 0 dB, Ratio: 100   Region2 - Threshold: -60 dB, Offset: 0 dB, Ratio: 100   Region3 - Threshold: 0 dB, Offset: 0 dB, Ratio: 100
      { 0x31, 0x53 },
      { 0x32, 0x8f },
      { 0x33, 0xcc },
      { 0x34, 0x01 },
      { 0x35, 0x53 },
      { 0x36, 0x8f },
      { 0x37, 0xcc },
      { 0x38, 0x00 },
      { 0x39, 0x03 },
      { 0x3a, 0x69 },
      { 0x3b, 0xc5 },
      { 0x3c, 0x00 },
      { 0x3d, 0x00 },
      { 0x3e, 0x00 },
      { 0x3f, 0x00 },
      { 0x40, 0x00 },
      { 0x41, 0x00 },
      { 0x42, 0x00 },
      { 0x43, 0x00 },
      { 0x44, 0xff },
      { 0x45, 0x81 },
      { 0x46, 0x47 },
      { 0x47, 0xae },
      { 0x48, 0xf9 },
      { 0x49, 0x06 },
      { 0x4a, 0x21 },
      { 0x4b, 0xa9 },
      { 0x4c, 0xfe },
      { 0x4d, 0x01 },
      { 0x4e, 0xc0 },
      { 0x4f, 0x79 },
      { 0x50, 0x00 },
      { 0x51, 0x00 },
      { 0x52, 0x00 },
      { 0x53, 0x00 },
      { 0x54, 0x00 },
      { 0x55, 0x00 },
      { 0x56, 0x00 },
      { 0x57, 0x00 },
      { 0x00, 0x00 },
      { 0x7f, 0xaa },
      { 0x00, 0x2a },
      { 0x5c, 0x7e }, //  Mid F1 BQ1   -     Filter: High Pass-ButterWorth 2  Frequency: 200 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x5d, 0xd2 },
      { 0x5e, 0x19 },
      { 0x5f, 0x37 },
      { 0x60, 0x81 },
      { 0x61, 0x2d },
      { 0x62, 0xe6 },
      { 0x63, 0xc9 },
      { 0x64, 0x7e },
      { 0x65, 0xd2 },
      { 0x66, 0x19 },
      { 0x67, 0x37 },
      { 0x68, 0x7e },
      { 0x69, 0xd0 },
      { 0x6a, 0xb5 },
      { 0x6b, 0x2d },
      { 0x6c, 0x82 },
      { 0x6d, 0x59 },
      { 0x6e, 0x05 },
      { 0x6f, 0x7b },
      { 0x70, 0x7e }, //  Mid F2 BQ2   -     Filter: High Pass-ButterWorth 2  Frequency: 200 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x71, 0xd2 },
      { 0x72, 0x19 },
      { 0x73, 0x37 },
      { 0x74, 0x81 },
      { 0x75, 0x2d },
      { 0x76, 0xe6 },
      { 0x77, 0xc9 },
      { 0x78, 0x7e },
      { 0x79, 0xd2 },
      { 0x7a, 0x19 },
      { 0x7b, 0x37 },
      { 0x7c, 0x7e },
      { 0x7d, 0xd0 },
      { 0x7e, 0xb5 },
      { 0x7f, 0x2d },
      { 0x00, 0x2b },
      { 0x08, 0x82 },
      { 0x09, 0x59 },
      { 0x0a, 0x05 },
      { 0x0b, 0x7b },
      { 0x00, 0x2e },
      { 0x54, 0x01 }, //  Mid F4 BQ4   -     Filter: Low Pass-ButterWorth 2  Frequency: 4000 Hz  QVal: 0.71  Bandwidth: 1000 Hz
      { 0x55, 0xd7 },
      { 0x56, 0xe8 },
      { 0x57, 0x0a },
      { 0x58, 0x01 },
      { 0x59, 0xd7 },
      { 0x5a, 0xe8 },
      { 0x5b, 0x0a },
      { 0x5c, 0x01 },
      { 0x5d, 0xd7 },
      { 0x5e, 0xe8 },
      { 0x5f, 0x0a },
      { 0x60, 0x68 },
      { 0x61, 0x82 },
      { 0x62, 0xf5 },
      { 0x63, 0xbf },
      { 0x64, 0xa7 },
      { 0x65, 0x9a },
      { 0x66, 0x74 },
      { 0x67, 0x5a },
      { 0x00, 0x00 },
      { 0x7f, 0x8c },
      { 0x00, 0x2e },
      { 0x10, 0x00 }, //  DRC  Band3 Mixer Gain: 1
      { 0x11, 0x80 },
      { 0x12, 0x00 },
      { 0x13, 0x00 },
      { 0x0c, 0x00 }, //  DRC  Band2 Mixer Gain: 1
      { 0x0d, 0x80 },
      { 0x0e, 0x00 },
      { 0x0f, 0x00 },
      { 0x08, 0x00 }, //  DRC  Band1 Mixer Gain: 1
      { 0x09, 0x80 },
      { 0x0a, 0x00 },
      { 0x0b, 0x00 },
      { 0x18, 0x00 }, //   THD Clipper: 0 dB
      { 0x19, 0x80 },
      { 0x1a, 0x00 },
      { 0x1b, 0x00 },
      { 0x1c, 0x40 }, //   THD Finevolume Left: 0 dB
      { 0x1d, 0x00 },
      { 0x1e, 0x00 },
      { 0x1f, 0x00 },
      { 0x20, 0x40 }, //   THD Finevolume Right: 0 dB
      { 0x21, 0x00 },
      { 0x22, 0x00 },
      { 0x23, 0x00 },
  //Register Tuning
      { 0x00, 0x00 },
      { 0x7f, 0x00 },
      { 0x02, 0x00 },
      { 0x30, 0x00 },
      { 0x4c, 0x30 },
      { 0x53, 0x00 },
      { 0x54, 0x1F }, //   originally 0x00 @mrtoy-me changed to analog gain -15db (31 decimal) to suit 5 volt supply voltage
      { 0x03, 0x03 },
      { 0x78, 0x80 },
  };

} // namespace tas5805m
} // namespace esphome