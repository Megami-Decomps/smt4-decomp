/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038f410` (_code @ 0x38f410, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0038f410_arg0 fn_0038f410_arg0;
struct fn_0038f410_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x1fc];
    void *field_0x208; /* +0x208 */
};

typedef int romwright_code(...);
extern int DAT_00432fc8; /* 0x432fc8 */


void FUN_0038f410(fn_0038f410_arg0 *param_1)

{
  if ((*(unsigned int *)(DAT_00432fc8 + 0x754) & 4) == 0 && (*(unsigned int *)(DAT_00432fc8 + 0x754) & 8) == 0) {
    param_1->field_0x4 = 3;
    param_1->field_0x8 = 0;
    if (param_1->field_0x208 != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1->field_0x208 + 4))();
      param_1->field_0x208 = (void *)0x0;
    }
  }
  return;
}

} /* extern "C" */
