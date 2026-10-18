/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187230` (_code @ 0x187230, 0x408 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0019cb50. */
/* Supplied declaration required: FUN_001b63b0. */


void FUN_00187230(int param_1,float *param_2,float *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float *pfVar4;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  
  temp_v2 = 0;
  if (*(char *)(param_1 + 0x700) != '\0') {
    temp_v15 = 40.743664f;
    temp_v12 = 1.0f;
    temp_v14 = 0x3f800054;
    temp_v13 = 0.0f;
    do {
      temp_v0 = param_1 + temp_v2 * 0x70;
      if (*(char *)(temp_v0 + 0x28) != '\x05') {
        temp_v9 = *(float *)(temp_v0 + 0x20);
        temp_v6 = *(float *)(temp_v0 + 0x1c);
        temp_v7 = *(float *)(temp_v0 + 0x24);
        temp_v1 = param_1 + temp_v2 * 0x10;
        *(float *)(temp_v1 + 0x380) =
             param_2[3] + *param_2 * temp_v6 + param_2[1] * temp_v9 + param_2[2] * temp_v7;
        *(float *)(temp_v1 + 900) =
             param_2[7] + param_2[4] * temp_v6 + param_2[5] * temp_v9 + param_2[6] * temp_v7;
        *(float *)(temp_v1 + 0x388) =
             param_2[0xb] + param_2[8] * temp_v6 + param_2[9] * temp_v9 + param_2[10] * temp_v7;
        temp_v6 = *(float *)(temp_v0 + 0x1c);
        temp_v7 = *(float *)(temp_v0 + 0x20);
        temp_v9 = *(float *)(temp_v0 + 0x24);
        *(float *)(temp_v1 + 0x400) =
             param_3[3] + *param_3 * temp_v6 + param_3[1] * temp_v7 + param_3[2] * temp_v9;
        *(float *)(temp_v1 + 0x404) =
             param_3[7] + param_3[4] * temp_v6 + param_3[5] * temp_v7 + param_3[6] * temp_v9;
        *(float *)(temp_v1 + 0x408) =
             param_3[0xb] + param_3[8] * temp_v6 + param_3[9] * temp_v7 + param_3[10] * temp_v9;
        *(float *)(temp_v1 + 0x38c) = temp_v12;
        *(float *)(temp_v1 + 0x40c) = temp_v12;
      }
      else {
        temp_v7 = *(float *)(temp_v0 + 0x50);
        temp_v9 = *(float *)(temp_v0 + 0x54);
        temp_v6 = *(float *)(temp_v0 + 0x58);
        temp_v1 = param_1 + temp_v2 * 0x10;
        *(float *)(temp_v1 + 0x380) = (-(*param_2 * temp_v7) - param_2[1] * temp_v9) - param_2[2] * temp_v6
        ;
        *(float *)(temp_v1 + 900) = (-(param_2[4] * temp_v7) - param_2[5] * temp_v9) - param_2[6] * temp_v6
        ;
        *(float *)(temp_v1 + 0x388) =
             (-(param_2[8] * temp_v7) - param_2[9] * temp_v9) - param_2[10] * temp_v6;
        temp_v9 = *(float *)(temp_v0 + 0x50);
        temp_v6 = *(float *)(temp_v0 + 0x54);
        temp_v7 = *(float *)(temp_v0 + 0x58);
        *(float *)(temp_v1 + 0x400) = (-(*param_3 * temp_v9) - param_3[1] * temp_v6) - param_3[2] * temp_v7
        ;
        *(float *)(temp_v1 + 0x404) =
             (-(param_3[4] * temp_v9) - param_3[5] * temp_v6) - param_3[6] * temp_v7;
        *(float *)(temp_v1 + 0x408) =
             (-(param_3[8] * temp_v9) - param_3[9] * temp_v6) - param_3[10] * temp_v7;
        *(float *)(temp_v1 + 0x38c) = temp_v13;
        *(float *)(temp_v1 + 0x40c) = temp_v13;
      }
      temp_v7 = *(float *)(temp_v0 + 0x50);
      temp_v6 = *(float *)(temp_v0 + 0x54);
      temp_v9 = *(float *)(temp_v0 + 0x58);
      temp_v1 = param_1 + temp_v2 * 0x10;
      *(float *)(temp_v1 + 0x480) = *param_2 * temp_v7 + param_2[1] * temp_v6 + param_2[2] * temp_v9;
      *(float *)(temp_v1 + 0x484) = param_2[4] * temp_v7 + param_2[5] * temp_v6 + param_2[6] * temp_v9;
      *(float *)(temp_v1 + 0x488) = param_2[8] * temp_v7 + param_2[9] * temp_v6 + param_2[10] * temp_v9;
      temp_v6 = *(float *)(temp_v0 + 0x58);
      temp_v7 = *(float *)(temp_v0 + 0x50);
      temp_v9 = *(float *)(temp_v0 + 0x54);
      *(float *)(temp_v1 + 0x500) = *param_3 * temp_v7 + param_3[1] * temp_v9 + param_3[2] * temp_v6;
      *(float *)(temp_v1 + 0x504) = param_3[4] * temp_v7 + param_3[5] * temp_v9 + param_3[6] * temp_v6;
      *(float *)(temp_v1 + 0x508) = param_3[8] * temp_v7 + param_3[9] * temp_v9 + param_3[10] * temp_v6;
      temp_v6 = temp_v12;
      if (*(char *)(temp_v0 + 0x28) != '\a') {
        temp_v6 = temp_v13;
      }
      *(float *)(temp_v1 + 0x48c) = temp_v6;
      temp_v6 = temp_v12;
      if (*(char *)(temp_v0 + 0x28) != '\a') {
        temp_v6 = temp_v13;
      }
      *(float *)(temp_v1 + 0x50c) = temp_v6;
      temp_v6 = temp_v12;
      if ((*(unsigned char *)(temp_v0 + 0x2a) & 2) == 0) {
        temp_v6 = temp_v13;
      }
      temp_v8 = *(unsigned int *)(temp_v0 + 0x5c);
      temp_v10 = *(unsigned int *)(temp_v0 + 0x60);
      temp_v11 = *(unsigned int *)(temp_v0 + 100);
      *(float *)(temp_v1 + 0x60c) = temp_v6;
      *(unsigned int *)(temp_v1 + 0x600) = temp_v8;
      *(unsigned int *)(temp_v1 + 0x604) = temp_v10;
      *(unsigned int *)(temp_v1 + 0x608) = temp_v11;
      temp_v6 = *(float *)(temp_v0 + 0x6c);
      temp_v3 = temp_v6 < temp_v13;
      temp_v4 = temp_v6 == temp_v13;
      temp_v5 = NAN(temp_v6) || NAN(temp_v13);
      if (!temp_v4 && !temp_v3) {
        temp_v5 = SBORROW4(0x40490fdb,(int)temp_v6);
        temp_v3 = 0x40490fdb - (int)temp_v6 < 0;
        temp_v4 = temp_v6 == 3.1415927f;
      }
      if (!(temp_v4 || temp_v3 != temp_v5)) {
        temp_v6 = temp_v6 * temp_v15;
        temp_v8 = *(unsigned int *)(temp_v0 + 0x68);
        temp_v7 = temp_v13;
        FUN_001b63b0();
        *(unsigned int *)(temp_v1 + 0x580) = temp_v8;
        *(float *)(temp_v1 + 0x584) = temp_v6;
        *(float *)(temp_v1 + 0x588) = temp_v13;
        *(float *)(temp_v1 + 0x58c) = temp_v12;
        temp_v13 = temp_v7;
      }
      else {
        pfVar4 = (float *)(temp_v1 + 0x580);
        *pfVar4 = *(float *)(temp_v0 + 0x68);
        if (temp_v6 == temp_v13) {
          *(unsigned int *)(temp_v1 + 0x584) = temp_v14;
          pfVar4 = (float *)(temp_v1 + 0x588);
          *pfVar4 = temp_v13;
          *(float *)(temp_v1 + 0x58c) = temp_v12;
        }
        if (temp_v6 != temp_v13) {
          pfVar4[1] = temp_v6;
          pfVar4[2] = temp_v13;
          pfVar4[3] = temp_v13;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)(unsigned int)*(unsigned char *)(param_1 + 0x700));
  }
  if (*(char *)(param_1 + 0x6a9) != '\0') {
    FUN_0019cb50(param_1 + 0x6e0,param_2,param_1 + 0x6d0);
    FUN_0019cb50(param_1 + 0x6f0,param_3,param_1 + 0x6d0);
    *(unsigned int *)(param_1 + 0x6ec) = *(unsigned int *)(param_1 + 0x6dc);
    *(unsigned int *)(param_1 + 0x6fc) = *(unsigned int *)(param_1 + 0x6dc);
  }
  return;
}
