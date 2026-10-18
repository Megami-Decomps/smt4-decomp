/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Channel_SetSweepParam` (_code @ 0x37fb60, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nw_snd_internal_driver_Channel_SetSweepParam(int param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  *(unsigned int *)(param_1 + 0xf4) = in_s0;
  *(unsigned int *)(param_1 + 0xfc) = param_2;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(unsigned char *)(param_1 + 200) = param_3;
  return;
}
