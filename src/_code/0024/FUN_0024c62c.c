/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024c62c` (_code @ 0x24c62c, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00237a94. */


void FUN_0024c62c(void)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  float in_s0;
  float in_s1;
  
  if (in_s1 != 0.0f || in_s0 != 0.0f) {
    if (in_s1 >= 0.0f) {
      if (in_s0 >= 0.0f) {
        if (in_s0 <= in_s1) {
          FUN_00237a94();
          return;
        }
      }
      else if (in_s1 < -in_s0) {
        FUN_00237a94();
        return;
      }
    }
    else if (in_s0 >= 0.0f) {
      if (-in_s1 < in_s0) {
        FUN_00237a94();
        return;
      }
    }
    else if (-in_s0 <= -in_s1) {
      FUN_00237a94();
      return;
    }
    FUN_00237a94();
  }
  return;
}
