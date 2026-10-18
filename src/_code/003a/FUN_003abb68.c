/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003abb68` (_code @ 0x3abb68, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002f5e68. */


void FUN_003abb68(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0x5a8)) {
    do {
      FUN_002f5e68(*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x5ac),0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x5a8));
  }
  *(unsigned char *)(param_1 + 0x10) = 1;
  *(unsigned int *)(param_1 + 0x14) = 0xc;
  *(unsigned int *)(param_1 + 0x18) = 0;
  return;
}
