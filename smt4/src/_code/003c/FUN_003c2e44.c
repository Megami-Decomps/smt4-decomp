/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2e44` (_code @ 0x3c2e44, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003c2e44_arg0 fn_003c2e44_arg0;
struct fn_003c2e44_arg0 {
    unsigned char pad_0x0[0x11];
    undefined1 field_0x11; /* +0x11 */
    undefined1 field_0x12; /* +0x12 */
    unsigned char pad_0x13[0x1];
    undefined2 field_0x14; /* +0x14 */
};


void FUN_003c2e44(fn_003c2e44_arg0 *param_1)

{
  param_1->field_0x11 = 0;
  param_1->field_0x14 = 0xffff;
  param_1->field_0x12 = 0;
  return;
}
