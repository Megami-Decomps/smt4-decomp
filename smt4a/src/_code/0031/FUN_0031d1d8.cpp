/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d1d8` (_code @ 0x31d1d8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0031d1d8_arg0 fn_0031d1d8_arg0;
struct fn_0031d1d8_arg0 {
    unsigned char pad_0x0[0x20];
    int field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x3c];
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x1];
    byte field_0x62; /* +0x62 */
};


void FUN_0031d1d8(fn_0031d1d8_arg0 *param_1,int param_2)

{
  if (param_1->field_0x62 == 0) {
    if (param_1->field_0x20 != param_2) {
      param_1->field_0x60 = 1;
    }
    param_1->field_0x20 = param_2;
  }
  return;
}

} /* extern "C" */
