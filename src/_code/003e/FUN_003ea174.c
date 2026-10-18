/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea174` (_code @ 0x3ea174, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003ea174_arg1 fn_003ea174_arg1;
struct fn_003ea174_arg1 {
    unsigned char pad_0x0[0x10];
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    undefined1 field_0x24; /* +0x24 */
};


void FUN_003ea174(int *param_1,fn_003ea174_arg1 *param_2,float *param_3)

{
  int temp_v0;
  float temp_v1;
  
  temp_v0 = *(int *)(*param_1 + 0x14);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if ((temp_v0 == 2) && ((param_2->field_0x1c != *param_3 || (param_2->field_0x20 != param_3[1])))
         ) {
        temp_v1 = param_3[1];
        param_2->field_0x1c = *param_3;
        param_2->field_0x20 = temp_v1;
        param_2->field_0x24 = 1;
      }
    }
    else if (param_2->field_0x18 != *param_3) {
      param_2->field_0x18 = *param_3;
      param_2->field_0x24 = 1;
    }
  }
  else if ((param_2->field_0x10 != *param_3) || (param_2->field_0x14 != param_3[1])) {
    temp_v1 = param_3[1];
    param_2->field_0x10 = *param_3;
    param_2->field_0x14 = temp_v1;
    param_2->field_0x24 = 1;
  }
  param_2->field_0x24 = 1;
  return;
}
