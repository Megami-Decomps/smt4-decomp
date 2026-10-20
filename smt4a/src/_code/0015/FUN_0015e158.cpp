/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e158` (_code @ 0x15e158, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001737b8(...);

typedef struct fn_0015e158_arg0 fn_0015e158_arg0;
struct fn_0015e158_arg0 {
    unsigned char pad_0x0[0x60];
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    unsigned char pad_0x68[0x1d];
    byte field_0x85; /* +0x85 */
    undefined1 field_0x86; /* +0x86 */
};

/* Supplied declaration required: FUN_001737b8. */


void FUN_0015e158(fn_0015e158_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x85 == 0) {
    FUN_001737b8(param_1);
    param_1->field_0x85 = 1;
    param_1->field_0x60 = param_3;
    param_1->field_0x86 = 0;
    param_1->field_0x64 = param_2;
  }
  return;
}

} /* extern "C" */
