/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7a54` (_code @ 0x2c7a54, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002c7a54_arg0 fn_002c7a54_arg0;
struct fn_002c7a54_arg0 {
    unsigned char pad_0x0[0x80];
    int field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x4];
    void *field_0x88; /* +0x88 */
    int field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x18];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
};

/* Supplied declaration required: FUN_0025c870. */


void FUN_002c7a54(fn_002c7a54_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  fn_002c7a54_arg0 *pfVar1;
  
  pfVar1 = param_1;
  FUN_0025c870();
  pfVar1->field_0xac = 0;
  pfVar1->field_0x90 = param_2;
  if (param_1->field_0x88 != (void *)0x0) {
    *(fn_002c7a54_arg0 **)((int)param_1->field_0x88 + 0xac) = pfVar1;
    pfVar1->field_0xb0 = (undefined4)param_1->field_0x88;
  }
  else {
    param_1->field_0x8c = (int)pfVar1;
    pfVar1->field_0xb0 = 0;
  }
  param_1->field_0x80 = param_1->field_0x80 + 1;
  param_1->field_0x88 = pfVar1;
  return;
}
