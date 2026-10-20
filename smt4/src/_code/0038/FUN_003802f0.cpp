/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003802f0` (_code @ 0x3802f0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00379450(void);

typedef struct fn_003802f0_arg0 fn_003802f0_arg0;
struct fn_003802f0_arg0 {
    unsigned char pad_0x0[0x190];
    undefined4 field_0x190; /* +0x190 */
    unsigned char pad_0x194[0x2bc];
    undefined4 field_0x450; /* +0x450 */
    undefined4 field_0x454; /* +0x454 */
    unsigned char pad_0x458[0x4];
    undefined1 field_0x45c; /* +0x45c */
    undefined1 field_0x45d; /* +0x45d */
    undefined1 field_0x45e; /* +0x45e */
};

/* Supplied declaration required: FUN_00379450. */


void FUN_003802f0(fn_003802f0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00379450();
  param_1->field_0x190 = 0;
  param_1->field_0x45c = 0;
  param_1->field_0x45d = 1;
  param_1->field_0x45e = 0;
  param_1->field_0x450 = 0;
  param_1->field_0x454 = 0;
  return;
}

} /* extern "C" */
