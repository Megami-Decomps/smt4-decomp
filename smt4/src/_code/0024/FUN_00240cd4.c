/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240cd4` (_code @ 0x240cd4, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adc88(void);


int FUN_00240cd4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  return temp_v0 + param_1 * 4 + 0x200;
}
