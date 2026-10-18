/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409bc8` (_code @ 0x409bc8, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00409bc8_arg0 fn_00409bc8_arg0;
struct fn_00409bc8_arg0 {
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


void FUN_00409bc8(fn_00409bc8_arg0 *param_1,float *param_2)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  
  if ((((param_1->field_0x11e8 != '\0') || (*param_2 != param_1->field_0x11d8)) ||
      (param_2[1] != param_1->field_0x11dc)) ||
     ((param_2[2] != param_1->field_0x11e0 || (param_2[3] != param_1->field_0x11e4)))) {
    temp_v0 = param_2[1];
    temp_v1 = param_2[2];
    temp_v2 = param_2[3];
    param_1->field_0x11d8 = *param_2;
    param_1->field_0x11dc = temp_v0;
    param_1->field_0x11e0 = temp_v1;
    param_1->field_0x11e4 = temp_v2;
    FUN_0019f828(param_1->field_0x530,&param_1->field_0x11d8);
  }
  param_1->field_0x11e8 = '\0';
  return;
}
