/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cae0c` (_code @ 0x4cae0c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004cae0c_arg1 fn_004cae0c_arg1;
struct fn_004cae0c_arg1 {
    unsigned char pad_0x0[0x50];
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x18];
    uint field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x10];
    int field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    unsigned char pad_0x88[0x4];
    uint field_0x8c; /* +0x8c */
    uint field_0x90; /* +0x90 */
};


void FUN_004cae0c(unsigned int param_1,fn_004cae0c_arg1 *param_2,int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  
  param_2->field_0x84 = 0;
  param_2->field_0x80 = param_3;
  param_2->field_0x8c = param_4 & 0xff;
  temp_v0 = param_2->field_0x50;
  if (param_3 != 0) {
    temp_v0 = temp_v0 | 0x2000;
  }
  param_2->field_0x90 = param_2->field_0x6c & 0xff;
  if (param_3 == 0) {
    temp_v0 = temp_v0 & 0xffffdfff;
    param_2->field_0x6c = (param_2->field_0x6c & 0xffffff00) | (param_4 & 0xff);
  }
  param_2->field_0x50 = temp_v0;
  return;
}
