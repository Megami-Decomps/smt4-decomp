/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234124` (_code @ 0x234124, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00234124_arg0 fn_00234124_arg0;
struct fn_00234124_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x1fc];
    void *field_0x208; /* +0x208 */
    unsigned char pad_0x20c[0x18];
    undefined4 field_0x224; /* +0x224 */
    undefined4 field_0x228; /* +0x228 */
    undefined4 field_0x22c; /* +0x22c */
    undefined4 field_0x230; /* +0x230 */
    undefined4 field_0x234; /* +0x234 */
};

typedef int romwright_code(...);

void FUN_00234124(fn_00234124_arg0 *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  temp_v3 = param_2[3];
  param_1->field_0x234 = param_2[4];
  param_1->field_0x224 = temp_v0;
  param_1->field_0x228 = temp_v1;
  param_1->field_0x22c = temp_v2;
  param_1->field_0x230 = temp_v3;
  param_1->field_0x4 = 0x13;
  param_1->field_0x8 = 0;
  if (param_1->field_0x208 != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x208 + 4))();
    param_1->field_0x208 = (void *)0x0;
  }
  return;
}

} /* extern "C" */
