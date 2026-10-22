/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036749c` (_code @ 0x36749c, 0x3c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00233e10(int, unsigned int);
int distSpatial(void);
int FUN_002dae68(void);
int FUN_002e364c(int);
int FUN_00303460(int);
int mapSetSceneState(unsigned int);
int FUN_00324e38(int);
int FUN_00327ee8(void);
int mathPositionHeadingDegrees(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned int DAT_005f16ac; /* 0x5f16ac */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern unsigned int DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern unsigned char DAT_005f185a; /* 0x5f185a */

extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_002dae68. */
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);


void FUN_0036749c(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  FUN_002dae68();
  temp_v1 = g_lmapScene;
  temp_v3 = *(float *)(g_lmapScene + 0x1c) +
          (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * 0.33333334f;
  *(float *)(g_lmapScene + 0x1c) = temp_v3;
  *(float *)(temp_v1 + 0x20) =
       *(float *)(temp_v1 + 0x20) + (*(float *)(temp_v1 + 0x2c) - *(float *)(temp_v1 + 0x20)) * 0.16666667f
  ;
  *(float *)(temp_v1 + 0x24) =
       *(float *)(temp_v1 + 0x24) + (*(float *)(temp_v1 + 0x30) - *(float *)(temp_v1 + 0x24)) * 0.33333334f
  ;
  temp_v2 = *(int *)(temp_v1 + 4);
  if (temp_v2 != 0xb) {
    if (temp_v2 < 0xc) {
      if (temp_v2 != 0) {
        if (temp_v2 == 1) {
          *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
          FUN_00233e10(1,DAT_005f16ac);
          temp_v1 = g_lmapScene;
          if (*(int *)(g_lmapScene + 8) >= 3) {
            temp_v2 = *(int *)(g_lmapScene + 4);
            *(unsigned int *)(g_lmapScene + 0x54) = 0x1d;
            *(unsigned int *)(temp_v1 + 0x58) = 0x40000000;
            *(int *)(temp_v1 + 4) = temp_v2 + 1;
            *(unsigned int *)(temp_v1 + 8) = 0;
          }
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        temp_v4 = 0x40a00000;
        if (temp_v2 == 2) {
          *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
          FUN_00233e10(1,DAT_005f16ac);
          temp_v2 = FUN_004d0584();
          temp_v1 = g_lmapScene;
          if (temp_v2 != 0) {
            *(unsigned int *)(g_lmapScene + 4) = 10;
            *(unsigned int *)(temp_v1 + 8) = 0;
          }
          else {
            temp_v1 = padButtonIsPressed(5);
            if ((temp_v1 != 0) || (temp_v1 = inputIsQuestMenuPressed(), temp_v1 != 0)) {
              temp_v1 = g_lmapView;
              *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
              *(unsigned int *)(temp_v1 + 0xb0) = 0;
              FUN_00303460(0);
              temp_v1 = g_lmapScene;
              *(unsigned int *)(g_lmapScene + 0x54) = 0;
              *(unsigned int *)(temp_v1 + 0x58) = temp_v4;
              FUN_00233e10(0,DAT_005f16ac);
              temp_v1 = g_lmapScene;
              *(unsigned int *)(g_lmapScene + 4) = 0x5a;
              *(unsigned int *)(temp_v1 + 8) = 0;
            }
          }
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        if (temp_v2 != 10) {
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        DAT_005f185a = 0;
        *(unsigned int *)(temp_v1 + 0x54) = 8;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40a00000;
        FUN_00324e38(1);
        temp_v2 = *(int *)(g_lmapScene + 4);
        temp_v1 = g_lmapScene;
      }
      else {
        *(unsigned int *)(temp_v1 + 0x54) = 0;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
        *(unsigned char *)(temp_v1 + 0x6c) = 0;
        distSpatial();
        temp_v0 = DAT_005f16b8;
        temp_v4 = DAT_005f16b4;
        temp_v1 = g_lmapScene;
        temp_v6 = 180.0f;
        temp_v5 = 0.017453292f;
        temp_v7 = 100.0f;
        if ((int)temp_v3 < 0x42700000) {
          *(unsigned int *)(g_lmapScene + 0x28) = DAT_005f16b0;
          *(unsigned int *)(temp_v1 + 0x2c) = temp_v4;
          *(unsigned int *)(temp_v1 + 0x30) = temp_v0;
          temp_v3 = (*(float *)(temp_v1 + 0x4c) + 180.0f) * 0.017453292f;
          FUN_001bc124();
          temp_v1 = g_lmapScene;
          *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v3 * temp_v7;
          temp_v5 = (*(float *)(temp_v1 + 0x4c) + temp_v6) * temp_v5;
          FUN_001bbf0c();
          temp_v1 = g_lmapScene;
          *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v5 * temp_v7;
          temp_v4 = *(unsigned int *)(temp_v1 + 0x28);
          mathPositionHeadingDegrees();
          *(unsigned int *)(g_lmapScene + 0x50) = temp_v4;
        }
        else {
          temp_v3 = *(float *)(g_lmapScene + 0x28);
          mathPositionHeadingDegrees();
          temp_v1 = g_lmapScene;
          *(float *)(g_lmapScene + 0x50) = temp_v3;
          temp_v0 = DAT_005f16b8;
          temp_v4 = DAT_005f16b4;
          *(unsigned int *)(temp_v1 + 0x28) = DAT_005f16b0;
          *(unsigned int *)(temp_v1 + 0x2c) = temp_v4;
          *(unsigned int *)(temp_v1 + 0x30) = temp_v0;
          temp_v3 = (temp_v3 + temp_v6) * temp_v5;
          FUN_001bc124();
          temp_v1 = g_lmapScene;
          *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v3 * temp_v7;
          temp_v5 = (*(float *)(temp_v1 + 0x50) + temp_v6) * temp_v5;
          FUN_001bbf0c();
          *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v5 * temp_v7;
        }
        FUN_00303460(10);
        *(unsigned int *)(g_lmapView + 0xb0) = 0xffffffff;
        sysPlaySe(0xdd);
        FUN_00233e10(1,DAT_005f16ac);
        temp_v2 = *(int *)(g_lmapScene + 4);
        temp_v1 = g_lmapScene;
      }
    }
    else if (temp_v2 != 0x5a && temp_v2 != 0x5b) {
      if ((temp_v2 != 0x5c) ||
         (temp_v2 = *(int *)(temp_v1 + 8) + 1, *(int *)(temp_v1 + 8) = temp_v2, temp_v2 < 4)) {
        FUN_002e364c(g_lmapScene + 0x28);
        FUN_00327ee8();
        return;
      }
      FUN_00324e38(0);
      temp_v4 = 1;
      mapSetSceneState(temp_v4);
      FUN_002e364c(g_lmapScene + 0x28);
      FUN_00327ee8();
      return;
    }
    *(int *)(temp_v1 + 4) = temp_v2 + 1;
    *(unsigned int *)(temp_v1 + 8) = 0;
  }
  else {
    temp_v2 = *(int *)(temp_v1 + 8) + 1;
    *(int *)(temp_v1 + 8) = temp_v2;
    if (temp_v2 < 0x10) {
      FUN_002e364c(g_lmapScene + 0x28);
      FUN_00327ee8();
      return;
    }
    temp_v4 = 0x10;
    mapSetSceneState(temp_v4);
  }
  FUN_002e364c(g_lmapScene + 0x28);
  FUN_00327ee8();
  return;
}

} /* extern "C" */
