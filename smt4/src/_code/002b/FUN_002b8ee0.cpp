/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8ee0` (_code @ 0x2b8ee0, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int spriteSequencePlayerAdvance(...);
struct ScaleController;
void controllerUpdateUniformScaleTrack(ScaleController *);
int FUN_002b1e08(...);

typedef struct fn_002b8ee0_arg0 fn_002b8ee0_arg0;
struct fn_002b8ee0_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x42];
    short field_0x52; /* +0x52 */
    unsigned char pad_0x54[0x31];
    undefined1 field_0x85; /* +0x85 */
    byte field_0x86; /* +0x86 */
    byte field_0x87; /* +0x87 */
    byte field_0x88; /* +0x88 */
    byte field_0x89; /* +0x89 */
    char field_0x8a; /* +0x8a */
};

extern unsigned char LAB_00140000; /* 0x140000 */

/* Supplied declaration required: spriteSequencePlayerAdvance. */
/* Supplied declaration required: FUN_002b1e08. */


int FUN_002b8ee0(fn_002b8ee0_arg0 *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = (int)param_1->field_0x52;
  if ((temp_v2 == 0) && (param_1->field_0xc = (undefined4)&LAB_00140000, param_2 != 0)) {
    param_1->field_0xc = 0xffec0000;
  }
  temp_v1 = 0x37;
  if ((0 < temp_v2) && (temp_v1 = temp_v2 * -5 + 0x37, temp_v1 < 0)) {
    temp_v1 = 0;
  }
  if (param_2 != 0) {
    temp_v1 = -temp_v1;
  }
  temp_v2 = param_1->field_0xc + temp_v1 * -0x1000;
  param_1->field_0xc = temp_v2;
  temp_v2 = temp_v2 >> 0xc;
  if (param_2 != 0) {
    if (temp_v2 >= 0) {
      param_1->field_0xc = 0;
      param_1->field_0x86 = 1;
    }
    else {
      param_1->field_0x8a = '\0';
    }
  }
  else if (temp_v2 < 1) {
    param_1->field_0xc = 0;
    param_1->field_0x86 = 1;
  }
  else {
    param_1->field_0x8a = '\0';
  }
  param_1->field_0x52 = param_1->field_0x52 + 1;
  FUN_002b1e08(param_1);
  controllerUpdateUniformScaleTrack((ScaleController *)param_1);
  spriteSequencePlayerAdvance(param_1);
  temp_v3 = param_1->field_0x86 != 0;
  temp_v0 = 0;
  if (temp_v3) {
    temp_v0 = param_1->field_0x87;
  }
  if (temp_v3 && temp_v0 != 0) {
    temp_v3 = param_1->field_0x88 != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = param_1->field_0x89;
    }
    if (temp_v3 && temp_v0 != 0) {
      param_1->field_0x8a = '\x01';
      param_1->field_0x85 = 1;
      return (int)param_1->field_0x8a;
    }
  }
  param_1->field_0x8a = '\0';
  param_1->field_0x85 = 1;
  return (int)param_1->field_0x8a;
}

} /* extern "C" */
