#include "romwright_types.h"

extern "C" {

typedef struct fn_0045f6d8_arg0 fn_0045f6d8_arg0;
struct fn_0045f6d8_arg0 {
    unsigned char pad_0x0[0x70];
    int field_0x70; /* +0x70 */
    int field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x18];
    int field_0x90; /* +0x90 */
    int field_0x94; /* +0x94 */
    unsigned char pad_0x98[0x28];
    int field_0xc0; /* +0xc0 */
    int field_0xc4; /* +0xc4 */
};


void FUN_0045f6d8(fn_0045f6d8_arg0 *param_1)

{
  if (param_1->field_0x74 < param_1->field_0x70) {
    param_1->field_0x74 = param_1->field_0x74 + 1;
  }
  if (param_1->field_0x94 < param_1->field_0x90) {
    param_1->field_0x94 = param_1->field_0x94 + 1;
  }
  if (param_1->field_0xc4 < param_1->field_0xc0) {
    param_1->field_0xc4 = param_1->field_0xc4 + 1;
  }
  return;
}

} /* extern "C" */
