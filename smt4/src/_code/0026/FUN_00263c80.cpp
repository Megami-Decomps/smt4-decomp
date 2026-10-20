/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263c80` (_code @ 0x263c80, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044ea58; /* 0x44ea58 */


void FUN_00263c80(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)((*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + temp_v0 * 4) == param_1) {
      *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + temp_v0 * 4) = 0;
      return;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  return;
}

} /* extern "C" */
