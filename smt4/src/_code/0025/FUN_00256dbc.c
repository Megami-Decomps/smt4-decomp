/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256dbc` (_code @ 0x256dbc, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00256dbc(unsigned int *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  float temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar8;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  
  temp_v1 = param_1[4];
  piVar8 = (int *)*param_1;
  temp_v4 = *(int *)(temp_v1 + 0xc);
  if ((*(unsigned int *)(temp_v4 + 0x10) & 0x10000000) == 0) {
    if (*(int *)(temp_v1 + 8) >= 1) {
      temp_v0 = *(int *)(temp_v1 + 8) - 1;
    }
    else {
      temp_v5 = *(int *)(temp_v1 + 4) + 1;
      *(unsigned int *)(temp_v1 + 4) = temp_v5;
      if (*(unsigned int *)(temp_v4 + 0xc) <= temp_v5) {
        if ((*(unsigned int *)(temp_v4 + 0x10) & 0x10) == 0) {
          *(unsigned int *)(temp_v1 + 4) = 0;
        }
        else {
          *(unsigned short *)(param_1 + 5) = 0;
          *(int *)(temp_v1 + 4) = *(int *)(temp_v4 + 0xc) - 1;
        }
      }
      temp_v0 = (int)*(short *)(*(int *)(temp_v1 + 0x10) + *(int *)(temp_v1 + 4) * 0x18 + 0x12);
    }
    *(int *)(temp_v1 + 8) = temp_v0;
    psVar2 = (short *)(*(int *)(temp_v1 + 0x10) + *(int *)(temp_v1 + 4) * 0x18);
    if ((*(unsigned int *)(temp_v4 + 0x10) & 1) == 0) {
      temp_v2 = -NAN;
    }
    else {
      temp_v2 = *(float *)(*piVar8 + *(int *)(temp_v4 + 4) + *(int *)(temp_v1 + 4) * 4);
    }
    param_2[0xb] = temp_v2;
    temp_v5 = *(unsigned int *)(temp_v4 + 0x10);
    temp_v2 = *(float *)(piVar8[5] + psVar2[8] * 4);
    temp_v6 = (temp_v5 & 2) != 0;
    if (temp_v6) {
      temp_v5 = 2;
    }
    temp_v7 = *(unsigned int *)((int)temp_v2 + 0x14);
    temp_v9 = *(unsigned int *)((int)temp_v2 + 0x18);
    if (temp_v6) {
      *(short *)(param_2 + 10) = (short)temp_v5;
    }
    temp_v8 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    if (!temp_v6) {
      if ((temp_v5 & 4) == 0) {
        temp_v3 = 1;
      }
      else {
        temp_v3 = 3;
      }
      *(unsigned short *)(param_2 + 10) = temp_v3;
    }
    param_2[4] = *(float *)(psVar2 + 10);
    temp_v15 = (float)VectorSignedToFloat((int)psVar2[4] >> 4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = (float)VectorSignedToFloat((int)psVar2[1],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = (float)VectorSignedToFloat((int)psVar2[2],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = (float)VectorSignedToFloat((int)psVar2[3],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat((int)*psVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_2[6] = temp_v15 / temp_v8;
    temp_v15 = (float)VectorSignedToFloat((int)psVar2[5] >> 4,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_2[7] = temp_v15 / temp_v10;
    temp_v15 = (float)VectorSignedToFloat((int)psVar2[6] >> 4,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_2[8] = temp_v15 / temp_v8;
    temp_v15 = (float)VectorSignedToFloat((int)psVar2[7] >> 4,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_2[9] = temp_v15 / temp_v10;
    *param_2 = temp_v11 * 0.5f - temp_v13;
    param_2[1] = temp_v12 * 0.5f - temp_v14;
    param_2[0xc] = temp_v8;
    param_2[0xd] = temp_v10;
    param_2[2] = temp_v11 * 0.5f;
    param_2[3] = temp_v12 * 0.5f;
    param_2[5] = temp_v2;
  }
  return;
}
