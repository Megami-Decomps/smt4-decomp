/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109724` (_code @ 0x109724, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00109724_arg0 fn_00109724_arg0;
struct fn_00109724_arg0 {
    unsigned char pad_0x0[0x10];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x14];
    undefined4 field_0x58; /* +0x58 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void FUN_00109724(fn_00109724_arg0 *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  param_1->field_0x40 = 0;
  param_1->field_0x10 = 0;
  param_1->field_0x14 = 0;
  param_1->field_0x18 = 0;
  param_1->field_0x20 = 0xffffffff;
  param_1->field_0x1c = 0;
  param_1->field_0x28 = 0;
  param_1->field_0x2c = 0;
  param_1->field_0x30 = 0;
  param_1->field_0x24 = 0xffffffff;
  param_1->field_0x34 = 0;
  temp_v0 = *param_2;
  param_1->field_0x3c = param_2[1];
  param_1->field_0x38 = temp_v0;
  param_1->field_0x58 = 0;
  return;
}

} /* extern "C" */
