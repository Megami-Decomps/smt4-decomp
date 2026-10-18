/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343bd8` (_code @ 0x343bd8, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001c35e8(void);


unsigned char FUN_00343bd8(int param_1)

{
  int temp_v0;
  
  param_1 = param_1 - 1;
  temp_v0 = FUN_001c35e8();
  return ((unsigned int)*(unsigned char *)(temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1d)) >> 3)) &
         (1 << ((param_1 % 8) & 0xffU))) != 0;
}
