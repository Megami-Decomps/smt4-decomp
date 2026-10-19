/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004611ac` (_code @ 0x4611ac, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c11c; /* 0x55c11c */


void FUN_004611ac(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_0055c11c;
  *(unsigned short *)(param_1 + 0x82) = 0;
  *(unsigned char *)((int)param_1 + 0x20a) = 0;
  return;
}
