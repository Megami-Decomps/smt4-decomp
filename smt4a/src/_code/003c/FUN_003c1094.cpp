/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1094` (_code @ 0x3c1094, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f268; /* 0x57f268 */


void FUN_003c1094(int param_1)

{
  unsigned int temp_v0;
  
  if (DAT_0057f268 != 0) {
    if (param_1 == 0) {
      temp_v0 = 0x18;
    }
    else {
      temp_v0 = 8;
    }
    *(unsigned int *)(DAT_0057f268 + 0x20) = temp_v0;
  }
  return;
}

} /* extern "C" */
