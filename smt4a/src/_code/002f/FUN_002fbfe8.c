/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbfe8` (_code @ 0x2fbfe8, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002fbfe8_arg0 fn_002fbfe8_arg0;
struct fn_002fbfe8_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
};

/* Supplied declaration required: aeabi_uidivmod. */
/* Supplied declaration required: rt_memcpy. */


void FUN_002fbfe8(fn_002fbfe8_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_1->field_0x1c - param_1->field_0x10;
  temp_v0 = param_1->field_0x4 + param_1->field_0x10;
  if (param_3 < temp_v2) {
    rt_memcpy(temp_v0,param_2,param_3,param_4,param_4);
    param_1->field_0x10 = param_1->field_0x10 + param_3;
    param_1->field_0x18 = param_1->field_0x18 + param_3;
  }
  else {
    rt_memcpy(temp_v0,param_2,temp_v2,param_4,param_4);
    param_1->field_0x18 = param_1->field_0x18 + temp_v2;
    aeabi_uidivmod(param_1->field_0x10 + temp_v2,param_1->field_0x1c);
    temp_v0 = param_3 - temp_v2;
    param_1->field_0x10 = temp_v1;
    if (temp_v0 != 0) {
      rt_memcpy(param_1->field_0x4,param_2 + temp_v2,temp_v0);
      param_1->field_0x10 = temp_v0;
      param_1->field_0x18 = param_1->field_0x18 + temp_v0;
      return;
    }
  }
  return;
}
