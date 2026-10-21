/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002750d8` (_code @ 0x2750d8, 0x434 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int calcHeadingRoundedToCardinalDirection(void);
int distSpatial(void);
int FUN_002b5cd4(void);
int FUN_00330108(float *, float *, unsigned char [52]);
int mathPositionHeadingDegrees(void);
int FUN_00384830(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

extern int DAT_00581280; /* 0x581280 */
extern int g_lmapScene; /* 0x581288 */
extern float DAT_005f170c; /* 0x5f170c */
extern float DAT_005f1710; /* 0x5f1710 */
extern unsigned int DAT_005f1714; /* 0x5f1714 */
extern float DAT_005f1718; /* 0x5f1718 */
extern float DAT_005f171c; /* 0x5f171c */
extern float DAT_005f1720; /* 0x5f1720 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: calcHeadingRoundedToCardinalDirection. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_00330108. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: FUN_00384830. */


void FUN_002750d8(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  float *pfVar1;
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned long long temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  float fStack_6c;
  float temp_v14;
  float temp_v15;
  float fStack_60;
  unsigned int uStack_5c;
  unsigned char temp_v16 [52];
  
  temp_v0 = DAT_00581280;
  *(unsigned char *)(DAT_00581280 + 0xf40) = 0;
  if (param_1 == 0) {
    temp_v0 = 0;
    do {
      temp_v1 = temp_v0 + 1;
      temp_v0 = DAT_00581280 + temp_v0 * 0x3c;
      if (*(char *)(temp_v0 + 0xc) != '\0') {
        *(unsigned char *)(temp_v0 + 0xe) = 0;
      }
      temp_v0 = temp_v1;
    } while (temp_v1 < 0x40);
    return;
  }
  if (param_2 != 0) {
    *(unsigned char *)(temp_v0 + 0xf0c) = 1;
  }
  if (*(char *)(temp_v0 + 0xf0c) != '\0') {
    temp_v10 = 100.0f;
    temp_v0 = temp_v0 + *(int *)(temp_v0 + 0xf10) * 0x3c;
    *(char *)(temp_v0 + 0xe) = (char)param_1;
    temp_v6 = *(float *)(temp_v0 + 0x28);
    temp_v4 = 0.0f;
    temp_v11 = 180.0f;
    *(unsigned char *)(DAT_00581280 + 0xf40) = 1;
    temp_v12 = 0x3c8efa3543c80000;
    DAT_005f170c = *(float *)(temp_v0 + 0x1c);
    DAT_005f1710 = *(float *)(temp_v0 + 0x20) + 100.0f;
    DAT_005f1714 = *(unsigned int *)(temp_v0 + 0x24);
    if (*(short *)(temp_v0 + 0x10) != 2) {
      temp_v3 = temp_v6 * 0.017453292f;
      temp_v9 = temp_v3;
      FUN_001bc124();
      DAT_005f1718 = *(float *)(temp_v0 + 0x1c) + temp_v3 * (float)temp_v12;
      DAT_005f171c = *(float *)(temp_v0 + 0x20) + temp_v10;
      FUN_001bbf0c();
      temp_v14 = *(float *)(temp_v0 + 0x24) + temp_v9 * (float)temp_v12;
    }
    else {
      temp_v1 = *(int *)(temp_v0 + 0x1c);
      FUN_00384830();
      temp_v9 = *(float *)(temp_v0 + 0x28);
      if (temp_v1 >= 0x42dc0000) {
        calcHeadingRoundedToCardinalDirection();
        temp_v9 = temp_v9 + temp_v11;
      }
      else {
        calcHeadingRoundedToCardinalDirection();
      }
      temp_v1 = (int)temp_v9;
      temp_v9 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = temp_v9 * (float)((unsigned long long)temp_v12 >> 0x20);
      FUN_001bc124();
      DAT_005f1718 = *(float *)(temp_v0 + 0x1c) + temp_v9 * (float)temp_v12;
      DAT_005f171c = *(float *)(temp_v0 + 0x20) + temp_v10;
      temp_v9 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = temp_v9 * (float)((unsigned long long)temp_v12 >> 0x20);
      FUN_001bbf0c();
      temp_v14 = *(float *)(temp_v0 + 0x24) + temp_v9 * (float)temp_v12;
    }
    DAT_005f1720 = temp_v14;
    if (*(int *)(temp_v0 + 0x3c) != 0) {
      temp_v15 = DAT_005f170c;
      fStack_60 = DAT_005f1710;
      uStack_5c = DAT_005f1714;
      temp_v13 = DAT_005f1718;
      fStack_6c = DAT_005f171c;
      pfVar1 = &temp_v13;
      FUN_00330108(pfVar1,&temp_v15,temp_v16);
      if (pfVar1 == (float *)0xffffffff) {
        return;
      }
      temp_v9 = temp_v15;
      distSpatial();
      temp_v8 = CONCAT44(temp_v9,temp_v6);
      temp_v9 = 90.0f;
      mathPositionHeadingDegrees();
      temp_v6 = (float)temp_v8;
      FUN_002b5cd4();
      temp_v1 = 0;
      temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v4 <= temp_v6) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
        temp_v9 = -90.0f;
      }
      do {
        temp_v6 = *(float *)(temp_v0 + 0x28) + temp_v4;
        calcHeadingRoundedToCardinalDirection();
        temp_v5 = CONCAT44(temp_v4,temp_v6);
        temp_v6 = temp_v6 * (float)((unsigned long long)temp_v12 >> 0x20);
        temp_v4 = temp_v6;
        FUN_001bc124();
        DAT_005f1718 = *(float *)(temp_v0 + 0x1c) + temp_v6 * (float)temp_v12;
        FUN_001bbf0c();
        temp_v14 = *(float *)(temp_v0 + 0x24) + temp_v4 * (float)temp_v12;
        temp_v15 = DAT_005f170c;
        fStack_60 = DAT_005f1710;
        uStack_5c = DAT_005f1714;
        temp_v13 = DAT_005f1718;
        fStack_6c = DAT_005f171c;
        pfVar1 = &temp_v13;
        DAT_005f1720 = temp_v14;
        FUN_00330108(pfVar1,&temp_v15,temp_v16);
        if (pfVar1 == (float *)0xffffffff) {
          *(int *)(temp_v0 + 0x28) = (int)temp_v5;
          return;
        }
        temp_v4 = temp_v15;
        distSpatial();
        temp_v2 = (temp_v2 & 0xfffffff) | ((unsigned int)((float)((unsigned long long)temp_v8 >> 0x20) <= temp_v4) << 0x1d);
        if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
          temp_v7 = (unsigned int)temp_v5;
          temp_v4 = temp_v15;
          distSpatial();
          temp_v8 = CONCAT44(temp_v4,temp_v7);
        }
        temp_v4 = (float)((unsigned long long)temp_v5 >> 0x20) + temp_v9;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 4);
      if (*(short *)(temp_v0 + 0x10) != 2) {
        temp_v6 = (float)temp_v8 * (float)((unsigned long long)temp_v12 >> 0x20);
        temp_v4 = temp_v6;
        FUN_001bc124();
        temp_v11 = (float)temp_v12;
        DAT_005f1718 = *(float *)(temp_v0 + 0x1c) + temp_v6 * temp_v11;
        DAT_005f171c = *(float *)(temp_v0 + 0x20) + temp_v10;
        FUN_001bbf0c();
        DAT_005f1720 = *(float *)(temp_v0 + 0x24) + temp_v4 * temp_v11;
      }
      else {
        temp_v1 = *(int *)(temp_v0 + 0x1c);
        FUN_00384830();
        temp_v4 = *(float *)(temp_v0 + 0x28);
        if (temp_v1 >= 0x42dc0000) {
          calcHeadingRoundedToCardinalDirection();
          temp_v4 = temp_v4 + temp_v11;
        }
        else {
          calcHeadingRoundedToCardinalDirection();
        }
        temp_v0 = (int)temp_v4;
        temp_v4 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v4 = temp_v4 * (float)((unsigned long long)temp_v12 >> 0x20);
        FUN_001bc124();
        DAT_005f1718 = *(float *)(g_lmapScene + 0x1c) + temp_v4 * (float)temp_v12;
        DAT_005f171c = *(float *)(g_lmapScene + 0x1c) + temp_v10;
        temp_v4 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v4 = temp_v4 * (float)((unsigned long long)temp_v12 >> 0x20);
        FUN_001bbf0c();
        DAT_005f1720 = *(float *)(g_lmapScene + 0x1c) + temp_v4 * (float)temp_v12;
      }
    }
  }
  temp_v0 = DAT_00581280;
  if (param_2 != 0) {
    *(unsigned char *)(DAT_00581280 + 0xf0c) = 0;
    *(unsigned int *)(temp_v0 + 0xf4c) = 0;
  }
  return;
}

} /* extern "C" */
