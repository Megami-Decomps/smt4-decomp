/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033aaac` (_code @ 0x33aaac, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagsGetBlock(void);


unsigned char FUN_0033aaac(int param_1)

{
  int temp_v0;
  
  temp_v0 = gameFlagsGetBlock();
  return (*(unsigned int *)(temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4 + 0xd4c) &
         (1 << ((param_1 % 0x20) & 0xffU))) != 0;
}

} /* extern "C" */
