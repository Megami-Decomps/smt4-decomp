/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db288` (_code @ 0x4db288, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004db288_arg0 fn_004db288_arg0;
struct fn_004db288_arg0 {
    unsigned char pad_0x0[0x174];
    undefined1 field_0x174; /* +0x174 */
    unsigned char pad_0x175[0x1];
    undefined2 field_0x176; /* +0x176 */
    undefined2 field_0x178; /* +0x178 */
};


void FUN_004db288(fn_004db288_arg0 *param_1,unsigned char param_2,unsigned short param_3,unsigned short param_4
                 )

{
  param_1->field_0x174 = param_2;
  param_1->field_0x176 = param_3;
  param_1->field_0x178 = param_4;
  return;
}

} /* extern "C" */
