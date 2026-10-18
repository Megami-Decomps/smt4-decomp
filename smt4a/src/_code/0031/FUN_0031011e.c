/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031011e` (_code @ 0x31011e, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0031011e_arg0 fn_0031011e_arg0;
struct fn_0031011e_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    uint field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    byte field_0x1c; /* +0x1c */
};

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_003100f6. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0031011e(fn_0031011e_arg0 *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1->field_0x14 != param_2) {
    temp_v0 = FUN_003100f6(param_1);
    if (temp_v0 == 0) {
      param_1->field_0x1c = param_1->field_0x1c & 0xfb;
      temp_v0 = FUN_003100f6(param_1,param_2);
    }
    temp_v1 = param_1->field_0x14;
    if (param_2 <= param_1->field_0x14) {
      temp_v1 = param_2;
    }
    rt_memcpy(temp_v0,param_1->field_0xc,temp_v1);
    FUN_002e6e14(param_1->field_0xc);
    param_1->field_0x14 = param_2;
    param_1->field_0xc = temp_v0;
  }
  return;
}
