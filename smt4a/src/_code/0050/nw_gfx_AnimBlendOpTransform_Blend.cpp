/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_AnimBlendOpTransform_Blend` (_code @ 0x50514c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_TransformAnimBlendOp_BlendRotateMatrix(int, int, int);
int nw_gfx_TransformAnimBlendOp_BlendScaleStandard(int, int, int);
int nw_gfx_TransformAnimBlendOp_BlendTranslate(int, int, int);

/* Supplied declaration required: nw_gfx_TransformAnimBlendOp_BlendRotateMatrix. */
/* Supplied declaration required: nw_gfx_TransformAnimBlendOp_BlendScaleStandard. */
/* Supplied declaration required: nw_gfx_TransformAnimBlendOp_BlendTranslate. */


unsigned int nw_gfx_AnimBlendOpTransform_Blend(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  if ((~*(unsigned int *)(param_2 + 4) & 1) != 0) {
    *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(param_2 + 0x44) | 0x1c;
    *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4) | 1;
  }
  param_1 = param_1 + 8;
  param_2 = param_2 + 8;
  param_4 = param_4 + 8;
  nw_gfx_TransformAnimBlendOp_BlendScaleStandard(param_1,param_2,param_4);
  nw_gfx_TransformAnimBlendOp_BlendRotateMatrix(param_1,param_2,param_4);
  nw_gfx_TransformAnimBlendOp_BlendTranslate(param_1,param_2,param_4);
  return 1;
}

} /* extern "C" */
