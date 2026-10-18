/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225fa8` (_code @ 0x225fa8, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00225fa8_arg0 fn_00225fa8_arg0;
struct fn_00225fa8_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    uint field_0x8; /* +0x8 */
    undefined1 field_0xc; /* +0xc */
};

/* Supplied declaration required: FUN_002acaac. */


int FUN_00225fa8(fn_00225fa8_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (0 < param_3) {
    if ((unsigned int)(param_1->field_0x4 + param_3) <= param_1->field_0x8) {
      FUN_002acaac(param_1->field_0x4,param_2,param_3);
      param_1->field_0x4 = param_1->field_0x4 + param_3;
      return param_3;
    }
    param_1->field_0xc = 1;
  }
  return -1;
}
