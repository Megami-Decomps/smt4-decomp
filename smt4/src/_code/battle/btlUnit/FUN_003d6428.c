/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6428` (_code @ 0x3d6428, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00227228. */
extern int FUN_0022725c(int);
/* Supplied declaration required: FUN_002544ac. */


void FUN_003d6428(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0022725c(param_1 + 0x30);
  if (temp_v0 == 0) {
    FUN_00227228(param_1 + 0x30);
  }
  FUN_002544ac(param_1 + 0x30,(int)*(short *)(param_2 * 0xc + 0x439968),0);
  *(unsigned int *)(param_1 + 0x634) = *(unsigned int *)(param_1 + 0x634) | 0x40000;
  return;
}
