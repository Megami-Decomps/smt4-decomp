/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e19dc` (_code @ 0x1e19dc, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001e19dc(int *param_1,int param_2)

{
  return *(unsigned int *)(*(int *)(*param_1 + 0x14) + param_2 * 4);
}

} /* extern "C" */
