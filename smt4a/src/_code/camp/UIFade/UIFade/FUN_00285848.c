/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285848` (_code @ 0x285848, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f288; /* 0x57f288 */


void FUN_00285848(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f288;
  if (DAT_0057f288 != 0) {
    *(unsigned int *)(DAT_0057f288 + 4) = 1;
    *(unsigned int *)(temp_v0 + 0xc) = 0x3f000000;
    *(unsigned int *)(temp_v0 + 8) = 0;
  }
  return;
}
