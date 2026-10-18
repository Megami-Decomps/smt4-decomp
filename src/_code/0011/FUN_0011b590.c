/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b590` (_code @ 0x11b590, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0011b590_arg0 fn_0011b590_arg0;
struct fn_0011b590_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x14];
    byte field_0x24; /* +0x24 */
    byte field_0x25; /* +0x25 */
};

/* Supplied declaration required: FUN_00126dd4. */
/* Supplied declaration required: FUN_00126e28. */


void FUN_0011b590(fn_0011b590_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((param_1->field_0xc != -1) && (param_1->field_0x24 == 0)) {
    if (param_1->field_0x25 != 1) {
      FUN_00126e28();
    }
    else {
      FUN_00126dd4();
    }
    param_1->field_0x24 = 1;
    param_1->field_0x25 = 0;
  }
  return;
}
