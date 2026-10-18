/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6c60` (_code @ 0x2e6c60, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002e6c60(unsigned int *param_1)

{
  param_1[3] = (param_1[3] & 0xffdfffff) | 0x80;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}
