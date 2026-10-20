/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00481b80` (_code @ 0x481b80, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c7dc; /* 0x55c7dc */


void FUN_00481b80(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_0055c7dc;
  param_1[3] = 0;
  param_1[2] = 2;
  return;
}

} /* extern "C" */
