/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a2d8` (_code @ 0x39a2d8, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */


unsigned int FUN_0039a2d8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  
  temp_v0 = (float)VectorSignedToFloat(param_3 - param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = (int)romwright_fabs_4(temp_v0);
  if (param_5 < param_4) {
    temp_v2 = (float)VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = (temp_v2 / temp_v0) * 1.5707964f;
    if (param_6 != 0) {
      FUN_001bc124();
    }
    else {
      FUN_001bbf0c();
      temp_v0 = 1.0f - temp_v0;
    }
    temp_v1 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    if (param_2 < param_3) {
      temp_v3 = (int)(temp_v2 + temp_v1 * temp_v0);
      *param_1 = temp_v3;
      if (temp_v3 < param_3) {
        return 0;
      }
    }
    else {
      temp_v3 = (int)(temp_v2 - temp_v1 * temp_v0);
      *param_1 = temp_v3;
      if (param_3 < temp_v3) {
        return 0;
      }
    }
  }
  *param_1 = param_3;
  return 1;
}

} /* extern "C" */
