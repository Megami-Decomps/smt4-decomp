/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00506f7c` (_code @ 0x506f7c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0044b9bc(unsigned int);
extern unsigned int nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(void);


unsigned int FUN_00506f7c(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale();
  temp_v1 = FUN_0044b9bc(param_2);
  return temp_v1 & temp_v0;
}
