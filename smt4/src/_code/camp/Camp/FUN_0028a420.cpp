/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a420` (_code @ 0x28a420, 0x504 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "romwright_types.h"
#include "status/StatusCamera.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

int FUN_0026c868(void);
int FUN_00292bcc(...);
int FUN_0029378c(...);
int FUN_00298d28(...);

int partyPanelHasSlotValue(...);
int FUN_00262d40(void);
int campRebuildOwnedInventoryCategory(...);
int FUN_00282f80(...);
int FUN_00288e68(void);
int FUN_002898e4(void);
int FUN_0028b7f8(...);
int buttonHelpCreate(void);
int FUN_00292be4(...);
int FUN_00297408(void);
int FUN_00298ad8(void);
int campRefreshEquipmentCategory(...);
int FUN_0029e874(...);
int scrollOwnerSelectIndex(...);
int FUN_0029eb5c(...);
int FUN_0029f848(...);
int gameGetSlotTable(...);
int timerStart(...);
int FUN_002bd954(...);
int spriteStartAnimationByIndex(...);
int __aeabi_memset4(...);
int memClear(void);
int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);
int FUN_002d666c(...);
int words3Clear(unsigned char *);
int drawParameterBlockClear(void);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int FUN_0018b2a4(...); /* 0x18b2a4 */
extern int FUN_001a012c(...); /* 0x1a012c */
extern unsigned char FUN_0032c8d4; /* 0x32c8d4 */
extern unsigned char DAT_00402648; /* 0x402648 */
extern unsigned char DAT_004026b4; /* 0x4026b4 */
extern unsigned char DAT_004026e4; /* 0x4026e4 */
extern unsigned int *g_camp; /* 0x43da90 */
extern int g_partyPanel; /* 0x43dcf0 */
extern unsigned char g_campState; /* 0x493784 */
extern unsigned char DAT_0049378e; /* 0x49378e */
extern unsigned char DAT_0049f950; /* 0x49f950 */

/* Supplied declaration required: partyPanelHasSlotValue. */
extern int FUN_00262cb0(unsigned int);
/* Supplied declaration required: FUN_00262d40. */
/* Supplied declaration required: campRebuildOwnedInventoryCategory. */
extern unsigned int statusGetAvailableChoiceCount(void);
/* Supplied declaration required: FUN_0026c868. */
/* Supplied declaration required: FUN_00282f80. */
/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_0028b7f8. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: FUN_00292bcc. */
/* Supplied declaration required: FUN_00292be4. */
/* Supplied declaration required: FUN_0029378c. */
/* Supplied declaration required: FUN_00297408. */
/* Supplied declaration required: FUN_00298ad8. */
/* Supplied declaration required: FUN_00298d28. */
/* Supplied declaration required: campRefreshEquipmentCategory. */
/* Supplied declaration required: FUN_0029e874. */
/* Supplied declaration required: scrollOwnerSelectIndex. */
extern unsigned int objectPartRunUnlessLocked(void);
/* Supplied declaration required: FUN_0029eb5c. */
extern unsigned int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: spriteStartAnimationByIndex. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_002d666c. */
/* Supplied declaration required: words3Clear. */
/* Supplied declaration required: drawParameterBlockClear. */


/* WARNING: Removing unreachable block (ram,0x0028aa2c) */

void FUN_0028a420(void)

{
/* irregular: 8 goto(s); 37 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  if (g_camp == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0x25c4,1);
    g_camp = puVar1;
  }
  puVar1 = g_camp;
  memClear();
  words3Clear(&g_campState);
  FUN_002898e4();
  asdProcessCreateSimple("TMD CALC", 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(&FUN_0032c8d4), 0, 0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw("Camp DrawUpLeft",0x7a,0,0,FUN_0018b2a4,0,0,puVar2);
  taskCreateDraw("Camp DrawUpRight",0xd8,0,0,FUN_0018b2a4,0,0,*puVar1);
  taskCreateDraw("TMD DDRAW",0xe7,0,0,FUN_001a012c,0,0,*puVar1);
  puVar1[2] = (unsigned int)puVar2;
  puVar1 = g_camp;
  *(unsigned char *)(g_camp + 0x2b) = 0;
  *(unsigned char *)((int)puVar1 + 0xad) = 3;
  DAT_0049378e = 0;
  DAT_0049f950 = 0;
  FUN_00297408();
  buttonHelpCreate();
  FUN_002d666c(0);
  puVar3 = puVar1 + 0x18a;
  drawParameterBlockClear();
  paramsInit(reinterpret_cast<UiResourceParameters *>(puVar3),&DAT_00402648,0x6c,&DAT_004026b4,0x30,0,0,0,0,&DAT_004026e4,0x150);
  FUN_002bd954(puVar1 + 0x192,0x1d,0,puVar3,0xc9);
  timerStart(puVar1 + 0x192,1,0);
  FUN_002bd954(puVar1 + 0x1b5,0x1d,0,puVar3,0xc9);
  timerStart(puVar1 + 0x1b5,1,0);
  FUN_002bd954(puVar1 + 0x1d8,0x1d,0,puVar3,0xc9);
  timerStart(puVar1 + 0x1d8,8,0);
  FUN_002bd954(puVar1 + 0x1fb,0x1d,0,puVar3,0xc9);
  spriteStartAnimationByIndex(puVar1 + 0x1fb,2);
  FUN_002bd954(puVar1 + 0x21e,0x1d,0,puVar3,0xc9);
  timerStart(puVar1 + 0x21e,1,0);
  temp_v6 = 0;
  do {
    FUN_002bd954(puVar1 + temp_v6 * 0x23 + 0x241,0x1d,0x22,puVar3,0xc9);
    timerStart(puVar1 + temp_v6 * 0x23 + 0x241,1,0);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  FUN_002bd954(puVar1 + 0x359,0x1d,0,puVar3,0xc9);
  spriteStartAnimationByIndex(puVar1 + 0x359,1);
  *(unsigned char *)(puVar1 + 0x26) = 1;
  FUN_00298ad8();
  __aeabi_memset4(puVar1 + 0x37c,0x4a,0xffffffff);
  gameGetSlotTable();
  campRebuildOwnedInventoryCategory(0xb);
  campRebuildOwnedInventoryCategory(0xc);
  campRebuildOwnedInventoryCategory(0xd);
  FUN_00262d40();
  puVar1 = g_camp;
  temp_v7 = 0x79f;
  temp_v6 = 0;
  while( 1 ) {
    temp_v0 = FUN_00262cb0(temp_v7 & 0xffff);
    if ((temp_v0 != 0) && (temp_v1 = temp_v7, FUN_00288e68(), temp_v1 != 0)) {
      temp_v0 = temp_v6 * 2;
      temp_v6 = temp_v6 + 1;
      *(short *)((int)puVar1 + temp_v0 + 0x1db4) = (short)temp_v7;
    }
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x803) break;
    while (temp_v7 == 0) {
      temp_v7 = 1;
    }
  }
  temp_v2 = statusGetAvailableChoiceCount();
  FUN_0029f848(puVar1 + 0x90,temp_v2,0xb,1,1,1);
  FUN_00282f80(10);
  campRefreshEquipmentCategory(0x11);
  campRefreshEquipmentCategory(0x12);
  campRefreshEquipmentCategory(0x13);
  campRefreshEquipmentCategory(0x14);
  campRefreshEquipmentCategory(0x15);
  campRefreshEquipmentCategory(0x16);
  campRefreshEquipmentCategory(0x17);
  FUN_0028b7f8(1);
  temp_v6 = g_partyPanel;
  gameGetSlotTable(&g_partyPanel,0,0xffffffff);
  *(unsigned char *)(temp_v6 + 0x66c) = 1;
  __aeabi_memset4(temp_v6 + 0x678,4,1);
  temp_v0 = 0;
  temp_v5 = 0;
  do {
    temp_v3 = temp_v0 + 1;
    temp_v5 = temp_v5 + 2;
    *(unsigned short *)(temp_v6 + temp_v0 * 8 + 0x73c) = 1;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(temp_v6 + temp_v3 * 8 + 0x73c) = 1;
  } while (temp_v5 < 0x18);
  temp_v0 = 0;
  do {
    temp_v5 = temp_v6 + temp_v0 * 4;
    *(unsigned char *)(*(int *)(temp_v5 + 0x6c8) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0x6c8) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0x6c8) + 0x26) = 0;
    FUN_00292be4(*(unsigned int *)(temp_v5 + 0x6c8),0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  temp_v0 = 0;
  do {
    temp_v5 = temp_v6 + temp_v0 * 4;
    *(unsigned char *)(*(int *)(temp_v5 + 0x6d8) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0x6d8) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0x6d8) + 0x26) = 0;
    FUN_00292be4(*(unsigned int *)(temp_v5 + 0x6d8),0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x18);
  temp_v0 = 0;
  temp_v5 = 0;
  *(unsigned int *)(temp_v6 + 0x678) = 0;
  do {
    temp_v3 = temp_v0 + 1;
    temp_v5 = temp_v5 + 2;
    *(unsigned short *)(temp_v6 + temp_v0 * 8 + 0x73c) = 0;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(temp_v6 + temp_v3 * 8 + 0x73c) = 0;
  } while (temp_v5 < 0x18);
  *(unsigned int *)(temp_v6 + 0x20) = 1;
  FUN_0029e874(0);
  if (*(int *)(temp_v6 + 0x20) == 8) {
    if (*(char *)(temp_v6 + 0x42) != '\0') {
      temp_v5 = temp_v6 + 0xa6c;
      temp_v2 = objectPartRunUnlessLocked();
      temp_v4 = FUN_0029efa8(temp_v5);
      temp_v0 = 0;
      partyPanelHasSlotValue(0,temp_v2,temp_v4,*(unsigned int *)(temp_v6 + 0x2c));
      if (temp_v0 == 0) {
        temp_v0 = 0;
        if (*(char *)(temp_v6 + 0x66c) == '\x04') {
          do {
            temp_v3 = ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v3 != 0) {
              if (*(short *)(g_partyPanel + (temp_v0 % 4 + (temp_v3 * 4 - 4)) * 8 + 0x73c) != 0) {
LAB_0028b308:
                scrollOwnerSelectIndex(temp_v5,temp_v0 % 4);
                FUN_0029eb5c(temp_v5,((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2) + 1);
                if (temp_v0 < 0x18) goto LAB_0028b6d0;
                break;
              }
            }
            else if (*(char *)(g_partyPanel + temp_v0 % 4 + 0x678) != '\0') goto LAB_0028b308;
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 0x18);
          temp_v0 = 0;
          do {
            if (*(char *)(g_partyPanel + temp_v0 + 0x678) != '\0') {
              scrollOwnerSelectIndex(temp_v5);
              temp_v0 = 0;
              FUN_0029eb5c(temp_v5,temp_v0);
              break;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 4);
        }
        else {
          do {
            if (*(char *)(g_partyPanel + temp_v0 + 0x678) != '\0') {
              scrollOwnerSelectIndex(temp_v5,temp_v0);
              FUN_0029eb5c(temp_v5,0);
              if (temp_v0 < 4) goto LAB_0028b6d0;
              break;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 4);
          temp_v0 = 0;
          do {
            temp_v3 = ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v3 != 0) {
              if (*(short *)(g_partyPanel + (temp_v0 % 4 + (temp_v3 * 4 - 4)) * 8 + 0x73c) != 0) {
                scrollOwnerSelectIndex(temp_v5,temp_v0 % 4);
                temp_v0 = ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2) + 1;
                FUN_0029eb5c(temp_v5,temp_v0);
                break;
              }
            }
            else if (*(char *)(temp_v0 % 4 + g_partyPanel + 0x678) != '\0') {
              scrollOwnerSelectIndex(temp_v5,temp_v0 % 4);
              temp_v0 = ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2) + 1;
              FUN_0029eb5c(temp_v5,temp_v0);
              break;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 0x18);
        }
      }
    }
    else {
      temp_v5 = temp_v6 + 0xa08;
      temp_v2 = objectPartRunUnlessLocked();
      temp_v4 = FUN_0029efa8(temp_v5);
      temp_v0 = 0;
      partyPanelHasSlotValue(0,temp_v2,temp_v4,*(unsigned int *)(temp_v6 + 0x2c));
      if (temp_v0 == 0) {
        temp_v0 = 0;
        if (*(char *)(temp_v6 + 0x66c) == '\x04') {
          do {
            temp_v8 = ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2) + 1;
            temp_v3 = temp_v0 % 4 + *(int *)(temp_v6 + 0x2c) * 0xc;
            if (temp_v8 != 0) {
              if (*(short *)(g_partyPanel + (temp_v3 + (temp_v8 * 4 - 4)) * 8 + 0x73c) != 0) {
LAB_0028b50c:
                temp_v3 = temp_v0 + *(int *)(temp_v6 + 0x2c) * 0xc;
                if (temp_v3 < 0xc) {
                  *(unsigned int *)(temp_v6 + 0x2c) = 0;
                  scrollOwnerSelectIndex(temp_v5,temp_v0 % 4);
                  FUN_0029eb5c(temp_v5,((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                else {
                  temp_v3 = temp_v3 - 0xc;
                  *(unsigned int *)(temp_v6 + 0x2c) = 1;
                  scrollOwnerSelectIndex(temp_v5,temp_v3 % 4);
                  FUN_0029eb5c(temp_v5,((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                if (temp_v0 < 0x18) goto LAB_0028b6d0;
                break;
              }
            }
            else if (*(char *)(temp_v3 + g_partyPanel + 0x678) != '\0') goto LAB_0028b50c;
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 0x18);
          temp_v0 = 0;
          do {
            if (*(char *)(g_partyPanel + temp_v0 + 0x678) != '\0') {
              scrollOwnerSelectIndex(temp_v5);
              temp_v0 = 0;
              FUN_0029eb5c(temp_v5,temp_v0);
              break;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 4);
        }
        else {
          do {
            if (*(char *)(g_partyPanel + temp_v0 + 0x678) != '\0') {
              scrollOwnerSelectIndex(temp_v5,temp_v0);
              FUN_0029eb5c(temp_v5,0);
              if (temp_v0 < 4) goto LAB_0028b6d0;
              break;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 4);
          temp_v0 = g_partyPanel;
          temp_v3 = 0;
          do {
            temp_v8 = ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v8 == 0) {
              if (*(char *)(g_partyPanel + temp_v3 % 4 + 0x678) == '\0') goto LAB_0028b6c0;
LAB_0028b668:
              if (temp_v3 < 0xc) {
                if (*(int *)(temp_v6 + 0x2c) != 1) {
                  *(unsigned int *)(temp_v6 + 0x2c) = 0;
                }
                else {
                  *(unsigned int *)(g_partyPanel + 0x2c) = *(unsigned int *)(g_partyPanel + 0x2c) ^ 1;
                  timerStart(temp_v0 + 0x180,5,0);
                  temp_v8 = 0;
                  do {
                    FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v8 * 4 + 0x6c8),
                                 *(unsigned int *)(temp_v0 + 0x2c));
                    temp_v8 = temp_v8 + 1;
                  } while (temp_v8 < 4);
                  temp_v8 = 0;
                  do {
                    FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v8 * 4 + 0x6d8),
                                 *(unsigned int *)(temp_v0 + 0x2c));
                    temp_v8 = temp_v8 + 1;
                  } while (temp_v8 < 0x18);
                }
                scrollOwnerSelectIndex(temp_v5,temp_v3 % 4);
                FUN_0029eb5c(temp_v5,((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) + 1);
                break;
              }
              if (*(int *)(temp_v6 + 0x2c) != 0) {
                *(unsigned int *)(temp_v6 + 0x2c) = 1;
              }
              else {
                *(unsigned int *)(g_partyPanel + 0x2c) = *(unsigned int *)(g_partyPanel + 0x2c) ^ 1;
                timerStart(temp_v0 + 0x180,4,0);
                temp_v8 = 0;
                do {
                  FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v8 * 4 + 0x6c8),
                               *(unsigned int *)(temp_v0 + 0x2c));
                  temp_v8 = temp_v8 + 1;
                } while (temp_v8 < 4);
                temp_v8 = 0;
                do {
                  FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v8 * 4 + 0x6d8),
                               *(unsigned int *)(temp_v0 + 0x2c));
                  temp_v8 = temp_v8 + 1;
                } while (temp_v8 < 0x18);
              }
              temp_v3 = temp_v3 - 0xc;
              scrollOwnerSelectIndex(temp_v5,temp_v3 % 4);
              temp_v0 = ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) + 1;
              FUN_0029eb5c(temp_v5,temp_v0);
              break;
            }
            if (*(short *)(g_partyPanel + ((temp_v8 * 4 - 4) + temp_v3 % 4) * 8 + 0x73c) != 0)
            goto LAB_0028b668;
LAB_0028b6c0:
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 0x18);
        }
      }
    }
  }
LAB_0028b6d0:
  FUN_0026c868();
  temp_v0 = g_partyPanel;
  if (*(int *)(temp_v6 + 0x1c) == 0x17) {
    temp_v6 = *(int *)(temp_v6 + 0x20);
    *(unsigned int *)(g_partyPanel + 0x24) = *(unsigned int *)(g_partyPanel + 0x1c);
    *(int *)(temp_v0 + 0x1c) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x18) = 0;
    if (temp_v6 == 0x17) {
      FUN_002a0cc8(0);
      temp_v6 = *(int *)(temp_v0 + 0x1c);
    }
    if (temp_v6 == 0x13) {
      temp_v6 = 0;
      do {
        temp_v5 = temp_v0 + temp_v6 * 4;
        FUN_00292be4(*(unsigned int *)(temp_v5 + 0x6c8),0);
        *(unsigned char *)(*(int *)(temp_v5 + 0x6c8) + 0x25) = 0;
        *(unsigned char *)(*(int *)(temp_v5 + 0x6c8) + 0x27) = 0;
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      temp_v6 = 0;
      do {
        temp_v5 = temp_v0 + temp_v6 * 4;
        FUN_00292be4(*(unsigned int *)(temp_v5 + 0x6d8),0);
        *(unsigned char *)(*(int *)(temp_v5 + 0x6d8) + 0x25) = 0;
        *(unsigned char *)(*(int *)(temp_v5 + 0x6d8) + 0x27) = 0;
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x18);
      FUN_00298d28(0);
    }
    if (*(int *)(temp_v0 + 0x1c) == 0x14) {
      temp_v6 = 0;
      do {
        temp_v5 = temp_v0 + temp_v6 * 4;
        FUN_00292be4(*(unsigned int *)(temp_v5 + 0x6c8),0);
        *(unsigned char *)(*(int *)(temp_v5 + 0x6c8) + 0x25) = 0;
        *(unsigned char *)(*(int *)(temp_v5 + 0x6c8) + 0x27) = 0;
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      temp_v6 = 0;
      do {
        temp_v5 = temp_v0 + temp_v6 * 4;
        FUN_00292be4(*(unsigned int *)(temp_v5 + 0x6d8),0);
        *(unsigned char *)(*(int *)(temp_v5 + 0x6d8) + 0x25) = 0;
        *(unsigned char *)(*(int *)(temp_v5 + 0x6d8) + 0x27) = 0;
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x18);
      FUN_00298d28(0);
      if (*(char *)(temp_v0 + 0x678) != '\0') {
        FUN_00292bcc(*(unsigned int *)(temp_v0 + 0x6c8),0xff);
      }
      temp_v6 = 0;
      do {
        if (*(char *)(temp_v0 + temp_v6 + 0x679) != '\0') {
          FUN_00292bcc(*(unsigned int *)(temp_v0 + temp_v6 * 4 + 0x6cc),0xff);
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 3);
      temp_v6 = 0;
      do {
        if (*(short *)(temp_v0 + temp_v6 * 8 + 0x73c) != 0) {
          FUN_00292bcc(*(unsigned int *)(temp_v0 + temp_v6 * 4 + 0x6d8),0xff);
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x18);
    }
    return;
  }
  return;
}

} /* extern "C" */
