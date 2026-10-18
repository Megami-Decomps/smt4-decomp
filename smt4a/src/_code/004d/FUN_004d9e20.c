/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9e20` (_code @ 0x4d9e20, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019a7dc(void);
/* Supplied declaration required: FUN_002305d0. */


void FUN_004d9e20(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019a7dc();
  if ((*(unsigned short *)(temp_v0 + 0x130) & 1) != 0) {
    FUN_002305d0(temp_v0,0xffffffff,param_1,3);
    *(unsigned short *)(temp_v0 + 300) = 0;
  }
  return;
}
