/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212128` (_code @ 0x212128, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00212128(int param_1,int *param_2,char *param_3,int *param_4,float *param_5,float *param_6,
                 float *param_7)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  if ('\x03' < *param_3) {
    return;
  }
  temp_v0 = *param_2;
  *param_2 = temp_v0 + 1;
  if (*param_4 < temp_v0 + 1) {
    *param_2 = 0;
    *param_6 = 0.0f;
    temp_v1 = (int)*param_3;
    temp_v0 = 1;
    temp_v3 = SBORROW4(temp_v1,3);
    if (temp_v1 < 3) {
      temp_v3 = SBORROW4(temp_v1 + 1,4);
    }
    if (temp_v1 - 3 < 0 != temp_v3) {
      while (temp_v1 = *(int *)(param_1 + (*param_3 + temp_v0) * 0x18 + 0x58) -
                     *(int *)(param_1 + *param_3 * 0x18 + 0x58), *param_4 = temp_v1, temp_v1 < 1) {
        temp_v0 = temp_v0 + 1;
        if (*param_3 + temp_v0 >= 4) {
          return;
        }
      }
      temp_v2 = param_1 + *param_3 * 0x18;
      temp_v1 = param_1 + (*param_3 + temp_v0) * 0x18;
      temp_v4 = (float)VectorSignedToFloat(*(int *)(temp_v1 + 0x58) - *(int *)(temp_v2 + 0x58),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (float)VectorSignedToFloat(*(int *)(temp_v1 + 0x54) - *(int *)(temp_v2 + 0x54),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      *param_6 = temp_v5 / temp_v4;
      temp_v4 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + (*param_3 + temp_v0) * 0x18 + 0x54)
                                         ,(unsigned char)(in_fpscr >> 0x16) & 3);
      *param_7 = temp_v4;
      *param_3 = *param_3 + (char)temp_v0;
    }
    return;
  }
  temp_v4 = *param_7;
  temp_v5 = *param_6;
  temp_v6 = *param_5 + temp_v5;
  *param_5 = temp_v6;
  if (temp_v5 >= 0.0f) {
    if (temp_v4 < temp_v6) {
      *param_5 = temp_v4;
      return;
    }
  }
  else if (temp_v6 <= temp_v4) {
    *param_5 = temp_v4;
    return;
  }
  temp_v4 = temp_v6;
  *param_5 = temp_v4;
  return;
}
