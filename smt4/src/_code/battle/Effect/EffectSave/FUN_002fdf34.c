/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdf34` (_code @ 0x2fdf34, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002fdf34(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_3 >= 0x11) {
    return;
  }
  if (0 < param_3) {
    temp_v0 = 0x100;
    FUN_002c5300(0x100,0x100,0,param_3 * 0x348,1);
    *(unsigned int *)(param_1 * 0x148 + 0x478024) = temp_v0;
    rt_memcpy_w();
  }
  *(int *)(param_1 * 0x148 + 0x478020) = param_3;
  return;
}
