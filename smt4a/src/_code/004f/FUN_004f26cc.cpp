/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f26cc` (_code @ 0x4f26cc, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004f26cc_arg0 fn_004f26cc_arg0;
struct fn_004f26cc_arg0 {
    unsigned char pad_0x0[0x64c];
    uint field_0x64c; /* +0x64c */
    unsigned char pad_0x650[0x154];
    undefined4 field_0x7a4; /* +0x7a4 */
    undefined4 field_0x7a8; /* +0x7a8 */
    undefined4 field_0x7ac; /* +0x7ac */
    unsigned char pad_0x7b0[0x20];
    undefined4 field_0x7d0; /* +0x7d0 */
    undefined4 field_0x7d4; /* +0x7d4 */
    undefined4 field_0x7d8; /* +0x7d8 */
};


void FUN_004f26cc(fn_004f26cc_arg0 *param_1)

{
  param_1->field_0x7ac = 0;
  param_1->field_0x7a8 = 0;
  param_1->field_0x7a4 = 0;
  param_1->field_0x64c = param_1->field_0x64c & 0xff7fffff;
  param_1->field_0x7d8 = 0;
  param_1->field_0x7d4 = 0;
  param_1->field_0x7d0 = 0;
  return;
}

} /* extern "C" */
