/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c260` (_code @ 0x35c260, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238c44. */


void FUN_0035c260(int param_1,unsigned char *param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  *(unsigned char **)(param_1 + 0x18) = param_2;
  *(unsigned int *)(param_1 + 0x20) = param_3;
  FUN_00238c44(param_2,(param_3 + 0xf) >> 4);
  *(unsigned char **)(param_1 + 0x1c) = param_2;
  if (param_2 != (unsigned char *)0x0) {
    if (param_4 != 0 && param_3 != 0) {
      temp_v0 = param_3 & 1;
      temp_v1 = (unsigned int)(temp_v0 == 1);
      if (temp_v0 == 1) {
        *param_2 = 0;
      }
      for (; temp_v0 < param_3; temp_v0 = temp_v0 + 2) {
        *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v1) = 0;
        *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v1 + 1) = 0;
        temp_v1 = temp_v1 + 2;
      }
    }
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 0x18);
    *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x18);
  }
  return;
}
