/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036785c` (_code @ 0x36785c, 0x73c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int slotSetRequest(...);
int FUN_00246014(void);
int mapIfOverlayRelease(void);
int mapSetSceneState(...);

int soundVolumeSettingSet(...);
int FUN_0014af98(void);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00233e10(int, unsigned int);
int mapEaseSceneHeading(void);
int FUN_002e364c(...);
int FUN_00303460(...);
int mapIfReleaseSlot3(void);
int FUN_00324e38(unsigned int);
int FUN_00327ee8(void);
int FUN_0033abd4(void);
int mathPositionHeadingDegrees(void);
int FUN_003b5714(unsigned int, unsigned int, unsigned int);
int sysPlayVoice(...);
int FUN_003d4ed8(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned char DAT_005f162e; /* 0x5f162e */
extern unsigned int DAT_005f16a0; /* 0x5f16a0 */
extern unsigned int DAT_005f16a4; /* 0x5f16a4 */
extern unsigned int DAT_005f16a8; /* 0x5f16a8 */
extern unsigned int DAT_005f16ac; /* 0x5f16ac */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern float DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern unsigned char DAT_005f185a; /* 0x5f185a */

/* Supplied declaration required: soundVolumeSettingSet. */
extern unsigned int soundVolumeSettingGet(void);
/* Supplied declaration required: FUN_0014af98. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_00246014. */
/* Supplied declaration required: mapIfOverlayRelease. */
/* Supplied declaration required: mapEaseSceneHeading. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: mapIfReleaseSlot3. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_0033abd4. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: FUN_003b5714. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d4ed8. */
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);


void FUN_0036785c(void)

{
/* irregular: 21 native warning(s); review required */
  float *pfVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  
  temp_v0 = soundVolumeSettingGet();
  if (*(int *)(g_lmapScene + 4) < 10) {
    mapEaseSceneHeading();
    temp_v1 = g_lmapScene;
    *(float *)(g_lmapScene + 0x1c) =
         *(float *)(g_lmapScene + 0x1c) +
         (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * 0.33333334f;
    *(float *)(temp_v1 + 0x20) =
         *(float *)(temp_v1 + 0x20) +
         (*(float *)(temp_v1 + 0x2c) - *(float *)(temp_v1 + 0x20)) * 0.16666667f;
    *(float *)(temp_v1 + 0x24) =
         *(float *)(temp_v1 + 0x24) +
         (*(float *)(temp_v1 + 0x30) - *(float *)(temp_v1 + 0x24)) * 0.33333334f;
  }
  temp_v1 = g_lmapScene;
  temp_v7 = 0x40000000;
  temp_v8 = 0;
  temp_v2 = *(int *)(g_lmapScene + 4);
  if (temp_v2 != 0x35) {
    if (temp_v2 < 0x36) {
      temp_v6 = 0.017453292f;
      if (temp_v2 == 0x32) {
        DAT_005f185a = 0;
        *(unsigned int *)(g_lmapView + 0xc) = 2;
        *(unsigned int *)(temp_v1 + 0x54) = 5;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
        temp_v6 = *(float *)(temp_v1 + 0xa0) - *(float *)(temp_v1 + 0x1c);
        *(float *)(temp_v1 + 0xb0) = temp_v6;
        *(float *)(temp_v1 + 0xb4) = *(float *)(temp_v1 + 0xa4) - *(float *)(temp_v1 + 0x20);
        *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xa8) - *(float *)(temp_v1 + 0x24);
        *(float *)(temp_v1 + 0xb0) = temp_v6 * 0.025f;
        *(float *)(temp_v1 + 0xb4) = *(float *)(temp_v1 + 0xb4) * 0.025f;
        *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xb8) * 0.025f;
        temp_v1 = g_lmapScene;
        *(unsigned int *)(g_lmapScene + 0xbc) = 0;
        temp_v2 = *(int *)(temp_v1 + 4);
        *(int *)(temp_v1 + 4) = temp_v2 + 1;
        *(unsigned int *)(temp_v1 + 8) = 0;
        FUN_002e364c(g_lmapScene + 0x28);
        FUN_00327ee8();
        return;
      }
      if (temp_v2 >= 0x33) {
        if (temp_v2 != 0x33) {
          if (temp_v2 != 0x34) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          pfVar1 = (float *)(g_lmapScene + 0x20);
          temp_v3 = *(int *)(g_lmapScene + 0xbc);
          temp_v6 = *(float *)(g_lmapScene + 0x68) - 2.0f;
          *(float *)(g_lmapScene + 0x68) = temp_v6;
          *(float *)(temp_v1 + 0x20) = *pfVar1 + temp_v6;
          if (temp_v3 < 0x28) {
            *(int *)(temp_v1 + 0xbc) = temp_v3 + 1;
            *(float *)(temp_v1 + 0x1c) = *(float *)(temp_v1 + 0x1c) + *(float *)(temp_v1 + 0xb0);
            *(float *)(temp_v1 + 0x24) = *(float *)(temp_v1 + 0x24) + *(float *)(temp_v1 + 0xb8);
          }
          *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
          if (temp_v6 <= 0.0f) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          *(int *)(temp_v1 + 4) = temp_v2 + 1;
          *(unsigned int *)(temp_v1 + 8) = 0;
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        temp_v1 = *(int *)(g_lmapScene + 8) + 1;
        *(int *)(g_lmapScene + 8) = temp_v1;
        if (temp_v1 < 0x15) {
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        FUN_0033abd4();
        switch(DAT_005f162e) {
        case 0:
          temp_v7 = 0x10002c4;
          FUN_003d4ed8(temp_v7);
          break;
        case 1:
          temp_v7 = 0x10002c6;
          FUN_003d4ed8(temp_v7);
          break;
        case 2:
          temp_v7 = 0x10002c8;
          FUN_003d4ed8(temp_v7);
          break;
        case 3:
          temp_v7 = 0x10002ca;
          FUN_003d4ed8(temp_v7);
          break;
        case 4:
          temp_v7 = 0x10002cc;
          FUN_003d4ed8(temp_v7);
          break;
        case 5:
          temp_v7 = 0x10002d9;
          FUN_003d4ed8(temp_v7);
          break;
        default:
        }
LAB_00367d2c:
        FUN_00324e38(0xffffffff);
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_0014af98();
        soundVolumeSettingSet();
        sysPlayVoice(0x10002e5);
        soundVolumeSettingSet(temp_v0);
        temp_v1 = g_lmapScene;
        *(unsigned int *)(g_lmapScene + 0x68) = 0x41000000;
        *(float *)(temp_v1 + 0x20) = *(float *)(temp_v1 + 0x20) + 8.0f;
        temp_v2 = *(int *)(temp_v1 + 4);
        *(int *)(temp_v1 + 4) = temp_v2 + 1;
        *(unsigned int *)(temp_v1 + 8) = 0;
        FUN_002e364c(g_lmapScene + 0x28);
        FUN_00327ee8();
        return;
      }
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          if (temp_v2 == 2) {
            *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
            FUN_00233e10(1,DAT_005f16ac);
            temp_v1 = FUN_004d0584();
            if (temp_v1 != 0) {
              FUN_003b5714(DAT_005f16a0,DAT_005f16a4,DAT_005f16a8);
              temp_v1 = g_lmapScene;
              *(unsigned int *)(g_lmapScene + 0xa0) = DAT_005f16b0;
              *(float *)(temp_v1 + 0xa4) = DAT_005f16b4 - 500.0f;
              *(unsigned int *)(temp_v1 + 0xa8) = DAT_005f16b8;
              *(unsigned int *)(temp_v1 + 0xac) = *(unsigned int *)(temp_v1 + 0x50);
              *(unsigned int *)(temp_v1 + 4) = 0x32;
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
                *(unsigned int *)(temp_v1 + 0x58) = 0x40a00000;
                FUN_00233e10(0,DAT_005f16ac);
                mapIfReleaseSlot3();
                temp_v1 = g_lmapScene;
                *(unsigned int *)(g_lmapScene + 4) = 0x5a;
                *(unsigned int *)(temp_v1 + 8) = 0;
              }
            }
          }
        }
        else {
          *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
          FUN_00233e10(1,DAT_005f16ac);
          temp_v1 = g_lmapScene;
          if (*(int *)(g_lmapScene + 8) >= 3) {
            temp_v2 = *(int *)(g_lmapScene + 4);
            *(unsigned int *)(g_lmapScene + 0x54) = 0x1d;
            *(unsigned int *)(temp_v1 + 0x58) = temp_v7;
            *(int *)(temp_v1 + 4) = temp_v2 + 1;
            *(unsigned int *)(temp_v1 + 8) = 0;
          }
        }
        FUN_002e364c(g_lmapScene + 0x28);
        FUN_00327ee8();
        return;
      }
      *(unsigned int *)(g_lmapScene + 0x54) = 0;
      *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
      *(unsigned char *)(temp_v1 + 0x6c) = 0;
      temp_v4 = *(float *)(temp_v1 + 0x28);
      mathPositionHeadingDegrees();
      temp_v1 = g_lmapScene;
      temp_v9 = 180.0f;
      *(float *)(g_lmapScene + 0x50) = temp_v4;
      temp_v0 = DAT_005f16b8;
      temp_v5 = DAT_005f16b4;
      *(unsigned int *)(temp_v1 + 0x28) = DAT_005f16b0;
      *(float *)(temp_v1 + 0x2c) = temp_v5;
      *(unsigned int *)(temp_v1 + 0x30) = temp_v0;
      temp_v5 = (temp_v4 + 180.0f) * temp_v6;
      FUN_001bc124();
      temp_v1 = g_lmapScene;
      temp_v4 = 110.0f;
      *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v5 * 110.0f;
      temp_v6 = (*(float *)(temp_v1 + 0x50) + temp_v9) * temp_v6;
      FUN_001bbf0c();
      *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v6 * temp_v4;
      FUN_00303460(10);
      *(unsigned int *)(g_lmapView + 0xb0) = 0xffffffff;
      sysPlaySe(0xdd);
      FUN_00233e10(1,DAT_005f16ac);
      FUN_001bc124();
      FUN_001bbf0c();
      FUN_00246014();
      temp_v2 = *(int *)(g_lmapScene + 4);
      temp_v1 = g_lmapScene;
    }
    else {
      if (temp_v2 == 0x5a) {
        *(int *)(temp_v1 + 4) = temp_v2 + 1;
        *(unsigned int *)(temp_v1 + 8) = 0;
        FUN_002e364c(g_lmapScene + 0x28);
        FUN_00327ee8();
        return;
      }
      if (temp_v2 < 0x5b) {
        if (temp_v2 != 0x36) {
          if (temp_v2 != 0x37) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
          mapIfOverlayRelease();
          temp_v0 = 0x12;
          mapSetSceneState(temp_v0);
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        mapIfReleaseSlot3();
        temp_v2 = g_lmapScene;
        *(unsigned int *)(g_lmapScene + 0x68) = temp_v8;
        temp_v1 = g_lmapView;
        *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(temp_v2 + 0x50);
        *(unsigned int *)(temp_v1 + 0xb0) = 0;
        FUN_00303460(0);
        temp_v1 = g_lmapScene;
      }
      else {
        if (temp_v2 != 0x5b) {
          if ((temp_v2 != 0x5c) ||
             (temp_v1 = *(int *)(g_lmapScene + 8) + 1, *(int *)(g_lmapScene + 8) = temp_v1, temp_v1 < 4)
             ) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          temp_v0 = 1;
          mapSetSceneState(temp_v0);
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        mapIfOverlayRelease();
        temp_v1 = g_lmapScene;
      }
      temp_v2 = *(int *)(temp_v1 + 4);
    }
  }
  else {
    pfVar1 = (float *)(g_lmapScene + 0x20);
    temp_v2 = *(int *)(g_lmapScene + 0xbc);
    temp_v6 = *(float *)(g_lmapScene + 0x68) - 2.0f;
    *(float *)(g_lmapScene + 0x68) = temp_v6;
    *(float *)(temp_v1 + 0x20) = *pfVar1 + temp_v6;
    if (temp_v2 < 0x28) {
      *(int *)(temp_v1 + 0xbc) = temp_v2 + 1;
      *(float *)(temp_v1 + 0x1c) = *(float *)(temp_v1 + 0x1c) + *(float *)(temp_v1 + 0xb0);
      *(float *)(temp_v1 + 0x24) = *(float *)(temp_v1 + 0x24) + *(float *)(temp_v1 + 0xb8);
    }
    temp_v2 = *(int *)(temp_v1 + 8) + 1;
    *(int *)(temp_v1 + 8) = temp_v2;
    if (temp_v2 == 10) {
      sysPlayVoice(0x1000112);
    }
    if (*(int *)(g_lmapScene + 8) == 0x1e) {
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
    }
    if ((*(int *)(g_lmapScene + 8) < 0x1f) || (temp_v1 = FUN_002e07f4(), temp_v1 == 0)) {
      FUN_002e364c(g_lmapScene + 0x28);
      FUN_00327ee8();
      return;
    }
    temp_v2 = *(int *)(g_lmapScene + 4);
    temp_v1 = g_lmapScene;
  }
  *(int *)(temp_v1 + 4) = temp_v2 + 1;
  *(unsigned int *)(temp_v1 + 8) = 0;
  FUN_002e364c(g_lmapScene + 0x28);
  FUN_00327ee8();
  return;
}

} /* extern "C" */
