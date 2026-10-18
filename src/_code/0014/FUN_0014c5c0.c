/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c5c0` (_code @ 0x14c5c0, 0x1cc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern int FUN_0014f994(void);
extern unsigned char FUN_001523d8(void);
extern float FUN_00282ea8(void);
/* Supplied declaration required: FUN_002b5b44. */
/* Supplied declaration required: FUN_002bb270. */


void FUN_0014c5c0(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  long long temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float *pfVar8;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  
  if (*(char *)((int)param_1 + 0x1f6) == '\x01') {
    temp_v4 = *param_2;
    param_1[1] = param_2[1] + param_1[1] + (unsigned int)romwright_carry_4(temp_v4,*param_1);
    *param_1 = temp_v4 + *param_1;
    param_1[2] = param_1[2] + 1;
    temp_v2 = FUN_0014f994();
    param_1[3] = temp_v2 + param_1[3];
    if ((char)param_1[0x6d] == '\x01') {
      temp_v7 = *param_2;
      temp_v6 = param_2[1];
      temp_v12 = FUN_002b5b44(0,1000000000,0xffb0ff0,0);
      temp_v4 = (unsigned int)(temp_v12 >> 0x20);
      temp_v5 = (unsigned int)((temp_v12 & 0xffffffff) * (unsigned long long)temp_v7 >> 0x20);
      temp_v0 = (temp_v12 & 0xffffffff) * (unsigned long long)temp_v6;
      temp_v9 = (unsigned int)temp_v0;
      temp_v8 = (unsigned int)((unsigned long long)temp_v7 * (unsigned long long)temp_v4);
      temp_v10 = temp_v9 + temp_v8;
      FUN_002b5b44(temp_v10 + temp_v5,
                   ((int)temp_v4 >> 0x1f) * temp_v7 + (int)((unsigned long long)temp_v7 * (unsigned long long)temp_v4 >> 0x20)
                   + ((int)temp_v6 >> 0x1f) * (int)temp_v12 + (int)((unsigned long long)temp_v0 >> 0x20) +
                   (unsigned int)romwright_carry_4(temp_v9,temp_v8) + temp_v6 * temp_v4 + (unsigned int)romwright_carry_4(temp_v10,temp_v5),1000,0);
      temp_v3 = (float)FUN_00282ea8();
      pfVar8 = (float *)(param_1 + 4);
      temp_v3 = temp_v3 * 0.02045408f;
      if ((temp_v3 < 0.0f) || ((int)temp_v3 >= 0x42c80001)) {
        param_1[0x6c] = param_1[0x6c] + 1;
      }
      temp_v11 = *pfVar8;
      if (*pfVar8 < temp_v3) {
        temp_v11 = temp_v3;
      }
      temp_v2 = (int)temp_v3;
      *pfVar8 = temp_v11;
      if (temp_v2 < 0x65) {
        pfVar8[temp_v2 + 2] = (float)((int)pfVar8[temp_v2 + 2] + 1);
      }
      param_1[0x6b] = param_1[0x6b] + 1;
      param_1[5] = (unsigned int)((float)param_1[5] + temp_v3);
      if (param_1[0x7e] != 0) {
        if ((int)param_1[0x81] < (int)param_1[0x80]) {
          pfVar8 = (float *)(param_1[0x7e] + param_1[0x81] * 8);
          FUN_002bb270();
          temp_v1 = FUN_001523d8();
          *(unsigned char *)(pfVar8 + 1) = temp_v1;
          *(char *)((int)pfVar8 + 5) = (char)param_1[0x7f];
          *pfVar8 = temp_v3;
          param_1[0x81] = param_1[0x81] + 1;
        }
      }
      param_1[0x7f] = 0;
    }
  }
  return;
}
