/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00347c0c` (_code @ 0x347c0c, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00347c0c_arg0 fn_00347c0c_arg0;
struct fn_00347c0c_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x40];
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    void *field_0x60; /* +0x60 */
};

typedef int romwright_code();

void FUN_00347c0c(fn_00347c0c_arg0 *param_1)

{
  (**(romwright_code **)(*(int *)param_1->field_0x14 + 0xc))();
  *(unsigned int *)((int)param_1->field_0x4 + 0xc) = *(unsigned int *)param_1->field_0x60;
  *(unsigned int *)((int)param_1->field_0x4 + 0x10) = *(unsigned int *)((int)param_1->field_0x60 + 4);
  *(unsigned int *)((int)param_1->field_0x4 + 0x20) = *(unsigned int *)param_1->field_0x60;
  *(unsigned int *)((int)param_1->field_0x4 + 0x24) = *(unsigned int *)((int)param_1->field_0x60 + 0xc);
  *(unsigned int *)((int)param_1->field_0x4 + 0x34) = *(unsigned int *)((int)param_1->field_0x60 + 8);
  *(unsigned int *)((int)param_1->field_0x4 + 0x38) = *(unsigned int *)((int)param_1->field_0x60 + 4);
  *(unsigned int *)((int)param_1->field_0x4 + 0x48) = *(unsigned int *)((int)param_1->field_0x60 + 8);
  *(unsigned int *)((int)param_1->field_0x4 + 0x4c) = *(unsigned int *)((int)param_1->field_0x60 + 0xc);
  param_1->field_0x58 = 0;
  param_1->field_0x5c = 0x3f800000;
  return;
}
