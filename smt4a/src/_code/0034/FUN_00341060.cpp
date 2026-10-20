#include "romwright_types.h"

extern "C" {

typedef struct fn_00341060_arg0 fn_00341060_arg0;
struct fn_00341060_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x14];
    void *field_0x4c; /* +0x4c */
    void *field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x20];
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
};


void FUN_00341060(fn_00341060_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  float temp_v0;
  
  param_1->field_0x78 = in_s0;
  if (0 < param_1->field_0x34) {
    temp_v0 = param_1->field_0x74 * in_s0;
    if (param_1->field_0x4c != (void *)0x0) {
      *(float *)((int)param_1->field_0x4c + 0x40) = temp_v0;
      if (param_1->field_0x50 != (void *)0x0) {
        *(float *)((int)param_1->field_0x50 + 0x40) = temp_v0;
      }
    }
  }
  return;
}

} /* extern "C" */
