/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e8be0` (_code @ 0x2e8be0, 0x3fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4478(void);
int mapDestroyInterfaceModel(void);
int mapIfReleaseSlot1(void);
int mapIfActivateRecord(int, unsigned int);
int mapInterfaceSetStateTwo(void);
int mapIfSetMode1(void);
int FUN_0027fa98(unsigned int);
int FUN_0027fc14(int);
int FUN_0027fca0(int);
int mapSelectContainingRegions(void);
int FUN_002804ec(int);
int FUN_00280988(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int buttonHelpSetPreset(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int g_lmapScene; /* 0x447e88 */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern float DAT_0049f9bc; /* 0x49f9bc */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Supplied declaration required: FUN_001b4478. */
/* Supplied declaration required: mapDestroyInterfaceModel. */
/* Supplied declaration required: mapIfReleaseSlot1. */
/* Supplied declaration required: mapIfActivateRecord. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: mapInterfaceSetStateTwo. */
extern int inputIsQuestMenuPressed(void);
/* Supplied declaration required: mapIfSetMode1. */
extern int FUN_0027ee9c(void);
/* Supplied declaration required: FUN_0027fa98. */
/* Supplied declaration required: FUN_0027fc14. */
/* Supplied declaration required: FUN_0027fca0. */
/* Supplied declaration required: mapSelectContainingRegions. */
/* Supplied declaration required: FUN_002804ec. */
/* Supplied declaration required: FUN_00280988. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int padIsButtonPressed(unsigned int);


void FUN_002e8be0(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  
  FUN_00280988();
  temp_v1 = g_lmapScene;
  *(float *)(g_lmapScene + 0x1c) =
       *(float *)(g_lmapScene + 0x1c) +
       (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * 0.33333334f;
  *(float *)(temp_v1 + 0x20) =
       *(float *)(temp_v1 + 0x20) + (*(float *)(temp_v1 + 0x2c) - *(float *)(temp_v1 + 0x20)) * 0.16666667f
  ;
  *(float *)(temp_v1 + 0x24) =
       *(float *)(temp_v1 + 0x24) + (*(float *)(temp_v1 + 0x30) - *(float *)(temp_v1 + 0x24)) * 0.33333334f
  ;
  temp_v2 = *(int *)(temp_v1 + 4);
  if (temp_v2 != 0xc) {
    if (temp_v2 < 0xc) {
      temp_v4 = 0x40a00000;
      if (temp_v2 == 2) {
        *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
        mapIfActivateRecord(1,DAT_0049f99c);
        temp_v2 = FUN_0027ee9c();
        temp_v1 = g_lmapScene;
        if (temp_v2 != 0) {
          *(unsigned int *)(g_lmapScene + 4) = 10;
          *(unsigned int *)(temp_v1 + 8) = 0;
        }
        else {
          temp_v1 = padIsButtonPressed(5);
          if ((temp_v1 != 0) || (temp_v1 = inputIsQuestMenuPressed(), temp_v1 != 0)) {
            temp_v1 = DAT_004474f4;
            *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
            *(unsigned int *)(temp_v1 + 0xac) = 0;
            FUN_0027fc14(0);
            temp_v1 = g_lmapScene;
            *(unsigned int *)(g_lmapScene + 0x54) = 0;
            *(unsigned int *)(temp_v1 + 0x58) = temp_v4;
            mapIfActivateRecord(0,DAT_0049f99c);
            mapIfReleaseSlot1();
            temp_v1 = g_lmapScene;
            *(unsigned int *)(g_lmapScene + 4) = 0x5a;
            *(unsigned int *)(temp_v1 + 8) = 0;
          }
        }
        FUN_002804ec(g_lmapScene + 0x28);
        mapSelectContainingRegions();
        return;
      }
      if (temp_v2 < 2) {
        if (temp_v2 != 0) {
          if (temp_v2 == 1) {
            *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
            mapIfActivateRecord(1,DAT_0049f99c);
            temp_v1 = g_lmapScene;
            if (*(int *)(g_lmapScene + 8) >= 3) {
              temp_v2 = *(int *)(g_lmapScene + 4);
              *(unsigned int *)(g_lmapScene + 0x54) = 0x1d;
              *(unsigned int *)(temp_v1 + 0x58) = 0x40000000;
              *(int *)(temp_v1 + 4) = temp_v2 + 1;
              *(unsigned int *)(temp_v1 + 8) = 0;
            }
          }
          FUN_002804ec(g_lmapScene + 0x28);
          mapSelectContainingRegions();
          return;
        }
        *(unsigned int *)(temp_v1 + 0x54) = 0;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
        *(unsigned char *)(temp_v1 + 0x6c) = 0;
        temp_v0 = DAT_0049f9a8;
        temp_v4 = DAT_0049f9a4;
        temp_v5 = 0.017453292f;
        *(unsigned int *)(temp_v1 + 0x28) = DAT_0049f9a0;
        *(unsigned int *)(temp_v1 + 0x2c) = temp_v4;
        *(unsigned int *)(temp_v1 + 0x30) = temp_v0;
        temp_v3 = DAT_0049f9bc * 0.017453292f;
        FUN_0028250c();
        temp_v6 = 40.0f;
        *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v3 * 40.0f;
        temp_v5 = DAT_0049f9bc * temp_v5;
        FUN_00282390();
        temp_v1 = g_lmapScene;
        *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v5 * temp_v6;
        *(unsigned int *)(temp_v1 + 0x50) = DAT_0049f9ac;
        FUN_0027fc14(0xb);
        *(unsigned int *)(DAT_004474f4 + 0xac) = 0xfffffffe;
        buttonHelpSetPreset(0xdb);
        mapIfActivateRecord(1,DAT_0049f99c);
        FUN_0028250c();
        FUN_00282390();
        FUN_001b4478();
        temp_v2 = *(int *)(g_lmapScene + 4);
        temp_v1 = g_lmapScene;
      }
      else if (temp_v2 != 10) {
        if ((temp_v2 != 0xb) ||
           (temp_v2 = *(int *)(temp_v1 + 8) + 1, *(int *)(temp_v1 + 8) = temp_v2, temp_v2 != 0x14)) {
          FUN_002804ec(g_lmapScene + 0x28);
          mapSelectContainingRegions();
          return;
        }
        mapInterfaceSetStateTwo();
        temp_v2 = *(int *)(g_lmapScene + 4);
        temp_v1 = g_lmapScene;
      }
      else {
        DAT_0049fb46 = 0;
        *(unsigned int *)(temp_v1 + 0x54) = 8;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40a00000;
        FUN_0027fca0(1);
        temp_v2 = *(int *)(g_lmapScene + 4);
        temp_v1 = g_lmapScene;
      }
    }
    else {
      if (temp_v2 == 0xd) {
        temp_v2 = *(int *)(temp_v1 + 8) + 1;
        *(int *)(temp_v1 + 8) = temp_v2;
        if (temp_v2 != 0x14) {
          FUN_002804ec(g_lmapScene + 0x28);
          mapSelectContainingRegions();
          return;
        }
        mapDestroyInterfaceModel();
        mapIfSetMode1();
        temp_v4 = 10;
        FUN_0027fa98(temp_v4);
        FUN_002804ec(g_lmapScene + 0x28);
        mapSelectContainingRegions();
        return;
      }
      if (temp_v2 != 0x5a) {
        if (temp_v2 != 0x5b) {
          if ((temp_v2 != 0x5c) ||
             (temp_v2 = *(int *)(temp_v1 + 8) + 1, *(int *)(temp_v1 + 8) = temp_v2, temp_v2 < 4)) {
            FUN_002804ec(g_lmapScene + 0x28);
            mapSelectContainingRegions();
            return;
          }
          temp_v4 = 1;
          FUN_0027fa98(temp_v4);
          FUN_002804ec(g_lmapScene + 0x28);
          mapSelectContainingRegions();
          return;
        }
        mapDestroyInterfaceModel();
        temp_v2 = *(int *)(g_lmapScene + 4);
        temp_v1 = g_lmapScene;
      }
    }
  }
  else {
    temp_v1 = mapIfHasSelection();
    if (temp_v1 != 0) {
      FUN_002804ec(g_lmapScene + 0x28);
      mapSelectContainingRegions();
      return;
    }
    mapIfReleaseSlot1();
    temp_v1 = DAT_004474f4;
    *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
    *(unsigned int *)(temp_v1 + 0xac) = 0;
    FUN_0027fc14(0);
    temp_v2 = *(int *)(g_lmapScene + 4);
    temp_v1 = g_lmapScene;
  }
  *(int *)(temp_v1 + 4) = temp_v2 + 1;
  *(unsigned int *)(temp_v1 + 8) = 0;
  FUN_002804ec(g_lmapScene + 0x28);
  mapSelectContainingRegions();
  return;
}

} /* extern "C" */
