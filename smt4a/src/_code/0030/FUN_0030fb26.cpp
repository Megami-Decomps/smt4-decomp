/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fb26` (_code @ 0x30fb26, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0030fb26_arg0 fn_0030fb26_arg0;
struct fn_0030fb26_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x7];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
};


void FUN_0030fb26(fn_0030fb26_arg0 *param_1)

{
  param_1->field_0x4 = 0;
  param_1->field_0x14 = 0;
  param_1->field_0x10 = 7;
  param_1->field_0xc = 0;
  return;
}

} /* extern "C" */
