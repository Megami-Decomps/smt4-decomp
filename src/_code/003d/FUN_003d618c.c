/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d618c` (_code @ 0x3d618c, 0x16c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003d618c_arg0 fn_003d618c_arg0;
struct fn_003d618c_arg0 {
    unsigned char pad_0x0[0x6cc];
    float field_0x6cc; /* +0x6cc */
    float field_0x6d0; /* +0x6d0 */
    float field_0x6d4; /* +0x6d4 */
    unsigned char pad_0x6d8[0xc];
    float field_0x6e4; /* +0x6e4 */
    float field_0x6e8; /* +0x6e8 */
    float field_0x6ec; /* +0x6ec */
    unsigned char pad_0x6f0[0xc];
    float field_0x6fc; /* +0x6fc */
    float field_0x700; /* +0x700 */
    float field_0x704; /* +0x704 */
    float field_0x708; /* +0x708 */
    float field_0x70c; /* +0x70c */
    float field_0x710; /* +0x710 */
    unsigned char pad_0x714[0x68];
    float field_0x77c; /* +0x77c */
    unsigned char pad_0x780[0x4];
    float field_0x784; /* +0x784 */
    float field_0x788; /* +0x788 */
    unsigned char pad_0x78c[0x4];
    float field_0x790; /* +0x790 */
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


void FUN_003d618c(fn_003d618c_arg0 *param_1,float *param_2,float *param_3)

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
  
  pfVar1 = &param_1->field_0x708;
  *pfVar1 = *param_2 + param_1->field_0x788;
  param_1->field_0x70c = param_2[1] + 0.0f;
  param_1->field_0x710 = param_2[2] + param_1->field_0x790;
  temp_v4 = *param_3 - *pfVar1;
  temp_v3 = param_3[1] - param_1->field_0x70c;
  temp_v1 = param_3[2] - param_1->field_0x710;
  temp_v5 = 1.0f / romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3 + temp_v1 * temp_v1);
  temp_v6 = param_1->field_0x710;
  temp_v0 = *pfVar1;
  temp_v2 = param_1->field_0x70c;
  *pfVar1 = *pfVar1 - param_1->field_0x788;
  param_1->field_0x70c = param_1->field_0x70c - 0.0f;
  param_1->field_0x710 = temp_v6 - param_1->field_0x790;
  *pfVar1 = *pfVar1 + param_1->field_0x6e4;
  param_1->field_0x70c = param_1->field_0x70c + param_1->field_0x6e8;
  param_1->field_0x710 = param_1->field_0x710 + param_1->field_0x6ec;
  param_1->field_0x6fc =
       ((temp_v4 * temp_v5 * in_s0 + temp_v0) - param_1->field_0x77c) + param_1->field_0x6cc;
  param_1->field_0x700 = ((temp_v3 * temp_v5 * in_s0 + temp_v2) - 0.0f) + param_1->field_0x6d0;
  param_1->field_0x704 =
       ((temp_v1 * temp_v5 * in_s0 + temp_v6) - param_1->field_0x784) + param_1->field_0x6d4;
  return;
}
