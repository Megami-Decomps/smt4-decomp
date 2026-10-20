/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004828a4` (_code @ 0x4828a4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004828a4_arg0 fn_004828a4_arg0;
struct fn_004828a4_arg0 {
    unsigned char pad_0x0[0x95];
    undefined1 field_0x95; /* +0x95 */
    unsigned char pad_0x96[0x2];
    unsigned char field_0x98; /* +0x98 */
    unsigned char pad_0x99[0x3];
    undefined4 field_0x9c; /* +0x9c */
    unsigned char field_0xa0; /* +0xa0 */
    unsigned char pad_0xa1[0x3];
    undefined4 field_0xa4; /* +0xa4 */
    undefined4 field_0xa8; /* +0xa8 */
    undefined4 field_0xac; /* +0xac */
};


void FUN_004828a4(fn_004828a4_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 ,unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
  *(unsigned int *)&param_1->field_0x98 = param_2;
  param_1->field_0x95 = 1;
  param_1->field_0x9c = param_3;
  *(unsigned int *)&param_1->field_0xa0 = param_4;
  param_1->field_0xa4 = param_5;
  param_1->field_0xa8 = param_6;
  param_1->field_0xac = param_7;
  return;
}

} /* extern "C" */
