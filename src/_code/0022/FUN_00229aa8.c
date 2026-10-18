/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229aa8` (_code @ 0x229aa8, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */


unsigned int FUN_00229aa8(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *param_1;
  FUN_00282b94(temp_v0,param_3);
  if (temp_v0 != 0) {
    param_3 = (int)*(short *)(temp_v0 + 0x6e);
  }
  if (*(short *)(param_2 + param_3 * 10 + 0x9d4) == 0) {
    temp_v1 = *(unsigned int *)(*(int *)(*param_1 + 0x1fc0) + param_3 * 0x288);
    if ((((temp_v1 & 1) != 0) && ((temp_v1 & 0x400000) == 0)) &&
       (*(int *)(*(int *)(*param_1 + 0x1fc0) + param_3 * 0x288 + 200) < 1)) {
      return 1;
    }
  }
  return 0;
}
