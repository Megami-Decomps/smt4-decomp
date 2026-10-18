/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResTextureMapper_GetMemorySizeForCloneInternal` (_code @ 0x14cf84, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nw_gfx_res_ResTextureMapper_GetMemorySizeForCloneInternal(unsigned int *param_1,int *param_2)

{
  if (*(int *)*param_1 == -0x80000000) {
    *param_2 = (((((((*param_2 + param_2[1]) - 1U) & ~(param_2[1] - 1U)) + param_2[1] + 0x4b) &
                 ~(param_2[1] - 1U)) + param_2[1] + 0x1f) & ~(param_2[1] - 1U)) + 0x20;
  }
  return;
}
