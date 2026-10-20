/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fdb18` (_code @ 0x3fdb18, 0x1f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_003fdb18(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  float in_s1;
  float temp_v4;
  float in_s2;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v4 = romwright_fabs_4(in_s1 * 0.7111111f);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s2 * 0.7111111f) << 0x1d);
  temp_v5 = romwright_fabs_4(in_s2 * 0.7111111f);
  for (temp_v3 = romwright_fabs_4(in_s0 * 0.7111111f); (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - 65536.0f) {
  }
  for (; (int)temp_v4 >= 0x47800000; temp_v4 = temp_v4 - 65536.0f) {
  }
  for (; (int)temp_v5 >= 0x47800000; temp_v5 = temp_v5 - 65536.0f) {
  }
  temp_v6 = VectorFloatToUnsigned(temp_v3,3);
  temp_v7 = VectorFloatToUnsigned(temp_v4,3);
  temp_v1 = temp_v6;
  temp_v8 = VectorFloatToUnsigned(temp_v5,3);
  temp_v2 = temp_v8;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v6 = temp_v7 & 0xff;
  temp_v12 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v10 = (float)(&DAT_00536d14)[temp_v1 * 4] + (temp_v3 - temp_v11) * (float)(&DAT_00536d1c)[temp_v1 * 4];
  temp_v11 = (float)(&DAT_00536d18)[temp_v1 * 4] + (temp_v3 - temp_v11) * (float)(&DAT_00536d20)[temp_v1 * 4];
  temp_v3 = (float)(&DAT_00536d14)[temp_v6 * 4] + (temp_v4 - temp_v9) * (float)(&DAT_00536d1c)[temp_v6 * 4];
  temp_v9 = (float)(&DAT_00536d18)[temp_v6 * 4] + (temp_v4 - temp_v9) * (float)(&DAT_00536d20)[temp_v6 * 4];
  temp_v4 = (float)(&DAT_00536d14)[temp_v2 * 4] + (temp_v5 - temp_v12) * (float)(&DAT_00536d1c)[temp_v2 * 4];
  temp_v5 = (float)(&DAT_00536d18)[temp_v2 * 4] + (temp_v5 - temp_v12) * (float)(&DAT_00536d20)[temp_v2 * 4];
  if (in_s0 * 0.7111111f < 0.0f) {
    temp_v10 = -temp_v10;
  }
  if (in_s1 * 0.7111111f < 0.0f) {
    temp_v3 = -temp_v3;
  }
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v4 = -temp_v4;
  }
  *(float *)(param_1 + 0x1e0) = -temp_v3;
  *(float *)(param_1 + 0x1c0) = temp_v5 * temp_v9;
  *(float *)(param_1 + 0x1d0) = temp_v4 * temp_v9;
  *(float *)(param_1 + 0x1c4) = temp_v10 * temp_v5 * temp_v3 - temp_v11 * temp_v4;
  *(float *)(param_1 + 0x1c8) = temp_v10 * temp_v4 + temp_v11 * temp_v5 * temp_v3;
  *(float *)(param_1 + 0x1e4) = temp_v10 * temp_v9;
  *(float *)(param_1 + 0x1e8) = temp_v11 * temp_v9;
  *(float *)(param_1 + 0x1d4) = temp_v11 * temp_v5 + temp_v10 * temp_v4 * temp_v3;
  *(float *)(param_1 + 0x1d8) = temp_v11 * temp_v4 * temp_v3 - temp_v10 * temp_v5;
  *(unsigned int *)(param_1 + 0x1cc) = 0;
  *(unsigned int *)(param_1 + 0x1dc) = 0;
  *(unsigned int *)(param_1 + 0x1ec) = 0;
  return;
}

} /* extern "C" */
