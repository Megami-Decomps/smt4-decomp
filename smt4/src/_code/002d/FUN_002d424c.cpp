/* NON_MATCHING: positional-sound cutover is pending recovery of the dropped sin/cos inputs/results used by forward-offset sound positions; legacy local sound declaration is intentionally retained. */
#include "romwright_types.h"

extern "C" {

int FUN_0019db68(void);
int mapInterfaceSetStateTwo(void);
int FUN_0027fae4(void);
int FUN_0027fca0(...);
int FUN_00282390(void);
int FUN_00291e40(...);
int buttonHelpSetPreset(int);

int mapDestroyOverlayModel(void);
int mapIfReleaseSlot3(void);
int mapIfActivateRecord(int, unsigned int);
int lmapSetSceneId(...);
int FUN_0027fc14(...);
int mapSelectContainingRegions(void);
int FUN_002804ec(...);
int mapEaseSceneHeading(void);
int FUN_0028250c(void);
int slotSetRequest(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int g_lmapScene; /* 0x447e88 */
extern unsigned char DAT_0049f94a; /* 0x49f94a */
extern int DAT_0049f958; /* 0x49f958 */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern float DAT_0049f9bc; /* 0x49f9bc */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Supplied declaration required: FUN_0019db68. */
/* Supplied declaration required: mapDestroyOverlayModel. */
/* Supplied declaration required: mapIfReleaseSlot3. */
/* Supplied declaration required: mapIfActivateRecord. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: mapInterfaceSetStateTwo. */
extern int inputIsQuestMenuPressed(void);
extern int FUN_0027ee9c(void);
/* Supplied declaration required: lmapSetSceneId. */
/* Supplied declaration required: FUN_0027fae4. */
/* Supplied declaration required: FUN_0027fc14. */
/* Supplied declaration required: FUN_0027fca0. */
/* Supplied declaration required: mapSelectContainingRegions. */
/* Supplied declaration required: FUN_002804ec. */
/* Supplied declaration required: mapEaseSceneHeading. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
extern int FUN_002896bc(void);
/* Supplied declaration required: FUN_00291e40. */
extern int randBetween(unsigned int, unsigned int);
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int padIsButtonPressed(unsigned int);
extern int gameFlagIsSet(unsigned int);


void FUN_002d424c(void)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  
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
  temp_v4 = 0x40a00000;
  temp_v2 = *(int *)(g_lmapScene + 4);
  if (temp_v2 != 0xd) {
    if (temp_v2 >= 0xe) {
      if (temp_v2 != 100) {
        if (temp_v2 < 0x65) {
          if (temp_v2 == 0x5a) {
            *(unsigned int *)(g_lmapScene + 4) = 0x5b;
            *(unsigned int *)(temp_v0 + 8) = 0;
            FUN_002804ec(g_lmapScene + 0x28);
            mapSelectContainingRegions();
            return;
          }
          if (temp_v2 != 0x5b) {
            if ((temp_v2 == 0x5c) &&
               (temp_v0 = *(int *)(g_lmapScene + 8) + 1, *(int *)(g_lmapScene + 8) = temp_v0,
               temp_v0 >= 4)) {
              lmapSetSceneId(1);
            }
            FUN_002804ec(g_lmapScene + 0x28);
            mapSelectContainingRegions();
            return;
          }
          mapDestroyOverlayModel();
        }
        else if (temp_v2 != 0x65) {
          if (temp_v2 != 0x66) {
            FUN_002804ec(g_lmapScene + 0x28);
            mapSelectContainingRegions();
            return;
          }
          mapDestroyOverlayModel();
          lmapSetSceneId(0x14);
        }
        else {
          temp_v2 = FUN_002896bc();
          temp_v0 = DAT_004474f4;
          if (temp_v2 == 0) {
            FUN_002804ec(g_lmapScene + 0x28);
            mapSelectContainingRegions();
            return;
          }
          *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
          *(unsigned int *)(temp_v0 + 0xac) = 0;
          FUN_0027fc14(0);
          temp_v0 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0x54) = 0;
          *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
          mapIfActivateRecord(0,DAT_0049f99c);
          mapIfReleaseSlot3();
        }
        temp_v0 = g_lmapScene;
        *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
        *(unsigned int *)(temp_v0 + 8) = 0;
        FUN_002804ec(g_lmapScene + 0x28);
        mapSelectContainingRegions();
        return;
      }
      temp_v1 = 10;
      temp_v4 = 0;
      slotSetRequest(temp_v4,temp_v1,0xff);
      temp_v0 = g_lmapScene;
      *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_002804ec(g_lmapScene + 0x28);
      mapSelectContainingRegions();
      return;
    }
    temp_v6 = 0.017453292f;
    if (temp_v2 == 10) {
      DAT_0049fb46 = 0;
      *(unsigned int *)(DAT_004474f4 + 0xc) = 1;
      *(unsigned int *)(temp_v0 + 0x54) = 0x15;
      *(unsigned int *)(temp_v0 + 0x58) = 0x40a00000;
      *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_002804ec(g_lmapScene + 0x28);
      mapSelectContainingRegions();
      return;
    }
    if (temp_v2 < 0xb) {
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          if (temp_v2 == 2) {
            *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
            mapIfActivateRecord(1,DAT_0049f99c);
            temp_v2 = FUN_0027ee9c();
            temp_v0 = g_lmapScene;
            if (temp_v2 != 0) {
              *(unsigned int *)(g_lmapScene + 4) = 10;
              *(unsigned int *)(temp_v0 + 8) = 0;
            }
            else {
              temp_v0 = padIsButtonPressed(6);
              if ((temp_v0 != 0) || (temp_v0 = inputIsQuestMenuPressed(), temp_v0 != 0)) {
                temp_v0 = DAT_004474f4;
                *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
                *(unsigned int *)(temp_v0 + 0xac) = 0;
                FUN_0027fc14(0);
                temp_v0 = g_lmapScene;
                *(unsigned int *)(g_lmapScene + 0x54) = 0;
                *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
                mapIfActivateRecord(0,DAT_0049f99c);
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
          mapIfActivateRecord(1,DAT_0049f99c);
          temp_v0 = g_lmapScene;
          if (*(int *)(g_lmapScene + 8) >= 3) {
            temp_v2 = *(int *)(g_lmapScene + 4);
            *(unsigned int *)(g_lmapScene + 0x54) = 0x1c;
            *(unsigned int *)(temp_v0 + 0x58) = 0x40000000;
            *(int *)(temp_v0 + 4) = temp_v2 + 1;
            *(unsigned int *)(temp_v0 + 8) = 0;
          }
        }
        FUN_002804ec(g_lmapScene + 0x28);
        mapSelectContainingRegions();
        return;
      }
      *(unsigned int *)(g_lmapScene + 0x54) = 0;
      *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
      *(unsigned char *)(temp_v0 + 0x6c) = 0;
      temp_v1 = DAT_0049f9a8;
      temp_v4 = DAT_0049f9a4;
      *(unsigned int *)(temp_v0 + 0x28) = DAT_0049f9a0;
      *(unsigned int *)(temp_v0 + 0x2c) = temp_v4;
      *(unsigned int *)(temp_v0 + 0x30) = temp_v1;
      temp_v3 = DAT_0049f9bc * 0.017453292f;
      FUN_0028250c();
      temp_v5 = 25.0f;
      *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v3 * 25.0f;
      temp_v6 = DAT_0049f9bc * temp_v6;
      FUN_00282390();
      temp_v0 = g_lmapScene;
      *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v6 * temp_v5;
      *(unsigned int *)(temp_v0 + 0x50) = DAT_0049f9ac;
      FUN_0027fc14(0xd);
      *(unsigned int *)(DAT_004474f4 + 0xac) = 1;
      buttonHelpSetPreset(0xda);
      mapIfActivateRecord(1,DAT_0049f99c);
      FUN_0019db68();
    }
    else if (temp_v2 != 0xb) {
      if (temp_v2 != 0xc) {
        FUN_002804ec(g_lmapScene + 0x28);
        mapSelectContainingRegions();
        return;
      }
      if ((DAT_0049f958 == 0x3303001) && (temp_v0 = gameFlagIsSet(0x292), temp_v0 != 0)) {
        temp_v0 = FUN_002896bc();
        if (temp_v0 == 0) {
          FUN_002804ec(g_lmapScene + 0x28);
          mapSelectContainingRegions();
          return;
        }
      }
      else {
        temp_v0 = mapIfHasSelection();
        if (temp_v0 != 0) {
          FUN_002804ec(g_lmapScene + 0x28);
          mapSelectContainingRegions();
          return;
        }
      }
      mapIfReleaseSlot3();
      temp_v0 = DAT_004474f4;
      *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
      *(unsigned int *)(temp_v0 + 0xac) = 0;
      FUN_0027fc14(0);
    }
    else {
      temp_v0 = *(int *)(g_lmapScene + 8) + 1;
      *(int *)(g_lmapScene + 8) = temp_v0;
      if (temp_v0 != 10) {
        FUN_002804ec(g_lmapScene + 0x28);
        mapSelectContainingRegions();
        return;
      }
      FUN_0027fae4();
      switch(DAT_0049f94a) {
      case 0:
        FUN_00291e40(0x100021b);
        break;
      case 1:
        temp_v4 = 0x100021d;
        FUN_00291e40(temp_v4);
        break;
      case 2:
        temp_v4 = 0x100021f;
        FUN_00291e40(temp_v4);
        break;
      case 3:
        temp_v4 = 0x1000221;
        FUN_00291e40(temp_v4);
        break;
      case 4:
        temp_v4 = 0x1000223;
        FUN_00291e40(temp_v4);
        break;
      default:
      }
      FUN_0027fca0(0xffffffff);
      FUN_0028250c();
      FUN_00282390();
      temp_v0 = randBetween(0,1);
      FUN_00291e40(temp_v0 + 0x100023c);
      if ((DAT_0049f958 == 0x3303001) && (temp_v0 = gameFlagIsSet(0x292), temp_v0 != 0)) {
        slotSetRequest(0,0xf,0xff);
        temp_v1 = 0xf;
        temp_v4 = 1;
        slotSetRequest(temp_v4,temp_v1,0xff);
      }
      else {
        mapInterfaceSetStateTwo();
      }
    }
  }
  else {
    mapDestroyOverlayModel();
    lmapSetSceneId(0x14);
  }
  temp_v0 = g_lmapScene;
  *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
  *(unsigned int *)(temp_v0 + 8) = 0;
  FUN_002804ec(g_lmapScene + 0x28);
  mapSelectContainingRegions();
  return;
}

} /* extern "C" */
