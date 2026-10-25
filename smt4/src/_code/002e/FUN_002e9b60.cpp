/* NON_MATCHING: sin/cos arguments, results and the sound/marker positions built from them are restored from retail; the body is still the raw decompiler control-flow draft, so branch layout and register allocation differ. */
#include "common.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "map/MapActionMarker.h"
#include "util/TrigF32.h"
#include "shard/S1Mover.h"

extern "C" {

int mapDestroySecondaryModel(...);
int mapIfReleaseSlot2(void);
int mapIfActivateRecord(int, unsigned int);
int mapInterfaceSetStateTwo(void);
int lmapSetSceneId(unsigned int);
int FUN_0027fc14(int);
int FUN_0027fca0(unsigned int);
int mapSelectContainingRegions(void);
int FUN_002804ec(int);
int mapEaseSceneHeading(void);
int buttonHelpSetPreset(int);
void lmapFindNearestMatchingTargetPoint(s32, s32, s32, Vec3f *, f32 *, s32, Vec3f);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int g_lmapScene; /* 0x447e88 */
extern int DAT_0049f968; /* 0x49f968 */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern float DAT_0049f9bc; /* 0x49f9bc */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Supplied declaration required: mapDestroySecondaryModel. */
/* Supplied declaration required: mapIfReleaseSlot2. */
/* Supplied declaration required: FUN_00248114. */
/* Supplied declaration required: mapIfActivateRecord. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: mapInterfaceSetStateTwo. */
extern int inputIsQuestMenuPressed(void);
extern int FUN_0027ee9c(void);
/* Supplied declaration required: lmapSetSceneId. */
/* Supplied declaration required: FUN_0027fc14. */
/* Supplied declaration required: FUN_0027fca0. */
/* Supplied declaration required: mapSelectContainingRegions. */
/* Supplied declaration required: FUN_002804ec. */
/* Supplied declaration required: mapEaseSceneHeading. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00291e40. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int padIsButtonPressed(unsigned int);


void FUN_002e9b60(void)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
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
  temp_v8 = 0x40000000;
  temp_v1 = *(int *)(g_lmapScene + 4);
  temp_v6 = 0.0f;
  temp_v5 = 180.0f;
  if (temp_v1 != 0xb) {
    if (temp_v1 < 0xb) {
      temp_v4 = 0.017453292f;
      if (temp_v1 != 0) {
        if (temp_v1 != 1) {
          if (temp_v1 != 2) {
            if (temp_v1 == 10) {
              temp_v1 = *(int *)(g_lmapScene + 8) + 1;
              *(int *)(g_lmapScene + 8) = temp_v1;
              if (temp_v1 == 1) {
                *(unsigned int *)(temp_v0 + 0x54) = 0x10;
                *(unsigned int *)(temp_v0 + 0x58) = 0;
                FUN_00291e40(0x1000212, *(SoundActorQueuePosition *)(g_lmapScene + 0x1c));
                FUN_0027fca0(0xffffffff);
                SoundActorQueuePosition position;
                position.x = *(float *)(g_lmapScene + 0x1c) + FUN_0028250c(*(float *)(g_lmapScene + 0x4c) * 0.017453292f) * 50.0f;
                position.z = *(float *)(g_lmapScene + 0x24) + FUN_00282390(*(float *)(g_lmapScene + 0x4c) * 0.017453292f) * 50.0f;
                position.y = *(float *)(g_lmapScene + 0x20) + 150.0f;
                FUN_00291e40(0x1000240, position);
              }
              if (*(int *)(g_lmapScene + 8) == 2) {
                mapIfReleaseSlot2();
                temp_v0 = g_lmapScene;
                DAT_0049fb46 = 0;
                puVar5 = (unsigned int *)(g_lmapScene + 0x1c);
                *(unsigned int *)(g_lmapScene + 0x4c) = *(unsigned int *)(g_lmapScene + 0x50);
                temp_v8 = *(unsigned int *)(temp_v0 + 0x2c);
                temp_v3 = *(unsigned int *)(temp_v0 + 0x30);
                *puVar5 = *(unsigned int *)(temp_v0 + 0x28);
                *(unsigned int *)(temp_v0 + 0x20) = temp_v8;
                *(unsigned int *)(temp_v0 + 0x24) = temp_v3;
                *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
                *(unsigned int *)(temp_v0 + 8) = 0;
              }
            }
          }
          else {
            *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
            mapIfActivateRecord(1,DAT_0049f99c);
            temp_v1 = FUN_0027ee9c();
            temp_v0 = g_lmapScene;
            if (temp_v1 != 0) {
              *(unsigned int *)(g_lmapScene + 4) = 10;
              *(unsigned int *)(temp_v0 + 8) = 0;
              if (DAT_0049f968 == 0) {
                temp_v8 = 3;
              }
              else {
                temp_v8 = 4;
              }
              *(unsigned int *)(DAT_004474f4 + 0xc) = temp_v8;
              nearestPoint = *(const Vec3f *)(temp_v0 + 0x28);
              lmapFindNearestMatchingTargetPoint(2, 10, 0x66, &nearestPoint, &nearestYaw, -1, nearestPoint);
              temp_v0 = g_lmapScene;
              nearestYaw += temp_v5;
              if (nearestYaw < temp_v6) {
                nearestYaw += 360.0f;
              }
              if (nearestYaw > 360.0f) {
                nearestYaw -= 360.0f;
              }
              *(float *)(g_lmapScene + 0x50) = nearestYaw;
              *(Vec3f *)(temp_v0 + 0x28) = nearestPoint;
              *(float *)(temp_v0 + 0x2c) = nearestPoint.y - 142.0f;
              *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + FUN_0028250c((nearestYaw + 180.0f) * 0.017453292f) * 35.0f;
              temp_v0 = g_lmapScene;
              *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + FUN_00282390((*(float *)(temp_v0 + 0x50) + 180.0f) * 0.017453292f) * 35.0f;
            }
            else {
              temp_v0 = padIsButtonPressed(5);
              if ((temp_v0 != 0) || (temp_v0 = inputIsQuestMenuPressed(), temp_v0 != 0)) {
                temp_v0 = DAT_004474f4;
                *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
                *(unsigned int *)(temp_v0 + 0xac) = 0;
                FUN_0027fc14(0);
                temp_v0 = g_lmapScene;
                *(unsigned int *)(g_lmapScene + 0x54) = 0;
                *(unsigned int *)(temp_v0 + 0x58) = 0x40a00000;
                mapIfActivateRecord(0,DAT_0049f99c);
                mapIfReleaseSlot2();
                temp_v0 = g_lmapScene;
                *(unsigned int *)(g_lmapScene + 4) = 0x5a;
                *(unsigned int *)(temp_v0 + 8) = 0;
              }
            }
          }
        }
        else {
          *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
          mapIfActivateRecord(1,DAT_0049f99c);
          temp_v0 = g_lmapScene;
          if (*(int *)(g_lmapScene + 8) >= 3) {
            temp_v1 = *(int *)(g_lmapScene + 4);
            *(unsigned int *)(g_lmapScene + 0x54) = 0x1d;
            *(unsigned int *)(temp_v0 + 0x58) = temp_v8;
            *(int *)(temp_v0 + 4) = temp_v1 + 1;
            *(unsigned int *)(temp_v0 + 8) = 0;
          }
        }
      }
      else {
        *(unsigned int *)(g_lmapScene + 0x54) = 0;
        *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
        *(unsigned char *)(temp_v0 + 0x6c) = 0;
        temp_v3 = DAT_0049f9a8;
        temp_v8 = DAT_0049f9a4;
        *(unsigned int *)(temp_v0 + 0x28) = DAT_0049f9a0;
        *(unsigned int *)(temp_v0 + 0x2c) = temp_v8;
        *(unsigned int *)(temp_v0 + 0x30) = temp_v3;
        *(unsigned int *)(temp_v0 + 0x50) = DAT_0049f9ac;
        FUN_0027fc14(0xc);
        *(unsigned int *)(DAT_004474f4 + 0xac) = 0xfffffffd;
        buttonHelpSetPreset(0xdb);
        mapIfActivateRecord(1,DAT_0049f99c);
        MapMarkerPosition marker;
        marker.x = *(float *)&DAT_0049f9a0 + FUN_0028250c(*(float *)&DAT_0049f9ac * 0.017453292f) * 150.0f;
        marker.y = *(float *)&DAT_0049f9a4;
        marker.z = *(float *)&DAT_0049f9a8 + FUN_00282390(*(float *)&DAT_0049f9ac * 0.017453292f) * 150.0f;
        marker.w = DAT_0049f9bc;
        FUN_00248114(marker);
        temp_v0 = g_lmapScene;
        *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
        *(unsigned int *)(temp_v0 + 8) = 0;
      }
    }
    else {
      if (temp_v1 == 0xc) {
        temp_v8 = 0xe;
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
          mapDestroySecondaryModel(0x1000212);
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
        temp_v8 = 1;
      }
      lmapSetSceneId(temp_v8);
    }
  }
  else {
    puVar5 = (unsigned int *)(g_lmapScene + 0x28);
    temp_v4 = *(float *)(g_lmapScene + 0x2c) - 2.0f;
    temp_v8 = *(unsigned int *)(g_lmapScene + 0x30);
    temp_v2 = *(int *)(g_lmapScene + 8) + 1;
    *(float *)(g_lmapScene + 0x2c) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x1c) = *puVar5;
    *(unsigned int *)(temp_v0 + 8) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x24) = temp_v8;
    *(float *)(temp_v0 + 0x20) = temp_v4;
    if ((temp_v2 == 1) || ((temp_v2 == 0xb || temp_v2 == 0x1c) || temp_v2 == 0x29)) {
      FUN_00291e40((temp_v2 & 3) + 0x1000212, *(SoundActorQueuePosition *)(g_lmapScene + 0x1c));
      FUN_0027fca0(0xffffffff);
    }
    if (*(int *)(g_lmapScene + 8) == 0x1e) {
      mapInterfaceSetStateTwo();
    }
    if ((*(int *)(g_lmapScene + 8) >= 0x1f) && (temp_v0 = mapIfHasSelection(), temp_v0 == 0)) {
      mapDestroySecondaryModel();
      temp_v0 = DAT_004474f4;
      *(float *)(DAT_004474f4 + 0x18) = *(float *)(g_lmapScene + 0x50) + temp_v5;
      *(unsigned int *)(temp_v0 + 0xac) = 0;
      FUN_0027fc14(0);
      temp_v0 = g_lmapScene;
      *(unsigned int *)(g_lmapScene + 0x54) = 0;
      *(float *)(temp_v0 + 0x58) = temp_v6;
      *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
  }
  FUN_002804ec(g_lmapScene + 0x28);
  mapSelectContainingRegions();
  return;
}

} /* extern "C" */
