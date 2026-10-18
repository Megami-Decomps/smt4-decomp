/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_TransformAnimBlendOp_BlendScaleAccurate` (_code @ 0x5053e4, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0050dbe4. */


void nw_gfx_TransformAnimBlendOp_BlendScaleAccurate(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  float *pfVar1;
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  
  if (in_s0 != -1.0f) {
    temp_v0 = *(float *)(param_3 + 0x34);
    temp_v1 = *(float *)(param_3 + 0x30);
    temp_v2 = *(float *)(param_3 + 0x38);
    FUN_0050dbe4();
    FUN_0050dbe4();
    FUN_0050dbe4();
    pfVar1 = (float *)(param_2 + 0x30);
    if ((~*(unsigned int *)(param_2 + 0x3c) & 8) == 0) {
      *(float *)(param_2 + 0x38) = temp_v2 * in_s0;
      *pfVar1 = temp_v1 * in_s0;
      *(float *)(param_2 + 0x34) = temp_v0 * in_s0;
    }
    else {
      *pfVar1 = *pfVar1 + temp_v1 * in_s0;
      *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + temp_v0 * in_s0;
      *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) + temp_v2 * in_s0;
    }
    *(unsigned int *)(param_2 + 0x3c) = (*(unsigned int *)(param_2 + 0x3c) & 0xfffffff7) | 0x800;
  }
  return;
}
