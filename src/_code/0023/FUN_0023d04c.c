/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d04c` (_code @ 0x23d04c, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b47cc(unsigned int);
extern int FUN_002b66ec(void);


unsigned int FUN_0023d04c(unsigned int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  if (param_5 == 0) {
    temp_v1 = FUN_002b66ec();
    param_5 = (unsigned int)*(unsigned short *)(temp_v1 + 8);
  }
  temp_v2 = FUN_002b47cc(param_5);
  temp_v1 = 0x44d35c;
  temp_v6 = 0xf;
  temp_v8 = (param_4 + param_3 * 1000) & 0xffff;
  if (param_2 == 2) {
    temp_v1 = 0x44d410;
    temp_v6 = 0x3e;
  }
  temp_v4 = 0;
  temp_v5 = 0;
  if (temp_v5 < temp_v6) {
    do {
      if (*(unsigned short *)(temp_v1 + temp_v5 * 0xc) == temp_v8) {
        temp_v4 = temp_v1 + temp_v5 * 0xc;
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v6);
  }
  temp_v0 = *(short *)(temp_v2 + 0x72) + *(short *)(temp_v2 + 0x70) * 1000;
  if (temp_v4 != 0) {
    temp_v7 = *(unsigned int *)(temp_v4 + 8);
    if ((int)temp_v7 < 1) {
      temp_v3 = 0;
    }
    else {
      temp_v3 = temp_v7 & 1;
      if (temp_v3 != 0) {
        temp_v8 = *(unsigned int *)(temp_v4 + 4);
      }
      temp_v1 = 0;
      if (temp_v3 != 0) {
        do {
          if (*(short *)(temp_v8 + temp_v1 * 2) == temp_v0) {
            return 1;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (int)temp_v3);
      }
    }
    if ((int)temp_v3 < (int)temp_v7) {
      do {
        if ((*(short *)(*(int *)(temp_v4 + 4) + temp_v3 * 2) == temp_v0) ||
           (*(short *)(*(int *)(temp_v4 + 4) + temp_v3 * 2 + 2) == temp_v0)) {
          return 1;
        }
        temp_v3 = temp_v3 + 2;
      } while ((int)temp_v3 < (int)temp_v7);
    }
  }
  return 0;
}
