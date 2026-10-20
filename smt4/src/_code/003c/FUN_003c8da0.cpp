/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8da0` (_code @ 0x3c8da0, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003c8da0_arg0 fn_003c8da0_arg0;
struct fn_003c8da0_arg0 {
    unsigned char pad_0x0[0x136];
    undefined1 field_0x136; /* +0x136 */
    unsigned char pad_0x137[0x1];
    undefined2 field_0x138; /* +0x138 */
    undefined2 field_0x13a; /* +0x13a */
};


void FUN_003c8da0(fn_003c8da0_arg0 *param_1,unsigned char param_2,unsigned short param_3,unsigned short param_4
                 )

{
  param_1->field_0x136 = param_2;
  param_1->field_0x138 = param_3;
  param_1->field_0x13a = param_4;
  return;
}

} /* extern "C" */
