/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384ca8` (_code @ 0x384ca8, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagsGetBlock(void);


unsigned int FUN_00384ca8(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = gameFlagsGetBlock();
  if (param_1 < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 0;
    if ((*(unsigned int *)(temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4 + 0x14f8) &
        (1 << ((param_1 % 0x20) & 0xffU))) != 0) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
