/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd0f8` (_code @ 0x2bd0f8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd420. */


int FUN_002bd0f8(int param_1,int *param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_2 == (int *)0x0 || param_3 == 0) {
    temp_v0 = 0;
  }
  else {
    for (temp_v0 = 0; *(short *)(param_3 + temp_v0 * 2) != 0; temp_v0 = temp_v0 + 1) {
    }
    if (param_4 == 0) {
      FUN_002bd420(param_3,param_1 + *param_2 * 2,temp_v0 << 1);
    }
    *param_2 = *param_2 + temp_v0;
  }
  return temp_v0;
}
