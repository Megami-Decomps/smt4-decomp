/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00412648` (_code @ 0x412648, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00412854(...);

typedef struct fn_00412648_arg0 fn_00412648_arg0;
struct fn_00412648_arg0 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x3];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined1 field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    undefined4 field_0x18; /* +0x18 */
};

/* Supplied declaration required: FUN_00412854. */


void FUN_00412648(fn_00412648_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)&param_1->field_0x4 = param_2;
  param_1->field_0x8 = 0;
  param_1->field_0x18 = param_3;
  param_1->field_0xc = param_4;
  FUN_00412854(param_1);
  param_1->field_0x0 = 1;
  return;
}

} /* extern "C" */
