/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508628` (_code @ 0x508628, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00508628(int param_1)

{
  if ((*(int *)(param_1 + 0x1c) != -1) && (*(short *)(param_1 + 0x18) == 0x2210)) {
    param_1 = param_1 + *(int *)(param_1 + 0x1c);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
