/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044b864` (_code @ 0x44b864, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0044b864_arg1 fn_0044b864_arg1;
struct fn_0044b864_arg1 {
    int field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x2c];
    float field_0x30; /* +0x30 */
    float field_0x34; /* +0x34 */
    float field_0x38; /* +0x38 */
    uint field_0x3c; /* +0x3c */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateRotateFlags. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateTranslateFlags. */


void FUN_0044b864(int param_1,fn_0044b864_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  
  temp_v0 = param_2->field_0x3c;
  temp_v1 = temp_v0 & 0xbfffffff;
  param_2->field_0x3c = temp_v1;
  if (*(char *)(param_1 + 0x5b) != '\0') {
    temp_v1 = temp_v1 | 8;
  }
  else {
    temp_v1 = temp_v0 & 0xbffffff7;
  }
  param_2->field_0x3c = temp_v1;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    temp_v0 = param_2->field_0x3c | 0x10;
  }
  else {
    temp_v0 = param_2->field_0x3c & 0xffffffef;
  }
  param_2->field_0x3c = temp_v0;
  if (*(char *)(param_1 + 0x5d) != '\0') {
    temp_v0 = temp_v0 | 4;
  }
  else {
    temp_v0 = temp_v0 & 0xfffffffb;
  }
  param_2->field_0x3c = temp_v0;
  if ((~param_2->field_0x3c & 8) != 0) {
    temp_v0 = param_2->field_0x3c & 0xfffff9ff;
    param_2->field_0x3c = temp_v0;
    temp_v2 = param_2->field_0x30;
    if (((temp_v2 == param_2->field_0x34) && (temp_v2 == param_2->field_0x38)) &&
       (param_2->field_0x3c = temp_v0 | 0x400, param_2->field_0x30 == 1.0f)) {
      param_2->field_0x3c = temp_v0 | 0x600;
    }
  }
  nw_gfx_CalculatedTransform_UpdateRotateFlags(param_2);
  nw_gfx_CalculatedTransform_UpdateTranslateFlags(param_2);
  temp_v0 = param_2->field_0x3c & 0xffffff9f;
  param_2->field_0x3c = temp_v0;
  if (((~temp_v0 & 0x180) == 0) &&
     (param_2->field_0x3c = temp_v0 | 0x40, (~(temp_v0 | 0x40) & 0x200) == 0)) {
    param_2->field_0x3c = temp_v0 | 0x60;
  }
  return;
}
