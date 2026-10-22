/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d0480` (_code @ 0x2d0480, 0x24c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(unsigned int, double);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int calcHeadingRoundedToCardinalDirection(void);
int distSpatial(void);
int mathAngleDeltaDegrees(void);
int FUN_00330108(float *, float *, unsigned char [56]);
int mathPositionHeadingDegrees(void);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern int g_lmapView; /* 0x5806a4 */
extern float DAT_005f0c94; /* 0x5f0c94 */
extern float DAT_005f0c98; /* 0x5f0c98 */
extern float DAT_005f0c9c; /* 0x5f0c9c */
extern float DAT_005f0ca0; /* 0x5f0ca0 */
extern float DAT_005f170c; /* 0x5f170c */
extern float DAT_005f1710; /* 0x5f1710 */
extern float DAT_005f1714; /* 0x5f1714 */
extern float DAT_005f1718; /* 0x5f1718 */
extern float DAT_005f171c; /* 0x5f171c */
extern float DAT_005f1720; /* 0x5f1720 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: calcHeadingRoundedToCardinalDirection. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: mathAngleDeltaDegrees. */
/* Supplied declaration required: FUN_00330108. */
/* Supplied declaration required: mathPositionHeadingDegrees. */


void FUN_002d0480(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned char temp_v0;
  float *pfVar2;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float fStack_5c;
  float temp_v12;
  float temp_v13;
  float fStack_50;
  float fStack_4c;
  unsigned char temp_v14 [56];
  long long temp_v15;
  
  temp_v5 = 0.0f;
  temp_v6 = 400.0f;
  if (param_1 != 0) {
    temp_v0 = *(float *)(g_lmapView + 0x218) != 0.0f;
    DAT_005f170c = DAT_005f0c94;
    temp_v2 = temp_v5;
    if (temp_v0) {
      temp_v2 = 60.0f;
    }
    temp_v10 = 0x3c8efa35;
    if (temp_v0) {
      temp_v6 = 150.0f;
    }
    temp_v15 = (unsigned long long)(unsigned int)(temp_v2 + 100.0f) << 0x20;
    DAT_005f1710 = DAT_005f0c98 + temp_v2 + 100.0f;
    temp_v3 = DAT_005f0ca0 * 0.017453292f;
    DAT_005f1714 = DAT_005f0c9c;
    temp_v2 = temp_v3;
    temp_v4 = DAT_005f0ca0;
    FUN_001bc124();
    DAT_005f1718 = DAT_005f0c94 + temp_v3 * temp_v6;
    DAT_005f171c = DAT_005f0c98 + (float)((unsigned long long)temp_v15 >> 0x20);
    FUN_001bbf0c();
    temp_v12 = DAT_005f0c9c + temp_v2 * temp_v6;
    temp_v13 = DAT_005f170c;
    fStack_50 = DAT_005f1710;
    fStack_4c = DAT_005f1714;
    temp_v11 = DAT_005f1718;
    fStack_5c = DAT_005f171c;
    pfVar2 = &temp_v11;
    DAT_005f1720 = temp_v12;
    FUN_00330108(pfVar2,&temp_v13,temp_v14);
    if (pfVar2 != (float *)0xffffffff) {
      temp_v2 = temp_v13;
      distSpatial();
      temp_v7 = 90.0f;
      mathPositionHeadingDegrees();
      temp_v3 = temp_v4;
      mathAngleDeltaDegrees();
      temp_v1 = 0;
      if (temp_v4 < temp_v5) {
        temp_v7 = -90.0f;
      }
      do {
        temp_v9 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
        temp_v4 = DAT_005f0ca0 + temp_v5;
        calcHeadingRoundedToCardinalDirection();
        temp_v8 = temp_v4 * (float)temp_v10;
        temp_v15 = CONCAT44(temp_v9,temp_v8);
        FUN_001bc124();
        DAT_005f1718 = DAT_005f0c94 + temp_v8 * temp_v6;
        temp_v8 = (float)temp_v15;
        FUN_001bbf0c();
        temp_v12 = DAT_005f0c9c + temp_v8 * temp_v6;
        temp_v13 = DAT_005f170c;
        fStack_50 = DAT_005f1710;
        fStack_4c = DAT_005f1714;
        temp_v11 = DAT_005f1718;
        fStack_5c = DAT_005f171c;
        pfVar2 = &temp_v11;
        DAT_005f1720 = temp_v12;
        FUN_00330108(pfVar2,&temp_v13,temp_v14);
        if (pfVar2 == (float *)0xffffffff) {
          DAT_005f0ca0 = temp_v4;
          return;
        }
        temp_v8 = temp_v13;
        distSpatial();
        if (temp_v8 < temp_v2) {
          temp_v2 = temp_v13;
          temp_v3 = temp_v4;
          distSpatial();
        }
        temp_v4 = (float)((unsigned long long)temp_v15 >> 0x20);
        temp_v5 = temp_v5 + temp_v7;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 4);
      temp_v3 = temp_v3 * (float)temp_v10;
      temp_v5 = temp_v3;
      FUN_001bc124();
      DAT_005f1718 = DAT_005f0c94 + temp_v3 * temp_v6;
      DAT_005f171c = DAT_005f0c98 + temp_v4;
      FUN_001bbf0c();
      DAT_005f1720 = DAT_005f0c9c + temp_v5 * temp_v6;
    }
  }
  return;
}

} /* extern "C" */
