/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ca748` (_code @ 0x1ca748, 0x22a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/FUN_002881a0.h"

extern "C" {

unsigned short* dataTable0cSub1GetText(unsigned short id);
int dataTable0cLookupById(...);
int FUN_00288e68(void);
int FUN_0029212c(...);
int FUN_0029bd4c(void);
int buttonHelpShowSkillDetails(...);
int devilGetRecord(...);
int textFormatBuffer(...);

int FUN_0026ab64(...);
int devilCreateRaceEffect(...);
int messageMainFinishWindow(void);
int flaggedEntrySetValueB(...);
int useCounterRelease(void);
int useCounterStart(void);
int FUN_0029e328(...);
int sortMenuCreate(...);
int objectPartRunUnlessLocked(...);
int FUN_0029ee6c(...);
int FUN_002a0cc8(...);
int FUN_002b7bca(...);
int eventQueueAddUnique(...);
int asdTMTexTableEntryAt(...);
int statusInventorySort(void);

int FUN_0026adb4(void);
int FUN_0026ae68(void);
int FUN_00295eb0(...);
int flaggedEntrySetValueA(...);
int ifTouchGetSelectionModeForRegion(...);
int flaggedEntryGetValueA(...);
int FUN_0029eb5c(...);
int FUN_0029ee54(...);
int FUN_0029efa8(...);
int FUN_0029efc0(...);
int FUN_0029efd8(...);
int uiScrollHandleActionsOrTouch(...);
int FUN_0029f848(...);
int buttonHelpSetPreset(...);
int eventQueueAddUniqueIfValid(...);
int timerStart(...);
int spriteStartAnimationByIndex(...);
int FUN_002bf818(...);
int FUN_002c1658(...);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned char LAB_001cc740; /* 0x1cc740 */
extern unsigned char LAB_001cca08; /* 0x1cca08 */
extern unsigned char LAB_001cca0c; /* 0x1cca0c */
extern int FUN_001f61c4(...); /* 0x1f61c4 */
extern int entryRefCompareByKey(...); /* 0x1f625c */
extern int FUN_00206d4c(...); /* 0x206d4c */
extern int FUN_002dc9d4(...); /* 0x2dc9d4 */
extern int recordCompareByKey(...); /* 0x2dca6c */
extern int devilIdCompareRankOrderId(...); /* 0x2e45a8 */
extern int g_statusDown; /* 0x44e190 */

/* Supplied declaration required: dataTable0cSub1GetText. */
/* Supplied declaration required: dataTable0cLookupById. */
extern int uniteNotBusy(void);
/* Supplied declaration required: FUN_0026ab64. */
/* Supplied declaration required: FUN_0026adb4. */
/* Supplied declaration required: FUN_0026ae68. */
extern int FUN_00288498(void);
/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: FUN_0029212c. */
extern int FUN_00293ac0(void);
/* Supplied declaration required: devilCreateRaceEffect. */
extern int asdSoundSlotBIsPlaying(unsigned int);
/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: messageMainFinishWindow. */
/* Supplied declaration required: flaggedEntrySetValueB. */
extern int FUN_0029ac94(void);
extern unsigned short *FUN_0029acb0(void);
/* Supplied declaration required: FUN_0029bd4c. */
/* Supplied declaration required: buttonHelpShowSkillDetails. */
/* Supplied declaration required: flaggedEntrySetValueA. */
/* Supplied declaration required: ifTouchGetSelectionModeForRegion. */
/* Supplied declaration required: flaggedEntryGetValueA. */
extern int useCounterGetCurrentValue(void);
/* Supplied declaration required: useCounterRelease. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: sortMenuCreate. */
/* Supplied declaration required: objectPartRunUnlessLocked. */
extern short FUN_0029e93c(int);
extern int FUN_0029e9cc(unsigned short);
/* Supplied declaration required: FUN_0029eb5c. */
/* Supplied declaration required: FUN_0029ee54. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_0029efa8. */
/* Supplied declaration required: FUN_0029efc0. */
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: uiScrollHandleActionsOrTouch. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: FUN_002a0cc8. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: eventQueueAddUnique. */
extern int FUN_002b8ee0(int, unsigned int);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int querySlotHasHandle(void);
extern unsigned int demonGetRaceLabel(unsigned int, unsigned int);
extern unsigned int FUN_002bd068(unsigned int);
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: spriteStartAnimationByIndex. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
extern unsigned int FUN_002bf810(unsigned int);
/* Supplied declaration required: FUN_002bf818. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: statusInventorySort. */


unsigned int FUN_001ca748(void)

{
/* irregular: 7 goto(s); 48 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  short temp_v4;
  short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int *puVar10;
  int temp_v9;
  int temp_v10;
  unsigned int *puVar13;
  unsigned short *puVar14;
  unsigned int temp_v11;
  unsigned char *puVar16;
  unsigned int temp_v12;
  unsigned short temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18 [68];
  
  temp_v2 = g_statusDown;
  *(unsigned char *)(g_statusDown + 0x2388) = 0;
  temp_v6 = flaggedEntryGetValueA(temp_v2 + 0x4d4);
  *(unsigned char *)(temp_v2 + 0x481) = 0;
  temp_v7 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x476));
  *(unsigned int *)(temp_v2 + 0x418) = temp_v7;
  temp_v7 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x478));
  *(unsigned int *)(temp_v2 + 0x41c) = temp_v7;
  temp_v7 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x474));
  *(unsigned int *)(temp_v2 + 0x420) = temp_v7;
  temp_v7 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x47a));
  *(unsigned int *)(temp_v2 + 0x424) = temp_v7;
  temp_v7 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x47c));
  *(unsigned int *)(temp_v2 + 0x428) = temp_v7;
  temp_v15 = 0;
  *(unsigned int *)(temp_v2 + 0x414) = 0xffffffff;
  do {
    if ((-1 < *(short *)(temp_v2 + temp_v15 * 2 + 0x42c)) &&
       (temp_v8 = ifTouchGetSelectionModeForRegion(), temp_v8 == 1 || temp_v8 == 2)) {
      *(int *)(temp_v2 + 0x414) = temp_v15;
      break;
    }
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 0x24);
  temp_v8 = FUN_00288498();
  if (temp_v8 == 0) {
    *(unsigned int *)(temp_v2 + 0x424) = 0;
    *(unsigned int *)(temp_v2 + 0x428) = 0;
  }
  switch(*(unsigned int *)(temp_v2 + 0x400)) {
  case 1:
    if (*(short *)(temp_v2 + 0x78) != 0) {
      temp_v15 = FUN_002b8ee0(temp_v2 + 0x28,0);
      temp_v6 = g_statusDown;
    }
    else {
      temp_v15 = FUN_002b8ee0(temp_v2 + 0x28,1);
      temp_v6 = g_statusDown;
    }
    g_statusDown = temp_v6;
    if (temp_v15 != 0) {
      temp_v7 = *(unsigned int *)(temp_v2 + 0x408);
      *(unsigned int *)(temp_v6 + 0x40c) = 0;
      temp_v12 = *(unsigned int *)(temp_v6 + 0x400);
      *(unsigned int *)(temp_v6 + 0x400) = temp_v7;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v12;
      FUN_0026ae68();
      *(unsigned char *)(temp_v2 + 0x410) = 1;
    }
    break;
  case 2:
    FUN_002bf818(temp_v2 + 0x28);
    temp_v6 = g_statusDown;
    if (*(char *)(temp_v2 + 0xb2) != '\0') {
      if (*(int *)(temp_v2 + 0x408) != 0) {
        if (*(short *)(temp_v2 + 0x78) != 3) {
          timerStart(temp_v2 + 0x28,1,0);
        }
        else {
          timerStart(temp_v2 + 0x28,0,0);
        }
        temp_v6 = g_statusDown;
        *(unsigned int *)(g_statusDown + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 1;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
        temp_v6 = FUN_0029ac94();
        temp_v17 = temp_v6 != 0xd;
        temp_v16 = temp_v6 == 6;
        temp_v7 = 0x27;
        if (*(int *)(temp_v2 + 0x408) == 3) {
          if (temp_v17 && !temp_v16) {
            temp_v6 = FUN_00293ac0();
            if (temp_v6 == 2) {
              temp_v7 = 0x28;
            }
            else if (*(short *)(temp_v2 + 0x47e) < 0) {
              temp_v7 = 0x1f;
            }
            goto LAB_001ca9f0;
          }
          temp_v7 = 0x2f;
        }
        else {
LAB_001ca9f0:
          if (*(int *)(temp_v2 + 0x408) == 0x10) {
            temp_v7 = 0x20;
          }
          else {
            if (*(int *)(temp_v2 + 0x408) == 0x11) {
              if (!temp_v17 || temp_v16) {
                temp_v7 = 0x30;
                goto LAB_001cab18;
              }
              temp_v6 = FUN_0029ac94();
              if ((((temp_v6 == 8) || (temp_v6 = FUN_0029ac94(), temp_v6 == 9)) ||
                  (temp_v6 = FUN_0029ac94(), temp_v6 == 0xb)) || (temp_v6 = FUN_0029ac94(), temp_v6 == 7)) {
                temp_v7 = 0x5e;
              }
              else {
                temp_v7 = 0x29;
              }
            }
            if (*(int *)(temp_v2 + 0x408) == 0x13) {
              temp_v6 = FUN_0029ac94();
              if (((temp_v6 == 8) || (temp_v6 = FUN_0029ac94(), temp_v6 == 9)) ||
                 ((temp_v6 = FUN_0029ac94(), temp_v6 == 0xb || (temp_v6 = FUN_0029ac94(), temp_v6 == 7)))) {
                temp_v7 = 0x5f;
              }
              else {
                temp_v7 = 0x2a;
              }
            }
            if (*(int *)(temp_v2 + 0x408) == 0x15) {
              if (!temp_v17 || temp_v16) {
                temp_v7 = 0x31;
              }
              else {
                temp_v6 = FUN_0029ac94();
                if (((temp_v6 == 8) || (temp_v6 = FUN_0029ac94(), temp_v6 == 9)) ||
                   ((temp_v6 = FUN_0029ac94(), temp_v6 == 0xb || (temp_v6 = FUN_0029ac94(), temp_v6 == 7))))
                {
                  temp_v7 = 0x60;
                }
                else {
                  temp_v7 = 0x2b;
                }
              }
            }
          }
        }
LAB_001cab18:
        temp_v6 = FUN_0029ac94();
        temp_v17 = temp_v6 == 8;
        if (temp_v17) {
          temp_v6 = *(int *)(temp_v2 + 0x408);
        }
        if (!temp_v17 || temp_v6 != 3) {
          temp_v6 = FUN_0029ac94();
          temp_v17 = temp_v6 == 9;
          if (temp_v17) {
            temp_v6 = *(int *)(temp_v2 + 0x408);
          }
          if (!temp_v17 || temp_v6 != 3) {
            temp_v6 = FUN_0029ac94();
            temp_v17 = temp_v6 == 0xb;
            if (temp_v17) {
              temp_v6 = *(int *)(temp_v2 + 0x408);
            }
            if (!temp_v17 || temp_v6 != 3) {
              temp_v6 = FUN_0029ac94();
              temp_v17 = temp_v6 == 7;
              if (temp_v17) {
                temp_v6 = *(int *)(temp_v2 + 0x408);
              }
              if (((!temp_v17 || temp_v6 != 3) && (temp_v6 = FUN_002881a0(), temp_v6 != 5)) &&
                 (temp_v6 = FUN_002881a0(), temp_v6 != 6)) {
                buttonHelpSetPreset(temp_v7);
              }
            }
          }
        }
      }
      else {
        *(unsigned int *)(g_statusDown + 0x40c) = 0;
        temp_v7 = *(unsigned int *)(temp_v6 + 0x400);
        *(unsigned int *)(temp_v6 + 0x400) = 0;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
      }
    }
    break;
  case 3:
    FUN_002bf818(temp_v2 + 0xb4);
    FUN_002bf818(temp_v2 + 0x1cc);
    if ((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v15 = FUN_00288498(), temp_v15 != 0)) {
      temp_v15 = 4;
      FUN_002c1658(4,0);
      if (temp_v15 == 0) goto LAB_001cabe4;
    }
    else {
LAB_001cabe4:
      if (*(int *)(temp_v2 + 0x428) != 6) {
        if ((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v15 = FUN_00288498(), temp_v15 != 0)) {
          temp_v15 = 3;
          FUN_002c1658(3,0);
          if (temp_v15 != 0) {
            temp_v3 = 1;
            *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
            break;
          }
        }
        if (*(int *)(temp_v2 + 0x424) == 6) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
          break;
        }
        temp_v8 = temp_v2 + 0x4d4;
        temp_v15 = temp_v8;
        uiScrollHandleActionsOrTouch(temp_v8,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
        if (temp_v15 != 0) {
          *(unsigned char *)(temp_v2 + 0x410) = 1;
          temp_v15 = flaggedEntryGetValueA(temp_v8);
        }
        else {
          if ((*(char *)(temp_v2 + 0x412) != '\0') ||
             (temp_v15 = temp_v8, FUN_0029efd8(temp_v8,0), temp_v15 == 0)) break;
          *(unsigned char *)(temp_v2 + 0x410) = 1;
          temp_v15 = flaggedEntryGetValueA(temp_v8);
        }
        if (temp_v15 != temp_v6) {
          eventQueueAddUniqueIfValid(0x100016c);
        }
        break;
      }
    }
    temp_v3 = 0xff;
    *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
    break;
  case 4:
    temp_v6 = *(int *)(temp_v2 + 0x40c);
    if (temp_v6 == 8) {
      temp_v15 = 0;
    }
    if (temp_v6 >= 8) {
      if (temp_v6 == 8) {
        do {
          if (*(short *)(temp_v2 + temp_v15 * 2 + 0x482) == 0) {
            *(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x482) = *(unsigned short *)(temp_v2 + 0x4a2);
            break;
          }
          temp_v15 = temp_v15 + 1;
        } while (temp_v15 < 8);
        FUN_0029f848(temp_v2 + 0x4d4,temp_v15 + 1,8,1,0,1);
        flaggedEntrySetValueA(temp_v2 + 0x4d4,temp_v15);
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        timerStart(temp_v2 + 0x2e4,0);
        spriteStartAnimationByIndex(temp_v2 + 0x370,2);
        FUN_00295eb0(temp_v2 + 0x370,0x1a,temp_v15 + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = FUN_002b8ee0(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v6 = FUN_002bf818(temp_v2 + 0x370), temp_v6 != 0)) {
        FUN_0026adb4();
        FUN_0026ae68();
        temp_v6 = g_statusDown;
        *(unsigned int *)(g_statusDown + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 5;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
      }
    }
    break;
  case 6:
    FUN_002bf818(temp_v2 + 0xb4);
    FUN_002bf818(temp_v2 + 0x1cc);
    puVar13 = (unsigned int *)(temp_v2 + 0x40c);
    if (*(int *)(temp_v2 + 0x40c) >= 8) {
      if (*(int *)(temp_v2 + 0x40c) == 8) {
        temp_v6 = temp_v2 + 0x4d4;
        temp_v7 = FUN_0029efa8();
        temp_v15 = FUN_0029ee54(temp_v6);
        FUN_0029f848(temp_v6,temp_v15 + 1,9,1,0,1);
        FUN_0029eb5c(temp_v6,temp_v7);
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
      temp_v15 = temp_v2 + 0x4d4;
      temp_v8 = flaggedEntryGetValueA();
      temp_v6 = temp_v15;
      uiScrollHandleActionsOrTouch(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
      if ((temp_v6 != 0) || (temp_v6 = temp_v15, FUN_0029efd8(temp_v15,0), temp_v6 != 0)) {
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        temp_v6 = flaggedEntryGetValueA(temp_v15);
        if (temp_v6 == temp_v8) break;
        eventQueueAddUniqueIfValid(0x100016c);
      }
      else {
        temp_v6 = 0;
        FUN_002c1658(0,1);
        if ((temp_v6 != 0) || (*(char *)(temp_v2 + 0x2388) != '\0')) {
          temp_v6 = FUN_0029efc0(temp_v15);
          temp_v8 = FUN_0029efa8(temp_v15);
          temp_v10 = FUN_0029ee54(temp_v15);
          if ((temp_v6 + temp_v8) - temp_v10 != -1) {
            FUN_0029efc0();
            FUN_0029efa8(temp_v15);
            temp_v6 = FUN_0029efc0(temp_v15);
            temp_v15 = FUN_0029efa8(temp_v15);
            *(int *)(temp_v2 + 0x53c) = temp_v15 + temp_v6;
            temp_v7 = FUN_002bf810(0x100016d);
            *(unsigned int *)(temp_v2 + 0x238c) = temp_v7;
            temp_v6 = g_statusDown;
            temp_v7 = *(unsigned int *)(temp_v2 + 0x40c);
            *(unsigned int *)(g_statusDown + 0x40c) = 0;
            puVar10 = (unsigned int *)(temp_v6 + 0x400);
            temp_v12 = *puVar10;
            *puVar10 = 7;
            *(unsigned int *)(temp_v6 + 0x404) = temp_v12;
            *(unsigned int *)(temp_v2 + 0x550) = 0;
            *puVar13 = temp_v7;
          }
          else {
            temp_v6 = FUN_0029ee54(temp_v15);
            *(int *)(temp_v2 + 0x53c) = temp_v6 - 1;
            temp_v6 = g_statusDown;
            temp_v12 = *(unsigned int *)(temp_v2 + 0x40c);
            *(unsigned int *)(g_statusDown + 0x40c) = 0;
            puVar10 = (unsigned int *)(temp_v6 + 0x400);
            temp_v7 = *puVar10;
            *puVar10 = 7;
            *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
            temp_v7 = FUN_002bf810(0x100016d);
            *(unsigned int *)(temp_v2 + 0x238c) = temp_v7;
            *(unsigned int *)(temp_v2 + 0x550) = 0;
            *puVar13 = temp_v12;
          }
        }
        else {
          temp_v6 = 10;
          FUN_002c1658(10,1);
          if (temp_v6 != 0) {
            temp_v7 = FUN_002bf810(0x100016e);
            *(unsigned int *)(temp_v2 + 0x238c) = temp_v7;
            temp_v6 = FUN_0029ee54(temp_v15);
            *(int *)(temp_v2 + 0x53c) = temp_v6 - 1;
            temp_v6 = g_statusDown;
            temp_v7 = *(unsigned int *)(temp_v2 + 0x40c);
            *(unsigned int *)(g_statusDown + 0x40c) = 0;
            puVar10 = (unsigned int *)(temp_v6 + 0x400);
            temp_v12 = *puVar10;
            *puVar10 = 7;
            *(unsigned int *)(temp_v6 + 0x404) = temp_v12;
            *(unsigned int *)(temp_v2 + 0x550) = 0;
            *puVar13 = temp_v7;
          }
        }
      }
    }
    break;
  case 7:
    FUN_002bf818(temp_v2 + 0xb4);
    FUN_002bf818(temp_v2 + 0x1cc);
    temp_v6 = asdSoundSlotBIsPlaying(*(unsigned int *)(temp_v2 + 0x238c));
    if ((temp_v6 == 0) && (*(char *)(temp_v2 + 0x2391) != '\0')) {
      temp_v6 = FUN_0029ee54(temp_v2 + 0x4d4);
      if (temp_v6 - 1 == *(int *)(temp_v2 + 0x53c)) {
        devilCreateRaceEffect((int)*(short *)(temp_v2 + 0x47e),3);
      }
LAB_001cb104:
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 9;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    break;
  case 8:
    FUN_002bf818(temp_v2 + 0xb4);
    FUN_002bf818(temp_v2 + 0x1cc);
    temp_v6 = *(int *)(temp_v2 + 0x550) + 1;
    *(int *)(temp_v2 + 0x550) = temp_v6;
    if ((temp_v6 >= 9) && (temp_v6 = querySlotHasHandle(), temp_v6 == 0)) goto LAB_001cb104;
    break;
  case 9:
    if (*(int *)(temp_v2 + 0x40c) >= 8) {
      if (*(int *)(temp_v2 + 0x40c) == 8) {
        *(unsigned char *)(temp_v2 + 0x2390) = 0;
        temp_v6 = temp_v2 + 0x4d4;
        temp_v15 = FUN_0029ee54();
        if (temp_v15 - 1 == *(int *)(temp_v2 + 0x53c)) {
          FUN_0026adb4();
          temp_v15 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x40c) = 0;
          puVar13 = (unsigned int *)(temp_v15 + 0x400);
          temp_v7 = *puVar13;
          *puVar13 = 10;
          *(unsigned int *)(temp_v15 + 0x404) = temp_v7;
        }
        else {
          *(unsigned short *)(temp_v2 + *(int *)(temp_v2 + 0x53c) * 2 + 0x482) =
               *(unsigned short *)(temp_v2 + 0x4a2);
          eventQueueAddUnique(0x100017a);
        }
        temp_v15 = FUN_0029ee54(temp_v6);
        FUN_0029f848(temp_v6,temp_v15 - 1,8,1,0,1);
        if (*(int *)(temp_v2 + 0x53c) >= 8) {
          flaggedEntrySetValueA(temp_v6,0);
        }
        else {
          flaggedEntrySetValueA(temp_v6);
        }
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        timerStart(temp_v2 + 0x2e4,0);
        spriteStartAnimationByIndex(temp_v2 + 0x370,2);
        FUN_00295eb0(temp_v2 + 0x370,0x1a,*(int *)(temp_v2 + 0x53c) + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = FUN_002b8ee0(temp_v2 + 0x2e4,0);
      if (temp_v6 != 0) {
        if (*(char *)(temp_v2 + 0x2390) == '\0') {
          devilCreateRaceEffect((int)*(short *)(temp_v2 + 0x47e),0);
          *(unsigned char *)(temp_v2 + 0x2390) = 1;
        }
        temp_v6 = FUN_002bf818(temp_v2 + 0x370);
        if (temp_v6 != 0) {
          FUN_0026adb4();
          FUN_0026ae68();
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x40c) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x400);
          temp_v7 = *puVar13;
          *puVar13 = 10;
          *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
        }
      }
    }
    break;
  case 0xb:
    FUN_002bf818(temp_v2 + 0xb4);
    FUN_002bf818(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      temp_v15 = temp_v2 + 0x4d4;
      temp_v8 = flaggedEntryGetValueA();
      temp_v6 = temp_v15;
      uiScrollHandleActionsOrTouch(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
      if ((temp_v6 != 0) || (temp_v6 = temp_v15, FUN_0029efd8(temp_v15,0), temp_v6 != 0)) {
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        temp_v6 = flaggedEntryGetValueA(temp_v15);
        if (temp_v6 != temp_v8) {
          temp_v7 = 0x100016c;
          eventQueueAddUniqueIfValid(temp_v7);
        }
      }
    }
    break;
  case 0xe:
    if (*(int *)(temp_v2 + 0x40c) >= 8) {
      if (*(int *)(temp_v2 + 0x40c) == 8) {
        if (*(int *)(temp_v2 + 0x544) < 0) {
          temp_v6 = FUN_0029ee54();
          FUN_0029f848(temp_v2 + 0x4d4,temp_v6 - 1,8,1,0,1);
          flaggedEntrySetValueA(temp_v2 + 0x4d4,0);
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x40c) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x400);
          temp_v7 = *puVar13;
          *puVar13 = 0xf;
          *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
          *(unsigned char *)(temp_v2 + 0x410) = 1;
        }
        else {
          *(short *)(temp_v2 + *(int *)(temp_v2 + 0x544) * 2 + 0x482) =
               (short)*(unsigned int *)(temp_v2 + 0x540);
          temp_v6 = FUN_0029ee54();
          FUN_0029f848(temp_v2 + 0x4d4,temp_v6 - 1,8,1,0,1);
          timerStart(temp_v2 + 0x2e4,0);
          spriteStartAnimationByIndex(temp_v2 + 0x370,2);
          FUN_00295eb0(temp_v2 + 0x370,0x1a,*(int *)(temp_v2 + 0x544) + 0x414);
          *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
        }
      }
      temp_v6 = FUN_002b8ee0(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v15 = FUN_002bf818(temp_v2 + 0x370), temp_v6 = g_statusDown, temp_v15 != 0))
      {
        *(unsigned int *)(g_statusDown + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 0xf;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
    }
    break;
  case 0xf:
    FUN_002bf818(temp_v2 + 0xb4);
    FUN_002bf818(temp_v2 + 0x1cc);
    temp_v15 = temp_v2 + 0x4d4;
    temp_v6 = temp_v15;
    uiScrollHandleActionsOrTouch(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
    if (temp_v6 != 0) {
      *(unsigned char *)(temp_v2 + 0x410) = 1;
    }
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      FUN_0029efd8(temp_v15,1);
      if (temp_v15 != 0) {
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
    }
    break;
  case 0x10:
    FUN_002bf818(temp_v2 + 0xb4);
    FUN_002bf818(temp_v2 + 600);
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      temp_v6 = temp_v2 + 0x564;
      temp_v15 = FUN_0029efa8();
      if ((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v8 = FUN_00288498(), temp_v8 != 0)) {
        temp_v8 = 4;
        FUN_002c1658(4,0);
        if (temp_v8 != 0) {
          temp_v3 = 0xff;
          *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x428) == 6) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
        break;
      }
      if ((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v8 = FUN_00288498(), temp_v8 != 0)) {
        temp_v8 = 3;
        FUN_002c1658(3,0);
        if (temp_v8 != 0) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x424) != 6) {
        temp_v8 = temp_v6;
        uiScrollHandleActionsOrTouch(temp_v6,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
        if (temp_v8 == 0) {
          temp_v8 = temp_v6;
          FUN_0029efd8(temp_v6,1);
          if (temp_v8 == 0) break;
          temp_v8 = gameFlagIsSet(0x410);
          if (temp_v8 == 0) {
            if (temp_v15 != 0) {
              if ((temp_v15 == 3) && (temp_v15 = FUN_0029efa8(temp_v6), temp_v15 == 2)) {
                flaggedEntrySetValueA(temp_v6,0);
              }
            }
            else {
              temp_v15 = FUN_0029efa8(temp_v6);
              if (temp_v15 == 1) {
                flaggedEntrySetValueA(temp_v6,3);
              }
            }
          }
        }
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        break;
      }
      temp_v3 = 1;
      *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
    }
    break;
  case 0x11:
    FUN_002bf818(temp_v2 + 0xb4);
    FUN_002bf818(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      if ((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v6 = FUN_00288498(), temp_v6 != 0)) {
        temp_v6 = 4;
        FUN_002c1658(4,0);
        if (temp_v6 != 0) {
          temp_v3 = 0xff;
          *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x428) == 6) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
        break;
      }
      if ((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v6 = FUN_00288498(), temp_v6 != 0)) {
        temp_v6 = 3;
        FUN_002c1658(3,0);
        if (temp_v6 != 0) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x424) == 6) {
        temp_v3 = 1;
        *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
        break;
      }
      temp_v6 = 9;
      FUN_002c1658(9,1);
      if (temp_v6 != 0) {
        sortMenuCreate(0x15,0);
        FUN_0029e328(1);
        FUN_0029e328(0x21);
        FUN_0029e328(3);
        useCounterStart();
        temp_v6 = g_statusDown;
        *(unsigned int *)(g_statusDown + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 0x12;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
        FUN_002a0cc8(1);
        temp_v7 = 0x100016d;
        eventQueueAddUniqueIfValid(temp_v7);
        break;
      }
      temp_v7 = asdTMTexTableEntryAt(0x1a,0x406);
      temp_v15 = temp_v2 + 0xdcc;
      temp_v6 = temp_v15;
      uiScrollHandleActionsOrTouch(temp_v15,temp_v7,temp_v2 + 0x42c,(int)*(short *)(temp_v2 + 0x474),
                   (int)*(short *)(temp_v2 + 0x476),(int)*(short *)(temp_v2 + 0x478),temp_v2 + 0x2388,0,1)
      ;
      if (temp_v6 == 0) {
        FUN_0029efd8(temp_v15,1);
        if (temp_v15 != 0) {
          *(unsigned char *)(temp_v2 + 0x410) = 1;
        }
        break;
      }
      *(unsigned char *)(temp_v2 + 0x410) = 1;
    }
    break;
  case 0x12:
    temp_v6 = useCounterIsFinished();
    if (temp_v6 != 0) {
      useCounterRelease();
      FUN_002a0cc8(0);
      temp_v6 = FUN_0029ac94();
      if (temp_v6 == 0xd || temp_v6 == 6) {
        temp_v7 = 0x30;
      }
      else {
        temp_v7 = 0x29;
      }
      buttonHelpSetPreset(temp_v7);
      *(unsigned char *)(temp_v2 + 0x410) = 1;
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 0x11;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    else {
      temp_v15 = useCounterGetCurrentValue();
      temp_v6 = g_statusDown;
      if (temp_v15 != 0x4b) {
        temp_v15 = FUN_002a0d0c();
        if ((*(unsigned char *)(temp_v15 + 0x15) & 0x7f) == 1) {
          if ((char)*(unsigned char *)(temp_v15 + 0x15) < '\0') {
            FUN_002b7bca(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,devilIdCompareRankOrderId);
          }
          else {
            FUN_002b7bca(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,FUN_00206d4c);
          }
        }
        temp_v0 = *(unsigned char *)(temp_v15 + 0x15);
        if ((temp_v0 & 0x7f) == 0x21) {
          if ((char)temp_v0 < '\0') {
            FUN_002b7bca(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,FUN_002dc9d4);
          }
          else {
            FUN_002b7bca(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,FUN_001f61c4);
          }
        }
        temp_v0 = *(unsigned char *)(temp_v15 + 0x15);
        if ((temp_v0 & 0x7f) == 3) {
          if ((char)temp_v0 < '\0') {
            FUN_002b7bca(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,recordCompareByKey);
          }
          else {
            FUN_002b7bca(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,entryRefCompareByKey);
          }
        }
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
    }
    break;
  case 0x13:
    FUN_002bf818(temp_v2 + 0x140);
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      temp_v9 = temp_v2 + 0x223c;
      temp_v6 = FUN_0029efc0();
      temp_v15 = FUN_0029efa8(temp_v9);
      temp_v8 = objectPartRunUnlessLocked(temp_v9);
      temp_v10 = asdTMTexTableEntryAt(0x1a,0x406);
      temp_v7 = *(unsigned int *)(temp_v10 + 8);
      temp_v12 = **(unsigned int **)(temp_v10 + 0xc);
      if (((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v10 = FUN_00288498(), temp_v10 != 0)) &&
         ((temp_v10 = objectPartRunUnlessLocked(temp_v9), temp_v10 == 0 || (*(short *)(temp_v2 + 0x2232) == 0)))) {
        temp_v10 = 4;
        FUN_002c1658(4,0);
        if (temp_v10 == 0) goto LAB_001cbaf4;
      }
      else {
LAB_001cbaf4:
        if (*(int *)(temp_v2 + 0x428) != 6) {
          if (((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v10 = FUN_00288498(), temp_v10 != 0)) &&
             ((temp_v10 = objectPartRunUnlessLocked(temp_v9), temp_v10 == 3 ||
              ((int)*(short *)(temp_v2 + 0x2232) == temp_v8 + (temp_v6 + temp_v15) * 4 + 1 ||
               *(short *)(temp_v2 + 0x2232) == 0)))) {
            temp_v6 = 3;
            FUN_002c1658(3,0);
            if (temp_v6 == 0) goto LAB_001cbbac;
          }
          else {
LAB_001cbbac:
            if (*(int *)(temp_v2 + 0x424) != 6) {
              temp_v6 = 9;
              FUN_002c1658(9,1);
              if (temp_v6 != 0) {
                sortMenuCreate(0x16,0);
                FUN_0029e328(1);
                FUN_0029e328(8);
                FUN_0029e328(2);
                FUN_0029e328(3);
                useCounterStart();
                temp_v6 = g_statusDown;
                *(unsigned int *)(g_statusDown + 0x40c) = 0;
                puVar13 = (unsigned int *)(temp_v6 + 0x400);
                temp_v7 = *puVar13;
                *puVar13 = 0x14;
                *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
                FUN_002a0cc8(1);
                temp_v7 = 0x100016d;
                eventQueueAddUniqueIfValid(temp_v7);
                break;
              }
              if ((-1 < *(int *)(temp_v2 + 0x414)) && (0 < *(short *)(temp_v2 + 0x2232))) {
                temp_v6 = *(int *)(temp_v2 + 0x428);
                temp_v17 = temp_v6 == 0;
                if (temp_v17) {
                  temp_v6 = *(int *)(temp_v2 + 0x424);
                }
                if (temp_v17 && temp_v6 == 0) {
                  temp_v6 = objectPartRunUnlessLocked(temp_v9);
                  temp_v15 = FUN_0029efa8(temp_v9);
                  flaggedEntrySetValueA(temp_v9,(int)(*(int *)(temp_v2 + 0x414) +
                                           ((unsigned int)(*(int *)(temp_v2 + 0x414) >> 0x1f) >> 0x1e)) >> 2);
                  flaggedEntrySetValueB(temp_v9,*(int *)(temp_v2 + 0x414) % 4);
                  if (*(int *)(temp_v2 + 0x414) != temp_v6 + temp_v15 * 4) {
                    eventQueueAddUniqueIfValid(0x100016c);
                  }
                  *(unsigned char *)(temp_v2 + 0x410) = 1;
                  break;
                }
              }
              temp_v6 = temp_v9;
              FUN_0029efd8(temp_v9,1);
              if (temp_v6 != 0) {
                temp_v4 = FUN_0029efc0(temp_v9);
                temp_v5 = FUN_0029efa8(temp_v9);
                *(short *)(temp_v2 + 0x2236) = temp_v5 + temp_v4;
                temp_v4 = FUN_0029e93c(temp_v9);
                temp_v5 = objectPartRunUnlessLocked(temp_v9);
                *(short *)(temp_v2 + 0x2234) = temp_v5 + temp_v4;
                *(unsigned char *)(temp_v2 + 0x410) = 1;
              }
              else {
                FUN_0026ab64(temp_v9,temp_v7,temp_v12,(int)*(short *)(temp_v2 + 0x474),
                             (int)*(short *)(temp_v2 + 0x476),(int)*(short *)(temp_v2 + 0x478),0,1);
                if (temp_v9 != 0) {
                  *(unsigned char *)(temp_v2 + 0x410) = 1;
                }
              }
              break;
            }
          }
          *(unsigned char *)(temp_v2 + 0x481) = 1;
          temp_v4 = FUN_0029efc0(temp_v9);
          temp_v5 = FUN_0029efa8(temp_v9);
          *(short *)(temp_v2 + 0x2236) = temp_v5 + temp_v4;
          temp_v4 = FUN_0029e93c(temp_v9);
          temp_v5 = objectPartRunUnlessLocked(temp_v9);
          *(short *)(temp_v2 + 0x2234) = temp_v5 + temp_v4;
          break;
        }
      }
      *(unsigned char *)(temp_v2 + 0x481) = 0xff;
      temp_v4 = FUN_0029efc0(temp_v9);
      temp_v5 = FUN_0029efa8(temp_v9);
      *(short *)(temp_v2 + 0x2236) = temp_v5 + temp_v4;
      temp_v4 = FUN_0029e93c(temp_v9);
      temp_v5 = objectPartRunUnlessLocked(temp_v9);
      *(short *)(temp_v2 + 0x2234) = temp_v5 + temp_v4;
    }
    break;
  case 0x14:
    temp_v6 = useCounterIsFinished();
    if (temp_v6 != 0) {
      useCounterRelease();
      FUN_002a0cc8(0);
      temp_v6 = FUN_0029ac94();
      if ((((temp_v6 == 8) || (temp_v6 = FUN_0029ac94(), temp_v6 == 9)) ||
          (temp_v6 = FUN_0029ac94(), temp_v6 == 0xb)) || (temp_v6 = FUN_0029ac94(), temp_v6 == 7)) {
        temp_v7 = 0x5f;
      }
      else {
        temp_v7 = 0x2a;
      }
      buttonHelpSetPreset(temp_v7);
      *(unsigned char *)(temp_v2 + 0x410) = 1;
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 0x13;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    else {
      temp_v6 = useCounterGetCurrentValue();
      if (temp_v6 != 0x4b) {
        statusInventorySort();
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
    }
    break;
  case 0x15:
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      temp_v6 = temp_v2 + 0x22a8;
      temp_v15 = FUN_0029efc0();
      if ((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v8 = FUN_00288498(), temp_v8 != 0)) {
        temp_v8 = 4;
        FUN_002c1658(4,0);
        if (temp_v8 != 0) {
          temp_v3 = 0xff;
          *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x428) == 6) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
        break;
      }
      if ((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v8 = FUN_00288498(), temp_v8 != 0)) {
        temp_v8 = 3;
        FUN_002c1658(3,0);
        if (temp_v8 != 0) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x424) == 6) {
        temp_v3 = 1;
        *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
        break;
      }
      temp_v7 = asdTMTexTableEntryAt(0x1a,0x48c);
      temp_v8 = temp_v6;
      uiScrollHandleActionsOrTouch(temp_v6,temp_v7,0,(int)*(short *)(temp_v2 + 0x474),(int)*(short *)(temp_v2 + 0x476),
                   (int)*(short *)(temp_v2 + 0x478),temp_v2 + 0x2388,0,0);
      if (temp_v8 != 0) {
        temp_v6 = FUN_0029efc0(temp_v6);
        if (temp_v6 != temp_v15) {
          temp_v7 = 0x100016c;
          eventQueueAddUniqueIfValid(temp_v7);
        }
      }
      else {
        temp_v8 = temp_v6;
        FUN_0029efd8(temp_v6,0);
        if ((temp_v8 != 0) && (temp_v8 = FUN_0029ee54(temp_v6), temp_v8 >= 9)) {
          FUN_0029efc0(temp_v6);
          temp_v8 = FUN_0029efa8(temp_v6);
          if ((temp_v8 != 7) && (temp_v8 = FUN_0029efa8(temp_v6), temp_v8 != 0)) {
            eventQueueAddUniqueIfValid(0x100016c);
          }
          temp_v8 = FUN_0029efc0(temp_v6);
          while ((temp_v8 == temp_v15 &&
                 ((temp_v8 = FUN_0029efc0(temp_v6), temp_v8 != 0 ||
                  (temp_v8 = FUN_0029efa8(temp_v6), temp_v8 != 0))))) {
            temp_v8 = FUN_0029efc0(temp_v6);
            temp_v10 = FUN_0029ee54(temp_v6);
            if ((temp_v8 == temp_v10 - 8) && (temp_v8 = FUN_0029efa8(temp_v6), temp_v8 == 7)) break;
            FUN_0029efd8(temp_v6,0);
            temp_v8 = FUN_0029efc0(temp_v6);
          }
        }
      }
    }
    break;
  case 0x16:
    temp_v15 = 0;
    FUN_002c1658(0,1);
    temp_v6 = g_statusDown;
    if (temp_v15 != 0) {
      *(unsigned int *)(g_statusDown + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 0x17;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    break;
  case 0x17:
    temp_v6 = *(int *)(temp_v2 + 0x40c);
    if (temp_v6 == 8) {
      temp_v15 = 0;
    }
    if (temp_v6 >= 8) {
      if (temp_v6 == 8) {
        do {
          if (*(short *)(temp_v2 + temp_v15 * 2 + 0x2370) == 0) {
            *(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x2370) = *(unsigned short *)(temp_v2 + 0x2380);
            break;
          }
          temp_v15 = temp_v15 + 1;
        } while (temp_v15 < 8);
        flaggedEntrySetValueA(temp_v2 + 0x230c,temp_v15);
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        timerStart(temp_v2 + 0x2e4,0);
        spriteStartAnimationByIndex(temp_v2 + 0x370,2);
        FUN_00295eb0(temp_v2 + 0x370,0x1a,temp_v15 + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = FUN_002b8ee0(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v15 = FUN_002bf818(temp_v2 + 0x370), temp_v6 = g_statusDown, temp_v15 != 0))
      {
        *(unsigned int *)(g_statusDown + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 0x18;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
      }
    }
    break;
  case 0x18:
    temp_v15 = temp_v2 + 0x230c;
    temp_v6 = temp_v15;
    uiScrollHandleActionsOrTouch(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
    if ((temp_v6 != 0) || (FUN_0029efd8(temp_v15,1), temp_v15 != 0)) {
      *(unsigned char *)(temp_v2 + 0x410) = 1;
      break;
    }
    temp_v6 = 0;
    FUN_002c1658(0,1);
    if (temp_v6 == 0) {
      temp_v6 = 1;
      FUN_002c1658();
      if (temp_v6 == 0) break;
    }
    temp_v6 = uniteNotBusy();
    if (temp_v6 == 0) {
      messageMainFinishWindow();
    }
    FUN_0029ee6c(0,0x323232ff);
    FUN_0029bd4c();
    *(unsigned int *)(temp_v2 + 0x2384) = 0;
    break;
  case 0x19:
    temp_v15 = temp_v2 + 0x230c;
    temp_v6 = temp_v15;
    uiScrollHandleActionsOrTouch(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
    if ((temp_v6 != 0) || (temp_v6 = temp_v15, FUN_0029efd8(temp_v15,1), temp_v6 != 0)) {
      *(unsigned char *)(temp_v2 + 0x410) = 1;
      break;
    }
    temp_v6 = 0;
    FUN_002c1658(0,1);
    if ((temp_v6 != 0) || (*(char *)(temp_v2 + 0x2388) != '\0')) {
      temp_v6 = FUN_0029efa8(temp_v15);
      temp_v8 = FUN_0029ee54(temp_v15);
      if (temp_v6 == temp_v8 - 1) {
        *(unsigned int *)(temp_v2 + 0x2384) = 0;
        if (*(char *)(temp_v2 + 0x413) != '\0') {
          temp_v6 = uniteNotBusy();
          if (temp_v6 == 0) {
            messageMainFinishWindow();
          }
          FUN_0029ee6c(0,0x323232ff);
          FUN_0029bd4c();
          break;
        }
      }
      else {
        temp_v6 = FUN_0029efa8(temp_v15);
        *(unsigned int *)(temp_v2 + 0x2384) = (unsigned int)*(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x2370);
      }
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 0x1a;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    else {
      temp_v6 = 1;
      FUN_002c1658();
      if (temp_v6 != 0) {
        *(unsigned int *)(temp_v2 + 0x2384) = 0;
        temp_v6 = uniteNotBusy();
        if (temp_v6 == 0) {
          messageMainFinishWindow();
        }
        FUN_0029ee6c(0,0x323232ff);
        FUN_0029bd4c();
      }
    }
    break;
  case 0x1a:
    if (*(int *)(temp_v2 + 0x40c) >= 8) {
      if (*(int *)(temp_v2 + 0x40c) == 8) {
        temp_v6 = temp_v2 + 0x230c;
        if (*(int *)(temp_v2 + 0x2384) != 0) {
          temp_v15 = FUN_0029efa8();
          *(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x2370) = *(unsigned short *)(temp_v2 + 0x2380);
          temp_v8 = FUN_0029ee54(temp_v6);
          FUN_0029f848(temp_v6,temp_v8 - 1,8,1,1,1);
          flaggedEntrySetValueA(temp_v6,temp_v15);
          *(unsigned char *)(temp_v2 + 0x410) = 1;
          timerStart(temp_v2 + 0x2e4,0);
          spriteStartAnimationByIndex(temp_v2 + 0x370,2);
          FUN_00295eb0(temp_v2 + 0x370,0x1a,temp_v15 + 0x414);
          *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
        }
        else {
          temp_v15 = FUN_0029ee54();
          FUN_0029f848(temp_v6,temp_v15 - 1,8,1,1,1);
          flaggedEntrySetValueA(temp_v6,0);
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x40c) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x400);
          temp_v7 = *puVar13;
          *puVar13 = 0x1b;
          *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
        }
      }
      temp_v6 = FUN_002b8ee0(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v15 = FUN_002bf818(temp_v2 + 0x370), temp_v6 = g_statusDown, temp_v15 != 0))
      {
        *(unsigned int *)(g_statusDown + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 0x1b;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
      }
    }
    break;
  case 0x1b:
    temp_v15 = temp_v2 + 0x230c;
    temp_v6 = temp_v15;
    uiScrollHandleActionsOrTouch(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
    if ((temp_v6 != 0) || (FUN_0029efd8(temp_v15,1), temp_v15 != 0)) {
      *(unsigned char *)(temp_v2 + 0x410) = 1;
      break;
    }
    temp_v6 = 0;
    FUN_002c1658(0,1);
    if (temp_v6 == 0) {
      temp_v6 = 1;
      FUN_002c1658();
      if (temp_v6 == 0) break;
    }
    temp_v6 = uniteNotBusy();
    if (temp_v6 == 0) {
      messageMainFinishWindow();
    }
    FUN_0029ee6c(0,0x323232ff);
    FUN_0029bd4c();
  }
  temp_v17 = *(char *)(temp_v2 + 0x410) == '\0';
  temp_v6 = 0;
  if (!temp_v17) {
    temp_v6 = *(int *)(temp_v2 + 0x400);
  }
  if (temp_v17 || temp_v6 < 3) {
    *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
    return 0;
  }
  *(unsigned char *)(temp_v2 + 0x410) = 0;
  temp_v17 = 0;
  temp_v6 = FUN_0029ac94();
  if (temp_v6 != 0xd) {
    if (temp_v6 == 6) {
      puVar14 = (unsigned short *)FUN_0029acb0();
      temp_v6 = FUN_0029e9cc(*puVar14);
      if (temp_v6 == 0) {
        temp_v17 = 1;
      }
    }
  }
  else {
    temp_v17 = 1;
  }
  temp_v6 = *(int *)(temp_v2 + 0x400);
  if (((temp_v6 == 3 || temp_v6 == 6) || (temp_v6 == 0xb || temp_v6 == 0xe)) ||
     ((temp_v6 == 0xf || temp_v6 == 4 ||
      ((temp_v6 == 9 || temp_v6 == 7 || ((temp_v6 == 8 || temp_v6 == 0xc) || temp_v6 == 0xd)))))) {
    temp_v6 = temp_v2 + 0x4d4;
    temp_v15 = FUN_0029efc0();
    temp_v8 = FUN_0029efa8(temp_v6);
    temp_v15 = temp_v15 + temp_v8;
    if (*(int *)(temp_v2 + 0x400) == 6) {
      if (*(int *)(temp_v2 + 0x40c) >= 8) {
        temp_v8 = FUN_0029ee54(temp_v6);
        if (temp_v8 - 1 != temp_v15) goto LAB_001cc6b4;
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4a2);
      }
      else {
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x482);
      }
    }
    else {
LAB_001cc6b4:
      if ((*(int *)(temp_v2 + 0x400) == 0xb) && (temp_v6 = FUN_0029ee54(temp_v6), temp_v6 - 1 == temp_v15)) {
        temp_v11 = *(unsigned int *)(temp_v2 + 0x540);
      }
      else {
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x482);
      }
    }
    if (temp_v17) {
      textFormatBuffer(temp_v18,&LAB_001cc740);
      FUN_0029ee6c(temp_v18,0x323232ff);
    }
    else {
      buttonHelpShowSkillDetails(temp_v11);
    }
  }
  if (*(int *)(temp_v2 + 0x400) == 0x10) {
    temp_v13 = 0;
    temp_v6 = FUN_0029efc0();
    temp_v15 = FUN_0029efa8(temp_v2 + 0x564);
    temp_v15 = temp_v15 + temp_v6;
    if (temp_v15 == 0) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x554);
    }
    else if (temp_v15 == 1) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x556);
    }
    else if (temp_v15 == 2) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x558);
    }
    else if (temp_v15 == 3) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x55a);
    }
    else if (temp_v15 == 4) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x55c);
    }
    else if (temp_v15 == 5) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x55e);
    }
    else if (temp_v15 == 6) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x560);
    }
    FUN_0029212c(temp_v13);
  }
  if (*(int *)(temp_v2 + 0x400) == 0x11) {
    if (temp_v17) {
      textFormatBuffer(temp_v18,&LAB_001cc740);
      FUN_0029ee6c(temp_v18,0x323232ff);
    }
    else {
      temp_v6 = FUN_0029efc0();
      temp_v15 = FUN_0029efa8(temp_v2 + 0xdcc);
      temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + (temp_v15 + temp_v6) * 4 + 0x5ca);
      if (temp_v11 != 0) {
        temp_v11 = (unsigned int)dataTable0cSub1GetText((unsigned short)temp_v11);
        textFormatBuffer(temp_v18,&LAB_001cca08,temp_v11);
        FUN_0029ee6c(temp_v18,0x323232ff);
      }
    }
  }
  if (*(int *)(temp_v2 + 0x400) == 0x13) {
    temp_v6 = objectPartRunUnlessLocked();
    temp_v15 = FUN_0029efc0(temp_v2 + 0x223c);
    temp_v8 = FUN_0029efa8(temp_v2 + 0x223c);
    temp_v6 = temp_v2 + (temp_v6 + (temp_v8 + temp_v15) * 4) * 4;
    temp_v4 = *(short *)(temp_v6 + 0xe32);
    if (temp_v4 == 0) {
      puVar16 = (unsigned char *)0x0;
    }
    else {
      temp_v14 = (unsigned int)*(unsigned short *)(temp_v6 + 0xe30);
      temp_v11 = temp_v14;
      devilGetRecord(temp_v14,temp_v4);
      dataTable0cLookupById(*(unsigned short *)(temp_v11 + 0x38));
      temp_v7 = FUN_002bd068(temp_v14);
      temp_v12 = demonGetRaceLabel(temp_v14,0);
      textFormatBuffer(temp_v18,&LAB_001cca0c,temp_v12,temp_v7);
      puVar16 = temp_v18;
    }
    FUN_0029ee6c(puVar16,0x323232ff);
  }
  temp_v6 = *(int *)(temp_v2 + 0x400);
  if (((temp_v6 != 0x16 && temp_v6 != 0x17) && (temp_v6 != 0x18 && temp_v6 != 0x19)) &&
     (temp_v6 != 0x1a && temp_v6 != 0x1b)) {
    *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
    return 0;
  }
  temp_v6 = temp_v2 + 0x230c;
  temp_v15 = FUN_0029efa8();
  temp_v8 = FUN_0029ee54(temp_v6);
  if (temp_v15 == temp_v8 - 1) {
    temp_v1 = *(unsigned short *)(temp_v2 + 0x2380);
    temp_v11 = (unsigned int)temp_v1;
    FUN_00288e68();
    if (temp_v11 != 0) {
      buttonHelpShowSkillDetails();
      *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
      return 0;
    }
  }
  else {
    temp_v15 = FUN_0029efa8(temp_v6);
    if (*(short *)(temp_v2 + temp_v15 * 2 + 0x2370) != 0) {
      temp_v6 = FUN_0029efa8(temp_v6);
      temp_v1 = *(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x2370);
      temp_v11 = (unsigned int)temp_v1;
      FUN_00288e68();
      if (temp_v11 != 0) {
        buttonHelpShowSkillDetails();
        *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
        return 0;
      }
    }
  }
  FUN_0029ee6c(0,0x323232ff);
  *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
  return 0;
}

} /* extern "C" */
