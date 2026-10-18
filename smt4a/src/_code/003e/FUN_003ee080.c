/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ee080` (_code @ 0x3ee080, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0040a244. */


void FUN_003ee080(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = 0;
  do {
    piVar2 = (int *)(param_1 + temp_v0 * 0x10 + 0x4d78);
    if (*piVar2 != 0) {
      FUN_0040a244();
      *piVar2 = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xc);
  return;
}
