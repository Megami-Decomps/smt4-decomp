/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5d38` (_code @ 0x2f5d38, 0xb6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4a90(int, int, int);
int FUN_002eb60c(void);

/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_002eb60c. */


void FUN_002f5d38(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_stack_00000008; 4 native warning(s); review required */
  int temp_v0;
  int in_stack_00000008;
  
  *(unsigned int *)(in_stack_00000008 + 0x10) = 0x10;
  FUN_002eb60c();
  *(unsigned int *)(temp_v0 * 0x2000000) = 0x91062000;
  *(unsigned int *)(param_3 + temp_v0 * 0x1000000) = 0x91062000;
  FUN_001b4a90(in_stack_00000008,0x10,0xab);
  return;
}

} /* extern "C" */
