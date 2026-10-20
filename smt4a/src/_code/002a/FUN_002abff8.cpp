/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002abff8` (_code @ 0x2abff8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */


void FUN_002abff8(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f290;
  if (DAT_0057f290 != 0) {
    *(unsigned char *)(DAT_0057f290 + 0x420) = param_1;
    *(unsigned int *)(temp_v0 + 0x400) = 0;
    *(unsigned int *)(temp_v0 + 0x3fc) = 0;
  }
  return;
}

} /* extern "C" */
