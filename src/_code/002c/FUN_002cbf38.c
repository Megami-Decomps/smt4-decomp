/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cbf38` (_code @ 0x2cbf38, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00254ac4. */
/* Supplied declaration required: FUN_002bb8e4. */
/* Supplied declaration required: FUN_002c3714. */


int FUN_002cbf38(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [496];
  
  temp_v0 = -0x181c0001;
  FUN_00254ac4(param_2,temp_v1,2);
  if (param_2 == 0) {
    FUN_002c3714();
    return -0x1f1fb944;
  }
  if (param_3 == 1) {
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0xc) = 0;
    temp_v0 = param_1 + 8;
    *(unsigned int *)(param_1 + 0x10) = 0;
    FUN_002bb8e4(temp_v0,temp_v1,2);
  }
  FUN_002c3714(temp_v0);
  return temp_v0;
}
