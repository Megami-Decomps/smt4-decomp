/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002377a8` (_code @ 0x2377a8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_003d2004(void);


unsigned int FUN_002377a8(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_003d2004();
  *(unsigned int *)
   ((unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x18) * 4 + 2) * 4 + 0x61889c) =
       temp_v0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}
