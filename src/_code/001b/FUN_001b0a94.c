/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0a94` (_code @ 0x1b0a94, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002be4dc. */


unsigned int FUN_001b0a94(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_2 < param_1) {
    FUN_002be4dc(0x72e027ff);
    return 0xffffffff;
  }
  if (param_2 <= param_1) {
    if (param_3 == 0) {
      temp_v0 = 0xff;
    }
    else {
      temp_v0 = 0xffffffff;
    }
    FUN_002be4dc(temp_v0);
    return 0;
  }
  FUN_002be4dc(0xdc0f14ff);
  return 1;
}
