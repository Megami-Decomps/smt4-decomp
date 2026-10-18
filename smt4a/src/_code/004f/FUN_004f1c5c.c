/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f1c5c` (_code @ 0x4f1c5c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004f1c5c_arg0 fn_004f1c5c_arg0;
struct fn_004f1c5c_arg0 {
    unsigned char pad_0x0[0x1c];
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    float field_0x2c; /* +0x2c */
    float field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x618];
    uint field_0x64c; /* +0x64c */
    unsigned char pad_0x650[0x144];
    undefined4 field_0x794; /* +0x794 */
};

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_004f1c5c(fn_004f1c5c_arg0 *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  *(unsigned int *)(param_1 + 1) = param_2;
  param_1->field_0x794 = 0;
  temp_v0 = param_1->field_0x64c;
  param_1->field_0x64c = temp_v0 | 0x80000;
  temp_v1 = param_1->field_0x24 - param_1->field_0x30;
  temp_v2 = param_1->field_0x1c - param_1->field_0x28;
  temp_v3 = param_1->field_0x20 - param_1->field_0x2c;
  temp_v1 = romwright_sqrt_4(temp_v2 * temp_v2 + temp_v3 * temp_v3 + temp_v1 * temp_v1);
  if (((unsigned int)temp_v1 < 0xbc23d70b) && ((int)temp_v1 < 0x3c23d70b)) {
    param_1->field_0x64c = temp_v0 & 0xfff7ffff;
  }
  return;
}
