/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dfc64` (_code @ 0x1dfc64, 0x450 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aocHandleButtons(...);
int FUN_002ae898(...);
int FUN_002ae8e4(...);
int FUN_002b8e84(...);
int jobStop(...);
int FUN_002c58c8(...);
int VectorSignedToFloat(...);

typedef struct fn_001dfc64_arg0 fn_001dfc64_arg0;
struct fn_001dfc64_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    byte field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x13];
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x4];
    void *field_0x54; /* +0x54 */
    float field_0x58; /* +0x58 */
    byte field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x3];
    undefined4 field_0x60; /* +0x60 */
    uint field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    byte field_0x70; /* +0x70 */
    byte field_0x71; /* +0x71 */
};

extern unsigned int g_aocSystem; /* 0x433158 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern int FUN_00293a04(int, unsigned int);
/* Supplied declaration required: aocHandleButtons. */
extern unsigned int FUN_00294090(int, unsigned int);
extern int FUN_00294fe0(unsigned int);
extern int FUN_0029505c(unsigned int);
extern int FUN_00296d6c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002ae8e4. */
extern int FUN_002ae98c(unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002b8660(void);
/* Supplied declaration required: FUN_002b8e84. */
extern int jobGetWork(void);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_002c58c8. */


unsigned int FUN_001dfc64(fn_001dfc64_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  
  temp_v0 = jobGetWork();
  temp_v1 = *(int *)(temp_v0 + 0xc);
  if (temp_v1 != 0) {
    if (temp_v1 == 1) {
      temp_v1 = FUN_002c1d5c();
      if (temp_v1 != 0) {
        return 0;
      }
      if (*(int *)(temp_v0 + 0x4c) != 0) {
        temp_v7 = FUN_00294090(*(int *)(temp_v0 + 0x4c),1);
        *(unsigned int *)(temp_v0 + 0xc) = 2;
        *(unsigned int *)(temp_v0 + 0x48) = temp_v7;
        return 0;
      }
      temp_v1 = FUN_002ae98c(g_aocSystem,*(unsigned int *)(temp_v0 + 0x3c),*(unsigned int *)(temp_v0 + 0x40),
                           1);
      if (temp_v1 != 0) {
        FUN_002ae8e4(g_aocSystem,*(unsigned int *)(temp_v0 + 0x3c),*(unsigned int *)(temp_v0 + 0x40),
                     0x10000);
      }
      else {
        FUN_002c58c8(*(unsigned int *)(temp_v0 + 0x3c),*(unsigned int *)(temp_v0 + 0x40));
      }
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      if (*(char *)(temp_v0 + 100) == '\0') {
        return 0;
      }
      FUN_002c58c8(0x32,0);
      return 0;
    }
    if (temp_v1 == 2) {
      temp_v1 = FUN_0029505c(*(unsigned int *)(temp_v0 + 0x48));
      if (temp_v1 == 0) {
        return 0;
      }
      temp_v1 = *(int *)(*(int *)(temp_v0 + 0x48) + 0x10);
      temp_v8 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x10),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v6 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0x12),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      *(int *)(temp_v0 + 0x10) = (int)(temp_v8 + (200.0f - temp_v6));
      temp_v6 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v8 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 0x16),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      *(int *)(temp_v0 + 0x14) = (int)((-143.0f - temp_v6) + temp_v8 + 195.0f);
      aocHandleButtons(*(int *)(temp_v0 + 0x48),7);
      *(unsigned int *)(temp_v0 + 0xc) = 3;
      return 0;
    }
    if (temp_v1 != 3) {
      return 0;
    }
    temp_v1 = FUN_00294fe0(*(unsigned int *)(temp_v0 + 0x48));
    if (temp_v1 == 0) {
      return 0;
    }
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    temp_v1 = FUN_00296d6c(0,4);
    temp_v7 = VectorSignedToFloat(temp_v1 << 2,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v0 + 0x58) = temp_v7;
    return 0;
  }
  temp_v6 = 0.0f;
  if ((*(int *)(temp_v0 + 0x48) != 0) && (*(char *)(temp_v0 + 0x5c) != '\0')) {
    temp_v8 = *(float *)(temp_v0 + 0x58) + 2.0f;
    *(float *)(temp_v0 + 0x58) = temp_v8;
    temp_v1 = FUN_00293a04(*(int *)(temp_v0 + 0x48),0);
    if (temp_v8 <= *(float *)(temp_v0 + 0x58)) {
      *(float *)(temp_v0 + 0x58) = *(float *)(temp_v0 + 0x58) - temp_v8;
    }
    temp_v4 = *(float *)(temp_v0 + 0x24) == temp_v6;
    if (!temp_v4) {
      temp_v1 = *(int *)(temp_v0 + 0x60);
      temp_v4 = temp_v1 == 0;
    }
    if (!temp_v4) {
      temp_v3 = *(int *)(temp_v0 + 0x10);
      if (temp_v3 != 0) {
        temp_v1 = temp_v1 + temp_v3;
        *(int *)(temp_v0 + 0x10) = temp_v1;
        if (temp_v3 < 0) {
          if (0 < temp_v1) {
            temp_v1 = 0;
          }
        }
        else if (temp_v1 < 1) {
          temp_v1 = 0;
        }
        *(int *)(temp_v0 + 0x10) = temp_v1;
      }
    }
  }
  if (*(char *)(temp_v0 + 100) != '\0') {
    if (*(char *)(temp_v0 + 0x70) == '\0') {
      FUN_002b8e84(0x1000171);
      *(unsigned char *)(temp_v0 + 0x70) = 1;
    }
    *(int *)(temp_v0 + 0x6c) = (*(int *)(temp_v0 + 0x6c) + 1) % 0x96;
    temp_v2 = *(int *)(temp_v0 + 0x68) + 1;
    temp_v1 = (int)(((long long)(int)temp_v2 * -0x77777777 + ((unsigned long long)temp_v2 << 0x20)) >> 0x20);
    *(unsigned int *)(temp_v0 + 0x68) = temp_v2 + ((temp_v1 >> 4) - (temp_v1 >> 0x1f)) * -0x1e;
  }
  if (*(float *)(temp_v0 + 0x1c) != temp_v6) {
    temp_v8 = *(float *)(temp_v0 + 0x1c) * 0.7f;
    *(float *)(temp_v0 + 0x1c) = temp_v8;
    if ((int)romwright_fabs_4(temp_v8) < 0x3f800000) {
      *(float *)(temp_v0 + 0x1c) = temp_v6;
    }
  }
  temp_v8 = *(float *)(temp_v0 + 0x28);
  if (temp_v8 == temp_v6) {
    if (((*(float *)(temp_v0 + 0x2c) != temp_v6) &&
        (temp_v8 = *(float *)(temp_v0 + 0x2c) - 0.166f, *(float *)(temp_v0 + 0x2c) = temp_v8, temp_v8 <= temp_v6)
        ) && (*(float *)(temp_v0 + 0x2c) = temp_v6, -1 < *(int *)(temp_v0 + 0x44))) {
      FUN_002ae898(*(unsigned int *)(temp_v0 + 0x3c));
      *(unsigned int *)(temp_v0 + 0x44) = 0xffffffff;
    }
    return 0;
  }
  if (*(char *)(temp_v0 + 100) != '\0') {
    if (temp_v8 > temp_v6) {
      temp_v5 = *(float *)(temp_v0 + 0x24) + temp_v8;
      *(float *)(temp_v0 + 0x24) = temp_v5;
      *(float *)(temp_v0 + 0x28) = temp_v8 * 0.77f;
    }
    else {
      if (*(char *)(temp_v0 + 0x71) == '\0') {
        *(unsigned char *)(temp_v0 + 0x71) = 1;
        FUN_002b8e84(0x1000172);
      }
      temp_v5 = *(float *)(temp_v0 + 0x24) + *(float *)(temp_v0 + 0x28);
      *(float *)(temp_v0 + 0x24) = temp_v5;
    }
  }
  else {
    temp_v5 = *(float *)(temp_v0 + 0x24) + *(float *)(temp_v0 + 0x28);
    *(float *)(temp_v0 + 0x24) = temp_v5;
  }
  temp_v7 = 0x3f800000;
  if (temp_v6 > temp_v5) {
    *(float *)(temp_v0 + 0x24) = temp_v6;
    *(float *)(temp_v0 + 0x28) = temp_v6;
    if (*(char *)(temp_v0 + 0x30) != '\0') {
      jobStop(param_1,0);
    }
  }
  else if ((int)temp_v5 >= 0x3f800001) {
    *(unsigned int *)(temp_v0 + 0x24) = 0x3f800000;
    *(float *)(temp_v0 + 0x28) = temp_v6;
  }
  temp_v1 = FUN_002c1d5c();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002b8660();
    if (temp_v1 == 0) {
      *(unsigned int *)(temp_v0 + 0x24) = temp_v7;
      *(float *)(temp_v0 + 0x28) = temp_v6;
    }
  }
  if (((*(float *)(temp_v0 + 0x2c) != temp_v6) &&
      (temp_v8 = *(float *)(temp_v0 + 0x2c) - 0.166f, *(float *)(temp_v0 + 0x2c) = temp_v8, temp_v8 <= temp_v6))
     && (*(float *)(temp_v0 + 0x2c) = temp_v6, -1 < *(int *)(temp_v0 + 0x44))) {
    FUN_002ae898(*(unsigned int *)(temp_v0 + 0x3c));
    *(unsigned int *)(temp_v0 + 0x44) = 0xffffffff;
  }
  return 0;
}

} /* extern "C" */
