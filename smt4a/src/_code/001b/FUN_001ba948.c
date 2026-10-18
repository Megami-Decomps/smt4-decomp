/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ba948` (_code @ 0x1ba948, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern unsigned int *FUN_001ba5bc(unsigned int, unsigned int *, unsigned int);


unsigned int * FUN_001ba948(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  
  if (param_3 != 0) {
    param_2 = (unsigned int *)FUN_001ba5bc(param_1[8],param_2,1);
  }
  *param_2 = (*(unsigned int *)((int)param_1 + 0x16) & 0xffffff) |
             ((unsigned int)*(unsigned char *)((int)param_1 + 0x19) << 0x18);
  param_2[1] = 0xf0091;
  param_2[2] = (param_1[1] >> 0x10) | (param_1[1] << 0x10);
  param_2[3] = 0xf0092;
  temp_v0 = (char)param_1[3];
  if ((temp_v0 == '\x03' || temp_v0 == '\x04') || (temp_v0 == '\x05')) {
    temp_v3 = 1;
  }
  else {
    temp_v3 = 0;
  }
  if ((char)param_1[2] == '\f') {
    temp_v1 = 2;
  }
  else {
    temp_v1 = 0;
  }
  param_2[4] = ((unsigned int)*(unsigned char *)((int)param_1 + 0xb) << 1) | (temp_v3 << 2) | (temp_v1 << 4) |
               ((unsigned int)*(unsigned char *)((int)param_1 + 9) << 8) |
               ((unsigned int)*(unsigned char *)((int)param_1 + 10) << 0xc) |
               ((unsigned int)(temp_v0 == '\x02' || temp_v0 == '\x05') << 0x18);
  temp_v2 = 0;
  param_2[5] = 0xf0093;
  if (!((char)param_1[3] == '\x03' || (char)param_1[3] == '\0')) {
    temp_v5 = (float)param_1[4];
    temp_v6 = 0.0f;
    if ((temp_v5 != 0.0f) && ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17 != 0xff)) {
      temp_v5 = (temp_v5 + 16.0f) * 256.0f;
      if (0.0f <= temp_v5) {
        temp_v4 = SBORROW4((int)temp_v5,0x46000000);
        temp_v3 = (int)temp_v5 - 0x46000000;
        if ((int)temp_v5 >= 0x46000000) {
          temp_v6 = 8191.0f;
        }
        else {
          temp_v4 = SBORROW4((int)temp_v5,0x45800000);
          temp_v3 = (int)temp_v5 - 0x45800000;
          temp_v6 = temp_v5;
        }
        if (temp_v3 < 0 == temp_v4) {
          temp_v2 = VectorFloatToUnsigned(temp_v6 - 4096.0f,3);
          param_2[6] = temp_v2 | ((unsigned int)*(unsigned char *)((int)param_1 + 0x15) << 0x10) |
                       ((unsigned int)(unsigned char)param_1[5] << 0x18);
          param_2[7] = 0xf0094;
          param_2[8] = *param_1 >> 3;
          param_2[9] = 0xf0095;
          param_2[10] = (unsigned int)(unsigned char)param_1[2];
          param_2[0xb] = 0xf0096;
          return param_2 + 0xc;
        }
      }
      temp_v2 = VectorFloatToUnsigned(temp_v6 + 4096.0f,3);
    }
    param_2[6] = temp_v2 | ((unsigned int)*(unsigned char *)((int)param_1 + 0x15) << 0x10) |
                 ((unsigned int)(unsigned char)param_1[5] << 0x18);
    param_2[7] = 0xf0094;
  }
  else {
    param_2[6] = 0;
    param_2[7] = 0xf0094;
  }
  param_2[8] = *param_1 >> 3;
  param_2[9] = 0xf0095;
  param_2[10] = (unsigned int)(unsigned char)param_1[2];
  param_2[0xb] = 0xf0096;
  return param_2 + 0xc;
}
