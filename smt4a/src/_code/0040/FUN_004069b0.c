/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004069b0` (_code @ 0x4069b0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004069b0_arg0 fn_004069b0_arg0;
struct fn_004069b0_arg0 {
    unsigned char pad_0x0[0x17c];
    undefined4 field_0x17c; /* +0x17c */
    undefined4 field_0x180; /* +0x180 */
    undefined4 field_0x184; /* +0x184 */
    undefined4 field_0x188; /* +0x188 */
    undefined4 field_0x18c; /* +0x18c */
    undefined1 field_0x190; /* +0x190 */
    undefined1 field_0x191; /* +0x191 */
    undefined1 field_0x192; /* +0x192 */
    undefined1 field_0x193; /* +0x193 */
};

/* Supplied declaration required: FUN_004063b0. */
/* Supplied declaration required: FUN_00406ad4. */


void FUN_004069b0(fn_004069b0_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_004063b0();
  FUN_00406ad4(param_1);
  param_1->field_0x184 = 0;
  param_1->field_0x188 = 0x3f800000;
  param_1->field_0x18c = 0x3f800000;
  param_1->field_0x17c = 0x46ea6000;
  param_1->field_0x180 = 0x4708b800;
  param_1->field_0x190 = 0x4d;
  param_1->field_0x191 = 0xa6;
  param_1->field_0x192 = 200;
  param_1->field_0x193 = 0;
  return;
}
