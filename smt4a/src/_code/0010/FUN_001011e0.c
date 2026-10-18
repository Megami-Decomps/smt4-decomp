/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001011e0` (_code @ 0x1011e0, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001011e0_arg2 fn_001011e0_arg2;
struct fn_001011e0_arg2 {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    undefined4 field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x8];
    undefined4 field_0x20; /* +0x20 */
};

extern unsigned char LAB_001011d5; /* 0x1011d5 */

/* Supplied declaration required: FUN_001015c8. */


void FUN_001011e0(unsigned int param_1,unsigned int param_2,fn_001011e0_arg2 *param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)&param_3->field_0xc = param_2;
  param_3->field_0x14 = &LAB_001011d5;
  param_3->field_0x20 = 0x1015b7;
  param_3->field_0x10 = 0;
  FUN_001015c8();
  return;
}
