/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7438` (_code @ 0x2a7438, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f284; /* 0x57f284 */


void FUN_002a7438(void)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f284 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_0057f284 + 0x4)) != 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f284 + 0x4)) + 4) = 2;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 8) = 0;
  }
  return;
}

} /* extern "C" */
