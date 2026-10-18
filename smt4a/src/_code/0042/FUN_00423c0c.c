/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00423c0c` (_code @ 0x423c0c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00423c0c_arg0 fn_00423c0c_arg0;
struct fn_00423c0c_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined1 field_0x24; /* +0x24 */
    undefined1 field_0x25; /* +0x25 */
};

/* Supplied declaration required: FUN_00423144. */


void FUN_00423c0c(fn_00423c0c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0xc != -1) {
    FUN_00423144();
    param_1->field_0x24 = 0;
    param_1->field_0x25 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
  }
  return;
}
