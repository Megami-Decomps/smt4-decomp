/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f43b4` (_code @ 0x4f43b4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004f43b4_arg0 fn_004f43b4_arg0;
struct fn_004f43b4_arg0 {
    unsigned char pad_0x0[0x64c];
    uint field_0x64c; /* +0x64c */
    unsigned char pad_0x650[0xa4];
    undefined4 field_0x6f4; /* +0x6f4 */
    undefined4 field_0x6f8; /* +0x6f8 */
    undefined4 field_0x6fc; /* +0x6fc */
    undefined4 field_0x700; /* +0x700 */
};


void FUN_004f43b4(fn_004f43b4_arg0 *param_1)

{
  param_1->field_0x6fc = 0;
  param_1->field_0x6f8 = 0;
  param_1->field_0x6f4 = 0;
  param_1->field_0x700 = 0;
  param_1->field_0x64c = param_1->field_0x64c | 0x20;
  return;
}
