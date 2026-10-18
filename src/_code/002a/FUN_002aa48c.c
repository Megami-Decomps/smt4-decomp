/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa48c` (_code @ 0x2aa48c, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002aa48c_arg0 fn_002aa48c_arg0;
struct fn_002aa48c_arg0 {
    unsigned char pad_0x0[0x11e4];
    uint field_0x11e4; /* +0x11e4 */
    byte field_0x11e8; /* +0x11e8 */
    byte field_0x11e9; /* +0x11e9 */
};

/* Supplied declaration required: FUN_001456d0. */
/* Supplied declaration required: FUN_0014e760. */


void FUN_002aa48c(fn_002aa48c_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = (unsigned int)param_1->field_0x11e8;
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = param_1->field_0x11e4;
  }
  if ((!temp_v1 || temp_v0 != param_2) && (param_1->field_0x11e4 = param_2, param_2 != 0)) {
    FUN_0014e760(*(unsigned int *)(param_2 + 0x14),*(unsigned int *)(param_2 + 0x18),
                 *(unsigned int *)(param_2 + 0x34),*(unsigned int *)(param_2 + 0x30));
    param_1->field_0x11e9 = 3;
  }
  param_1->field_0x11e8 = 0;
  if (param_1->field_0x11e9 != param_3) {
    FUN_001456d0(param_3);
    param_1->field_0x11e9 = (unsigned char)param_3;
  }
  return;
}
