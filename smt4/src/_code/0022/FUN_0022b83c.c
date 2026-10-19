/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b83c` (_code @ 0x22b83c, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_0022b83c(int param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  int temp_v4;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v0 = in_fpscr & 0xfffffff;
  temp_v4 = (int)(*(float *)(param_1 + 0x50) - 400.0f);
  temp_v5 = (int)(*(float *)(param_1 + 0x54) - 240.0f);
  temp_v7 = param_2[1];
  temp_v3 = *param_2;
  if (*param_2 <= 0.0f) {
    temp_v3 = 0.0f;
  }
  temp_v1 = temp_v0 | ((unsigned int)(temp_v7 < 0.0f) << 0x1f) | ((unsigned int)(temp_v7 == 0.0f) << 0x1e);
  *param_2 = temp_v3;
  temp_v2 = (unsigned char)(temp_v1 >> 0x18);
  temp_v6 = 0.0f;
  if (!(unsigned char)((temp_v2 >> 6) & 1) && (unsigned char)(temp_v2 >> 7) == (temp_v7 != temp_v7)) {
    temp_v6 = temp_v7;
  }
  temp_v7 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v1 >> 0x16) & 3);
  param_2[1] = temp_v6;
  temp_v1 = temp_v0 | ((unsigned int)(temp_v3 < temp_v7) << 0x1f) | ((unsigned int)(temp_v3 == temp_v7) << 0x1e);
  temp_v2 = (unsigned char)(temp_v1 >> 0x18);
  if (!(unsigned char)((temp_v2 >> 6) & 1) && (unsigned char)(temp_v2 >> 7) == ((temp_v3 != temp_v3) || (temp_v7 != temp_v7))) {
    temp_v3 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v1 >> 0x16) & 3);
  }
  *param_2 = temp_v3;
  temp_v3 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v0 = temp_v0 | ((unsigned int)(temp_v6 < temp_v3) << 0x1f) | ((unsigned int)(temp_v6 == temp_v3) << 0x1e);
  temp_v2 = (unsigned char)(temp_v0 >> 0x18);
  if (!(unsigned char)((temp_v2 >> 6) & 1) && (unsigned char)(temp_v2 >> 7) == ((temp_v6 != temp_v6) || (temp_v3 != temp_v3))) {
    temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v0 >> 0x16) & 3);
  }
  param_2[1] = temp_v6;
  return;
}
