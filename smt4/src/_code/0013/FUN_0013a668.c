/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a668` (_code @ 0x13a668, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0015a138. */


void FUN_0013a668(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_0015a138(*(unsigned int *)(*(int *)(param_1 + temp_v0 * 4 + 0x15dc) + 0x68));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x18);
  return;
}
