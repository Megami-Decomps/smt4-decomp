/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b670` (_code @ 0x11b670, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00126eb0(void);
int FUN_00126f04(void);

typedef struct fn_0011b670_arg0 fn_0011b670_arg0;
struct fn_0011b670_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x14];
    byte field_0x24; /* +0x24 */
    byte field_0x25; /* +0x25 */
};

/* Supplied declaration required: FUN_00126eb0. */
/* Supplied declaration required: FUN_00126f04. */


void FUN_0011b670(fn_0011b670_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((param_1->field_0xc != -1) && (param_1->field_0x24 == 0)) {
    if (param_1->field_0x25 != 1) {
      FUN_00126f04();
    }
    else {
      FUN_00126eb0();
    }
    param_1->field_0x24 = 1;
    param_1->field_0x25 = 0;
  }
  return;
}

} /* extern "C" */
