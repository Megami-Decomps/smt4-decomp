/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031caec` (_code @ 0x31caec, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f3b4; /* 0x57f3b4 */


void FUN_0031caec(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f3b4 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_0057f3b4 + 0x4)) != 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f3b4 + 0x4)) + 0x1c) = param_1;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 8) = 4;
    *(unsigned int *)(temp_v0 + 0x14) = 0x3f800000;
  }
  return;
}

} /* extern "C" */
