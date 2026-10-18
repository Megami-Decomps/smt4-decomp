/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f32f8` (_code @ 0x2f32f8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e783c(int);
/* Supplied declaration required: FUN_002e7888. */
/* Supplied declaration required: FUN_002ee796. */


int FUN_002f32f8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  while (param_2 == 0) {
    param_2 = 0x2f3328;
  }
  temp_v0 = FUN_002e783c(param_2);
  FUN_002ee796(param_1,temp_v0 + 1);
  FUN_002e7888(*(unsigned int *)(param_1 + 0xc),param_2);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + temp_v0 * 2;
  return param_1;
}
