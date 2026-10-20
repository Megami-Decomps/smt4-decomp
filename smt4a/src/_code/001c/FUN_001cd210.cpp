/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd210` (_code @ 0x1cd210, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_001d13dc(void);


unsigned int FUN_001cd210(int param_1,unsigned int *param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)(*(int *)(param_1 + 8) + param_3 * 0x14 + 4);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  temp_v0 = FUN_001d13dc();
  param_2[2] = temp_v0;
  return 1;
}

} /* extern "C" */
