/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002406ac` (_code @ 0x2406ac, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002406ac_arg1 fn_002406ac_arg1;
struct fn_002406ac_arg1 {
    unsigned char pad_0x0[0x50];
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x10];
    uint field_0x64; /* +0x64 */
    unsigned char pad_0x68[0x10];
    int field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    unsigned char pad_0x80[0x4];
    uint field_0x84; /* +0x84 */
    uint field_0x88; /* +0x88 */
};


void FUN_002406ac(unsigned int param_1,fn_002406ac_arg1 *param_2,int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  
  param_2->field_0x7c = 0;
  param_2->field_0x78 = param_3;
  param_2->field_0x84 = param_4 & 0xff;
  temp_v0 = param_2->field_0x50;
  if (param_3 != 0) {
    temp_v0 = temp_v0 | 0x2000;
  }
  param_2->field_0x88 = param_2->field_0x64 & 0xff;
  if (param_3 == 0) {
    temp_v0 = temp_v0 & 0xffffdfff;
    param_2->field_0x64 = (param_2->field_0x64 & 0xffffff00) | (param_4 & 0xff);
  }
  param_2->field_0x50 = temp_v0;
  return;
}
