/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316f58` (_code @ 0x316f58, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00316f58(int param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4,
                 unsigned char param_5)

{
  *(unsigned char *)(param_1 + 8) = param_2;
  *(unsigned char *)(param_1 + 9) = param_3;
  *(unsigned char *)(param_1 + 10) = param_4;
  *(unsigned char *)(param_1 + 0xb) = param_5;
  return;
}

} /* extern "C" */
