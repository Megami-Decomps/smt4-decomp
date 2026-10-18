/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00506f9c` (_code @ 0x506f9c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nw_gfx_TransformAnimBlendOp_BlendRotateMatrix. */
/* Supplied declaration required: nw_gfx_TransformAnimBlendOp_BlendScaleStandard. */
/* Supplied declaration required: nw_gfx_TransformAnimBlendOp_BlendTranslate. */


unsigned int FUN_00506f9c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  nw_gfx_TransformAnimBlendOp_BlendScaleStandard(param_1,param_2,param_4);
  nw_gfx_TransformAnimBlendOp_BlendRotateMatrix(param_1,param_2,param_4);
  nw_gfx_TransformAnimBlendOp_BlendTranslate(param_1,param_2,param_4);
  return 1;
}
