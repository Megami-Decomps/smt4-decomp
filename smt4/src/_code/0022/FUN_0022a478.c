/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a478` (_code @ 0x22a478, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0022a478_arg0 fn_0022a478_arg0;
struct fn_0022a478_arg0 {
    unsigned char pad_0x0[0x4c];
    int field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x11];
    undefined1 field_0x61; /* +0x61 */
    byte field_0x62; /* +0x62 */
};


void FUN_0022a478(fn_0022a478_arg0 *param_1,int param_2)

{
  if (param_1->field_0x62 == 0) {
    if (param_1->field_0x4c != param_2) {
      param_1->field_0x61 = 1;
    }
    param_1->field_0x4c = param_2;
  }
  return;
}
