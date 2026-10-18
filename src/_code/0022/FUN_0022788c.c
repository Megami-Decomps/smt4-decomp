/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022788c` (_code @ 0x22788c, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0022788c_arg0 fn_0022788c_arg0;
struct fn_0022788c_arg0 {
    unsigned char pad_0x0[0x3028];
    uint field_0x3028; /* +0x3028 */
    unsigned char pad_0x302c[0x8];
    int field_0x3034; /* +0x3034 */
    undefined1 field_0x3038; /* +0x3038 */
};

extern int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_001ab894. */


void FUN_0022788c(fn_0022788c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x3034 != 0) {
    FUN_001ab894();
    param_1->field_0x3034 = 0;
  }
  param_1->field_0x3038 = 0xc;
  param_1->field_0x3028 = param_1->field_0x3028 & 0xfffffffd;
  if (DAT_004342c8 != 0) {
    *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) & 0xfbffffff;
  }
  return;
}
