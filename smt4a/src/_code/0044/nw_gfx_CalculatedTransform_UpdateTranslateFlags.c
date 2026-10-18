/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_CalculatedTransform_UpdateTranslateFlags` (_code @ 0x44b960, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0044b960_arg0 fn_0044b960_arg0;
struct fn_0044b960_arg0 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    unsigned char pad_0x10[0xc];
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    float field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xc];
    uint field_0x3c; /* +0x3c */
};


void nw_gfx_CalculatedTransform_UpdateTranslateFlags(fn_0044b960_arg0 *param_1)

{
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_1->field_0x3c;
  if ((~temp_v0 & 4) != 0) {
    if (param_1->field_0xc == 0.0f) {
      temp_v1 = 0;
      if (param_1->field_0x1c == 0.0f) {
        temp_v1 = param_1->field_0x2c == 0.0f;
      }
      if (temp_v1) {
        param_1->field_0x3c = temp_v0 | 0x100;
        return;
      }
    }
    param_1->field_0x3c = temp_v0 & 0xfffffeff;
  }
  return;
}
