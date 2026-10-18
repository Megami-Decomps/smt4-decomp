/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3d20` (_code @ 0x1c3d20, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001c6b34. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_001c3d20(int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  if (param_3 != 0) {
    FUN_001c6b34(param_2,(param_1[1] >> 0x1f) + 1,(char)param_1[0x28]);
  }
  temp_v0 = param_1[1];
  if (-1 < temp_v0) {
    rt_memcpy_w(param_2,param_1[0x2d] + *(int *)(param_1[0x30] + temp_v0 * 4) * 4,
                *(int *)(param_1[0x2e] + temp_v0 * 4) << 2);
    puVar3 = param_2 + *(int *)(param_1[0x2e] + param_1[1] * 4);
    *puVar3 = param_1[0x2a] | 0x7fff0000;
    param_2 = puVar3 + 2;
    puVar3[1] = 0xf0280;
  }
  rt_memcpy_w(param_2,param_1[0x2d] + *(int *)(param_1[0x30] + *param_1 * 4) * 4,
              *(int *)(param_1[0x2e] + *param_1 * 4) << 2);
  param_2 = param_2 + *(int *)(param_1[0x2e] + *param_1 * 4);
  *param_2 = param_1[0x29] | 0x7fff0000;
  param_2[1] = 0xf02b0;
  temp_v1 = 0x100;
  if ((char)param_1[0x28] != '\x03') {
    temp_v1 = 0;
  }
  param_2[2] = temp_v1;
  temp_v1 = 0x100;
  param_2[3] = 0x20229;
  if ((char)param_1[0x28] != '\x03') {
    temp_v1 = 0;
  }
  param_2[4] = temp_v1;
  param_2[5] = 0x20253;
  rt_memcpy_w(param_2 + 6,param_1[0x2b] + *(int *)(param_1[0x32] + param_1[2] * 4) * 4,
              *(int *)(param_1[0x2c] + param_1[2] * 4) << 2);
  return param_2 + 6 + *(int *)(param_1[0x2c] + param_1[2] * 4);
}
