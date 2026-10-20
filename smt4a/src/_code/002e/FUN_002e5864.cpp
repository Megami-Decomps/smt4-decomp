/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5864` (_code @ 0x2e5864, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f3b8; /* 0x57f3b8 */


void FUN_002e5864(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f3b8;
  if (DAT_0057f3b8 != 0) {
    *(unsigned int *)(DAT_0057f3b8 + 0x1c) = param_1;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 8) = 2;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
