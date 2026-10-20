/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018878c` (_code @ 0x18878c, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(int, int);
int VectorFloatToUnsigned(double, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


void FUN_0018878c(int param_1,float *param_2)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  float in_s0;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  int temp_v8;
  float temp_v9;
  float temp_v10;
  
  *(unsigned int *)(param_1 + 8) = 0;
  temp_v10 = 0.0f;
  *(unsigned int *)(param_1 + 0xc) = 0xf00e6;
  temp_v7 = *param_2;
  temp_v9 = 8191.0f;
  temp_v5 = param_2[1] - temp_v7;
  if (temp_v5 == 0.0f || (unsigned int)romwright_fabs_4(temp_v5) >> 0x17 == 0xff) {
    temp_v2 = 0;
  }
  else {
    temp_v6 = (temp_v5 + 2.0f) * 2048.0f;
    temp_v5 = temp_v10;
    if (0.0f <= temp_v6) {
      temp_v4 = SBORROW4((int)temp_v6,0x46000000);
      temp_v1 = (int)temp_v6 - 0x46000000;
      temp_v5 = temp_v9;
      if ((int)temp_v6 < 0x46000000) {
        temp_v4 = SBORROW4((int)temp_v6,0x45800000);
        temp_v1 = (int)temp_v6 - 0x45800000;
        temp_v5 = temp_v6;
      }
      if (temp_v1 < 0 == temp_v4) {
        temp_v2 = VectorFloatToUnsigned(temp_v5 - 4096.0f,3);
      }
      else {
        temp_v2 = VectorFloatToUnsigned(temp_v5 + 4096.0f,3);
      }
    }
    else {
      temp_v2 = VectorFloatToUnsigned(temp_v5 + 4096.0f,3);
    }
  }
  temp_v1 = 0x7ff;
  if ((temp_v7 <= 0.0f) || ((unsigned int)romwright_fabs_4(temp_v7) >> 0x17 == 0xff)) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = temp_v1;
    if ((int)(temp_v7 * 2048.0f) < 0x45000000) {
      temp_v3 = VectorFloatToUnsigned(temp_v7 * 2048.0f,3);
    }
  }
  *(unsigned int *)(param_1 + 0x10) = temp_v2 | (temp_v3 << 0xd);
  temp_v3 = 1;
  *(unsigned int *)(param_1 + 0x14) = 0x7ff00e8;
  puVar2 = (unsigned int *)(param_1 + 0x18);
  do {
    puVar3 = puVar2;
    temp_v5 = param_2[temp_v3];
    if ((temp_v5 <= 0.0f) || ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17 == 0xff)) {
      temp_v8 = 0;
    }
    else {
      temp_v8 = temp_v1;
      if ((int)(temp_v5 * 2048.0f) < 0x45000000) {
        temp_v8 = VectorFloatToUnsigned(temp_v5 * 2048.0f,3);
      }
    }
    temp_v5 = (param_2 + temp_v3)[1] - temp_v5;
    if (temp_v5 == 0.0f || (unsigned int)romwright_fabs_4(temp_v5) >> 0x17 == 0xff) {
      temp_v2 = 0;
    }
    else {
      temp_v7 = (temp_v5 + 2.0f) * 2048.0f;
      temp_v5 = temp_v10;
      if (0.0f <= temp_v7) {
        temp_v4 = SBORROW4((int)temp_v7,0x46000000);
        temp_v0 = (int)temp_v7 - 0x46000000;
        temp_v5 = temp_v9;
        if ((int)temp_v7 < 0x46000000) {
          temp_v4 = SBORROW4((int)temp_v7,0x45800000);
          temp_v0 = (int)temp_v7 - 0x45800000;
          temp_v5 = temp_v7;
        }
        if (temp_v0 < 0 == temp_v4) {
          temp_v2 = VectorFloatToUnsigned(temp_v5 - 4096.0f,3);
        }
        else {
          temp_v2 = VectorFloatToUnsigned(temp_v5 + 4096.0f,3);
        }
      }
      else {
        temp_v2 = VectorFloatToUnsigned(temp_v5 + 4096.0f,3);
      }
    }
    temp_v3 = temp_v3 + 1;
    *puVar3 = temp_v2 | (temp_v8 << 0xd);
    puVar2 = puVar3 + 1;
  } while (temp_v3 < 0x7f);
  if (in_s0 == 0.0f || (unsigned int)romwright_fabs_4(in_s0) >> 0x17 == 0xff) {
    temp_v2 = 0;
  }
  else {
    temp_v5 = (in_s0 + 2.0f) * 2048.0f;
    if (0.0f <= temp_v5) {
      temp_v4 = SBORROW4((int)temp_v5,0x46000000);
      temp_v8 = (int)temp_v5 - 0x46000000;
      temp_v10 = temp_v9;
      if ((int)temp_v5 < 0x46000000) {
        temp_v4 = SBORROW4((int)temp_v5,0x45800000);
        temp_v8 = (int)temp_v5 - 0x45800000;
        temp_v10 = temp_v5;
      }
      if (temp_v8 < 0 == temp_v4) {
        temp_v2 = VectorFloatToUnsigned(temp_v10 - 4096.0f,3);
      }
      else {
        temp_v2 = VectorFloatToUnsigned(temp_v10 + 4096.0f,3);
      }
    }
    else {
      temp_v2 = VectorFloatToUnsigned(temp_v10 + 4096.0f,3);
    }
  }
  temp_v10 = param_2[temp_v3];
  if ((temp_v10 <= 0.0f) || ((unsigned int)romwright_fabs_4(temp_v10) >> 0x17 == 0xff)) {
    temp_v1 = 0;
  }
  else if ((int)(temp_v10 * 2048.0f) < 0x45000000) {
    temp_v1 = VectorFloatToUnsigned(temp_v10 * 2048.0f,3);
  }
  puVar3[1] = temp_v2 | (temp_v1 << 0xd);
  puVar3[2] = 0;
  return;
}

} /* extern "C" */
