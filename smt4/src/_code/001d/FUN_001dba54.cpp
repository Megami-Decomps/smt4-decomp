/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dba54` (_code @ 0x1dba54, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4938(...);

typedef struct fn_001dba54_arg0 fn_001dba54_arg0;
struct fn_001dba54_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x2c];
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
};

/* Supplied declaration required: FUN_002c4938. */


void FUN_001dba54(fn_001dba54_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4938(param_1,0x48);
  param_1->field_0x3c = 0;
  param_1->field_0x38 = 2;
  param_1->field_0x8 = 0x10000;
  param_1->field_0x4 = 0xde1;
  param_1->field_0x40 = 0;
  return;
}

} /* extern "C" */
