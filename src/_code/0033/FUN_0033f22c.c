/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f22c` (_code @ 0x33f22c, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0033f22c_arg0 fn_0033f22c_arg0;
struct fn_0033f22c_arg0 {
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

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_0033e7c4. */
/* Supplied declaration required: FUN_0033f2b8. */
/* Supplied declaration required: FUN_00389f54. */
/* Supplied declaration required: FUN_0038a134. */


void FUN_0033f22c(fn_0033f22c_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  if (param_1->field_0x28 != 0) {
    FUN_002c415c();
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
  if (param_1->field_0x8 != 0xc) {
    FUN_00389f54();
    FUN_0033f2b8(param_1,-param_1->field_0x4);
    return;
  }
  FUN_0038a134(DAT_00433158,param_1->field_0x4);
  FUN_0033e7c4(param_1,param_1->field_0x4);
  return;
}
