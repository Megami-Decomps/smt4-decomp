/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b8c0` (_code @ 0x22b8c0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0023360c(void);


unsigned int FUN_0022b8c0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0023360c();
  return *(unsigned int *)(param_1 + temp_v0 * 4 + 0x530);
}

} /* extern "C" */
