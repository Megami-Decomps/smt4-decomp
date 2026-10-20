/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_TransformAnimBlendOp_BlendScaleStandard` (_code @ 0x505498, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_gfx_TransformAnimBlendOp_BlendScaleStandard(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float *pfVar1;
  float in_s0;
  float temp_v0;
  float temp_v1;
  
  if (in_s0 != -1.0f) {
    pfVar1 = (float *)(param_2 + 0x30);
    if ((~*(unsigned int *)(param_2 + 0x3c) & 8) != 0) {
      temp_v0 = *(float *)(param_3 + 0x34);
      temp_v1 = *(float *)(param_3 + 0x38);
      *pfVar1 = *pfVar1 + *(float *)(param_3 + 0x30) * in_s0;
      *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + temp_v0 * in_s0;
      temp_v0 = *(float *)(param_2 + 0x38) + temp_v1 * in_s0;
    }
    else {
      *pfVar1 = *(float *)(param_3 + 0x30) * in_s0;
      *(float *)(param_2 + 0x34) = *(float *)(param_3 + 0x34) * in_s0;
      temp_v0 = *(float *)(param_3 + 0x38) * in_s0;
    }
    *(float *)(param_2 + 0x38) = temp_v0;
    *(unsigned int *)(param_2 + 0x3c) = (*(unsigned int *)(param_2 + 0x3c) & 0xfffffff7) | 0x800;
  }
  return;
}

} /* extern "C" */
