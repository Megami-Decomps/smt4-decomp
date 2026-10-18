/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395800` (_code @ 0x395800, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421f1c; /* 0x421f1c */


void FUN_00395800(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_00421f1c;
  param_1[3] = 0;
  param_1[2] = 2;
  return;
}
