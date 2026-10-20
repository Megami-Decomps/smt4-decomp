/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379b94` (_code @ 0x379b94, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00379b94_arg0 fn_00379b94_arg0;
struct fn_00379b94_arg0 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x3];
    float field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined2 field_0x14; /* +0x14 */
    unsigned char pad_0x16[0x2];
    undefined1 field_0x18; /* +0x18 */
};


void FUN_00379b94(fn_00379b94_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  param_1->field_0x10 = 0;
  param_1->field_0x14 = 0;
  param_1->field_0x8 = 0x477fff00;
  param_1->field_0x18 = 0x7f;
  param_1->field_0xc = 0x477fff00;
  param_1->field_0x0 = 0;
  param_1->field_0x4 = in_s0 * 10.0f;
  return;
}

} /* extern "C" */
