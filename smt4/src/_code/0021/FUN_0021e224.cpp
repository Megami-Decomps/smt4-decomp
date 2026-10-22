/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e224` (_code @ 0x21e224, 0x218 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00281e34(void);
int mathDistanceBetweenPoints(void);
int FUN_00287b0c(void);

extern int g_vectorQueueWork; /* 0x447e40 */

/* Supplied declaration required: FUN_00281e34. */
/* Supplied declaration required: mathDistanceBetweenPoints. */
/* Supplied declaration required: FUN_00287b0c. */


void FUN_0021e224(char *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  
  if ((*param_1 != '\0') && (param_1[1] == '\0')) {
    temp_v3 = *(float *)(param_1 + 0xc);
    mathDistanceBetweenPoints();
    temp_v14 = 0.0f;
    if (temp_v3 < 0.0f) {
      temp_v3 = -temp_v3;
    }
    if (*(float *)(param_1 + 0x24) <= temp_v3) {
      temp_v5 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0xc);
      temp_v8 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x14);
      temp_v13 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x10);
      if (temp_v3 != 0.0f) {
        temp_v11 = temp_v5;
        FUN_00281e34();
        temp_v12 = temp_v5 * 57.32484f;
        temp_v6 = *(float *)(param_1 + 0x28);
        FUN_00287b0c();
        temp_v5 = temp_v6;
        if (temp_v6 < temp_v14) {
          temp_v5 = -temp_v6;
        }
        temp_v10 = temp_v5 * 0.16666667f;
        if ((int)(temp_v5 * 0.16666667f) < 0x3f800000) {
          temp_v10 = 1.0f;
        }
        if (temp_v10 < temp_v5) {
          if (temp_v14 <= temp_v6) {
            temp_v12 = *(float *)(param_1 + 0x28) + temp_v10;
          }
          else {
            temp_v12 = *(float *)(param_1 + 0x28) - temp_v10;
          }
        }
        temp_v3 = 1.0f / temp_v3;
        temp_v5 = temp_v11 * temp_v3;
        temp_v13 = temp_v13 * temp_v3;
        temp_v8 = temp_v8 * temp_v3;
        *(float *)(param_1 + 0x28) = temp_v12;
      }
      temp_v3 = *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + temp_v5 * temp_v3;
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + temp_v13 * temp_v3;
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + temp_v8 * temp_v3;
      return;
    }
    temp_v0 = *(int *)(param_1 + 8);
    temp_v2 = temp_v0 + 1;
    *(int *)(param_1 + 8) = temp_v2;
    temp_v1 = g_vectorQueueWork + *(int *)(param_1 + 4) * 0x284;
    if (temp_v0 + 2 < *(int *)(temp_v1 + 0x280)) {
      temp_v1 = temp_v1 + temp_v2 * 0x28;
      temp_v4 = *(unsigned int *)(temp_v1 + 8);
      temp_v7 = *(unsigned int *)(temp_v1 + 0xc);
      *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(temp_v1 + 4);
      *(unsigned int *)(param_1 + 0x10) = temp_v4;
      *(unsigned int *)(param_1 + 0x14) = temp_v7;
      temp_v4 = *(unsigned int *)(temp_v1 + 0x2c);
      temp_v7 = *(unsigned int *)(temp_v1 + 0x30);
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(temp_v1 + 0x34);
      *(unsigned int *)(param_1 + 0x18) = temp_v4;
      *(unsigned int *)(param_1 + 0x1c) = temp_v7;
      return;
    }
    temp_v0 = *(int *)(temp_v1 + 0x280) - 1;
    *(int *)(param_1 + 8) = temp_v0;
    param_1[1] = '\x01';
    temp_v0 = temp_v1 + temp_v0 * 0x28;
    temp_v4 = *(unsigned int *)(temp_v0 + 4);
    temp_v7 = *(unsigned int *)(temp_v0 + 8);
    temp_v9 = *(unsigned int *)(temp_v0 + 0xc);
    *(unsigned int *)(param_1 + 0x18) = temp_v4;
    *(unsigned int *)(param_1 + 0x1c) = temp_v7;
    *(unsigned int *)(param_1 + 0x20) = temp_v9;
    *(unsigned int *)(param_1 + 0xc) = temp_v4;
    *(unsigned int *)(param_1 + 0x10) = temp_v7;
    *(unsigned int *)(param_1 + 0x14) = temp_v9;
    param_1[1] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    temp_v4 = *(unsigned int *)(temp_v1 + 4);
    temp_v7 = *(unsigned int *)(temp_v1 + 8);
    *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(temp_v1 + 0xc);
    *(unsigned int *)(param_1 + 0xc) = temp_v4;
    *(unsigned int *)(param_1 + 0x10) = temp_v7;
    temp_v4 = *(unsigned int *)(temp_v1 + 0x30);
    temp_v7 = *(unsigned int *)(temp_v1 + 0x34);
    *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(temp_v1 + 0x2c);
    *(unsigned int *)(param_1 + 0x1c) = temp_v4;
    *(unsigned int *)(param_1 + 0x20) = temp_v7;
  }
  return;
}

} /* extern "C" */
