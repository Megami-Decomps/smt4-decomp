/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de9d0` (_code @ 0x2de9d0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00269a58(void);


void FUN_002de9d0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00269a58();
  *(int *)(param_1 + 0x2c) = temp_v0 + *(int *)(param_1 + 0x2c);
  return;
}

} /* extern "C" */
