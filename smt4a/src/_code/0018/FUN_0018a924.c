/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a924` (_code @ 0x18a924, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001b4030. */


void FUN_0018a924(float *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v2 = romwright_fabs_4(in_s0);
  if ((int)temp_v2 >= 0x47800000) {
    FUN_001b4030();
  }
  temp_v4 = VectorFloatToUnsigned(temp_v2,3);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  temp_v1 = temp_v4;
  temp_v5 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v6 = (float)(&DAT_00536d18)[temp_v1 * 4];
  temp_v7 = (float)(&DAT_00536d20)[temp_v1 * 4];
  temp_v3 = (float)(&DAT_00536d14)[temp_v1 * 4] + (temp_v2 - temp_v5) * (float)(&DAT_00536d1c)[temp_v1 * 4];
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v3 = -temp_v3;
  }
  *param_1 = temp_v3;
  *param_2 = temp_v6 + (temp_v2 - temp_v5) * temp_v7;
  return;
}
