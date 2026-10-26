/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e590` (_code @ 0x33e590, 0x57c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0x32];
    unsigned char f005f162e; /* 0x032 */
    u8 pad033[0x7d];
    unsigned int f005f16ac; /* 0x0b0 */
    unsigned int f005f16b0; /* 0x0b4 */
    unsigned int f005f16b4; /* 0x0b8 */
    unsigned int f005f16b8; /* 0x0bc */
    unsigned int f005f16bc; /* 0x0c0 */
    u8 pad0c4[0xc];
    float f005f16cc; /* 0x0d0 */
    u8 pad0d4[0x18a];
    unsigned char f005f185a; /* 0x25e */
};
extern GameStateView g_gameState;


int slotSetRequest(...);
int mapIfReleaseResource(void);
int mapSetSceneState(...);

int soundVolumeSettingSet(...);
int FUN_0014af98(void);
int sysPlaySe(int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int mapIfShowActionMarker(void);
int FUN_00233e10(...);
int FUN_002342b8(void);
int mapIfReleaseSlot4(void);
int mapEaseSceneHeading(void);
int FUN_002e364c(...);
int FUN_00303460(int);
int FUN_00324e38(unsigned int);
int FUN_00327ee8(void);
int FUN_0033abd4(void);
int sysPlayVoice(int);
int FUN_003d4ed8(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */









/* Supplied declaration required: soundVolumeSettingSet. */
extern unsigned int soundVolumeSettingGet(void);
/* Supplied declaration required: FUN_0014af98. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: mapIfShowActionMarker. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_002342b8. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: mapIfReleaseResource. */
/* Supplied declaration required: mapIfReleaseSlot4. */
/* Supplied declaration required: mapEaseSceneHeading. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_0033abd4. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d4ed8. */
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);


void FUN_0033e590(void)

{
/* irregular: 20 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  
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
  temp_v5 = 0x40a00000;
  temp_v2 = *(int *)(g_lmapScene + 4);
  if (temp_v2 != 0xd) {
    if (0xd >= temp_v2) {
      temp_v4 = 0.017453292f;
      if (temp_v2 != 10) {
        if (temp_v2 < 0xb) {
          if (temp_v2 != 0) {
            if (temp_v2 != 1) {
              if (temp_v2 == 2) {
                *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
                FUN_00233e10(1,g_gameState.f005f16ac);
                temp_v2 = FUN_004d0584();
                temp_v1 = g_lmapScene;
                if (temp_v2 != 0) {
                  *(unsigned int *)(g_lmapScene + 4) = 10;
                  *(unsigned int *)(temp_v1 + 8) = 0;
                }
                else {
                  temp_v1 = padButtonIsPressed(6);
                  if ((temp_v1 != 0) || (temp_v1 = inputIsQuestMenuPressed(), temp_v1 != 0)) {
                    temp_v1 = g_lmapView;
                    *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
                    *(unsigned int *)(temp_v1 + 0xb0) = 0;
                    FUN_00303460(0);
                    temp_v1 = g_lmapScene;
                    *(unsigned int *)(g_lmapScene + 0x54) = 0;
                    *(unsigned int *)(temp_v1 + 0x58) = temp_v5;
                    FUN_00233e10(0,g_gameState.f005f16ac);
                    mapIfReleaseSlot4();
                    temp_v1 = g_lmapScene;
                    *(unsigned int *)(g_lmapScene + 4) = 0x5a;
                    *(unsigned int *)(temp_v1 + 8) = 0;
                  }
                }
              }
            }
            else {
              *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
              FUN_00233e10(1,g_gameState.f005f16ac);
              temp_v1 = g_lmapScene;
              if (*(int *)(g_lmapScene + 8) >= 3) {
                temp_v2 = *(int *)(g_lmapScene + 4);
                *(unsigned int *)(g_lmapScene + 0x54) = 0x1c;
                *(unsigned int *)(temp_v1 + 0x58) = 0x40000000;
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
          temp_v5 = g_gameState.f005f16b8;
          temp_v0 = g_gameState.f005f16b4;
          *(unsigned int *)(temp_v1 + 0x28) = g_gameState.f005f16b0;
          *(unsigned int *)(temp_v1 + 0x2c) = temp_v0;
          *(unsigned int *)(temp_v1 + 0x30) = temp_v5;
          temp_v3 = g_gameState.f005f16cc * 0.017453292f;
          FUN_001bc124();
          temp_v6 = 25.0f;
          *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v3 * 25.0f;
          temp_v4 = g_gameState.f005f16cc * temp_v4;
          FUN_001bbf0c();
          temp_v1 = g_lmapScene;
          *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v4 * temp_v6;
          *(unsigned int *)(temp_v1 + 0x50) = g_gameState.f005f16bc;
          FUN_00303460(0xd);
          *(unsigned int *)(g_lmapView + 0xb0) = 1;
          sysPlaySe(0xdc);
          FUN_00233e10(1,g_gameState.f005f16ac);
          mapIfShowActionMarker();
          temp_v1 = g_lmapScene;
          temp_v2 = *(int *)(temp_v1 + 4);
          *(int *)(temp_v1 + 4) = temp_v2 + 1;
          *(unsigned int *)(temp_v1 + 8) = 0;
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        if (temp_v2 != 0xb) {
          if ((temp_v2 != 0xc) || (temp_v1 = mapIfHasSelection(), temp_v1 != 0)) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          mapIfReleaseSlot4();
          temp_v1 = g_lmapView;
          *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
          *(unsigned int *)(temp_v1 + 0xb0) = 0;
          FUN_00303460(0);
          temp_v2 = *(int *)(g_lmapScene + 4);
          temp_v1 = g_lmapScene;
        }
        else {
          temp_v1 = *(int *)(g_lmapScene + 8) + 1;
          *(int *)(g_lmapScene + 8) = temp_v1;
          if (temp_v1 != 10) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          FUN_0033abd4();
          switch(g_gameState.f005f162e) {
          case 0:
            temp_v5 = 0x10002c4;
            FUN_003d4ed8(temp_v5);
            break;
          case 1:
            temp_v5 = 0x10002c6;
            FUN_003d4ed8(temp_v5);
            break;
          case 2:
            temp_v5 = 0x10002c8;
            FUN_003d4ed8(temp_v5);
            break;
          case 3:
            temp_v5 = 0x10002ca;
            FUN_003d4ed8(temp_v5);
            break;
          case 4:
            temp_v5 = 0x10002cc;
            FUN_003d4ed8(temp_v5);
            break;
          case 5:
            temp_v5 = 0x10002d9;
            FUN_003d4ed8(temp_v5);
            break;
          default:
          }
LAB_0033e908:
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          soundVolumeSettingSet();
          sysPlayVoice(0x10002e5);
          soundVolumeSettingSet(temp_v0);
          FUN_002342b8();
          temp_v2 = *(int *)(g_lmapScene + 4);
          temp_v1 = g_lmapScene;
        }
      }
      else {
        g_gameState.f005f185a = 0;
        *(unsigned int *)(g_lmapView + 0xc) = 1;
        *(unsigned int *)(temp_v1 + 0x54) = 0x15;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40a00000;
        temp_v2 = *(int *)(temp_v1 + 4);
      }
    }
    else if (temp_v2 != 100) {
      if (temp_v2 < 0x65) {
        if (temp_v2 != 0x5a) {
          if (temp_v2 != 0x5b) {
            if ((temp_v2 == 0x5c) &&
               (temp_v1 = *(int *)(g_lmapScene + 8) + 1, *(int *)(g_lmapScene + 8) = temp_v1,
               temp_v1 >= 4)) {
              mapSetSceneState(1);
            }
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          mapIfReleaseResource();
          temp_v2 = *(int *)(g_lmapScene + 4);
          temp_v1 = g_lmapScene;
        }
      }
      else if (temp_v2 != 0x65) {
        if (temp_v2 != 0x66) {
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        mapIfReleaseResource();
        mapSetSceneState(0x14);
        temp_v2 = *(int *)(g_lmapScene + 4);
        temp_v1 = g_lmapScene;
      }
      else {
        temp_v2 = FUN_002e07f4();
        temp_v1 = g_lmapView;
        if (temp_v2 == 0) {
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
        *(unsigned int *)(temp_v1 + 0xb0) = 0;
        FUN_00303460(0);
        temp_v1 = g_lmapScene;
        *(unsigned int *)(g_lmapScene + 0x54) = 0;
        *(unsigned int *)(temp_v1 + 0x58) = temp_v5;
        FUN_00233e10(0,g_gameState.f005f16ac);
        mapIfReleaseSlot4();
        temp_v2 = *(int *)(g_lmapScene + 4);
        temp_v1 = g_lmapScene;
      }
    }
    else {
      slotSetRequest(0,10,0xff);
      temp_v2 = *(int *)(g_lmapScene + 4);
      temp_v1 = g_lmapScene;
    }
  }
  else {
    mapIfReleaseResource();
    mapSetSceneState(0x14);
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
