#include "romwright_types.h"

extern "C" {

int FUN_002ee80e(void);

typedef struct fn_002f32dc_arg0 fn_002f32dc_arg0;
struct fn_002f32dc_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    undefined2 field_0x10; /* +0x10 */
};

/* Supplied declaration required: FUN_002ee80e. */


void FUN_002f32dc(fn_002f32dc_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ee80e();
  int q = (int)&param_1->field_0x10;
  param_1->field_0xc = q;
  param_1->field_0x8 = 0x100;
  param_1->field_0x4 = q;
  param_1->field_0x10 = 0;
  return;
}

} /* extern "C" */
