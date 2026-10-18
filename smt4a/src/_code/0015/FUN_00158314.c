/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158314` (_code @ 0x158314, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00158314_arg0 fn_00158314_arg0;
struct fn_00158314_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x14];
    byte field_0x24; /* +0x24 */
    byte field_0x25; /* +0x25 */
};

/* Supplied declaration required: FUN_0016cba4. */
/* Supplied declaration required: FUN_0016cbf8. */


void FUN_00158314(fn_00158314_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((param_1->field_0xc != -1) && (param_1->field_0x24 == 0)) {
    if (param_1->field_0x25 != 1) {
      FUN_0016cbf8();
    }
    else {
      FUN_0016cba4();
    }
    param_1->field_0x24 = 1;
    param_1->field_0x25 = 0;
  }
  return;
}
