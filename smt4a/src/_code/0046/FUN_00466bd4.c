/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466bd4` (_code @ 0x466bd4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00466bd4_arg0 fn_00466bd4_arg0;
struct fn_00466bd4_arg0 {
    unsigned char pad_0x0[0x10];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined1 field_0x1c; /* +0x1c */
    undefined1 field_0x1d; /* +0x1d */
};


void FUN_00466bd4(fn_00466bd4_arg0 *param_1)

{
  param_1->field_0x14 = 0;
  param_1->field_0x18 = 0x3f800000;
  param_1->field_0x10 = 0;
  param_1->field_0x1c = 0;
  param_1->field_0x1d = 0;
  return;
}
