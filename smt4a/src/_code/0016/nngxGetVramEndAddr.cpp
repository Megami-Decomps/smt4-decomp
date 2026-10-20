/* NON_MATCHING: romwright 0.5.0 decompilation of `nngxGetVramEndAddr` (_code @ 0x1615a8, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b620(...);

/* Supplied declaration required: FUN_0018b620. */


unsigned int nngxGetVramEndAddr(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 == 0x20000) {
    FUN_0018b620();
    return 0x1f2fffff;
  }
  if (param_1 != 0x30000) {
    temp_v0 = 0;
  }
  else {
    FUN_0018b620(0x30000);
    temp_v0 = 0x1f5fffff;
  }
  return temp_v0;
}

} /* extern "C" */
