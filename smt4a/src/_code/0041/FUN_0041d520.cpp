#include "romwright_types.h"

extern "C" {

typedef struct fn_0041d520_arg0 fn_0041d520_arg0;
struct fn_0041d520_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    void *field_0x1c; /* +0x1c */
};

typedef int romwright_code(...);

void FUN_0041d520(fn_0041d520_arg0 *param_1)

{
  (**(romwright_code **)(*(int *)param_1->field_0x14 + 8))(param_1->field_0x14);
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

} /* extern "C" */
