#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0044b9bc(unsigned int);
extern unsigned int nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(void);


unsigned int FUN_00506f7c(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  return nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale() & FUN_0044b9bc(param_2);
}

} /* extern "C" */
