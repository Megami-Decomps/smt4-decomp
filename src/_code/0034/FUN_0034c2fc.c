/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c2fc` (_code @ 0x34c2fc, 0x19c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034c2fc_arg0 fn_0034c2fc_arg0;
struct fn_0034c2fc_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    void *field_0x1c; /* +0x1c */
};

typedef int romwright_code();

void FUN_0034c2fc(fn_0034c2fc_arg0 *param_1)

{
  (**(romwright_code **)(*(int *)param_1->field_0x14 + 8))();
  *(float *)((int)param_1->field_0x4 + 0xc) =
       *(float *)((int)param_1->field_0x4 + 0xc) + *(float *)((int)param_1->field_0x1c + 0x20);
  *(float *)((int)param_1->field_0x4 + 0x10) =
       *(float *)((int)param_1->field_0x4 + 0x10) + *(float *)((int)param_1->field_0x1c + 0x24);
  *(float *)((int)param_1->field_0x4 + 0x20) =
       *(float *)((int)param_1->field_0x4 + 0x20) + *(float *)((int)param_1->field_0x1c + 0x20);
  *(float *)((int)param_1->field_0x4 + 0x24) =
       *(float *)((int)param_1->field_0x4 + 0x24) + *(float *)((int)param_1->field_0x1c + 0x24);
  *(float *)((int)param_1->field_0x4 + 0x34) =
       *(float *)((int)param_1->field_0x4 + 0x34) + *(float *)((int)param_1->field_0x1c + 0x20);
  *(float *)((int)param_1->field_0x4 + 0x38) =
       *(float *)((int)param_1->field_0x4 + 0x38) + *(float *)((int)param_1->field_0x1c + 0x24);
  *(float *)((int)param_1->field_0x4 + 0x48) =
       *(float *)((int)param_1->field_0x4 + 0x48) + *(float *)((int)param_1->field_0x1c + 0x20);
  *(float *)((int)param_1->field_0x4 + 0x4c) =
       *(float *)((int)param_1->field_0x4 + 0x4c) + *(float *)((int)param_1->field_0x1c + 0x24);
  *(float *)((int)param_1->field_0x4 + 0x5c) =
       *(float *)((int)param_1->field_0x4 + 0x5c) + *(float *)((int)param_1->field_0x1c + 0x48);
  *(float *)((int)param_1->field_0x4 + 0x60) =
       *(float *)((int)param_1->field_0x4 + 0x60) + *(float *)((int)param_1->field_0x1c + 0x4c);
  *(float *)((int)param_1->field_0x4 + 0x70) =
       *(float *)((int)param_1->field_0x4 + 0x70) + *(float *)((int)param_1->field_0x1c + 0x48);
  *(float *)((int)param_1->field_0x4 + 0x74) =
       *(float *)((int)param_1->field_0x4 + 0x74) + *(float *)((int)param_1->field_0x1c + 0x4c);
  *(float *)((int)param_1->field_0x4 + 0x84) =
       *(float *)((int)param_1->field_0x4 + 0x84) + *(float *)((int)param_1->field_0x1c + 0x48);
  *(float *)((int)param_1->field_0x4 + 0x88) =
       *(float *)((int)param_1->field_0x4 + 0x88) + *(float *)((int)param_1->field_0x1c + 0x4c);
  *(float *)((int)param_1->field_0x4 + 0x98) =
       *(float *)((int)param_1->field_0x4 + 0x98) + *(float *)((int)param_1->field_0x1c + 0x48);
  *(float *)((int)param_1->field_0x4 + 0x9c) =
       *(float *)((int)param_1->field_0x4 + 0x9c) + *(float *)((int)param_1->field_0x1c + 0x4c);
  return;
}
