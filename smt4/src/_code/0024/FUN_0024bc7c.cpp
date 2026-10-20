/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024bc7c` (_code @ 0x24bc7c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0024bc7c(int param_1,unsigned int param_2)

{
  param_1 = param_1 + (param_2 >> 3);
  *(unsigned char *)(param_1 + 0x4c) = *(unsigned char *)(param_1 + 0x4c) | (unsigned char)(1 << (param_2 & 7));
  return;
}

} /* extern "C" */
