/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024082c` (_code @ 0x24082c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0024082c_arg0 fn_0024082c_arg0;
struct fn_0024082c_arg0 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x610];
    uint field_0x634; /* +0x634 */
    unsigned char pad_0x638[0xf0];
    undefined4 field_0x728; /* +0x728 */
};

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_0024082c(fn_0024082c_arg0 *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  *(unsigned int *)(param_1 + 1) = param_2;
  param_1->field_0x728 = 0;
  temp_v0 = param_1->field_0x634;
  param_1->field_0x634 = temp_v0 | 0x80000;
  temp_v1 = param_1->field_0x14 - param_1->field_0x20;
  temp_v2 = param_1->field_0xc - param_1->field_0x18;
  temp_v3 = param_1->field_0x10 - param_1->field_0x1c;
  temp_v1 = romwright_sqrt_4(temp_v2 * temp_v2 + temp_v3 * temp_v3 + temp_v1 * temp_v1);
  if (((unsigned int)temp_v1 < 0xbc23d70b) && ((int)temp_v1 < 0x3c23d70b)) {
    param_1->field_0x634 = temp_v0 & 0xfff7ffff;
  }
  return;
}
