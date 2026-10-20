/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc056` (_code @ 0x2fc056, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(...);

typedef struct fn_002fc056_arg0 fn_002fc056_arg0;
struct fn_002fc056_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    int field_0x1c; /* +0x1c */
};

/* Supplied declaration required: rt_memcpy. */


void FUN_002fc056(fn_002fc056_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_1->field_0x1c - param_1->field_0x14;
  temp_v0 = param_1->field_0x4 + param_1->field_0x14;
  if (temp_v1 <= param_3) {
    rt_memcpy(param_2,temp_v0,temp_v1,param_4,param_4);
    param_3 = param_3 - temp_v1;
    if (param_3 == 0) {
      return;
    }
    temp_v0 = param_1->field_0x4;
    param_2 = param_2 + temp_v1;
  }
  rt_memcpy(param_2,temp_v0,param_3);
  return;
}

} /* extern "C" */
