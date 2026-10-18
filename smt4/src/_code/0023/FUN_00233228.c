/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233228` (_code @ 0x233228, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0042259c; /* 0x42259c */


void FUN_00233228(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0042259c;
  *(unsigned short *)(param_1 + 1) = 0;
  return;
}
