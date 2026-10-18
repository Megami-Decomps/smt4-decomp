/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290794` (_code @ 0x290794, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002542a4(void);


unsigned int FUN_00290794(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002542a4();
  return *(unsigned int *)(temp_v0 + param_1 * 4);
}
