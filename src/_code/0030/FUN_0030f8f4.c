/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f8f4` (_code @ 0x30f8f4, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

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
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */


void FUN_0030f8f4(float *param_1,float *param_2)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v9 = in_s0 * 40.743664f;
  temp_v0 = temp_v9;
  FUN_002b7064();
  FUN_002b70cc();
  DAT_004ea91c = *param_1;
  DAT_004ea920 = param_1[1];
  DAT_004ea924 = param_1[2];
  DAT_004ea928 = param_1[3];
  temp_v1 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
               DAT_004ea924 * DAT_004ea924);
  if (0.0f < temp_v1) {
    DAT_004ea91c = DAT_004ea91c / temp_v1;
    DAT_004ea920 = DAT_004ea920 / temp_v1;
    DAT_004ea924 = DAT_004ea924 / temp_v1;
  }
  temp_v1 = 1.0f - temp_v9;
  temp_v6 = DAT_004ea924 * DAT_004ea924;
  temp_v5 = DAT_004ea920 * DAT_004ea920;
  temp_v2 = DAT_004ea924 * temp_v0;
  temp_v7 = DAT_004ea91c * DAT_004ea924;
  temp_v8 = DAT_004ea91c * DAT_004ea920;
  temp_v4 = DAT_004ea920 * DAT_004ea924;
  temp_v3 = DAT_004ea920 * temp_v0;
  temp_v0 = DAT_004ea91c * temp_v0;
  *param_2 = DAT_004ea91c * DAT_004ea91c + (1.0f - DAT_004ea91c * DAT_004ea91c) * temp_v9;
  param_2[1] = temp_v2 + temp_v8 * temp_v1;
  param_2[2] = temp_v7 * temp_v1 - temp_v3;
  param_2[3] = 0.0f;
  param_2[4] = temp_v8 * temp_v1 - temp_v2;
  param_2[5] = temp_v5 + (1.0f - temp_v5) * temp_v9;
  param_2[6] = temp_v0 + temp_v4 * temp_v1;
  param_2[7] = 0.0f;
  param_2[8] = temp_v3 + temp_v7 * temp_v1;
  param_2[9] = temp_v4 * temp_v1 - temp_v0;
  param_2[10] = temp_v6 + (1.0f - temp_v6) * temp_v9;
  param_2[0xb] = 0.0f;
  param_2[0xc] = 0.0f;
  param_2[0xd] = 0.0f;
  param_2[0xe] = 0.0f;
  param_2[0xf] = 0.0f;
  param_2[0xf] = 1.0f;
  return;
}
