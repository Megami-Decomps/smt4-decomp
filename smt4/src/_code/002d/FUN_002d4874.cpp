#include "map/LmapPlayerModel.h"
#include "game/GameState.h"
/* The decompiler copies some game state fields as raw words of another type: those uses cast. */
/* NON_MATCHING: sin/cos arguments, results and the sound/marker positions built from them are restored from retail; the body is still the raw decompiler control-flow draft, so branch layout and register allocation differ. */
#include "common.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "util/TrigF32.h"
#include "shard/S1Mover.h"

extern "C" {


int FUN_0019db68(void);
int mapDestroyOverlayModel(...);
int mapIfReleaseSlot3(void);
int mapIfActivateRecord(int, unsigned int);
int mapInterfaceSetStateTwo(void);
int lmapSetSceneId(unsigned int);
int lmapCameraSetMode(int);
int mapSelectContainingRegions(void);
int FUN_002804ec(int);
int mapEaseSceneHeading(void);
int buttonHelpSetPreset(int);
void lmapFindNearestMatchingTargetPoint(s32, s32, s32, Vec3f *, f32 *, s32, Vec3f);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int g_mapCamera; /* 0x4474f4 */
extern int g_lmapScene; /* 0x447e88 */








/* Supplied declaration required: FUN_0019db68. */
/* Supplied declaration required: mapDestroyOverlayModel. */
/* Supplied declaration required: mapIfReleaseSlot3. */
/* Supplied declaration required: mapIfActivateRecord. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: mapInterfaceSetStateTwo. */
extern int inputIsQuestMenuPressed(void);
extern int inputConfirmPressed(void);
/* Supplied declaration required: lmapSetSceneId. */
/* Supplied declaration required: lmapCameraSetMode. */
/* Supplied declaration required: mapDepartSpawnPlayerEffect. */
/* Supplied declaration required: mapSelectContainingRegions. */
/* Supplied declaration required: FUN_002804ec. */
/* Supplied declaration required: mapEaseSceneHeading. */
/* Supplied declaration required: libm_cosf. */
/* Supplied declaration required: libm_sinf. */
/* Supplied declaration required: soundActorStartOnFreeChannel. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int padIsButtonPressed(unsigned int);


void FUN_002d4874(void)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  Vec3f nearestPoint;
  f32 nearestYaw;
  
  if (*(int *)(g_lmapScene + 4) < 10) {
    mapEaseSceneHeading();
    temp_v0 = g_lmapScene;
    *(float *)(g_lmapScene + 0x1c) =
         *(float *)(g_lmapScene + 0x1c) +
         (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * 0.33333334f;
    *(float *)(temp_v0 + 0x20) =
         *(float *)(temp_v0 + 0x20) +
         (*(float *)(temp_v0 + 0x2c) - *(float *)(temp_v0 + 0x20)) * 0.16666667f;
    *(float *)(temp_v0 + 0x24) =
         *(float *)(temp_v0 + 0x24) +
         (*(float *)(temp_v0 + 0x30) - *(float *)(temp_v0 + 0x24)) * 0.33333334f;
  }
  temp_v0 = g_lmapScene;
  temp_v6 = 0x40000000;
  temp_v1 = *(int *)(g_lmapScene + 4);
  temp_v8 = 0.0f;
  if (temp_v1 != 0xb) {
    if (temp_v1 < 0xb) {
      temp_v4 = 0.017453292f;
      temp_v5 = 25.0f;
      if (temp_v1 != 0) {
        if (temp_v1 != 1) {
          if (temp_v1 != 2) {
            if (temp_v1 == 10) {
              temp_v1 = *(int *)(g_lmapScene + 8) + 1;
              *(int *)(g_lmapScene + 8) = temp_v1;
              if (temp_v1 == 1) {
                *(unsigned int *)(temp_v0 + 0x54) = 0xf;
                *(unsigned int *)(temp_v0 + 0x58) = 0;
                soundActorStartOnFreeChannel(0x1000212, *(SoundActorQueuePosition *)(g_lmapScene + 0x1c));
                mapDepartSpawnPlayerEffect(0xffffffff);
                SoundActorQueuePosition position;
                position.x = *(float *)(g_lmapScene + 0x1c) + libm_sinf(*(float *)(g_lmapScene + 0x4c) * 0.017453292f) * 50.0f;
                position.z = *(float *)(g_lmapScene + 0x24) + libm_cosf(*(float *)(g_lmapScene + 0x4c) * 0.017453292f) * 50.0f;
                position.y = *(float *)(g_lmapScene + 0x20) + 150.0f;
                soundActorStartOnFreeChannel(0x1000240, position);
              }
              if (*(int *)(g_lmapScene + 8) == 2) {
                g_gameState.map.transitionCompleted = 0;
                mapIfReleaseSlot3();
                temp_v0 = g_lmapScene;
                puVar5 = (unsigned int *)(g_lmapScene + 0x1c);
                *(unsigned int *)(g_lmapScene + 0x4c) = *(unsigned int *)(g_lmapScene + 0x50);
                temp_v6 = *(unsigned int *)(temp_v0 + 0x2c);
                temp_v3 = *(unsigned int *)(temp_v0 + 0x30);
                *puVar5 = *(unsigned int *)(temp_v0 + 0x28);
                *(unsigned int *)(temp_v0 + 0x20) = temp_v6;
                *(unsigned int *)(temp_v0 + 0x24) = temp_v3;
                *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
                *(unsigned int *)(temp_v0 + 8) = 0;
              }
            }
          }
          else {
            *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
            mapIfActivateRecord(1,g_gameState.overviewRecord);
            temp_v1 = inputConfirmPressed();
            temp_v0 = g_lmapScene;
            if (temp_v1 != 0) {
              *(unsigned int *)(g_lmapScene + 4) = 10;
              *(unsigned int *)(temp_v0 + 8) = 0;
              *(unsigned int *)(g_mapCamera + 0xc) = 2;
              nearestPoint = *(const Vec3f *)(temp_v0 + 0x28);
              lmapFindNearestMatchingTargetPoint(2, 10, 0x66, &nearestPoint, &nearestYaw, 1, nearestPoint);
              temp_v0 = g_lmapScene;
              temp_v7 = 180.0f;
              nearestYaw += 180.0f;
              if (nearestYaw < temp_v8) {
                nearestYaw += 360.0f;
              }
              if (nearestYaw > 360.0f) {
                nearestYaw -= 360.0f;
              }
              *(float *)(g_lmapScene + 0x50) = nearestYaw;
              *(Vec3f *)(temp_v0 + 0x28) = nearestPoint;
              *(float *)(temp_v0 + 0x2c) = nearestPoint.y - 250.0f;
              *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + libm_sinf((*(float *)(temp_v0 + 0x4c) + 180.0f) * 0.017453292f) * 25.0f;
              temp_v0 = g_lmapScene;
              *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + libm_cosf((*(float *)(temp_v0 + 0x4c) + 180.0f) * 0.017453292f) * 25.0f;
            }
            else {
              temp_v0 = padIsButtonPressed(6);
              if ((temp_v0 != 0) || (temp_v0 = inputIsQuestMenuPressed(), temp_v0 != 0)) {
                temp_v0 = g_mapCamera;
                *(unsigned int *)(g_mapCamera + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
                *(unsigned int *)(temp_v0 + 0xac) = 0;
                lmapCameraSetMode(0);
                temp_v0 = g_lmapScene;
                *(unsigned int *)(g_lmapScene + 0x54) = 0;
                *(unsigned int *)(temp_v0 + 0x58) = 0x40a00000;
                mapIfActivateRecord(0,g_gameState.overviewRecord);
                mapIfReleaseSlot3();
                temp_v0 = g_lmapScene;
                *(unsigned int *)(g_lmapScene + 4) = 0x5a;
                *(unsigned int *)(temp_v0 + 8) = 0;
              }
            }
          }
        }
        else {
          *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
          mapIfActivateRecord(1,g_gameState.overviewRecord);
          temp_v0 = g_lmapScene;
          if (*(int *)(g_lmapScene + 8) >= 3) {
            temp_v1 = *(int *)(g_lmapScene + 4);
            *(unsigned int *)(g_lmapScene + 0x54) = 0x1c;
            *(unsigned int *)(temp_v0 + 0x58) = temp_v6;
            *(int *)(temp_v0 + 4) = temp_v1 + 1;
            *(unsigned int *)(temp_v0 + 8) = 0;
          }
        }
      }
      else {
        *(unsigned int *)(g_lmapScene + 0x54) = 0;
        *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
        *(unsigned char *)(temp_v0 + 0x6c) = 0;
        temp_v3 = (*(unsigned int *)&g_gameState.overviewPosition.z);
        temp_v6 = (*(unsigned int *)&g_gameState.overviewPosition.y);
        *(unsigned int *)(temp_v0 + 0x28) = (*(unsigned int *)&g_gameState.overviewPosition.x);
        *(unsigned int *)(temp_v0 + 0x2c) = temp_v6;
        *(unsigned int *)(temp_v0 + 0x30) = temp_v3;
        *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + libm_sinf(g_gameState.heading * 0.017453292f) * 25.0f;
        *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + libm_cosf(g_gameState.heading * 0.017453292f) * 25.0f;
        temp_v0 = g_lmapScene;
        *(unsigned int *)(temp_v0 + 0x50) = (*(unsigned int *)&g_gameState.overviewHeading);
        lmapCameraSetMode(0xd);
        *(unsigned int *)(g_mapCamera + 0xac) = 1;
        buttonHelpSetPreset(0xda);
        mapIfActivateRecord(1,g_gameState.overviewRecord);
        FUN_0019db68();
        temp_v0 = g_lmapScene;
        *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
        *(unsigned int *)(temp_v0 + 8) = 0;
      }
    }
    else {
      if (temp_v1 == 0xc) {
        temp_v6 = 0x16;
      }
      else {
        if (temp_v1 == 0x5a) {
          *(unsigned int *)(g_lmapScene + 4) = 0x5b;
          *(unsigned int *)(temp_v0 + 8) = 0;
          FUN_002804ec(g_lmapScene + 0x28);
          mapSelectContainingRegions();
          return;
        }
        if (temp_v1 == 0x5b) {
          mapDestroyOverlayModel(0x1000212);
          temp_v0 = g_lmapScene;
          *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
          *(unsigned int *)(temp_v0 + 8) = 0;
          FUN_002804ec(g_lmapScene + 0x28);
          mapSelectContainingRegions();
          return;
        }
        if ((temp_v1 != 0x5c) ||
           (temp_v0 = *(int *)(g_lmapScene + 8) + 1, *(int *)(g_lmapScene + 8) = temp_v0, temp_v0 < 4))
        {
          FUN_002804ec(g_lmapScene + 0x28);
          mapSelectContainingRegions();
          return;
        }
        temp_v6 = 1;
      }
      lmapSetSceneId(temp_v6);
    }
  }
  else {
    puVar5 = (unsigned int *)(g_lmapScene + 0x28);
    temp_v4 = *(float *)(g_lmapScene + 0x2c) + 2.0f;
    temp_v6 = *(unsigned int *)(g_lmapScene + 0x30);
    temp_v2 = *(int *)(g_lmapScene + 8) + 1;
    *(float *)(g_lmapScene + 0x2c) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x1c) = *puVar5;
    *(unsigned int *)(temp_v0 + 8) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x24) = temp_v6;
    *(float *)(temp_v0 + 0x20) = temp_v4;
    if ((temp_v2 == 0xb) || (temp_v2 == 0x1c || temp_v2 == 0x29)) {
      soundActorStartOnFreeChannel((temp_v2 & 3) + 0x1000212, *(SoundActorQueuePosition *)(g_lmapScene + 0x1c));
      mapDepartSpawnPlayerEffect(0xffffffff);
    }
    if (*(int *)(g_lmapScene + 8) == 0x1e) {
      mapInterfaceSetStateTwo();
    }
    if ((*(int *)(g_lmapScene + 8) >= 0x1f) && (temp_v0 = mapIfHasSelection(), temp_v0 == 0)) {
      mapDestroyOverlayModel();
      temp_v0 = g_mapCamera;
      *(unsigned int *)(g_mapCamera + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
      *(unsigned int *)(temp_v0 + 0xac) = 0;
      lmapCameraSetMode(0);
      temp_v0 = g_lmapScene;
      *(unsigned int *)(g_lmapScene + 0x54) = 0;
      *(float *)(temp_v0 + 0x58) = temp_v8;
      *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
  }
  FUN_002804ec(g_lmapScene + 0x28);
  mapSelectContainingRegions();
  return;
}

} /* extern "C" */
