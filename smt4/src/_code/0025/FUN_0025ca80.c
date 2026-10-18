/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025ca80` (_code @ 0x25ca80, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0025ca80(int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  if (-1 < param_1) {
    temp_v0 = *(int *)(param_2 * 0x284 + param_1 * 4 + 0x4d9fec);
    *(unsigned int *)(temp_v0 + 0x58) = in_s0;
    *(unsigned int *)(temp_v0 + 0x68) = in_s1;
    *(unsigned int *)(temp_v0 + 0x78) = in_s2;
    *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
  }
  return;
}
