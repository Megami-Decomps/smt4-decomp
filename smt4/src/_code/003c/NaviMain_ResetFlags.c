/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_ResetFlags` (_code @ 0x3c2a30, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003c2a30_arg0 fn_003c2a30_arg0;
struct fn_003c2a30_arg0 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x3];
    undefined4 field_0x4; /* +0x4 */
    undefined1 field_0x8; /* +0x8 */
    undefined1 field_0x9; /* +0x9 */
    undefined1 field_0xa; /* +0xa */
    undefined1 field_0xb; /* +0xb */
    undefined1 field_0xc; /* +0xc */
};


void NaviMain_ResetFlags(fn_003c2a30_arg0 *param_1,unsigned char param_2)

{
  param_1->field_0xc = param_2;
  param_1->field_0x4 = 0;
  param_1->field_0x8 = 0;
  param_1->field_0x9 = 0;
  param_1->field_0xa = 0;
  param_1->field_0xb = 0;
  param_1->field_0x0 = 0;
  return;
}
