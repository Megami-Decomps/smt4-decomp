/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6794` (_code @ 0x3f6794, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003f6794_arg0 fn_003f6794_arg0;
struct fn_003f6794_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x28];
    int field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
};

extern unsigned char DAT_004d4674; /* 0x4d4674 */

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_003f6794(fn_003f6794_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c3aa8(&DAT_004d4674);
  if (param_1->field_0x38 == 0) {
    FUN_002c3a24(&DAT_004d4674);
    return 0;
  }
  param_1->field_0x34 = param_1->field_0x34 + 1;
  if (param_1->field_0x34 == param_1->field_0x8) {
    param_1->field_0x34 = 0;
  }
  param_1->field_0x38 = param_1->field_0x38 - 1;
  FUN_002c3a24(&DAT_004d4674);
  return 1;
}
