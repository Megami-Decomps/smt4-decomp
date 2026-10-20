#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0036a33c(unsigned int);
extern unsigned int nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(void);


unsigned int FUN_003e5d08(unsigned int param_1,unsigned int param_2)
{
  return nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale() & FUN_0036a33c(param_2);
}

} /* extern "C" */
