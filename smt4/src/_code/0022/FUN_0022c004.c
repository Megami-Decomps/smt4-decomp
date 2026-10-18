/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022c004` (_code @ 0x22c004, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0022c004(int param_1,unsigned int param_2)

{
  if (param_2 < 8) {
    param_2 = 0x10;
  }
  else if (param_2 >= 0x400) {
    param_2 = (param_2 + 0x3ff) & 0xfffffc00;
  }
  else if (param_2 < (unsigned int)(param_1 << 1)) {
    param_2 = param_1 << 1;
  }
  return param_2;
}
