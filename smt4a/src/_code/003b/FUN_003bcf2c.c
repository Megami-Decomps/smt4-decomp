/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcf2c` (_code @ 0x3bcf2c, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */
extern int FUN_00291e14(void);


void FUN_003bcf2c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    temp_v0 = FUN_00291e14();
    if (temp_v0 != 0) {
      FUN_00184310();
    }
    return;
  }
  return;
}
