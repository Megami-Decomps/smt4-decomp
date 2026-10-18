/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_CalculatedTransform_UpdateRotateFlagsStrictly` (_code @ 0x44bfc4, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nw_gfx_CalculatedTransform_UpdateRotateFlagsStrictly(int *param_1)

{
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_1[0xf];
  if ((~temp_v0 & 0x10) == 0) {
    return;
  }
  if (*param_1 == 0x3f800000) {
    temp_v1 = 0;
    if ((float)param_1[1] == 0.0f) {
      temp_v1 = (float)param_1[2] == 0.0f;
    }
    if (temp_v1) {
      temp_v1 = 0;
      if ((float)param_1[4] == 0.0f) {
        temp_v1 = param_1[5] == 0x3f800000;
      }
      if (temp_v1) {
        temp_v1 = 0;
        if ((float)param_1[6] == 0.0f) {
          temp_v1 = (float)param_1[8] == 0.0f;
        }
        if (temp_v1) {
          temp_v1 = 0;
          if ((float)param_1[9] == 0.0f) {
            temp_v1 = param_1[10] == 0x3f800000;
          }
          if (temp_v1) {
            temp_v0 = temp_v0 | 0x80;
            param_1[0xf] = temp_v0;
            return;
          }
        }
      }
    }
  }
  temp_v0 = temp_v0 & 0xffffff7f;
  param_1[0xf] = temp_v0;
  return;
}
