/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d701c` (_code @ 0x3d701c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002546ec. */


void FUN_003d701c(int param_1)

{
/* irregular: irregular input(s): in_s2; 2 native warning(s); review required */
  float in_s2;
  
  FUN_002546ec(param_1 + 0x44,(int)(short)(int)in_s2,0);
  *(unsigned int *)(param_1 + 0x634) = *(unsigned int *)(param_1 + 0x634) | 0x400000;
  return;
}
