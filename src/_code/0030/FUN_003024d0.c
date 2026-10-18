/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003024d0` (_code @ 0x3024d0, 0x1b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003024d0_arg0 fn_003024d0_arg0;
struct fn_003024d0_arg0 {
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

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */


void FUN_003024d0(fn_003024d0_arg0 *param_1,int param_2)

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
    FUN_0024b830(0);
    temp_v5 = 0.5f;
    temp_v7 = 2.0f;
    in_s0 = in_s0 - 0.5f;
    temp_v6 = in_s0 * 2.0f;
    FUN_0024b830(0);
    in_s0 = in_s0 - temp_v5;
    temp_v4 = in_s0 * temp_v7;
    FUN_0024b830(0);
    DAT_004ea924 = (in_s0 - temp_v5) * temp_v7;
  }
  else {
    temp_v6 = *(float *)&param_1->field_0x14;
    temp_v4 = param_1->field_0x18;
    DAT_004ea924 = param_1->field_0x1c;
  }
  temp_v7 = 1.0f;
  temp_v5 = temp_v6 * temp_v6;
  DAT_004ea91c = temp_v6;
  DAT_004ea920 = temp_v4;
  DAT_004ea928 = temp_v3;
  if (romwright_sqrt_4(temp_v5 + temp_v4 * temp_v4 + DAT_004ea924 * DAT_004ea924) != temp_v3) {
    temp_v5 = temp_v5 + temp_v4 * temp_v4 + DAT_004ea924 * DAT_004ea924;
    temp_v2 = romwright_sqrt_4(temp_v5);
    if (temp_v3 < temp_v2) {
      DAT_004ea91c = temp_v6 / temp_v2;
      DAT_004ea920 = temp_v4 / temp_v2;
      temp_v5 = DAT_004ea924;
      DAT_004ea924 = DAT_004ea924 / temp_v2;
    }
    temp_v4 = DAT_004ea924;
    temp_v3 = DAT_004ea920;
    *(float *)(param_2 + 4) = DAT_004ea91c;
    *(float *)(param_2 + 8) = temp_v3;
    *(float *)(param_2 + 0xc) = temp_v4;
  }
  else {
    *(float *)(param_2 + 4) = temp_v3;
    *(unsigned int *)(param_2 + 8) = 0x3f800000;
    *(float *)(param_2 + 0xc) = temp_v3;
  }
  FUN_0024b830(0);
  temp_v3 = ((temp_v7 - param_1->field_0x28) + temp_v5 * param_1->field_0x28) * param_1->field_0x24;
  *(float *)(param_2 + 0x14) = temp_v3;
  FUN_0024b830(0);
  *(float *)(param_2 + 0x10) = temp_v3 * 6.2831855f;
  if (param_1->field_0x34 == 1) {
    temp_v1 = 0;
    FUN_0024b77c();
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
