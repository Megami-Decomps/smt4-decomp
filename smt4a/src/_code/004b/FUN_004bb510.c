/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb510` (_code @ 0x4bb510, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned short);
extern int FUN_001ba3d4(unsigned int);
extern int FUN_003df390(unsigned short);
extern int FUN_00418584(unsigned short);
extern unsigned int *FUN_004bb80c(void);


unsigned int FUN_004bb510(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  puVar1 = (unsigned int *)FUN_004bb80c();
  temp_v0 = FUN_00418584((short)puVar1[3]);
  if ((temp_v0 == 0) && (temp_v0 = FUN_001ada74((short)puVar1[3]), temp_v0 == 0)) {
    if ((short)puVar1[3] == 0x8d) {
      temp_v0 = FUN_001ba3d4(0x3a);
      if (temp_v0 >= 10) {
        if (param_1 != 0x357) {
          temp_v0 = param_1 - 0x300;
        }
        if (param_1 == 0x357 || temp_v0 == 0x5d) {
          return 0;
        }
        temp_v0 = 0;
        if (param_1 != 0x369) {
          temp_v0 = param_1 - 0x300;
        }
        if (param_1 == 0x369 || temp_v0 == 0x6a) {
          return 0;
        }
        if (param_1 == 0x36f || param_1 == 0x370) {
          return 0;
        }
        temp_v0 = 0;
        if (param_1 != 0x375) {
          temp_v0 = param_1 - 0x300;
        }
        if (param_1 == 0x375 || temp_v0 == 0x77) {
          return 0;
        }
        if (param_1 == 0x37b || param_1 == 0x37c) {
          return 0;
        }
        temp_v2 = param_1 == 0x382;
        temp_v0 = 0;
        if (!temp_v2) {
          temp_v0 = param_1 - 0x387;
          temp_v2 = temp_v0 == 0;
        }
        if (temp_v2) {
          return 0;
        }
        if (param_1 != 0x388) {
          temp_v0 = param_1 - 0x300;
        }
        if (param_1 == 0x388 || temp_v0 == 0xcf) {
          return 0;
        }
        temp_v2 = param_1 == 0x3d1 || param_1 == 0x3e3;
        if (param_1 != 0x3d1 && param_1 != 0x3e3) {
          temp_v2 = param_1 == 0x3e5;
        }
        if (temp_v2) {
          return 0;
        }
      }
      temp_v0 = FUN_001ba3d4(0x3c);
      if (temp_v0 >= 10) {
        if (param_1 != 0x357) {
          temp_v0 = param_1 - 0x300;
        }
        if (param_1 == 0x357 || temp_v0 == 0xb9) {
          return 0;
        }
        temp_v0 = 0;
        if (param_1 != 0x3bb) {
          temp_v0 = param_1 - 0x300;
        }
        if (param_1 == 0x3bb || temp_v0 == 0xbf) {
          return 0;
        }
        temp_v0 = 0;
        if (param_1 != 0x3c9) {
          temp_v0 = param_1 - 0x300;
        }
        if (param_1 == 0x3c9 || temp_v0 == 0xca) {
          return 0;
        }
        temp_v2 = param_1 == 0x3d5;
        temp_v0 = 0;
        if (!temp_v2) {
          temp_v0 = param_1 - 0x3e2;
          temp_v2 = temp_v0 == 0;
        }
        if (temp_v2) {
          return 0;
        }
        if (param_1 != 0x3e4 && param_1 != 0x3ec) {
          temp_v0 = param_1 - 0x300;
        }
        if ((param_1 == 0x3e4 || param_1 == 0x3ec) || temp_v0 == 0xf1) {
          return 0;
        }
      }
    }
    temp_v0 = FUN_003df390((short)puVar1[3]);
    if (temp_v0 != 0) {
      temp_v1 = (unsigned int)(unsigned short)puVar1[3];
      FUN_001ad9b4();
      if (temp_v1 != 0) {
        temp_v0 = FUN_001801a4();
        if ((*(short *)(temp_v1 + 0x120) != 0) &&
           ((int)*(short *)(temp_v1 + 0x120) <= (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x62))) {
          return (unsigned int)*(unsigned short *)((int)puVar1 + 0xe);
        }
      }
    }
  }
  if ((*puVar1 & 0x7e0) == 0) {
    return 0;
  }
  return (*puVar1 & 0x7ff) >> 5;
}
