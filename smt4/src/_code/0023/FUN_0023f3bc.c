/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f3bc` (_code @ 0x23f3bc, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0023f3bc_arg0 fn_0023f3bc_arg0;
struct fn_0023f3bc_arg0 {
    unsigned char pad_0x0[0x2c];
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x54];
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    undefined4 field_0x8c; /* +0x8c */
};

/* Supplied declaration required: FUN_0024bfb8. */


void FUN_0023f3bc(fn_0023f3bc_arg0 *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_3[1];
  temp_v1 = param_3[2];
  param_1->field_0x84 = *param_3;
  param_1->field_0x88 = temp_v0;
  param_1->field_0x8c = temp_v1;
  FUN_0024bfb8(param_1->field_0x2c + 0x4c);
  return;
}
