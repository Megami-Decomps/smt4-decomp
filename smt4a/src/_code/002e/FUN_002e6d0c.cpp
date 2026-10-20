/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6d0c` (_code @ 0x2e6d0c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6cc0(...);

typedef struct fn_002e6d0c_arg0 fn_002e6d0c_arg0;
struct fn_002e6d0c_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    uint field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xc];
    int field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
};

/* Supplied declaration required: FUN_002e6cc0. */


void FUN_002e6d0c(fn_002e6d0c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1->field_0xc = param_1->field_0xc & 0xffffffdf;
  if (param_1->field_0x18 != param_1->field_0x28) {
    FUN_002e6cc0(param_1);
    param_1->field_0xc = (param_1->field_0xc & 0xffffcfff) | 0x10;
    param_1->field_0x18 = param_1->field_0x28;
    param_1->field_0x2c = param_1->field_0x10;
    param_1->field_0x4 = param_1->field_0x10;
  }
  param_1->field_0xc = param_1->field_0xc & 0xffffbfbf;
  return;
}

} /* extern "C" */
