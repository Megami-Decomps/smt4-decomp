/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f159c` (_code @ 0x4f159c, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004f159c_arg0 fn_004f159c_arg0;
struct fn_004f159c_arg0 {
    unsigned char pad_0x0[0x738];
    float field_0x738; /* +0x738 */
    float field_0x73c; /* +0x73c */
    float field_0x740; /* +0x740 */
    unsigned char pad_0x744[0xc];
    float field_0x750; /* +0x750 */
    float field_0x754; /* +0x754 */
    float field_0x758; /* +0x758 */
    unsigned char pad_0x75c[0xc];
    float field_0x768; /* +0x768 */
    float field_0x76c; /* +0x76c */
    float field_0x770; /* +0x770 */
    float field_0x774; /* +0x774 */
    float field_0x778; /* +0x778 */
    float field_0x77c; /* +0x77c */
    unsigned char pad_0x780[0x68];
    float field_0x7e8; /* +0x7e8 */
    unsigned char pad_0x7ec[0x4];
    float field_0x7f0; /* +0x7f0 */
    float field_0x7f4; /* +0x7f4 */
    unsigned char pad_0x7f8[0x4];
    float field_0x7fc; /* +0x7fc */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_004f159c(fn_004f159c_arg0 *param_1,float *param_2,float *param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float *pfVar1;
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  pfVar1 = &param_1->field_0x774;
  *pfVar1 = *param_2 + param_1->field_0x7f4;
  param_1->field_0x778 = param_2[1] + 0.0f;
  param_1->field_0x77c = param_2[2] + param_1->field_0x7fc;
  temp_v4 = *param_3 - *pfVar1;
  temp_v3 = param_3[1] - param_1->field_0x778;
  temp_v1 = param_3[2] - param_1->field_0x77c;
  temp_v5 = 1.0f / romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3 + temp_v1 * temp_v1);
  temp_v6 = param_1->field_0x77c;
  temp_v0 = *pfVar1;
  temp_v2 = param_1->field_0x778;
  *pfVar1 = *pfVar1 - param_1->field_0x7f4;
  param_1->field_0x778 = param_1->field_0x778 - 0.0f;
  param_1->field_0x77c = temp_v6 - param_1->field_0x7fc;
  *pfVar1 = *pfVar1 + param_1->field_0x750;
  param_1->field_0x778 = param_1->field_0x778 + param_1->field_0x754;
  param_1->field_0x77c = param_1->field_0x77c + param_1->field_0x758;
  param_1->field_0x768 =
       ((temp_v4 * temp_v5 * in_s0 + temp_v0) - param_1->field_0x7e8) + param_1->field_0x738;
  param_1->field_0x76c = ((temp_v3 * temp_v5 * in_s0 + temp_v2) - 0.0f) + param_1->field_0x73c;
  param_1->field_0x770 =
       ((temp_v1 * temp_v5 * in_s0 + temp_v6) - param_1->field_0x7f0) + param_1->field_0x740;
  return;
}
