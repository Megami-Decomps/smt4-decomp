/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a48ac` (_code @ 0x2a48ac, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002a48ac_arg0 fn_002a48ac_arg0;
struct fn_002a48ac_arg0 {
    unsigned char pad_0x0[0x4c];
    int field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x11];
    undefined1 field_0x61; /* +0x61 */
    byte field_0x62; /* +0x62 */
};


void FUN_002a48ac(fn_002a48ac_arg0 *param_1,int param_2)

{
  if (param_1->field_0x62 == 0) {
    if (param_1->field_0x4c != param_2) {
      param_1->field_0x61 = 1;
    }
    param_1->field_0x4c = param_2;
  }
  return;
}

} /* extern "C" */
