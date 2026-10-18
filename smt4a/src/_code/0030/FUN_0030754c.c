/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030754c` (_code @ 0x30754c, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0030754c(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int temp_v0;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (unsigned int *)0x0) {
      temp_v0 = *param_1;
      param_3[1] = param_1[1];
      *param_3 = temp_v0;
    }
    param_3 = param_3 + 2;
  }
  return;
}
