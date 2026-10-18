/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6654` (_code @ 0x3d6654, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002273bc. */
extern int FUN_002273f0(int);
/* Supplied declaration required: FUN_002546ec. */


void FUN_003d6654(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002273f0(param_1 + 0x30);
  if (temp_v0 == 0) {
    FUN_002273bc(param_1 + 0x30);
  }
  FUN_002546ec(param_1 + 0x30,(int)*(short *)(param_2 * 0xc + 0x439968),0);
  *(unsigned int *)(param_1 + 0x634) = *(unsigned int *)(param_1 + 0x634) | 0x40000;
  return;
}
