/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0a5c` (_code @ 0x2f0a5c, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002f0a5c_arg0 fn_002f0a5c_arg0;
struct fn_002f0a5c_arg0 {
    unsigned char pad_0x0[0x150];
    uint field_0x150; /* +0x150 */
    unsigned char pad_0x154[0x4];
    uint field_0x158; /* +0x158 */
    undefined4 field_0x15c; /* +0x15c */
};


void FUN_002f0a5c(fn_002f0a5c_arg0 *param_1)

{
  unsigned char temp_v0;
  
  param_1->field_0x158 = 0;
  param_1->field_0x15c = 0;
  temp_v0 = param_1->field_0x150;
  if (temp_v0 != 0) {
    param_1->field_0x15c = 0;
    param_1->field_0x158 = 0x1000000;
    if (temp_v0 >= 2) {
      param_1->field_0x15c = 0;
      param_1->field_0x158 = 0x7000000;
    }
    if (temp_v0 >= 3) {
      param_1->field_0x158 = param_1->field_0x158 | 0x8000000;
    }
    if (temp_v0 >= 4) {
      param_1->field_0x158 = param_1->field_0x158 | 0x10000000;
    }
  }
  param_1->field_0x15c = param_1->field_0x15c;
  param_1->field_0x158 = (param_1->field_0x150 >> 8) | param_1->field_0x158;
  return;
}
