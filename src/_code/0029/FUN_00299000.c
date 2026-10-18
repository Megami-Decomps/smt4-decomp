/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00299000` (_code @ 0x299000, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00299000_arg0 fn_00299000_arg0;
struct fn_00299000_arg0 {
    unsigned char pad_0x0[0x24];
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x38];
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x1];
    byte field_0x62; /* +0x62 */
};


void FUN_00299000(fn_00299000_arg0 *param_1,int param_2)

{
  if (param_1->field_0x62 == 0) {
    if (param_1->field_0x24 != param_2) {
      param_1->field_0x60 = 1;
    }
    param_1->field_0x24 = param_2;
  }
  return;
}
