/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b640c` (_code @ 0x1b640c, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bde20(void);

/* Supplied declaration required: FUN_001bde20. */


void FUN_001b640c(void)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  float in_s0;
  float in_s1;
  
  if (in_s1 != 0.0f || in_s0 != 0.0f) {
    if (in_s1 >= 0.0f) {
      if (in_s0 >= 0.0f) {
        if (in_s0 <= in_s1) {
          FUN_001bde20();
          return;
        }
      }
      else if (in_s1 < -in_s0) {
        FUN_001bde20();
        return;
      }
    }
    else if (in_s0 >= 0.0f) {
      if (-in_s1 < in_s0) {
        FUN_001bde20();
        return;
      }
    }
    else if (-in_s0 <= -in_s1) {
      FUN_001bde20();
      return;
    }
    FUN_001bde20();
  }
  return;
}

} /* extern "C" */
