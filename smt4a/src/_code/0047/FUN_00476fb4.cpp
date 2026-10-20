#include "romwright_types.h"

extern "C" {

int FUN_003d54f8(int, int);

typedef struct fn_00476fb4_arg0 fn_00476fb4_arg0;
struct fn_00476fb4_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x1fc];
    void *field_0x208; /* +0x208 */
};

typedef int romwright_code(...);
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_003d54f8. */


void FUN_00476fb4(fn_00476fb4_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x8 != 0) {
    if ((param_1->field_0x8 == 1) && (temp_v0 = FUN_002e07f4(), temp_v0 != 0)) {
      param_1->field_0x4 = 2;
      param_1->field_0x8 = 0;
      if (param_1->field_0x208 != (int *)0x0) {
        (**(romwright_code **)(*(int *)param_1->field_0x208 + 4))(param_1->field_0x208);
        param_1->field_0x208 = (void *)0x0;
      }
    }
    return;
  }
  FUN_003d54f8(0,10);
  FUN_003d54f8(1,10);
  param_1->field_0x8 = 1;
  return;
}

} /* extern "C" */
