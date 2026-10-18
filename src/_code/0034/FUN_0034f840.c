/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f840` (_code @ 0x34f840, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034f840_arg0 fn_0034f840_arg0;
struct fn_0034f840_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x14];
    byte field_0x24; /* +0x24 */
    undefined1 field_0x25; /* +0x25 */
};

/* Supplied declaration required: FUN_00126e28. */


void FUN_0034f840(fn_0034f840_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((param_1->field_0xc != -1) && (param_1->field_0x24 == 0)) {
    FUN_00126e28();
    param_1->field_0x24 = 1;
    param_1->field_0x25 = 0;
  }
  return;
}
