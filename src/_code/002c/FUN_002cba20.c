/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cba20` (_code @ 0x2cba20, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002cba20_arg0 fn_002cba20_arg0;
struct fn_002cba20_arg0 {
    unsigned char pad_0x0[0x28];
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x58];
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    undefined4 field_0x8c; /* +0x8c */
};


void FUN_002cba20(fn_002cba20_arg0 *param_1,int param_2,unsigned int *param_3,int param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v2 = param_2 == 0;
  if (-1 < param_2) {
    param_4 = param_1->field_0x28;
    temp_v2 = param_4 == param_2;
  }
  if (!temp_v2 && (-1 < param_2 && param_2 <= param_4)) {
    temp_v0 = param_1->field_0x84;
    temp_v1 = param_1->field_0x88;
    param_3[2] = param_1->field_0x8c;
    *param_3 = temp_v0;
    param_3[1] = temp_v1;
  }
  return;
}
