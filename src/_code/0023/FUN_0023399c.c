/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023399c` (_code @ 0x23399c, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b9008. */


void FUN_0023399c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)(param_1 + 0x84) = 0;
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0xa4)) {
    do {
      FUN_002b9008();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0xa4));
  }
  *(unsigned short *)(param_1 + 0xa4) = 0;
  return;
}
