/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120eb4` (_code @ 0x120eb4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00120eb4_arg0 fn_00120eb4_arg0;
struct fn_00120eb4_arg0 {
    unsigned char pad_0x0[0x5c];
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x1d];
    byte field_0x81; /* +0x81 */
    undefined1 field_0x82; /* +0x82 */
};

/* Supplied declaration required: FUN_0012f3e8. */


void FUN_00120eb4(fn_00120eb4_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x81 == 0) {
    FUN_0012f3e8(param_1);
    param_1->field_0x81 = 1;
    param_1->field_0x5c = param_3;
    param_1->field_0x82 = 0;
    param_1->field_0x60 = param_2;
  }
  return;
}
