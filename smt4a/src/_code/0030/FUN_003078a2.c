/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003078a2` (_code @ 0x3078a2, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003078a2(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}
