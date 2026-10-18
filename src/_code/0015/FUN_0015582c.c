/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015582c` (_code @ 0x15582c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0015582c(short *param_1)

{
  int temp_v0;
  
  if ((*param_1 != 0) && (*param_1 == 0x220c)) {
    temp_v0 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
