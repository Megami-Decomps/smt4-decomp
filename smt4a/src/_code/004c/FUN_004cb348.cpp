/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cb348` (_code @ 0x4cb348, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004cb348_arg1 fn_004cb348_arg1;
struct fn_004cb348_arg1 {
    unsigned char pad_0x0[0x50];
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x18];
    uint field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x8];
    int field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    unsigned char pad_0x80[0xc];
    uint field_0x8c; /* +0x8c */
    uint field_0x90; /* +0x90 */
};


void FUN_004cb348(unsigned int param_1,fn_004cb348_arg1 *param_2,int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  
  param_2->field_0x7c = 0;
  param_2->field_0x78 = param_3;
  param_2->field_0x8c = param_4 & 0xffffff00;
  temp_v0 = param_2->field_0x50;
  if (param_3 != 0) {
    temp_v0 = temp_v0 | 0x1000;
  }
  param_2->field_0x90 = param_2->field_0x6c & 0xffffff00;
  if (param_3 == 0) {
    temp_v0 = temp_v0 & 0xffffefff;
    param_2->field_0x6c = (param_2->field_0x6c & 0xff) | (param_4 & 0xffffff00);
  }
  param_2->field_0x50 = temp_v0;
  return;
}

} /* extern "C" */
