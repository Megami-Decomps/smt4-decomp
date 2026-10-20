/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030de32` (_code @ 0x30de32, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(undefined4, unsigned int, unsigned int);

typedef struct fn_0030de32_arg0 fn_0030de32_arg0;
struct fn_0030de32_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    void *field_0x1c; /* +0x1c */
};

/* Supplied declaration required: rt_memcpy. */


void FUN_0030de32(fn_0030de32_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = *(unsigned int *)((int)param_1->field_0x1c + 0x14);
  if ((unsigned int)param_1->field_0x10 < temp_v1) {
    temp_v1 = param_1->field_0x10;
  }
  if (temp_v1 != 0) {
    rt_memcpy(param_1->field_0xc,*(unsigned int *)((int)param_1->field_0x1c + 0x10),temp_v1);
    param_1->field_0xc = param_1->field_0xc + temp_v1;
    *(unsigned int *)((int)param_1->field_0x1c + 0x10) = *(int *)((int)param_1->field_0x1c + 0x10) + temp_v1;
    param_1->field_0x14 = param_1->field_0x14 + temp_v1;
    param_1->field_0x10 = param_1->field_0x10 - temp_v1;
    temp_v0 = *(int *)((int)param_1->field_0x1c + 0x14) - temp_v1;
    *(int *)((int)param_1->field_0x1c + 0x14) = temp_v0;
    if (temp_v0 == 0) {
      *(unsigned int *)((int)param_1->field_0x1c + 0x10) =
           *(unsigned int *)((int)param_1->field_0x1c + 8);
    }
  }
  return;
}

} /* extern "C" */
