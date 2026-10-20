/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_internal_NWCopyVec1Reverse` (_code @ 0x1bcb98, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_gfx_internal_NWCopyVec1Reverse(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = temp_v0;
  return;
}

} /* extern "C" */
