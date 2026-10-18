/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030aa98` (_code @ 0x30aa98, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


void FUN_0030aa98(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0044e190;
  if (DAT_0044e190 != 0) {
    temp_v1 = *(unsigned int *)(DAT_0044e190 + 0x400);
    *(unsigned int *)(DAT_0044e190 + 0x400) = 6;
    *(unsigned int *)(temp_v0 + 0x404) = temp_v1;
  }
  return;
}
