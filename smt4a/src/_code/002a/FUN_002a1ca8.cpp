/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1ca8` (_code @ 0x2a1ca8, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001800b8(void);
int FUN_0019a5a0(void);

typedef struct fn_002a1ca8_arg0 fn_002a1ca8_arg0;
struct fn_002a1ca8_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x8];
    undefined4 field_0x1c; /* +0x1c */
};

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_002a1ca8(fn_002a1ca8_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1->field_0xc != 0) {
    FUN_0019a5a0();
    param_1->field_0xc = 0;
  }
  if (param_1->field_0x8 != 0) {
    FUN_001800b8();
    param_1->field_0x8 = 0;
  }
  param_1->field_0x10 = 0;
  param_1->field_0x1c = 0;
  return;
}

} /* extern "C" */
