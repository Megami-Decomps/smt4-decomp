/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00257374` (_code @ 0x257374, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00257374_arg0 fn_00257374_arg0;
struct fn_00257374_arg0 {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x10];
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x4];
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x4];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
};


void FUN_00257374(fn_00257374_arg0 *param_1,unsigned int param_2,unsigned int *param_3)

{
  if ((param_2 & 1) != 0) {
    *param_3 = param_1->field_0x1c;
  }
  if ((param_2 & 2) != 0) {
    *param_3 = param_1->field_0x2c;
  }
  if ((param_2 & 4) != 0) {
    *param_3 = param_1->field_0x28;
  }
  if ((param_2 & 8) != 0) {
    *param_3 = param_1->field_0x20;
  }
  if ((param_2 & 0x20) != 0) {
    *param_3 = param_1->field_0x34;
  }
  if ((param_2 & 0x80) != 0) {
    *param_3 = param_1->field_0x38;
  }
  param_3[1] = param_1->field_0x8;
  return;
}

} /* extern "C" */
