/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039607c` (_code @ 0x39607c, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0039607c_arg0 fn_0039607c_arg0;
struct fn_0039607c_arg0 {
    unsigned char pad_0x0[0x74];
    undefined1 field_0x74; /* +0x74 */
    unsigned char pad_0x75[0x3];
    unsigned char field_0x78; /* +0x78 */
    unsigned char pad_0x79[0x3];
    undefined4 field_0x7c; /* +0x7c */
    unsigned char field_0x80; /* +0x80 */
    unsigned char pad_0x81[0x3];
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    undefined4 field_0x8c; /* +0x8c */
};


void FUN_0039607c(fn_0039607c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 ,unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
  *(unsigned int *)&param_1->field_0x78 = param_2;
  param_1->field_0x74 = 1;
  param_1->field_0x7c = param_3;
  *(unsigned int *)&param_1->field_0x80 = param_4;
  param_1->field_0x84 = param_5;
  param_1->field_0x88 = param_6;
  param_1->field_0x8c = param_7;
  return;
}

} /* extern "C" */
