/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef6c4` (_code @ 0x2ef6c4, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002e75fa(void);


void FUN_002ef6c4(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int *param_5)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (param_2 != 0) {
    temp_v0 = FUN_002e75fa();
  }
  *(unsigned int *)(param_1 + 0xc) = param_4;
  *(unsigned int *)(param_1 + 4) = param_3;
  *(unsigned int *)(param_1 + 8) = temp_v0;
  *(unsigned int *)(param_1 + 0x10) = *param_5;
  return;
}
