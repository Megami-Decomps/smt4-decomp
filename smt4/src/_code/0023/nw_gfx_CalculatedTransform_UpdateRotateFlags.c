/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_CalculatedTransform_UpdateRotateFlags` (_code @ 0x236318, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nw_gfx_CalculatedTransform_UpdateRotateFlags(int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1[0xf];
  if ((~temp_v0 & 0x10) != 0) {
    if ((*param_1 == 0x3f800000) && (param_1[5] == 0x3f800000)) {
      temp_v0 = temp_v0 | 0x80;
    }
    else {
      temp_v0 = temp_v0 & 0xffffff7f;
    }
    param_1[0xf] = temp_v0;
  }
  return;
}
