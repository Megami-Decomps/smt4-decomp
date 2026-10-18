/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00496638` (_code @ 0x496638, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00496638_arg0 fn_00496638_arg0;
struct fn_00496638_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x178];
    undefined4 field_0x18c; /* +0x18c */
};

/* Supplied declaration required: FUN_00224880. */


void FUN_00496638(fn_00496638_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00224880(param_1->field_0x18c);
  temp_v0 = FUN_00224880(param_1->field_0x18c);
  if (temp_v0 == 2) {
    param_1->field_0x10 = param_1->field_0x4;
    param_1->field_0x4 = 5;
    param_1->field_0x8 = 0;
  }
  return;
}
