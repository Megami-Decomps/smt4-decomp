/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002565b8` (_code @ 0x2565b8, 0x194 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);
extern int FUN_002a8a1c(void);
extern int FUN_002b66ec(void);


void FUN_002565b8(unsigned int param_1,unsigned int param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  short temp_v8;
  
  temp_v0 = 1 << (param_2 & 0xff);
  if (((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
       (temp_v3 = FUN_002b66ec(), (*(unsigned short *)(temp_v3 + 0x72) & 2) == 0)) &&
      (temp_v3 = FUN_002b66ec(), (*(unsigned short *)(temp_v3 + 0x72) & 0x400) == 0)) &&
     (temp_v3 = FUN_002b66ec(), (*(unsigned short *)(temp_v3 + 0x72) & temp_v0) != 0)) {
    temp_v3 = FUN_002b66ec();
    temp_v2 = *(short *)(temp_v3 + 0x1c);
    temp_v4 = FUN_002b66ec();
    temp_v3 = (temp_v2 * param_3) / 100;
    if (temp_v3 < 1) {
      temp_v3 = 1;
    }
    temp_v3 = *(short *)(temp_v4 + 0x2a) - temp_v3;
    if (temp_v3 < 1) {
      temp_v3 = 1;
    }
    temp_v2 = (short)temp_v3;
    temp_v3 = FUN_002b66ec();
    temp_v8 = *(short *)(temp_v3 + 0x1c);
    if ((temp_v2 <= temp_v8) && (temp_v8 = temp_v2, temp_v2 < 1)) {
      temp_v8 = 1;
    }
    *(short *)(temp_v3 + 0x2a) = temp_v8;
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return;
    }
    temp_v4 = 3;
    temp_v3 = FUN_002a8a08();
    temp_v3 = temp_v3 + 0x9108;
  }
  else {
    temp_v4 = FUN_002a8a1c();
    temp_v3 = FUN_002a8a08();
    temp_v3 = temp_v3 + 0x90f0;
  }
  temp_v7 = 0;
  if (temp_v7 < temp_v4) {
    do {
      if (-1 < *(char *)(temp_v3 + temp_v7)) {
        temp_v5 = FUN_002a89e4();
        temp_v1 = *(unsigned short *)(temp_v5 + 0x44);
        if ((((temp_v1 & 2) == 0 && (temp_v1 & 0x400) == 0) && (temp_v1 & 4) == 0) &&
           ((temp_v1 & temp_v0) != 0)) {
          temp_v2 = *(short *)(temp_v5 + 0xe);
          temp_v6 = (temp_v2 * param_3) / 100;
          if (temp_v6 < 1) {
            temp_v6 = 1;
          }
          temp_v6 = *(short *)(temp_v5 + 0x2a) - temp_v6;
          if (temp_v6 < 1) {
            temp_v6 = 1;
          }
          temp_v8 = (short)temp_v6;
          if (temp_v5 != 0) {
            if (((int)temp_v8 <= (int)temp_v2) && (temp_v2 = temp_v8, temp_v8 < 1)) {
              temp_v2 = 1;
            }
            *(short *)(temp_v5 + 0x2a) = temp_v2;
          }
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v4);
  }
  return;
}
