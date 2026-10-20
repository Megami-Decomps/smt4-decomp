/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cb9f0` (_code @ 0x1cb9f0, 0x300 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001d07f4(unsigned char *);
int FUN_001d08fc(unsigned char *);

/* stack frame of param_3: 4 slot(s), 4 byte(s) */
typedef struct {
    unsigned char sp3D; /* 0x3d: local_3d */
    unsigned char sp3E; /* 0x3e: local_3e */
    unsigned char sp3F; /* 0x3f: local_3f */
    unsigned char sp40; /* 0x40: local_40 */
} param_3_stack;

extern signed char DAT_00646b39; /* 0x646b39 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_001d07f4. */
/* Supplied declaration required: FUN_001d08fc. */


void FUN_001cb9f0(int param_1,int param_2,float *param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  float temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  
  temp_v0 = DAT_00646b39;
  temp_v1 = 1.0f;
  temp_v6 = 0.0f;
  temp_v4 = *(float *)(param_1 + 0x44);
  temp_v9 = temp_v1;
  if ((temp_v4 <= 1.0f) && (temp_v9 = temp_v6, 0.0f <= temp_v4)) {
    temp_v9 = temp_v4;
  }
  temp_v10 = *(float *)(param_1 + 0x48);
  temp_v4 = temp_v1;
  if (((int)temp_v10 < 0x3f800001) && (temp_v4 = temp_v10, temp_v10 <= 0.0f)) {
    temp_v4 = temp_v6;
  }
  temp_v10 = *(float *)(param_1 + 0x4c);
  if (((int)temp_v10 < 0x3f800001) && (temp_v1 = temp_v10, temp_v10 <= 0.0f)) {
    temp_v1 = temp_v6;
  }
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v7 = 0;
  switch(*(unsigned char *)(param_1 + 0x2d)) {
  case 1:
    temp_v12 = 1;
    break;
  case 2:
    temp_v12 = 1;
    temp_v13 = 1;
    break;
  case 3:
    temp_v11 = 1;
    break;
  case 4:
    temp_v11 = 1;
    temp_v12 = 1;
    break;
  case 5:
    temp_v11 = 1;
    temp_v12 = 1;
    temp_v13 = 1;
    break;
  case 6:
    temp_v11 = 2;
    break;
  case 7:
    temp_v11 = 2;
    temp_v12 = 1;
    break;
  case 8:
    temp_v11 = 2;
    temp_v12 = 1;
    temp_v13 = 1;
  }
  temp_v14 = *(unsigned char *)(param_1 + 0x23);
  if (DAT_00646b39 != '\0') {
    temp_v10 = temp_v6;
    if (DAT_00646b39 == '\x01' || DAT_00646b39 == '\x02') {
      if ((*(int *)(param_1 + 8) < 2) || (*(char *)(param_1 + 0x2c) != '\x01')) {
        temp_v3 = *(float *)(param_1 + 0x30);
        if (*(int *)(param_1 + 8) == 2) {
          if (param_2 == 0) {
            temp_v3 = temp_v3 - 1.0f;
          }
          else if (param_2 == 1) {
            temp_v3 = temp_v3 + 1.0f;
          }
        }
        temp_v5 = temp_v3;
        FUN_001d07f4(&temp_v11);
        temp_v5 = 0.0f - temp_v5;
        FUN_001d07f4(&temp_v11);
        temp_v7 = CONCAT44(temp_v3,temp_v5);
      }
      else if (param_2 != 0) {
        if (param_2 == 1) {
          temp_v5 = 0.0f - *(float *)(param_1 + 0x30);
          temp_v3 = temp_v6;
          FUN_001d07f4(&temp_v11);
          temp_v7 = CONCAT44(temp_v6,temp_v5);
          temp_v6 = temp_v3;
        }
      }
      else {
        temp_v2 = *(unsigned int *)(param_1 + 0x30);
        FUN_001d07f4(&temp_v11);
        temp_v7 = romwright_piece_4_4(temp_v2,(int)temp_v7);
      }
    }
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x02') {
        temp_v6 = *(float *)(param_1 + 0x34);
        FUN_001d08fc(&temp_v11);
        temp_v10 = 2.0f - *(float *)(param_1 + 0x34);
        FUN_001d08fc(&temp_v11);
      }
    }
    else {
      temp_v6 = 0.0f;
      FUN_001d08fc(&temp_v11);
      temp_v10 = 2.0f;
      FUN_001d08fc(&temp_v11);
    }
  }
  else {
    temp_v2 = 0;
    FUN_001d07f4(&temp_v11);
    temp_v7 = romwright_piece_4_4(temp_v2,temp_v2);
    temp_v6 = 0.0f;
    FUN_001d08fc(&temp_v11);
    temp_v10 = 2.0f;
    FUN_001d08fc(&temp_v11);
  }
  temp_v8 = (float)((unsigned long long)temp_v7 >> 0x20);
  temp_v5 = temp_v6 * temp_v8;
  temp_v6 = temp_v6 * (float)temp_v7;
  temp_v3 = temp_v10 * (float)temp_v7;
  temp_v10 = temp_v10 * temp_v8;
  *param_3 = temp_v5 * temp_v9;
  param_3[4] = temp_v4 * temp_v5;
  param_3[1] = temp_v6 * temp_v9;
  param_3[5] = temp_v4 * temp_v6;
  param_3[0xb] = temp_v1 * temp_v3;
  param_3[8] = temp_v1 * temp_v5;
  param_3[9] = temp_v1 * temp_v6;
  param_3[10] = temp_v1 * temp_v10;
  param_3[2] = temp_v10 * temp_v9;
  param_3[3] = temp_v3 * temp_v9;
  param_3[6] = temp_v4 * temp_v10;
  param_3[7] = temp_v4 * temp_v3;
  return;
}

} /* extern "C" */
