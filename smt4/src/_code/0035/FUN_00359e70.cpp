/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359e70` (_code @ 0x359e70, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00359e70(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  *param_3 = *(unsigned int *)(param_1 + 0x134);
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = *(unsigned int *)(param_1 + 0x138);
  }
  return *(unsigned int *)(param_1 + 0x138);
}

} /* extern "C" */
