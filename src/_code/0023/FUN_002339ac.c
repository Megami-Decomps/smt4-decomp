/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002339ac` (_code @ 0x2339ac, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b9008. */


void FUN_002339ac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0x30)) {
    do {
      FUN_002b9008();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x30));
  }
  *(unsigned short *)(param_1 + 0x30) = 0;
  return;
}
