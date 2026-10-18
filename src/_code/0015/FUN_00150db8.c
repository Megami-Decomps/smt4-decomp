/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150db8` (_code @ 0x150db8, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004218e0; /* 0x4218e0 */


void FUN_00150db8(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_004218e0;
  *(unsigned short *)(param_1 + 0x82) = 0;
  *(unsigned char *)((int)param_1 + 0x20a) = 0;
  return;
}
