/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d190` (_code @ 0x23d190, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0023d190_arg0 fn_0023d190_arg0;
struct fn_0023d190_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x8];
    undefined4 field_0x1c; /* +0x1c */
};

/* Supplied declaration required: FUN_002c0a6c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_0023d190(fn_0023d190_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1->field_0xc != 0) {
    FUN_002c4360();
    param_1->field_0xc = 0;
  }
  if (param_1->field_0x8 != 0) {
    FUN_002c0a6c();
    param_1->field_0x8 = 0;
  }
  param_1->field_0x10 = 0;
  param_1->field_0x1c = 0;
  return;
}
