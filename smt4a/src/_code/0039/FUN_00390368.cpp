/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00390368` (_code @ 0x390368, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00514500(void);
int FUN_00514540(int);

typedef struct fn_00390368_arg0 fn_00390368_arg0;
struct fn_00390368_arg0 {
    unsigned char pad_0x0[0x10];
    byte field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x4];
    float field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    int field_0x34; /* +0x34 */
};

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */


void FUN_00390368(fn_00390368_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  float in_s0;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v3 = 0.0f;
  if (param_1->field_0x10 != 0) {
    FUN_00514540(0);
    temp_v5 = 0.5f;
    temp_v7 = 2.0f;
    in_s0 = in_s0 - 0.5f;
    temp_v6 = in_s0 * 2.0f;
    FUN_00514540(0);
    in_s0 = in_s0 - temp_v5;
    temp_v4 = in_s0 * temp_v7;
    FUN_00514540(0);
    DAT_006472e4 = (in_s0 - temp_v5) * temp_v7;
  }
  else {
    temp_v6 = *(float *)&param_1->field_0x14;
    temp_v4 = param_1->field_0x18;
    DAT_006472e4 = param_1->field_0x1c;
  }
  temp_v7 = 1.0f;
  temp_v5 = temp_v6 * temp_v6;
  DAT_006472dc = temp_v6;
  DAT_006472e0 = temp_v4;
  DAT_006472e8 = temp_v3;
  if (romwright_sqrt_4(temp_v5 + temp_v4 * temp_v4 + DAT_006472e4 * DAT_006472e4) != temp_v3) {
    temp_v5 = temp_v5 + temp_v4 * temp_v4 + DAT_006472e4 * DAT_006472e4;
    temp_v2 = romwright_sqrt_4(temp_v5);
    if (temp_v3 < temp_v2) {
      DAT_006472dc = temp_v6 / temp_v2;
      DAT_006472e0 = temp_v4 / temp_v2;
      temp_v5 = DAT_006472e4;
      DAT_006472e4 = DAT_006472e4 / temp_v2;
    }
    temp_v4 = DAT_006472e4;
    temp_v3 = DAT_006472e0;
    *(float *)(param_2 + 4) = DAT_006472dc;
    *(float *)(param_2 + 8) = temp_v3;
    *(float *)(param_2 + 0xc) = temp_v4;
  }
  else {
    *(float *)(param_2 + 4) = temp_v3;
    *(unsigned int *)(param_2 + 8) = 0x3f800000;
    *(float *)(param_2 + 0xc) = temp_v3;
  }
  FUN_00514540(0);
  temp_v3 = ((temp_v7 - param_1->field_0x28) + temp_v5 * param_1->field_0x28) * param_1->field_0x24;
  *(float *)(param_2 + 0x14) = temp_v3;
  FUN_00514540(0);
  *(float *)(param_2 + 0x10) = temp_v3 * 6.2831855f;
  if (param_1->field_0x34 == 1) {
    temp_v1 = 0;
    FUN_00514500();
    *(char *)(param_2 + 0x18) = (char)temp_v1 + (char)(temp_v1 / 6) * -6;
    return;
  }
  if (param_1->field_0x34 != 2) {
    temp_v0 = -1;
  }
  else {
    temp_v1 = (unsigned int)(((unsigned long long)(unsigned int)(param_2 - *(int *)&param_1[2].field_0x30) * 0x49249249 +
                   0x49249249) >> 0x23);
    temp_v0 = (char)temp_v1 + (char)(temp_v1 / 6) * -6;
  }
  *(char *)(param_2 + 0x18) = temp_v0;
  return;
}

} /* extern "C" */
