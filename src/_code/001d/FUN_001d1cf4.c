/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1cf4` (_code @ 0x1d1cf4, 0x2a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern signed char DAT_00472398; /* 0x472398 */
extern float DAT_0047239c; /* 0x47239c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_001e17d4. */
/* Supplied declaration required: FUN_00269768. */
/* Supplied declaration required: FUN_002698f4. */
extern int FUN_00269cb8(void);


void FUN_001d1cf4(float *param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  if ((param_1[0xb] == 0.0f) && (DAT_00472398 != '\0')) {
    param_1[0xe] = DAT_0047239c;
  }
  temp_v0 = FUN_00269cb8();
  temp_v3 = param_1[0x2f];
  temp_v2 = (float)(temp_v0 + (int)param_1[0xb]);
  param_1[0xb] = temp_v2;
  if (temp_v2 == 0.0f) {
    return;
  }
  temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (((int)temp_v3 <= (int)temp_v2) && (0 < (int)temp_v3)) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      return;
    }
    temp_v2 = 0.0f;
    param_1[0xb] = 0.0f;
  }
  pfVar2 = param_1 + 0xc;
  FUN_002698f4(pfVar2,param_1 + 0x15,temp_v2,temp_v3);
  temp_v1 = param_1[9];
  DAT_004ea92c = (float)VectorUnsignedToFloat((unsigned int)temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea930 = (float)VectorUnsignedToFloat
                                  (((unsigned int)temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea934 = (float)VectorUnsignedToFloat
                                  (((unsigned int)temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea938 = (float)VectorUnsignedToFloat((unsigned int)temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea92c = DAT_004ea92c * 0.003921569f;
  DAT_004ea930 = DAT_004ea930 * 0.003921569f;
  DAT_004ea934 = DAT_004ea934 * 0.003921569f;
  DAT_004ea938 = DAT_004ea938 * 0.003921569f;
  temp_v1 = (float)VectorUnsignedToFloat((unsigned int)pfVar2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorUnsignedToFloat
                           (((unsigned int)pfVar2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = (float)VectorUnsignedToFloat(((unsigned int)pfVar2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorUnsignedToFloat((unsigned int)pfVar2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = temp_v1 * 0.003921569f * DAT_004ea92c;
  temp_v6 = temp_v6 * 0.003921569f * DAT_004ea930;
  temp_v4 = temp_v4 * 0.003921569f * DAT_004ea934;
  temp_v5 = temp_v5 * 0.003921569f * DAT_004ea938;
  DAT_004ea91c = temp_v1;
  DAT_004ea920 = temp_v6;
  DAT_004ea924 = temp_v4;
  DAT_004ea928 = temp_v5;
  param_1[0x40] = temp_v5;
  param_1[0x3d] = temp_v1;
  param_1[0x3e] = temp_v6;
  param_1[0x3f] = temp_v4;
  FUN_00269768(param_1 + 0x19,temp_v2,temp_v3);
  param_1[0x41] = temp_v5;
  FUN_00269768(param_1 + 0x24,temp_v2,temp_v3);
  param_1[0x42] = temp_v5;
  temp_v2 = 0.0f;
  temp_v3 = param_1[0x34];
  temp_v1 = param_1[0x35];
  temp_v6 = param_1[0x36];
  if ((temp_v3 != 0.0f || temp_v1 != 0.0f) || (temp_v4 = temp_v2, temp_v5 = temp_v2, temp_v6 != 0.0f)) {
    temp_v5 = 1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v1 * temp_v1 + temp_v6 * temp_v6);
    temp_v2 = temp_v3 * temp_v5;
    temp_v4 = temp_v1 * temp_v5;
    temp_v5 = temp_v6 * temp_v5;
  }
  temp_v7 = param_1[0x37];
  temp_v8 = temp_v9 * 0.5f;
  param_1[0x39] = *param_1 + (temp_v3 + temp_v2 * temp_v7 * temp_v8) * temp_v9;
  param_1[0x3a] =
       param_1[1] +
       ((temp_v1 + temp_v4 * temp_v7 * temp_v8) * temp_v9 - param_1[0x38] * temp_v9 * temp_v9 * 0.5f);
  param_1[0x3b] = param_1[2] + (temp_v6 + temp_v5 * temp_v7 * temp_v8) * temp_v9;
  param_1[0x3c] = 1.0f;
  FUN_001e17d4(param_1);
  return;
}
