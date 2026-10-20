/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409c60` (_code @ 0x409c60, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019f828(undefined4, float *);

typedef struct fn_00409c60_arg0 fn_00409c60_arg0;
struct fn_00409c60_arg0 {
    unsigned char pad_0x0[0x530];
    undefined4 field_0x530; /* +0x530 */
    unsigned char pad_0x534[0xca4];
    float field_0x11d8; /* +0x11d8 */
    float field_0x11dc; /* +0x11dc */
    float field_0x11e0; /* +0x11e0 */
    float field_0x11e4; /* +0x11e4 */
    char field_0x11e8; /* +0x11e8 */
};

/* Supplied declaration required: FUN_0019f828. */


void FUN_00409c60(fn_00409c60_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  
  temp_v0 = 0;
  if (param_1->field_0x11e8 == '\0') {
    temp_v0 = param_1->field_0x11d8 == in_s0;
  }
  if (temp_v0) {
    temp_v0 = 0;
    if (param_1->field_0x11dc == in_s1) {
      temp_v0 = param_1->field_0x11e0 == in_s2;
    }
    temp_v1 = 0;
    if (temp_v0) {
      temp_v1 = param_1->field_0x11e4 == in_s3;
    }
    if (temp_v1) {
      param_1->field_0x11e8 = '\0';
      return;
    }
  }
  param_1->field_0x11d8 = in_s0;
  param_1->field_0x11dc = in_s1;
  param_1->field_0x11e0 = in_s2;
  param_1->field_0x11e4 = in_s3;
  FUN_0019f828(param_1->field_0x530,&param_1->field_0x11d8);
  param_1->field_0x11e8 = '\0';
  return;
}

} /* extern "C" */
