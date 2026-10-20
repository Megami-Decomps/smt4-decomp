/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187180` (_code @ 0x187180, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a6f60(unsigned int);

/* Supplied declaration required: FUN_001a6f60. */


void FUN_00187180(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 < 0x50) {
    temp_v0 = *(unsigned int *)(param_1 * 0x10 + 0x5e2218);
  }
  else {
    temp_v0 = 0;
  }
  FUN_001a6f60(temp_v0);
  return;
}

} /* extern "C" */
