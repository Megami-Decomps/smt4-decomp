#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0044be50(unsigned int);
extern unsigned int nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(unsigned int, unsigned int);


unsigned int FUN_0050704c(unsigned int param_1,unsigned int param_2)

{
  return nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(param_1,param_2) & FUN_0044be50(param_2);
}

} /* extern "C" */
