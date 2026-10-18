/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048286c` (_code @ 0x48286c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0048286c_arg0 fn_0048286c_arg0;
struct fn_0048286c_arg0 {
    unsigned char pad_0x0[0xc];
    byte field_0xc; /* +0xc */
    unsigned char pad_0xd[0x6f];
    uint field_0x7c; /* +0x7c */
    unsigned char pad_0x80[0x30];
    undefined4 field_0xb0; /* +0xb0 */
    undefined4 field_0xb4; /* +0xb4 */
    undefined4 field_0xb8; /* +0xb8 */
};


void FUN_0048286c(fn_0048286c_arg0 *param_1)

{
  param_1->field_0xc = param_1->field_0xc | 4;
  param_1->field_0x7c = param_1->field_0x7c | 4;
  param_1->field_0xb0 = 0;
  param_1->field_0xb4 = 0xc3fa0000;
  param_1->field_0xb8 = 0;
  return;
}
