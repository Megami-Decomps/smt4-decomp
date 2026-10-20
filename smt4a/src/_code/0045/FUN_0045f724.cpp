/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045f724` (_code @ 0x45f724, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0045f724(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  if (in_s0 < 0.0f) {
    in_s0 = 0.0f;
  }
  *(float *)(param_1 + 200) = in_s0;
  return;
}

} /* extern "C" */
