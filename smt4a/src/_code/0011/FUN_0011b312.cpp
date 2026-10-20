/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b312` (_code @ 0x11b312, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0011b312_arg0 fn_0011b312_arg0;
typedef struct fn_0011b312_arg1 fn_0011b312_arg1;
struct fn_0011b312_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
};
struct fn_0011b312_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
};


void FUN_0011b312(fn_0011b312_arg0 *param_1,fn_0011b312_arg1 *param_2)

{
  unsigned int temp_v0;
  
  param_1->field_0x4 = param_2->field_0x4;
  temp_v0 = param_2->field_0x8;
  param_1->field_0xc = param_2->field_0xc;
  param_1->field_0x8 = temp_v0;
  param_1->field_0x10 = param_2->field_0x10;
  temp_v0 = param_2->field_0x18;
  param_1->field_0x1c = param_2->field_0x1c;
  param_1->field_0x18 = temp_v0;
  return;
}

} /* extern "C" */
