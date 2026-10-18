/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ba54` (_code @ 0x22ba54, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002337a0(void);


unsigned int FUN_0022ba54(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002337a0();
  return *(unsigned int *)(param_1 + temp_v0 * 4 + 0x530);
}
