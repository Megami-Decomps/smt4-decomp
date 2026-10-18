/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb4b8` (_code @ 0x2fb4b8, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001846d0. */


void FUN_002fb4b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned int *)(param_1 + 0x243c) = 4;
  *(unsigned int *)(param_1 + 0x2438) = 0;
  *(unsigned short *)(param_1 + 0x244a) = 0;
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0x2448)) {
    do {
      temp_v1 = param_1 + temp_v0 * 0x8c;
      FUN_001846d0(temp_v1 + 0x20,8);
      FUN_001846d0(temp_v1 + 0x598,8);
      if (temp_v0 < 4) {
        if (temp_v0 == 0) {
          FUN_001846d0(param_1 + 0x217c,0xd);
        }
        FUN_001846d0(temp_v1 + 0x2208,0xd);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x2448));
  }
  return;
}
