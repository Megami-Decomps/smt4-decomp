/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e2f8` (_code @ 0x38e2f8, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0038e2f8_arg0 fn_0038e2f8_arg0;
struct fn_0038e2f8_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x1fc];
    void *field_0x208; /* +0x208 */
};

typedef int romwright_code();
extern int FUN_002896bc(void);
/* Supplied declaration required: FUN_002a03d8. */


void FUN_0038e2f8(fn_0038e2f8_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x8 != 0) {
    if ((param_1->field_0x8 == 1) && (temp_v0 = FUN_002896bc(), temp_v0 != 0)) {
      param_1->field_0x4 = 2;
      param_1->field_0x8 = 0;
      if (param_1->field_0x208 != (int *)0x0) {
        (**(romwright_code **)(*(int *)param_1->field_0x208 + 4))();
        param_1->field_0x208 = (void *)0x0;
      }
    }
    return;
  }
  FUN_002a03d8(0,10);
  FUN_002a03d8(1,10);
  param_1->field_0x8 = 1;
  return;
}
