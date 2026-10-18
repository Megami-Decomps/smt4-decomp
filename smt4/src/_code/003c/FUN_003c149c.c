/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c149c` (_code @ 0x3c149c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003c149c_arg1 fn_003c149c_arg1;
struct fn_003c149c_arg1 {
    unsigned char pad_0x0[0x50];
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x10];
    uint field_0x64; /* +0x64 */
    unsigned char pad_0x68[0x8];
    int field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    unsigned char pad_0x78[0xc];
    uint field_0x84; /* +0x84 */
    uint field_0x88; /* +0x88 */
};


void FUN_003c149c(unsigned int param_1,fn_003c149c_arg1 *param_2,int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  
  param_2->field_0x74 = 0;
  param_2->field_0x70 = param_3;
  param_2->field_0x84 = param_4 & 0xffffff00;
  temp_v0 = param_2->field_0x50;
  if (param_3 != 0) {
    temp_v0 = temp_v0 | 0x1000;
  }
  param_2->field_0x88 = param_2->field_0x64 & 0xffffff00;
  if (param_3 == 0) {
    temp_v0 = temp_v0 & 0xffffefff;
    param_2->field_0x64 = (param_2->field_0x64 & 0xff) | (param_4 & 0xffffff00);
  }
  param_2->field_0x50 = temp_v0;
  return;
}
