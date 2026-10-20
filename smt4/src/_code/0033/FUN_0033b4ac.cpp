/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b4ac` (_code @ 0x33b4ac, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0033b4ac(int param_1,int param_2)

{
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  short temp_v7;
  int temp_v8;
  short temp_v9;
  int temp_v10;
  
  if (param_2 >= 11) {
    return;
  }
  do {
    temp_v3 = param_1 + param_2 * 2;
    temp_v2 = param_2;
    if (-1 < *(short *)(temp_v3 + 0x2f06)) {
      while (temp_v2 = temp_v2 + 1, temp_v2 < 0xc) {
        temp_v4 = param_1 + temp_v2 * 2;
        temp_v0 = *(short *)(temp_v4 + 0x2f06);
        temp_v5 = (int)temp_v0;
        if (-1 < temp_v5) {
          temp_v1 = *(short *)(temp_v3 + 0x2f06);
          temp_v10 = *(int *)(param_1 + 0x1fc0);
          temp_v8 = temp_v1 * 0x288 + 0xcc + temp_v10;
          temp_v6 = temp_v5 * 0x288 + 0xcc + temp_v10;
          temp_v7 = *(short *)(temp_v8 + 0xf6) + *(short *)(temp_v8 + 0x188);
          temp_v9 = *(short *)(temp_v6 + 0xf6) + *(short *)(temp_v6 + 0x188);
          if ((temp_v7 < temp_v9) ||
             ((temp_v7 == temp_v9 &&
              (*(short *)(temp_v10 + temp_v5 * 0x288 + 8) < *(short *)(temp_v10 + temp_v1 * 0x288 + 8))))) {
            *(short *)(temp_v3 + 0x2f06) = temp_v0;
            *(short *)(temp_v4 + 0x2f06) = temp_v1;
          }
        }
      }
    }
    param_2 = param_2 + 1;
  } while (param_2 < 0xb);
  return;
}

} /* extern "C" */
