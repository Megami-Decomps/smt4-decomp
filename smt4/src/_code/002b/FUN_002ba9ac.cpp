/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba9ac` (_code @ 0x2ba9ac, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b486c(...);
int FUN_002b4b88(...);

typedef struct fn_002ba9ac_arg0 fn_002ba9ac_arg0;
struct fn_002ba9ac_arg0 {
    unsigned char pad_0x0[0x310];
    undefined4 field_0x310; /* +0x310 */
    undefined4 field_0x314; /* +0x314 */
    int field_0x318; /* +0x318 */
    unsigned char pad_0x31c[0x34];
    undefined4 field_0x350; /* +0x350 */
};

extern int FUN_00131968(...); /* 0x131968 */
extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_002b486c. */
/* Supplied declaration required: FUN_002b4b88. */


void FUN_002ba9ac(fn_002ba9ac_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  param_1->field_0x310 = 0;
  param_1->field_0x314 = 0;
  param_1->field_0x350 = 0;
  if (param_1->field_0x318 != 0) {
    FUN_002b4b88(param_1->field_0x318,FUN_00131968);
    param_1->field_0x318 = 0;
  }
  FUN_002b486c(param_1);
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
  return;
}

} /* extern "C" */
