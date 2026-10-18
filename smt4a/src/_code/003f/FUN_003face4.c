/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003face4` (_code @ 0x3face4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short FUN_003face4(int param_1)

{
  unsigned short temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    temp_v0 = *(unsigned short *)(*(int *)(param_1 + 0x10) + 0xe);
  }
  return temp_v0;
}
