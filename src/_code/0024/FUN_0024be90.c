/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024be90` (_code @ 0x24be90, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0024be90(int param_1,unsigned int param_2)

{
  param_1 = param_1 + (param_2 >> 3);
  *(unsigned char *)(param_1 + 0x4c) = *(unsigned char *)(param_1 + 0x4c) | (unsigned char)(1 << (param_2 & 7));
  return;
}
