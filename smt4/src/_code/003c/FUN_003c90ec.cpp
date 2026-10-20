/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c90ec` (_code @ 0x3c90ec, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003c90ec_arg0 fn_003c90ec_arg0;
struct fn_003c90ec_arg0 {
    unsigned char pad_0x0[0x13c];
    undefined1 field_0x13c; /* +0x13c */
    unsigned char pad_0x13d[0x1];
    undefined2 field_0x13e; /* +0x13e */
    undefined2 field_0x140; /* +0x140 */
};


void FUN_003c90ec(fn_003c90ec_arg0 *param_1,unsigned char param_2,unsigned short param_3,unsigned short param_4
                 )

{
  param_1->field_0x13c = param_2;
  param_1->field_0x13e = param_3;
  param_1->field_0x140 = param_4;
  return;
}

} /* extern "C" */
