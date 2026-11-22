/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e590` (_code @ 0x33e590, 0x57c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "game/GameStateA.h"
/* The decompiler copies some game state fields as raw words of another type: those uses cast. */

extern "C" {

int slotSetRequest(...);
int mapIfReleaseResource(void);
int mapSetSceneState(...);

int soundVolumeSettingSet(...);
int messageVoiceBankGet(void);
int sysPlaySe(int);
int libm_cosf(void); // declcheck: local (romwright prototype; the shared declaration in util/TrigF32.h does not compile here: too few arguments in function call)
int libm_sinf(void); // declcheck: local (decompiler placeholder; its calls do not fit the real libm_sinf(f32))
int mapIfShowActionMarker(void);
int mapIfApplyEntryRequest(...);
int FUN_002342b8(void);
int mapIfReleaseSlot4(void);
int mapEaseSceneHeading(void);
int FUN_002e364c(...);
int lmapCameraSetMode(int);
int FUN_00324e38(unsigned int);
int FUN_00327ee8(void);
int FUN_0033abd4(void);
int sysPlayVoice(int);
int soundActorStartOnFreeChannel(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: soundVolumeSettingSet. */
extern unsigned int soundVolumeSettingGet(void);
/* Supplied declaration required: messageVoiceBankGet. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: libm_cosf. */
/* Supplied declaration required: libm_sinf. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: mapIfShowActionMarker. */
/* Supplied declaration required: mapIfApplyEntryRequest. */
/* Supplied declaration required: FUN_002342b8. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: mapIfReleaseResource. */
/* Supplied declaration required: mapIfReleaseSlot4. */
/* Supplied declaration required: mapEaseSceneHeading. */
extern int pairedAvailabilityBothReady(void);
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: lmapCameraSetMode. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_0033abd4. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: soundActorStartOnFreeChannel. */
extern int inputIsQuestMenuPressed(void);
extern int inputConfirmPressed(void);

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
                mapIfApplyEntryRequest(1,g_gameState.overviewRecord);
                temp_v2 = inputConfirmPressed();
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
                    lmapCameraSetMode(0);
                    temp_v1 = g_lmapScene;
                    *(unsigned int *)(g_lmapScene + 0x54) = 0;
                    *(unsigned int *)(temp_v1 + 0x58) = temp_v5;
                    mapIfApplyEntryRequest(0,g_gameState.overviewRecord);
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
              mapIfApplyEntryRequest(1,g_gameState.overviewRecord);
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
          temp_v5 = (*(unsigned int *)&g_gameState.overviewPosition.z);
          temp_v0 = (*(unsigned int *)&g_gameState.overviewPosition.y);
          *(unsigned int *)(temp_v1 + 0x28) = (*(unsigned int *)&g_gameState.overviewPosition.x);
          *(unsigned int *)(temp_v1 + 0x2c) = temp_v0;
          *(unsigned int *)(temp_v1 + 0x30) = temp_v5;
          temp_v3 = g_gameState.pointHeading * 0.017453292f;
          libm_sinf();
          temp_v6 = 25.0f;
          *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v3 * 25.0f;
          temp_v4 = g_gameState.pointHeading * temp_v4;
          libm_cosf();
          temp_v1 = g_lmapScene;
          *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v4 * temp_v6;
          *(unsigned int *)(temp_v1 + 0x50) = (*(unsigned int *)&g_gameState.overviewHeading);
          lmapCameraSetMode(0xd);
          *(unsigned int *)(g_lmapView + 0xb0) = 1;
          sysPlaySe(0xdc);
          mapIfApplyEntryRequest(1,g_gameState.overviewRecord);
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
          lmapCameraSetMode(0);
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
          switch(g_gameState.selectedKind) {
          case 0:
            temp_v5 = 0x10002c4;
            soundActorStartOnFreeChannel(temp_v5);
            break;
          case 1:
            temp_v5 = 0x10002c6;
            soundActorStartOnFreeChannel(temp_v5);
            break;
          case 2:
            temp_v5 = 0x10002c8;
            soundActorStartOnFreeChannel(temp_v5);
            break;
          case 3:
            temp_v5 = 0x10002ca;
            soundActorStartOnFreeChannel(temp_v5);
            break;
          case 4:
            temp_v5 = 0x10002cc;
            soundActorStartOnFreeChannel(temp_v5);
            break;
          case 5:
            temp_v5 = 0x10002d9;
            soundActorStartOnFreeChannel(temp_v5);
            break;
          default:
          }
LAB_0033e908:
          FUN_00324e38(0xffffffff);
          libm_sinf();
          libm_cosf();
          messageVoiceBankGet();
          soundVolumeSettingSet();
          sysPlayVoice(0x10002e5);
          soundVolumeSettingSet(temp_v0);
          FUN_002342b8();
          temp_v2 = *(int *)(g_lmapScene + 4);
          temp_v1 = g_lmapScene;
        }
      }
      else {
        g_gameState.transitionCompleted = 0;
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
        temp_v2 = pairedAvailabilityBothReady();
        temp_v1 = g_lmapView;
        if (temp_v2 == 0) {
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
        *(unsigned int *)(temp_v1 + 0xb0) = 0;
        lmapCameraSetMode(0);
        temp_v1 = g_lmapScene;
        *(unsigned int *)(g_lmapScene + 0x54) = 0;
        *(unsigned int *)(temp_v1 + 0x58) = temp_v5;
        mapIfApplyEntryRequest(0,g_gameState.overviewRecord);
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
