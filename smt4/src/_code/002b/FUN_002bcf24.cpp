/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcf24` (_code @ 0x2bcf24, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002bcf24(int param_1,int *param_2,unsigned short param_3,int param_4)

{
  if (param_4 == 0) {
    *(unsigned short *)(param_1 + *param_2 * 2) = param_3;
  }
  *param_2 = *param_2 + 1;
  return 1;
}

} /* extern "C" */
