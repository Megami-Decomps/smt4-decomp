/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fcc94` (_code @ 0x3fcc94, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003fcc94_arg0 fn_003fcc94_arg0;
struct fn_003fcc94_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x10];
    undefined1 field_0x3c; /* +0x3c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_003fc1b0. */
/* Supplied declaration required: FUN_003fcd20. */
/* Supplied declaration required: FUN_00471940. */
/* Supplied declaration required: FUN_00471e60. */


void FUN_003fcc94(fn_003fcc94_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  if (param_1->field_0x28 != 0) {
    FUN_0019a5a0();
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x3c = 0;
    *(unsigned char *)((int)param_1 + 0x3d) = 0;
  }
  if (param_1->field_0x8 != 6) {
    FUN_00471940();
    FUN_003fcd20(param_1,-param_1->field_0x4);
    return;
  }
  FUN_00471e60(DAT_00570280,param_1->field_0x4);
  FUN_003fc1b0(param_1,param_1->field_0x4);
  return;
}
