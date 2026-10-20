/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040b11c` (_code @ 0x40b11c, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00192608. */


unsigned int FUN_0040b11c(unsigned int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  if (param_5 == 0) {
    temp_v3 = FUN_001801a4();
    if (param_2 == 1) {
      temp_v0 = *(unsigned short *)(temp_v3 + 6);
    }
    else {
      temp_v0 = *(unsigned short *)(temp_v3 + 8);
    }
    param_5 = (unsigned int)temp_v0;
  }
  FUN_00192608();
  temp_v5 = 0x588358;
  temp_v7 = 1;
  temp_v3 = 0;
  if (param_2 == 2) {
    temp_v5 = 0x588364;
    temp_v7 = 0x3b;
  }
  else if (param_2 == 0) {
    temp_v5 = 0x5882a4;
    temp_v7 = 0xf;
  }
  temp_v6 = (param_4 + param_3 * 1000) & 0xffff;
  temp_v4 = 0;
  if (temp_v4 < temp_v7) {
    do {
      if (*(unsigned short *)(temp_v5 + temp_v4 * 0xc) == temp_v6) {
        temp_v3 = temp_v5 + temp_v4 * 0xc;
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v7);
  }
  temp_v1 = *(short *)(param_5 + 0x42) + *(short *)(param_5 + 0x40) * 1000;
  if (temp_v3 != 0) {
    temp_v8 = *(unsigned int *)(temp_v3 + 8);
    if ((int)temp_v8 < 1) {
      temp_v2 = 0;
    }
    else {
      temp_v2 = temp_v8 & 1;
      if (temp_v2 != 0) {
        temp_v6 = *(unsigned int *)(temp_v3 + 4);
      }
      temp_v5 = 0;
      if (temp_v2 != 0) {
        do {
          if (*(short *)(temp_v6 + temp_v5 * 2) == temp_v1) {
            return 1;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < (int)temp_v2);
      }
    }
    if ((int)temp_v2 < (int)temp_v8) {
      do {
        if ((*(short *)(*(int *)(temp_v3 + 4) + temp_v2 * 2) == temp_v1) ||
           (*(short *)(*(int *)(temp_v3 + 4) + temp_v2 * 2 + 2) == temp_v1)) {
          return 1;
        }
        temp_v2 = temp_v2 + 2;
      } while ((int)temp_v2 < (int)temp_v8);
    }
  }
  return 0;
}

} /* extern "C" */
