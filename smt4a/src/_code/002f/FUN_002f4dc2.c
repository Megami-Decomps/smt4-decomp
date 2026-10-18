/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4dc2` (_code @ 0x2f4dc2, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002f4dc2_arg0 fn_002f4dc2_arg0;
struct fn_002f4dc2_arg0 {
    unsigned char pad_0x0[0x30];
    int field_0x30; /* +0x30 */
    byte field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x3];
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
};


void FUN_002f4dc2(fn_002f4dc2_arg0 *param_1,int param_2)

{
  if ((param_1->field_0x34 == 0) || (param_2 != 0)) {
    param_1->field_0x34 = 0;
    param_1->field_0x30 = param_2;
    if (param_2 == 0) {
      param_1->field_0x38 = 0;
      param_1->field_0x3c = 0;
      return;
    }
    param_1->field_0x38 = *(unsigned int *)(param_2 + 0x7c);
    param_1->field_0x3c = *(unsigned int *)(param_2 + 0x78);
  }
  return;
}
