/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151500` (_code @ 0x151500, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014d6f0. */
/* Supplied declaration required: FUN_002a30dc. */


void FUN_00151500(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 5 native warning(s); review required */
  float in_s0;
  float in_s1;
  float in_s2;
  
  if (in_s1 - in_s0 != 0.0f) {
    if (in_s2 - in_s0 < 0.0f) {
      FUN_002a30dc();
    }
    FUN_0014d6f0();
  }
  return;
}
