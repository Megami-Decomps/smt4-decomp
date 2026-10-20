/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004daaf4` (_code @ 0x4daaf4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004daaf4_arg0 fn_004daaf4_arg0;
struct fn_004daaf4_arg0 {
    unsigned char pad_0x0[0x16e];
    undefined1 field_0x16e; /* +0x16e */
    unsigned char pad_0x16f[0x1];
    undefined2 field_0x170; /* +0x170 */
    undefined2 field_0x172; /* +0x172 */
};


void FUN_004daaf4(fn_004daaf4_arg0 *param_1,unsigned char param_2,unsigned short param_3,unsigned short param_4
                 )

{
  param_1->field_0x16e = param_2;
  param_1->field_0x170 = param_3;
  param_1->field_0x172 = param_4;
  return;
}

} /* extern "C" */
