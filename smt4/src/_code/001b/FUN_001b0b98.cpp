/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0b98` (_code @ 0x1b0b98, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be304(...);

/* Supplied declaration required: FUN_002be304. */


unsigned int FUN_001b0b98(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_2 < param_1) {
    FUN_002be304(0x72e027ff);
    return 0xffffffff;
  }
  if (param_2 <= param_1) {
    if (param_3 == 0) {
      temp_v0 = 0xff;
    }
    else {
      temp_v0 = 0xffffffff;
    }
    FUN_002be304(temp_v0);
    return 0;
  }
  FUN_002be304(0xdc0f14ff);
  return 1;
}

} /* extern "C" */
