/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f8350` (_code @ 0x1f8350, 0x484 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287b0c(void);
int mathPositionHeadingDegrees(void);

extern int DAT_004474f4; /* 0x4474f4 */
extern int g_lmapScene; /* 0x447e88 */
extern int g_gameState; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_00287b0c. */
/* Supplied declaration required: mathPositionHeadingDegrees. */


void FUN_001f8350(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v0 = DAT_004474f4;
  temp_v5 = 900.0f;
  temp_v7 = 200.0f;
  temp_v12 = 500.0f;
  temp_v10 = -600.0f;
  temp_v9 = 0.0f;
  *(unsigned int *)(DAT_004474f4 + 0x38) = 0xc2c80000;
  temp_v1 = g_lmapScene;
  temp_v11 = 70.0f;
  if (g_gameState != 0x19) {
    if (g_gameState != 0x1a) {
      if (g_gameState != 0x1b) {
        if ((g_gameState == 0x1c) && (DAT_0049f920 == 1)) {
          *(unsigned int *)(temp_v0 + 0x38) = 0xc42f0000;
          temp_v5 = *(float *)(temp_v1 + 0x20) + 1400.0f;
          temp_v10 = temp_v9;
          if ((0.0f <= temp_v5) && (temp_v10 = temp_v5, (int)temp_v5 >= 0x442f0001)) {
            temp_v10 = 700.0f;
          }
          temp_v8 = temp_v10 * 1.1428572f + -700.0f;
          temp_v5 = 100.0f;
          *(float *)(temp_v0 + 0x38) = temp_v8;
          temp_v10 = -700.0f;
        }
      }
      else if (DAT_0049f920 == 1) {
        *(unsigned int *)(temp_v0 + 0x38) = 0xc42f0000;
        temp_v8 = *(float *)(temp_v1 + 0x20) + 1500.0f;
        temp_v10 = temp_v9;
        if ((0.0f <= temp_v8) && (temp_v10 = temp_v8, (int)temp_v8 >= 0x44610001)) {
          temp_v10 = temp_v5;
        }
        temp_v8 = temp_v10 * 0.6666667f + -700.0f + 200.0f;
        *(float *)(temp_v0 + 0x38) = temp_v8;
        temp_v10 = -700.0f;
        if ((int)*(float *)(temp_v1 + 0x24) >= 0x447a0001) {
          temp_v6 = (*(float *)(temp_v1 + 0x24) - 1000.0f) * 0.5f;
          temp_v10 = temp_v9;
          if ((0.0f <= temp_v6) && (temp_v10 = temp_v6, (int)temp_v6 >= 0x43480001)) {
            temp_v10 = temp_v7;
          }
          temp_v8 = temp_v8 + temp_v10;
          *(float *)(temp_v0 + 0x38) = temp_v8;
          temp_v10 = -700.0f;
        }
      }
    }
    else if (DAT_0049f920 == 1) {
      *(unsigned int *)(temp_v0 + 0x38) = 0xc42f0000;
      temp_v8 = *(float *)(temp_v1 + 0x20) + 1500.0f;
      temp_v7 = temp_v9;
      if ((0.0f <= temp_v8) && (temp_v7 = temp_v8, (int)temp_v8 >= 0x44610001)) {
        temp_v7 = temp_v5;
      }
      temp_v7 = temp_v7 * 0.6666667f + -700.0f + 200.0f;
      *(float *)(temp_v0 + 0x38) = temp_v7;
      if (0xc3c80000 < (unsigned int)*(float *)(temp_v1 + 0x24)) {
        temp_v8 = *(float *)(temp_v1 + 0x24) - -400.0f;
        if (temp_v8 < 0.0f) {
          temp_v8 = -temp_v8;
        }
        if ((int)temp_v8 >= 0x43160001) {
          temp_v8 = 150.0f;
        }
        *(float *)(temp_v0 + 0x38) = temp_v7 + temp_v8;
      }
    }
  }
  else if (DAT_0049f920 == 3) {
    if ((int)*(float *)(g_lmapScene + 0x24) >= 0x453b8001) {
      temp_v6 = (*(float *)(g_lmapScene + 0x24) - 3000.0f) * 0.5f;
      temp_v8 = temp_v9;
      if ((0.0f <= temp_v6) && (temp_v8 = temp_v6, (int)temp_v6 >= 0x43480001)) {
        temp_v8 = temp_v7;
      }
      *(float *)(temp_v0 + 0x38) = temp_v8 + -100.0f;
    }
    if (0xc5160000 < (unsigned int)*(float *)(temp_v1 + 0x1c)) {
      temp_v8 = (*(float *)(temp_v1 + 0x1c) - -2400.0f) * 0.5f;
      if (temp_v8 < 0.0f) {
        temp_v8 = -temp_v8;
      }
      if ((int)temp_v8 >= 0x43c80001) {
        temp_v8 = 400.0f;
      }
      *(float *)(temp_v0 + 0x38) = *(float *)(temp_v0 + 0x38) + temp_v8;
    }
    if (0xc53b8000 < (unsigned int)*(float *)(temp_v1 + 0x24)) {
      temp_v8 = (*(float *)(temp_v1 + 0x24) - -3000.0f) * 0.5f;
      if (temp_v8 < 0.0f) {
        temp_v8 = -temp_v8;
      }
      if ((int)temp_v8 >= 0x43480001) {
        temp_v8 = temp_v7;
      }
      *(float *)(temp_v0 + 0x38) = *(float *)(temp_v0 + 0x38) + temp_v8;
    }
  }
  mathPositionHeadingDegrees();
  temp_v7 = *(float *)(DAT_004474f4 + 0x18);
  FUN_00287b0c();
  temp_v8 = *(float *)(g_lmapScene + 0x20);
  if (temp_v7 < temp_v9) {
    temp_v7 = -temp_v7;
  }
  temp_v2 = temp_v8 < temp_v10;
  temp_v3 = temp_v8 == temp_v10;
  temp_v4 = (temp_v8 != temp_v8) || (temp_v10 != temp_v10);
  if (!temp_v3 && !temp_v2) {
    temp_v2 = temp_v7 < temp_v11;
    temp_v3 = temp_v7 == temp_v11;
    temp_v4 = (temp_v7 != temp_v7) || (temp_v11 != temp_v11);
  }
  if (!temp_v3 && temp_v2 == temp_v4) {
    temp_v7 = temp_v7 - temp_v11;
    temp_v8 = temp_v8 - temp_v10;
    if ((int)temp_v7 >= 0x42b40001) {
      temp_v7 = 90.0f;
    }
    temp_v10 = temp_v9 + temp_v5 * 0.011111111f * temp_v7;
    if ((temp_v9 <= temp_v8) && (temp_v9 = temp_v8, (int)temp_v8 >= 0x43fa0001)) {
      temp_v9 = temp_v12;
    }
    *(float *)(DAT_004474f4 + 0x38) = *(float *)(DAT_004474f4 + 0x38) + temp_v9 * 0.002f * temp_v10;
  }
  return;
}

} /* extern "C" */
