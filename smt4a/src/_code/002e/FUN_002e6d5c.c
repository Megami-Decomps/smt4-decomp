/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6d5c` (_code @ 0x2e6d5c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002e6d5c(int param_1,int param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0xc);
  if (((temp_v0 & 3) != 0) && (-1 < (int)(temp_v0 << 9))) {
    if ((param_3 != 0x100) && (param_3 != 0x200)) {
      if (param_3 != 0x400) {
        return 1;
      }
      param_2 = param_1 + 0x24;
      param_4 = 1;
    }
    else if (param_4 - 1U >= 0xffffff) {
      return 1;
    }
    *(int *)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 0x1c) = param_4;
    *(int *)(param_1 + 4) = param_2;
    *(unsigned int *)(param_1 + 0xc) = (temp_v0 & 0xfffff0ff) | param_3;
    return 0;
  }
  return 1;
}
