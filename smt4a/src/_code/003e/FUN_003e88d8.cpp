/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e88d8` (_code @ 0x3e88d8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003e88d8(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 4;
    temp_v2 = (int)*(short *)(temp_v0 + 0x455c);
    if (temp_v2 == param_2) {
      if (*(short *)(temp_v0 + 0x455e) != -1) {
        *(short *)(temp_v0 + 0x455e) = *(short *)(temp_v0 + 0x455e) + 1;
      }
      return;
    }
    if (temp_v2 == 0) {
      *(short *)(temp_v0 + 0x455c) = (short)param_2;
      if (*(short *)(temp_v0 + 0x455e) != -1) {
        *(short *)(temp_v0 + 0x455e) = *(short *)(temp_v0 + 0x455e) + 1;
      }
      return;
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x10) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
