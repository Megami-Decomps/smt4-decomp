/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004823ec` (_code @ 0x4823ec, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c80c; /* 0x55c80c */


void FUN_004823ec(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_0055c80c;
  param_1[3] = 0;
  param_1[2] = 1;
  return;
}
