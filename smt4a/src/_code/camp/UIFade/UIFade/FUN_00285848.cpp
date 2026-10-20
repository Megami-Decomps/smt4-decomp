/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285848` (_code @ 0x285848, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f284; /* 0x57f284 */


void FUN_00285848(void)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f284 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_0057f284 + 0x4)) != 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f284 + 0x4)) + 4) = 1;
    *(unsigned int *)(temp_v0 + 0xc) = 0x3f000000;
    *(unsigned int *)(temp_v0 + 8) = 0;
  }
  return;
}

} /* extern "C" */
