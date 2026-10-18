/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_BasicSound_SetAmbientInfo` (_code @ 0x379818, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: rt_memcpy. */


void nw_snd_internal_BasicSound_SetAmbientInfo(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = (**(romwright_code **)(*(int *)param_2[2] + 8))((int *)param_2[2],param_2[4]);
  if (temp_v0 != 0) {
    rt_memcpy(temp_v0,param_2[3],param_2[4]);
    temp_v1 = *param_2;
    temp_v2 = param_2[1];
    temp_v3 = param_2[2];
    *(unsigned int *)(param_1 + 0x2c) = param_2[4];
    *(unsigned int *)(param_1 + 0x1c) = temp_v1;
    *(unsigned int *)(param_1 + 0x20) = temp_v2;
    *(unsigned int *)(param_1 + 0x24) = temp_v3;
    *(int *)(param_1 + 0x28) = temp_v0;
  }
  return;
}
