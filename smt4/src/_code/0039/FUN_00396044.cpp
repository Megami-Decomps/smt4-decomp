/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00396044` (_code @ 0x396044, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00396044_arg0 fn_00396044_arg0;
struct fn_00396044_arg0 {
    unsigned char pad_0x0[0x8];
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x67];
    uint field_0x70; /* +0x70 */
    unsigned char pad_0x74[0x1c];
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
};


void FUN_00396044(fn_00396044_arg0 *param_1)

{
  param_1->field_0x8 = param_1->field_0x8 | 4;
  param_1->field_0x70 = param_1->field_0x70 | 4;
  param_1->field_0x90 = 0;
  param_1->field_0x94 = 0xc3fa0000;
  param_1->field_0x98 = 0;
  return;
}

} /* extern "C" */
