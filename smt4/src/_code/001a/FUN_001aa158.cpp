/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa158` (_code @ 0x1aa158, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00297514(void);


unsigned int FUN_001aa158(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_00297514();
  *(unsigned int *)
   ((unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x18) * 4 + 2) * 4 + 0x4c4744) =
       temp_v0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}

} /* extern "C" */
