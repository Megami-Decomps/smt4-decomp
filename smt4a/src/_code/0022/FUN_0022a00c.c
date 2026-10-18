/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a00c` (_code @ 0x22a00c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0022a00c(int param_1)

{
  unsigned int temp_v0;
  
  if ((*(short *)(param_1 + 0x10) == -1) ||
     (*(short *)(param_1 + 0x12) < *(short *)(param_1 + 0x10))) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
