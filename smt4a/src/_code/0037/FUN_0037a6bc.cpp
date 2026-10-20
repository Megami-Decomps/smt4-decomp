/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a6bc` (_code @ 0x37a6bc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


void FUN_0037a6bc(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1 + *(int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27e90);
  if (temp_v0 >= 10000000) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27e90) = 9999999;
  }
  else {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27e90) = temp_v0;
  }
  return;
}

} /* extern "C" */
