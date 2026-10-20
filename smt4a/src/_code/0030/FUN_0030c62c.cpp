/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c62c` (_code @ 0x30c62c, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0030c62c(unsigned int param_1,int *param_2,int *param_3)

{
  *(int *)(*param_2 + 0xc) = *param_3;
  *(int *)(*param_3 + 0x10) = *param_2;
  return;
}

} /* extern "C" */
