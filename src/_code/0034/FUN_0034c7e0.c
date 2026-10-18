/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c7e0` (_code @ 0x34c7e0, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034c7e0_arg0 fn_0034c7e0_arg0;
struct fn_0034c7e0_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    void *field_0x1c; /* +0x1c */
};

typedef int romwright_code();

void FUN_0034c7e0(fn_0034c7e0_arg0 *param_1)

{
  (**(romwright_code **)(*(int *)param_1->field_0x14 + 0xc))();
  *(unsigned int *)((int)param_1->field_0x4 + 0xc) = *(unsigned int *)param_1->field_0x1c;
  *(unsigned int *)((int)param_1->field_0x4 + 0x10) = *(unsigned int *)((int)param_1->field_0x1c + 4);
  *(unsigned int *)((int)param_1->field_0x4 + 0x20) = *(unsigned int *)param_1->field_0x1c;
  *(unsigned int *)((int)param_1->field_0x4 + 0x24) = *(unsigned int *)((int)param_1->field_0x1c + 0xc);
  *(unsigned int *)((int)param_1->field_0x4 + 0x34) = *(unsigned int *)((int)param_1->field_0x1c + 8);
  *(unsigned int *)((int)param_1->field_0x4 + 0x38) = *(unsigned int *)((int)param_1->field_0x1c + 4);
  *(unsigned int *)((int)param_1->field_0x4 + 0x48) = *(unsigned int *)((int)param_1->field_0x1c + 8);
  *(unsigned int *)((int)param_1->field_0x4 + 0x4c) = *(unsigned int *)((int)param_1->field_0x1c + 0xc);
  *(unsigned int *)((int)param_1->field_0x4 + 0x5c) = *(unsigned int *)((int)param_1->field_0x1c + 0x28)
  ;
  *(unsigned int *)((int)param_1->field_0x4 + 0x60) = *(unsigned int *)((int)param_1->field_0x1c + 0x2c)
  ;
  *(unsigned int *)((int)param_1->field_0x4 + 0x70) = *(unsigned int *)((int)param_1->field_0x1c + 0x28)
  ;
  *(unsigned int *)((int)param_1->field_0x4 + 0x74) = *(unsigned int *)((int)param_1->field_0x1c + 0x34)
  ;
  *(unsigned int *)((int)param_1->field_0x4 + 0x84) = *(unsigned int *)((int)param_1->field_0x1c + 0x30)
  ;
  *(unsigned int *)((int)param_1->field_0x4 + 0x88) = *(unsigned int *)((int)param_1->field_0x1c + 0x2c)
  ;
  *(unsigned int *)((int)param_1->field_0x4 + 0x98) = *(unsigned int *)((int)param_1->field_0x1c + 0x30)
  ;
  *(unsigned int *)((int)param_1->field_0x4 + 0x9c) = *(unsigned int *)((int)param_1->field_0x1c + 0x34)
  ;
  return;
}
