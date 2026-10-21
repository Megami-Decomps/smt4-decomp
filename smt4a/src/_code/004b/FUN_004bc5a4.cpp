/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bc5a4` (_code @ 0x4bc5a4, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetPlayerData(void);
int FUN_001ad9b4(void);

/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned short);
extern int FUN_001ba3d4(unsigned int);
extern int FUN_003df390(unsigned short);
extern int partyEntryFlagsBit3(unsigned short);
extern int FUN_004bb80c(int index);


void FUN_004bc5a4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_004bb80c(param_1);
  temp_v1 = partyEntryFlagsBit3(*(unsigned short *)(temp_v0 + 0xc));
  if (temp_v1 != 0) {
    return;
  }
  temp_v1 = FUN_001ada74(*(unsigned short *)(temp_v0 + 0xc));
  if (temp_v1 != 0) {
    return;
  }
  if (*(short *)(temp_v0 + 0xc) == 0x8d) {
    temp_v1 = FUN_001ba3d4(0x3a);
    if (temp_v1 >= 10) {
      if (param_1 != 0x357) {
        temp_v1 = param_1 - 0x300;
      }
      if (param_1 == 0x357 || temp_v1 == 0x5d) {
        return;
      }
      temp_v1 = 0;
      if (param_1 != 0x369) {
        temp_v1 = param_1 - 0x300;
      }
      if (param_1 == 0x369 || temp_v1 == 0x6a) {
        return;
      }
      if (param_1 == 0x36f || param_1 == 0x370) {
        return;
      }
      temp_v1 = 0;
      if (param_1 != 0x375) {
        temp_v1 = param_1 - 0x300;
      }
      if (param_1 == 0x375 || temp_v1 == 0x77) {
        return;
      }
      if (param_1 == 0x37b || param_1 == 0x37c) {
        return;
      }
      temp_v3 = param_1 == 0x382;
      temp_v1 = 0;
      if (!temp_v3) {
        temp_v1 = param_1 - 0x387;
        temp_v3 = temp_v1 == 0;
      }
      if (temp_v3) {
        return;
      }
      if (param_1 != 0x388) {
        temp_v1 = param_1 - 0x300;
      }
      if (param_1 == 0x388 || temp_v1 == 0xcf) {
        return;
      }
      temp_v3 = param_1 == 0x3d1 || param_1 == 0x3e3;
      if (param_1 != 0x3d1 && param_1 != 0x3e3) {
        temp_v3 = param_1 == 0x3e5;
      }
      if (temp_v3) {
        return;
      }
    }
    temp_v1 = FUN_001ba3d4(0x3c);
    if (temp_v1 >= 10) {
      if (param_1 != 0x357) {
        temp_v1 = param_1 - 0x300;
      }
      if (param_1 == 0x357 || temp_v1 == 0xb9) {
        return;
      }
      temp_v1 = 0;
      if (param_1 != 0x3bb) {
        temp_v1 = param_1 - 0x300;
      }
      if (param_1 == 0x3bb || temp_v1 == 0xbf) {
        return;
      }
      temp_v1 = 0;
      if (param_1 != 0x3c9) {
        temp_v1 = param_1 - 0x300;
      }
      if (param_1 == 0x3c9 || temp_v1 == 0xca) {
        return;
      }
      temp_v3 = param_1 == 0x3d5;
      temp_v1 = 0;
      if (!temp_v3) {
        temp_v1 = param_1 - 0x3e2;
        temp_v3 = temp_v1 == 0;
      }
      if (temp_v3) {
        return;
      }
      if (param_1 != 0x3e4 && param_1 != 0x3ec) {
        temp_v1 = param_1 - 0x300;
      }
      if ((param_1 == 0x3e4 || param_1 == 0x3ec) || temp_v1 == 0xf1) {
        return;
      }
    }
  }
  temp_v1 = FUN_003df390(*(unsigned short *)(temp_v0 + 0xc));
  if (temp_v1 != 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0xc);
    FUN_001ad9b4();
    if (temp_v2 != 0) {
      gameGetPlayerData();
    }
  }
  return;
}

} /* extern "C" */
