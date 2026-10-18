/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efb9e` (_code @ 0x2efb9e, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002efb9e(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  if ((~*(unsigned int *)(param_1 + 0x10) & param_3) == 0 && (~*(unsigned int *)(param_1 + 0x14) & param_4) == 0) {
    return 1;
  }
  return 0;
}
