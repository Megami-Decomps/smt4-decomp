/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015bba0` (_code @ 0x15bba0, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0015bba0(int *param_1)

{
  *(unsigned int *)(*param_1 + 0x2c) = *(unsigned int *)(*param_1 + 0x2c) & 0xfffffff7;
  if (*(int *)(*param_1 + 0x60) != 0) {
    (**(romwright_code **)(**(int **)(*param_1 + 0x80) + 0xc))();
    *(unsigned int *)(*param_1 + 0x60) = 0;
    *(unsigned int *)(*param_1 + 100) = 0;
    if (*(int *)(*param_1 + 0x68) != 0) {
      *(unsigned int *)(*param_1 + 0x68) = 0;
      *(unsigned int *)(*param_1 + 0x6c) = 0;
    }
  }
  return;
}
