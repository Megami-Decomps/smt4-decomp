/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00268770` (_code @ 0x268770, 0x2944 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00480da8(void);

int textFormatBuffer(...);
int FUN_0019de98(...);
int FUN_00275bc8(void);
int FUN_002a4878(...);
int statusDownRestartTransition(void);
int FUN_002e2848(...);
int FUN_002f7cd4(...);
int FUN_002f7f6c(...);
unsigned short* dataTable0cSub1GetText(unsigned short id);
int flaggedEntrySetValueB(...);
void statusSkillsCommitOnDialogResult(void*);
int screenShowMessage(...);
int obj04Finish(void);
int skillHelpUpdateAttributeAndTarget(...);
int screenStartOrClear(...);
int FUN_003d4104(void);

int qsort(...);
int FUN_0015f490(...);
int eventQueueAddUnique(...);
int FUN_001834a4(...);
int useCounterStart(void);
int resourceRunOperationIfUnblocked(...);
int FUN_002a4894(...);
int FUN_002a4964(...);
int objectApplyIfUnblocked(...);
int FUN_0031f208(...);
int sortMenuAcquire(...);
int FUN_003343f0(...);
int useCounterRelease(void);

int FUN_001517b4(...);
int FUN_00163aa4(...);
int eventQueueAddUniqueIfValid(...);
int sysPlaySe(...);
int FUN_00184310(void);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int FUN_00203b40(...);
int FUN_00228b04(...);
int FUN_0023092c(void);
int FUN_00230b9c(unsigned int, unsigned int, int);
int FUN_00230d30(void);
int recordGetModeForId(...);
int FUN_002c7ce8(...);
int flaggedEntryGetValueA(...);
int flaggedEntrySetValueA(...);
int FUN_003423e8(...);
int FUN_003450d4(...);
int FUN_00387240(...);
int statusDownInitializeSkillList(int);
int FUN_003e40d0(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned char LAB_0026b0b8; /* 0x26b0b8 */
extern unsigned char LAB_0026b0d8; /* 0x26b0d8 */
extern unsigned char LAB_0026b0dc; /* 0x26b0dc */
extern int FUN_002b29fc(...); /* 0x2b29fc */
extern int entryRefCompareByKey(...); /* 0x2b2a94 */
extern int FUN_002ce088(...); /* 0x2ce088 */
extern int FUN_0034f2e0(...); /* 0x34f2e0 */
extern int recordCompareByKey(...); /* 0x34f378 */
extern int entryRefCompareByRankOrderId(...); /* 0x35fd60 */
extern int g_statusDown; /* 0x588fe8 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: qsort. */
extern int randRange(unsigned int);
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_0015f490. */
extern int querySlotHasHandle(void);
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int FUN_00167458(int, unsigned int);
extern int ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: eventQueueAddUnique. */
extern unsigned int FUN_00180114(unsigned short, short);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00203b40. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00228b04. */
extern int FUN_00230544(void);
/* Supplied declaration required: FUN_0023092c. */
/* Supplied declaration required: FUN_00230b9c. */
/* Supplied declaration required: FUN_00230d30. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
extern int uniteNotBusy(void);
extern int FUN_0026140c(void);
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: recordGetModeForId. */
extern short resourceRunEmbeddedOperationIfUnblocked(int);
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
/* Supplied declaration required: FUN_002a4878. */
/* Supplied declaration required: FUN_002a4894. */
/* Supplied declaration required: FUN_002a4964. */
extern int messageMainGetValue(void);
/* Supplied declaration required: statusDownRestartTransition. */
/* Supplied declaration required: objectApplyIfUnblocked. */
extern int FUN_002c7c54(void);
/* Supplied declaration required: FUN_002c7ce8. */
extern unsigned short *FUN_002c7e24(void);
extern int FUN_002c7e3c(void);
extern int FUN_002c7e54(void);
/* Supplied declaration required: FUN_002e2848. */
/* Supplied declaration required: FUN_002f7cd4. */
/* Supplied declaration required: FUN_002f7f6c. */
/* Supplied declaration required: dataTable0cSub1GetText. */
/* Supplied declaration required: flaggedEntryGetValueA. */
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: flaggedEntrySetValueA. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: sortMenuAcquire. */
extern int FUN_00334044(void);
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: statusSkillsCommitOnDialogResult. */
/* Supplied declaration required: screenShowMessage. */
/* Supplied declaration required: FUN_003423e8. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: obj04Finish. */
extern int asdSoundIsBankHandleLoaded(unsigned int);
/* Supplied declaration required: skillHelpUpdateAttributeAndTarget. */
/* Supplied declaration required: useCounterRelease. */
extern int FUN_0037b564(void);
/* Supplied declaration required: screenStartOrClear. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: statusDownInitializeSkillList. */
extern int fieldStateAllowsAction(void);
extern unsigned int sysPlayVoice(unsigned int);
/* Supplied declaration required: FUN_003d4104. */
/* Supplied declaration required: FUN_003e40d0. */
/* Supplied declaration required: FUN_00480da8. */


unsigned int FUN_00268770(void)

{
/* irregular: 8 goto(s); 57 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  short temp_v4;
  short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned short *puVar10;
  int temp_v9;
  int temp_v10;
  unsigned int *puVar13;
  unsigned short *puVar14;
  unsigned int temp_v11;
  unsigned char *puVar16;
  unsigned int temp_v12;
  unsigned short temp_v13;
  int temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17 [76];
  
  temp_v2 = g_statusDown;
  *(unsigned char *)(g_statusDown + 0x24a0) = 0;
  temp_v6 = flaggedEntryGetValueA(temp_v2 + 0x5ec);
  *(unsigned char *)(temp_v2 + 0x59b) = 0;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x58e));
  *(unsigned int *)(temp_v2 + 0x530) = temp_v7;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x590));
  *(unsigned int *)(temp_v2 + 0x534) = temp_v7;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x58c));
  *(unsigned int *)(temp_v2 + 0x538) = temp_v7;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x592));
  *(unsigned int *)(temp_v2 + 0x53c) = temp_v7;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x594));
  *(unsigned int *)(temp_v2 + 0x540) = temp_v7;
  temp_v14 = 0;
  *(unsigned int *)(temp_v2 + 0x52c) = 0xffffffff;
  do {
    if ((-1 < *(short *)(temp_v2 + temp_v14 * 2 + 0x544)) &&
       (temp_v8 = recordGetModeForId(), temp_v8 == 1 || temp_v8 == 2)) {
      *(int *)(temp_v2 + 0x52c) = temp_v14;
      break;
    }
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 0x24);
  temp_v8 = FUN_00230544();
  if (temp_v8 == 0) {
    *(unsigned int *)(temp_v2 + 0x53c) = 0;
    *(unsigned int *)(temp_v2 + 0x540) = 0;
  }
  switch(*(unsigned int *)(temp_v2 + 0x518)) {
  case 1:
    if (*(char *)(g_statusDown + 0x2584) != '\0') {
      FUN_003e40d0(g_statusDown + 0x2588,0);
    }
    temp_v14 = FUN_00163aa4(temp_v2 + 0x28);
    temp_v6 = g_statusDown;
    if (temp_v14 != 0) {
      temp_v7 = *(unsigned int *)(temp_v2 + 0x520);
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v12 = *puVar13;
      *puVar13 = temp_v7;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
      FUN_00230d30();
      *(unsigned char *)(temp_v2 + 0x528) = 1;
    }
    break;
  case 2:
    if (*(char *)(g_statusDown + 0x2584) != '\0') {
      FUN_003e40d0(g_statusDown + 0x2588,0);
    }
    FUN_00163aa4(temp_v2 + 0x28);
    if (*(char *)(temp_v2 + 0xb2) != '\0') {
      if (*(int *)(temp_v2 + 0x520) != 0) {
        if ((*(short *)(temp_v2 + 0x78) == 3) || (*(short *)(temp_v2 + 0x78) == 9)) {
          temp_v7 = 0;
        }
        else {
          temp_v7 = 1;
        }
        FUN_00230b9c(temp_v7,0xffffffff,0);
        temp_v6 = g_statusDown;
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 1;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        temp_v6 = FUN_002c7e3c();
        temp_v16 = temp_v6 != 0xe;
        temp_v15 = temp_v6 != 7;
        temp_v7 = 0x29;
        temp_v12 = 0;
        temp_v6 = fieldStateAllowsAction();
        if (temp_v6 != 0) {
          temp_v7 = 0xfa;
        }
        if (*(int *)(temp_v2 + 0x520) == 3) {
          if (!(temp_v16 && temp_v15)) {
            puVar10 = (unsigned short *)FUN_002c7e24();
            temp_v11 = (unsigned int)*puVar10;
            FUN_00184310();
            if ((*(unsigned char *)(temp_v11 + 0xb3) & 2) == 0) {
              temp_v7 = 0x31;
            }
            else {
              temp_v7 = 0xf1;
            }
          }
          else {
            temp_v6 = FUN_002c7e3c();
            if (temp_v6 == 4) {
              temp_v7 = 0xf1;
            }
            else {
              temp_v6 = FUN_002c7e54();
              if (temp_v6 == 0xd) {
                temp_v7 = 0x119;
              }
              else {
                temp_v6 = FUN_00334044();
                if (temp_v6 != 2) {
                  if (*(short *)(temp_v2 + 0x598) < 0) {
                    temp_v7 = 0x1f;
                    temp_v6 = fieldStateAllowsAction();
                    if (temp_v6 != 0) {
                      temp_v7 = 0xf9;
                    }
                  }
                  else {
                    temp_v7 = 0x29;
                    temp_v6 = fieldStateAllowsAction();
                    if (temp_v6 != 0) {
                      temp_v7 = 0xfa;
                    }
                  }
                }
                else {
                  temp_v7 = 0x2a;
                  temp_v6 = fieldStateAllowsAction();
                  if (temp_v6 != 0) {
                    temp_v7 = 0xfb;
                  }
                }
              }
            }
          }
        }
        if (*(int *)(temp_v2 + 0x520) == 0x13) {
          temp_v7 = 0x20;
        }
        else {
          if (*(int *)(temp_v2 + 0x520) == 0x14) {
            if (!temp_v16 || !temp_v15) {
              temp_v7 = 0x32;
              goto LAB_00268c6c;
            }
            temp_v6 = FUN_002c7e3c();
            if ((((temp_v6 == 9) || (temp_v6 = FUN_002c7e3c(), temp_v6 == 10)) ||
                (temp_v6 = FUN_002c7e3c(), temp_v6 == 0xc)) || (temp_v6 = FUN_002c7e3c(), temp_v6 == 8)) {
              temp_v7 = 0x60;
            }
            else {
              temp_v7 = 0x2b;
            }
          }
          if (*(int *)(temp_v2 + 0x520) == 0x16) {
            temp_v6 = FUN_002c7e3c();
            if (((temp_v6 == 9) || (temp_v6 = FUN_002c7e3c(), temp_v6 == 10)) ||
               ((temp_v6 = FUN_002c7e3c(), temp_v6 == 0xc || (temp_v6 = FUN_002c7e3c(), temp_v6 == 8)))) {
              temp_v7 = 0x61;
            }
            else {
              temp_v7 = 0x2c;
            }
          }
          if (*(int *)(temp_v2 + 0x520) == 0x18) {
            if (!(temp_v16 && temp_v15)) {
              temp_v7 = 0x33;
            }
            else {
              temp_v6 = FUN_002c7e3c();
              if (((temp_v6 != 9) && (temp_v6 = FUN_002c7e3c(), temp_v6 != 10)) &&
                 ((temp_v6 = FUN_002c7e3c(), temp_v6 != 0xc && (temp_v6 = FUN_002c7e3c(), temp_v6 != 8)))) {
                temp_v6 = FUN_002c7e54();
                if (temp_v6 == 0xd) {
                  temp_v7 = 0x11a;
                }
                else {
                  temp_v7 = 0x2d;
                }
              }
              else {
                temp_v7 = 0x62;
              }
            }
            temp_v12 = 2;
          }
          if (*(int *)(temp_v2 + 0x520) == 0x1f) {
            temp_v7 = 0x108;
          }
          else if (*(int *)(temp_v2 + 0x520) == 0x20) break;
        }
LAB_00268c6c:
        temp_v6 = FUN_002c7e3c();
        temp_v16 = temp_v6 == 9;
        if (temp_v16) {
          temp_v6 = *(int *)(temp_v2 + 0x520);
        }
        if (!temp_v16 || temp_v6 != 3) {
          temp_v6 = FUN_002c7e3c();
          temp_v16 = temp_v6 == 10;
          if (temp_v16) {
            temp_v6 = *(int *)(temp_v2 + 0x520);
          }
          if (!temp_v16 || temp_v6 != 3) {
            temp_v6 = FUN_002c7e3c();
            temp_v16 = temp_v6 == 0xc;
            if (temp_v16) {
              temp_v6 = *(int *)(temp_v2 + 0x520);
            }
            if (!temp_v16 || temp_v6 != 3) {
              temp_v6 = FUN_002c7e3c();
              temp_v16 = temp_v6 == 8;
              if (temp_v16) {
                temp_v6 = *(int *)(temp_v2 + 0x520);
              }
              if ((((!temp_v16 || temp_v6 != 3) && (temp_v6 = FUN_002c7e54(), temp_v6 != 5)) &&
                  (temp_v6 = FUN_002c7e54(), temp_v6 != 6)) && (temp_v6 = FUN_002c7e54(), temp_v6 != 7)) {
                FUN_003423e8(temp_v12);
                sysPlaySe(temp_v7);
              }
            }
          }
        }
      }
      else {
        temp_v6 = FUN_0037b564();
        if (temp_v6 == 2) {
          FUN_003423e8(0);
        }
        temp_v6 = g_statusDown;
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        temp_v7 = *(unsigned int *)(temp_v6 + 0x518);
        *(unsigned int *)(temp_v6 + 0x518) = 0;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
      }
    }
    break;
  case 3:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v14 = FUN_00230544(), temp_v14 != 0)) {
      temp_v14 = 4;
      FUN_001517b4(4,0);
      if (temp_v14 == 0) goto LAB_00268d68;
    }
    else {
LAB_00268d68:
      if (*(int *)(temp_v2 + 0x540) != 6) {
        if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v14 = FUN_00230544(), temp_v14 != 0)) {
          temp_v14 = 3;
          FUN_001517b4(3,0);
          if (temp_v14 != 0) {
            temp_v3 = 1;
            *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
            break;
          }
        }
        if (*(int *)(temp_v2 + 0x53c) == 6) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
        temp_v8 = temp_v2 + 0x5ec;
        temp_v14 = temp_v8;
        FUN_003450d4(temp_v8,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
        if (temp_v14 != 0) {
          *(unsigned char *)(temp_v2 + 0x528) = 1;
          temp_v14 = flaggedEntryGetValueA(temp_v8);
          if (temp_v14 != temp_v6) {
            eventQueueAddUniqueIfValid(0x100020d);
          }
        }
        else if (*(char *)(temp_v2 + 0x52a) == '\0') {
          temp_v14 = temp_v8;
          FUN_00228b04(temp_v8,0);
          if (temp_v14 != 0) {
            *(unsigned char *)(temp_v2 + 0x528) = 1;
            temp_v14 = flaggedEntryGetValueA(temp_v8);
            if (temp_v14 != temp_v6) {
              eventQueueAddUniqueIfValid(0x100020d);
            }
            break;
          }
          temp_v6 = fieldStateAllowsAction();
          if (temp_v6 != 0) {
            temp_v6 = 10;
            FUN_001517b4(10,1);
            if (temp_v6 != 0) {
              statusDownInitializeSkillList(0);
              eventQueueAddUniqueIfValid(0x100020e);
              temp_v3 = 6;
              FUN_002c7ce8(temp_v3);
            }
          }
        }
        break;
      }
    }
    temp_v3 = 0xff;
    *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
    break;
  case 4:
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        temp_v6 = 0;
        temp_v14 = -1;
        do {
          temp_v4 = *(short *)(temp_v2 + temp_v6 * 2 + 0x59c);
          if (temp_v4 == *(short *)(temp_v2 + 0x5bc)) {
            temp_v14 = temp_v6;
          }
          if (temp_v4 == 0) {
            *(short *)(temp_v2 + temp_v6 * 2 + 0x59c) = *(short *)(temp_v2 + 0x5bc);
            break;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 8);
        if ((-1 < temp_v14) && (temp_v8 = FUN_002c7e54(), temp_v8 == 0xc)) {
          *(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x59c) = 0;
          *(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x59c) = *(unsigned short *)(temp_v2 + 0x5bc);
          temp_v6 = temp_v14;
        }
        FUN_00203b40(temp_v2 + 0x5ec,temp_v6 + 1,8,1,0,1);
        flaggedEntrySetValueA(temp_v2 + 0x5ec,temp_v6);
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        uiSpriteSetKeyframe(temp_v2 + 0x2e4,1,0);
        uiSpriteSelectAnim(temp_v2 + 0x370,2);
        FUN_00387240(temp_v2 + 0x370,0x12,temp_v6 + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      if (*(char *)(g_statusDown + 0x2584) != '\0') {
        FUN_003e40d0(g_statusDown + 0x2588,0);
      }
      temp_v6 = FUN_00163aa4(temp_v2 + 0x2e4);
      if (temp_v6 != 0) {
        if (*(char *)(g_statusDown + 0x2584) != '\0') {
          FUN_003e40d0(g_statusDown + 0x2588,1);
        }
        temp_v6 = FUN_00163aa4(temp_v2 + 0x370);
        if (temp_v6 != 0) {
          FUN_0023092c();
          FUN_00230d30();
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 5;
          *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        }
      }
    }
    break;
  case 7:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        temp_v6 = temp_v2 + 0x5ec;
        temp_v7 = FUN_002a4894();
        temp_v14 = objectApplyIfUnblocked(temp_v6);
        FUN_00203b40(temp_v6,temp_v14 + 1,9,1,0,1);
        FUN_002a4964(temp_v6,temp_v7);
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
      if (*(char *)(temp_v2 + 0x52a) == '\0') {
        temp_v14 = temp_v2 + 0x5ec;
        temp_v8 = flaggedEntryGetValueA();
        temp_v6 = temp_v14;
        FUN_003450d4(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
        if ((temp_v6 == 0) && (temp_v6 = temp_v14, FUN_00228b04(temp_v14,0), temp_v6 == 0)) {
          temp_v6 = 0;
          FUN_001517b4(0,1);
          if ((temp_v6 != 0) || (*(char *)(temp_v2 + 0x24a0) != '\0')) {
            temp_v6 = resourceRunOperationIfUnblocked(temp_v14);
            temp_v8 = FUN_002a4894(temp_v14);
            temp_v10 = objectApplyIfUnblocked(temp_v14);
            if ((temp_v6 + temp_v8) - temp_v10 != -1) {
              resourceRunOperationIfUnblocked();
              FUN_002a4894(temp_v14);
              temp_v6 = resourceRunOperationIfUnblocked(temp_v14);
              temp_v14 = FUN_002a4894(temp_v14);
              *(int *)(temp_v2 + 0x654) = temp_v14 + temp_v6;
              temp_v7 = sysPlayVoice(0x100020e);
              *(unsigned int *)(temp_v2 + 0x24a4) = temp_v7;
              temp_v7 = *(unsigned int *)(temp_v2 + 0x524);
              temp_v14 = FUN_002c7e54();
              temp_v6 = g_statusDown;
              if (temp_v14 != 0xc) {
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                temp_v12 = *(unsigned int *)(temp_v6 + 0x518);
                *(unsigned int *)(temp_v6 + 0x518) = 8;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
              }
              else {
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                temp_v12 = *(unsigned int *)(temp_v6 + 0x518);
                *(unsigned int *)(temp_v6 + 0x518) = 10;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
              }
              *(unsigned int *)(temp_v2 + 0x524) = temp_v7;
              *(unsigned int *)(temp_v2 + 0x668) = 0;
              break;
            }
            temp_v6 = objectApplyIfUnblocked(temp_v14);
            *(int *)(temp_v2 + 0x654) = temp_v6 - 1;
            temp_v6 = g_statusDown;
            temp_v12 = *(unsigned int *)(temp_v2 + 0x524);
            *(unsigned int *)(g_statusDown + 0x524) = 0;
            puVar13 = (unsigned int *)(temp_v6 + 0x518);
            temp_v7 = *puVar13;
            *puVar13 = 8;
            *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
            temp_v7 = sysPlayVoice(0x100020e);
            *(unsigned int *)(temp_v2 + 0x24a4) = temp_v7;
            *(unsigned int *)(temp_v2 + 0x668) = 0;
            *(unsigned int *)(temp_v2 + 0x524) = temp_v12;
          }
          else {
            temp_v6 = 1;
            FUN_001517b4();
            if (temp_v6 != 0) {
              temp_v7 = sysPlayVoice(0x100020f);
              *(unsigned int *)(temp_v2 + 0x24a4) = temp_v7;
              temp_v6 = objectApplyIfUnblocked(temp_v14);
              *(int *)(temp_v2 + 0x654) = temp_v6 - 1;
              temp_v7 = *(unsigned int *)(temp_v2 + 0x524);
              temp_v14 = FUN_002c7e54();
              temp_v6 = g_statusDown;
              if (temp_v14 != 0xc) {
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                temp_v12 = *(unsigned int *)(temp_v6 + 0x518);
                *(unsigned int *)(temp_v6 + 0x518) = 8;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
              }
              else {
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                temp_v12 = *(unsigned int *)(temp_v6 + 0x518);
                *(unsigned int *)(temp_v6 + 0x518) = 0xb;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
              }
              *(unsigned int *)(temp_v2 + 0x524) = temp_v7;
              *(unsigned int *)(temp_v2 + 0x668) = 0;
            }
          }
          break;
        }
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        temp_v6 = flaggedEntryGetValueA(temp_v14);
        if (temp_v6 == temp_v8) break;
        eventQueueAddUniqueIfValid(0x100020d);
      }
    }
    break;
  case 8:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    temp_v6 = asdSoundIsBankHandleLoaded(*(unsigned int *)(temp_v2 + 0x24a4));
    if ((temp_v6 == 0) && (*(char *)(temp_v2 + 0x24a9) != '\0')) {
      temp_v6 = objectApplyIfUnblocked(temp_v2 + 0x5ec);
      if (temp_v6 - 1 == *(int *)(temp_v2 + 0x654)) {
        temp_v6 = randRange(1);
        FUN_0015f490((int)*(short *)(temp_v2 + 0x598),temp_v6 != 0,1,0);
      }
LAB_0026941c:
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0xc;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    break;
  case 9:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    temp_v6 = *(int *)(temp_v2 + 0x668) + 1;
    *(int *)(temp_v2 + 0x668) = temp_v6;
    if (temp_v6 >= 9) {
      temp_v6 = querySlotHasHandle();
joined_r0x002694c0:
      if (temp_v6 == 0) goto LAB_0026941c;
    }
    break;
  case 10:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x24a9) != '\0') {
      temp_v6 = asdSoundIsBankHandleLoaded(*(unsigned int *)(temp_v2 + 0x24a4));
      goto joined_r0x002694c0;
    }
    break;
  case 0xb:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x24a9) != '\0') {
      temp_v6 = asdSoundIsBankHandleLoaded(*(unsigned int *)(temp_v2 + 0x24a4));
      goto joined_r0x002694c0;
    }
    break;
  case 0xc:
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        *(unsigned char *)(temp_v2 + 0x24a8) = 0;
        temp_v6 = temp_v2 + 0x5ec;
        temp_v14 = objectApplyIfUnblocked();
        if (temp_v14 - 1 == *(int *)(temp_v2 + 0x654)) {
          FUN_0023092c();
          temp_v14 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v14 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 0xd;
          *(unsigned int *)(temp_v14 + 0x51c) = temp_v7;
        }
        else {
          *(unsigned short *)(temp_v2 + *(int *)(temp_v2 + 0x654) * 2 + 0x59c) =
               *(unsigned short *)(temp_v2 + 0x5bc);
          eventQueueAddUnique(0x100021a);
        }
        temp_v14 = objectApplyIfUnblocked(temp_v6);
        FUN_00203b40(temp_v6,temp_v14 - 1,8,1,0,1);
        if (*(int *)(temp_v2 + 0x654) >= 8) {
          flaggedEntrySetValueA(temp_v6,0);
        }
        else {
          flaggedEntrySetValueA(temp_v6);
        }
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        uiSpriteSetKeyframe(temp_v2 + 0x2e4,1,0);
        uiSpriteSelectAnim(temp_v2 + 0x370,2);
        FUN_00387240(temp_v2 + 0x370,0x12,*(int *)(temp_v2 + 0x654) + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = FUN_00167458(temp_v2 + 0x2e4,0);
      if (temp_v6 != 0) {
        if (*(char *)(temp_v2 + 0x24a8) == '\0') {
          FUN_0015f490((int)*(short *)(temp_v2 + 0x598),0,1);
          *(unsigned char *)(temp_v2 + 0x24a8) = 1;
        }
        temp_v6 = FUN_00163aa4(temp_v2 + 0x370);
        if (temp_v6 != 0) {
          FUN_0023092c();
          FUN_00230d30();
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 0xd;
          *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        }
      }
    }
    break;
  case 0xe:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      temp_v14 = temp_v2 + 0x5ec;
      temp_v8 = flaggedEntryGetValueA();
      temp_v6 = temp_v14;
      FUN_003450d4(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
      if ((temp_v6 != 0) || (temp_v6 = temp_v14, FUN_00228b04(temp_v14,0), temp_v6 != 0)) {
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        temp_v6 = flaggedEntryGetValueA(temp_v14);
        if (temp_v6 != temp_v8) {
          temp_v7 = 0x100020d;
          eventQueueAddUniqueIfValid(temp_v7);
        }
      }
    }
    break;
  case 0x11:
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        if (*(int *)(temp_v2 + 0x65c) < 0) {
          temp_v6 = objectApplyIfUnblocked();
          FUN_00203b40(temp_v2 + 0x5ec,temp_v6 - 1,8,1,0,1);
          flaggedEntrySetValueA(temp_v2 + 0x5ec,0);
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 0x12;
          *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
          *(unsigned char *)(temp_v2 + 0x528) = 1;
        }
        else {
          *(short *)(temp_v2 + *(int *)(temp_v2 + 0x65c) * 2 + 0x59c) =
               (short)*(unsigned int *)(temp_v2 + 0x658);
          temp_v6 = objectApplyIfUnblocked();
          FUN_00203b40(temp_v2 + 0x5ec,temp_v6 - 1,8,1,0,1);
          uiSpriteSetKeyframe(temp_v2 + 0x2e4,1,0);
          uiSpriteSelectAnim(temp_v2 + 0x370,2);
          FUN_00387240(temp_v2 + 0x370,0x12,*(int *)(temp_v2 + 0x65c) + 0x414);
          *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
        }
      }
      temp_v6 = FUN_00167458(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v14 = FUN_00163aa4(temp_v2 + 0x370), temp_v6 = g_statusDown, temp_v14 != 0))
      {
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 0x12;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
    }
    break;
  case 0x12:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    temp_v9 = temp_v2 + 0x5ec;
    temp_v6 = temp_v9;
    FUN_003450d4(temp_v9,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
    if (temp_v6 != 0) {
      *(unsigned char *)(temp_v2 + 0x528) = 1;
    }
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      FUN_00228b04(temp_v9,1);
      if (temp_v9 != 0) {
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
    }
    break;
  case 0x13:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 600);
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      temp_v6 = temp_v2 + 0x67c;
      temp_v14 = FUN_002a4894();
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v8 = FUN_00230544(), temp_v8 != 0)) {
        temp_v8 = 4;
        FUN_001517b4(4,0);
        if (temp_v8 != 0) {
          temp_v3 = 0xff;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x540) == 6) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v8 = FUN_00230544(), temp_v8 != 0)) {
        temp_v8 = 3;
        FUN_001517b4(3,0);
        if (temp_v8 != 0) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x53c) != 6) {
        temp_v8 = temp_v6;
        FUN_003450d4(temp_v6,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
        if (temp_v8 == 0) {
          temp_v8 = temp_v6;
          FUN_00228b04(temp_v6,1);
          if (temp_v8 == 0) break;
          temp_v8 = gameFlagIsSet(0x410);
          if (temp_v8 == 0) {
            if (temp_v14 != 0) {
              if ((temp_v14 == 3) && (temp_v14 = FUN_002a4894(temp_v6), temp_v14 == 2)) {
                flaggedEntrySetValueA(temp_v6,0);
              }
            }
            else {
              temp_v14 = FUN_002a4894(temp_v6);
              if (temp_v14 == 1) {
                flaggedEntrySetValueA(temp_v6,3);
              }
            }
          }
        }
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        break;
      }
      temp_v3 = 1;
      *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
    }
    break;
  case 0x14:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v6 = FUN_00230544(), temp_v6 != 0)) {
        temp_v6 = 4;
        FUN_001517b4(4,0);
        if (temp_v6 != 0) {
          temp_v3 = 0xff;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x540) == 6) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v6 = FUN_00230544(), temp_v6 != 0)) {
        temp_v6 = 3;
        FUN_001517b4(3,0);
        if (temp_v6 != 0) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x53c) == 6) {
        temp_v3 = 1;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      temp_v6 = 9;
      FUN_001517b4(9,1);
      if (temp_v6 != 0) {
        sortMenuAcquire(0x15,0);
        FUN_0031f208(1);
        FUN_0031f208(0x21);
        FUN_0031f208(3);
        useCounterStart();
        temp_v6 = g_statusDown;
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 0x15;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        FUN_003343f0(1);
        temp_v7 = 0x100020e;
        eventQueueAddUniqueIfValid(temp_v7);
        break;
      }
      temp_v7 = FUN_001834a4(0x12,0x406);
      temp_v9 = temp_v2 + 0xee4;
      temp_v6 = temp_v9;
      FUN_003450d4(temp_v9,temp_v7,temp_v2 + 0x544,(int)*(short *)(temp_v2 + 0x58c),
                   (int)*(short *)(temp_v2 + 0x58e),(int)*(short *)(temp_v2 + 0x590),temp_v2 + 0x24a0,0,1)
      ;
      if (temp_v6 == 0) {
        FUN_00228b04(temp_v9,1);
        if (temp_v9 != 0) {
          *(unsigned char *)(temp_v2 + 0x528) = 1;
        }
        break;
      }
      *(unsigned char *)(temp_v2 + 0x528) = 1;
    }
    break;
  case 0x15:
    temp_v6 = useCounterIsFinished();
    if (temp_v6 != 0) {
      useCounterRelease();
      FUN_003343f0(0);
      temp_v6 = FUN_002c7e3c();
      if (temp_v6 == 0xe || temp_v6 == 7) {
        temp_v7 = 0x32;
      }
      else {
        temp_v7 = 0x2b;
      }
      sysPlaySe(temp_v7);
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0x14;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    else {
      temp_v14 = FUN_002c7c54();
      temp_v6 = g_statusDown;
      if (temp_v14 != 0x69) {
        temp_v14 = FUN_0026140c();
        if ((*(unsigned char *)(temp_v14 + 0x15) & 0x7f) == 1) {
          if ((char)*(unsigned char *)(temp_v14 + 0x15) < '\0') {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,entryRefCompareByRankOrderId);
          }
          else {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,FUN_002ce088);
          }
        }
        temp_v0 = *(unsigned char *)(temp_v14 + 0x15);
        if ((temp_v0 & 0x7f) == 0x21) {
          if ((char)temp_v0 < '\0') {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,FUN_0034f2e0);
          }
          else {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,FUN_002b29fc);
          }
        }
        temp_v0 = *(unsigned char *)(temp_v14 + 0x15);
        if ((temp_v0 & 0x7f) == 3) {
          if ((char)temp_v0 < '\0') {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,recordCompareByKey);
          }
          else {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,entryRefCompareByKey);
          }
        }
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
    }
    break;
  case 0x16:
    FUN_00163aa4(temp_v2 + 0x140);
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      temp_v9 = temp_v2 + 0x2354;
      temp_v6 = resourceRunOperationIfUnblocked();
      temp_v14 = FUN_002a4894(temp_v9);
      temp_v8 = FUN_002a4878(temp_v9);
      temp_v10 = FUN_001834a4(0x12,0x406);
      temp_v7 = *(unsigned int *)(temp_v10 + 8);
      temp_v12 = **(unsigned int **)(temp_v10 + 0xc);
      if (((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v10 = FUN_00230544(), temp_v10 != 0)) &&
         ((temp_v10 = FUN_002a4878(temp_v9), temp_v10 == 0 || (*(short *)(temp_v2 + 0x234a) == 0)))) {
        temp_v10 = 4;
        FUN_001517b4(4,0);
        if (temp_v10 == 0) goto LAB_00269ec4;
      }
      else {
LAB_00269ec4:
        if (*(int *)(temp_v2 + 0x540) != 6) {
          if (((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v10 = FUN_00230544(), temp_v10 != 0)) &&
             ((temp_v10 = FUN_002a4878(temp_v9), temp_v10 == 3 ||
              ((int)*(short *)(temp_v2 + 0x234a) == temp_v8 + (temp_v6 + temp_v14) * 4 + 1 ||
               *(short *)(temp_v2 + 0x234a) == 0)))) {
            temp_v6 = 3;
            FUN_001517b4(3,0);
            if (temp_v6 == 0) goto LAB_00269f7c;
          }
          else {
LAB_00269f7c:
            if (*(int *)(temp_v2 + 0x53c) != 6) {
              temp_v6 = 9;
              FUN_001517b4(9,1);
              if (temp_v6 != 0) {
                sortMenuAcquire(0x16,0);
                FUN_0031f208(1);
                FUN_0031f208(8);
                FUN_0031f208(2);
                FUN_0031f208(3);
                useCounterStart();
                temp_v6 = g_statusDown;
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                puVar13 = (unsigned int *)(temp_v6 + 0x518);
                temp_v7 = *puVar13;
                *puVar13 = 0x17;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
                FUN_003343f0(1);
                temp_v7 = 0x100020e;
                eventQueueAddUniqueIfValid(temp_v7);
                break;
              }
              if ((-1 < *(int *)(temp_v2 + 0x52c)) && (0 < *(short *)(temp_v2 + 0x234a))) {
                temp_v6 = *(int *)(temp_v2 + 0x540);
                temp_v16 = temp_v6 == 0;
                if (temp_v16) {
                  temp_v6 = *(int *)(temp_v2 + 0x53c);
                }
                if (temp_v16 && temp_v6 == 0) {
                  temp_v6 = FUN_002a4878(temp_v9);
                  temp_v14 = FUN_002a4894(temp_v9);
                  flaggedEntrySetValueA(temp_v9,(int)(*(int *)(temp_v2 + 0x52c) +
                                           ((unsigned int)(*(int *)(temp_v2 + 0x52c) >> 0x1f) >> 0x1e)) >> 2);
                  flaggedEntrySetValueB(temp_v9,*(int *)(temp_v2 + 0x52c) % 4);
                  if (*(int *)(temp_v2 + 0x52c) != temp_v6 + temp_v14 * 4) {
                    eventQueueAddUniqueIfValid(0x100020d);
                  }
                  *(unsigned char *)(temp_v2 + 0x528) = 1;
                  break;
                }
              }
              temp_v6 = temp_v9;
              FUN_00228b04(temp_v9,1);
              if (temp_v6 == 0) {
                FUN_002e2848(temp_v9,temp_v7,temp_v12,(int)*(short *)(temp_v2 + 0x58c),
                             (int)*(short *)(temp_v2 + 0x58e),(int)*(short *)(temp_v2 + 0x590),0,1);
                if (temp_v9 != 0) {
                  *(unsigned char *)(temp_v2 + 0x528) = 1;
                }
                break;
              }
              temp_v4 = resourceRunOperationIfUnblocked(temp_v9);
              temp_v5 = FUN_002a4894(temp_v9);
              *(short *)(temp_v2 + 0x234e) = temp_v5 + temp_v4;
              temp_v4 = resourceRunEmbeddedOperationIfUnblocked(temp_v9);
              temp_v5 = FUN_002a4878(temp_v9);
              *(short *)(temp_v2 + 0x234c) = temp_v5 + temp_v4;
              *(unsigned char *)(temp_v2 + 0x528) = 1;
              break;
            }
          }
          *(unsigned char *)(temp_v2 + 0x59b) = 1;
          temp_v4 = resourceRunOperationIfUnblocked(temp_v9);
          temp_v5 = FUN_002a4894(temp_v9);
          *(short *)(temp_v2 + 0x234e) = temp_v5 + temp_v4;
          temp_v4 = resourceRunEmbeddedOperationIfUnblocked(temp_v9);
          temp_v5 = FUN_002a4878(temp_v9);
          *(short *)(temp_v2 + 0x234c) = temp_v5 + temp_v4;
          break;
        }
      }
      *(unsigned char *)(temp_v2 + 0x59b) = 0xff;
      temp_v4 = resourceRunOperationIfUnblocked(temp_v9);
      temp_v5 = FUN_002a4894(temp_v9);
      *(short *)(temp_v2 + 0x234e) = temp_v5 + temp_v4;
      temp_v4 = resourceRunEmbeddedOperationIfUnblocked(temp_v9);
      temp_v5 = FUN_002a4878(temp_v9);
      *(short *)(temp_v2 + 0x234c) = temp_v5 + temp_v4;
    }
    break;
  case 0x17:
    temp_v6 = useCounterIsFinished();
    if (temp_v6 != 0) {
      useCounterRelease();
      FUN_003343f0(0);
      temp_v6 = FUN_002c7e3c();
      if ((((temp_v6 == 9) || (temp_v6 = FUN_002c7e3c(), temp_v6 == 10)) ||
          (temp_v6 = FUN_002c7e3c(), temp_v6 == 0xc)) || (temp_v6 = FUN_002c7e3c(), temp_v6 == 8)) {
        temp_v7 = 0x61;
      }
      else {
        temp_v7 = 0x2c;
      }
      sysPlaySe(temp_v7);
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0x16;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    else {
      temp_v6 = FUN_002c7c54();
      if (temp_v6 != 0x69) {
        FUN_003d4104();
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
    }
    break;
  case 0x18:
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      temp_v6 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v14 = FUN_00230544(), temp_v14 != 0)) {
        temp_v14 = 4;
        FUN_001517b4(4,0);
        if (temp_v14 != 0) {
          temp_v3 = 0xff;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x540) == 6) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v14 = FUN_00230544(), temp_v14 != 0)) {
        temp_v14 = 3;
        FUN_001517b4(3,0);
        if (temp_v14 != 0) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x53c) == 6) {
        temp_v3 = 1;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      temp_v7 = FUN_001834a4(0x12,0x48c);
      temp_v14 = temp_v2 + 0x23c0;
      FUN_003450d4(temp_v14,temp_v7,0,(int)*(short *)(temp_v2 + 0x58c),(int)*(short *)(temp_v2 + 0x58e),
                   (int)*(short *)(temp_v2 + 0x590),temp_v2 + 0x24a0,0,0);
      if (temp_v14 != 0) {
        temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
        if (temp_v14 != temp_v6) {
          temp_v7 = 0x100020d;
          eventQueueAddUniqueIfValid(temp_v7);
        }
      }
      else {
        temp_v14 = temp_v2 + 0x23c0;
        FUN_00228b04(temp_v14,0);
        if ((temp_v14 != 0) && (temp_v14 = objectApplyIfUnblocked(temp_v2 + 0x23c0), temp_v14 >= 11)) {
          resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
          temp_v14 = FUN_002a4894(temp_v2 + 0x23c0);
          if ((temp_v14 != 9) && (temp_v14 = FUN_002a4894(temp_v2 + 0x23c0), temp_v14 != 0)) {
            eventQueueAddUniqueIfValid(0x100020d);
          }
          temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
          while ((temp_v14 == temp_v6 &&
                 ((temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0), temp_v14 != 0 ||
                  (temp_v14 = FUN_002a4894(temp_v2 + 0x23c0), temp_v14 != 0))))) {
            temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
            temp_v8 = objectApplyIfUnblocked(temp_v2 + 0x23c0);
            if ((temp_v14 == temp_v8 - 10) && (temp_v14 = FUN_002a4894(temp_v2 + 0x23c0), temp_v14 == 9))
            break;
            FUN_00228b04(temp_v2 + 0x23c0,0);
            temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
          }
        }
      }
    }
    break;
  case 0x19:
    temp_v14 = 0;
    FUN_001517b4(0,1);
    temp_v6 = g_statusDown;
    if (temp_v14 != 0) {
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0x1a;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    break;
  case 0x1a:
    temp_v6 = *(int *)(temp_v2 + 0x524);
    if (temp_v6 == 8) {
      temp_v14 = 0;
    }
    if (temp_v6 >= 8) {
      if (temp_v6 == 8) {
        do {
          if (*(short *)(temp_v2 + temp_v14 * 2 + 0x2488) == 0) {
            *(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x2488) = *(unsigned short *)(temp_v2 + 0x2498);
            break;
          }
          temp_v14 = temp_v14 + 1;
        } while (temp_v14 < 8);
        flaggedEntrySetValueA(temp_v2 + 0x2424,temp_v14);
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        uiSpriteSetKeyframe(temp_v2 + 0x2e4,0);
        uiSpriteSelectAnim(temp_v2 + 0x370,2);
        FUN_00387240(temp_v2 + 0x370,0x12,temp_v14 + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = FUN_00167458(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v14 = FUN_00163aa4(temp_v2 + 0x370), temp_v6 = g_statusDown, temp_v14 != 0))
      {
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 0x1b;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
      }
    }
    break;
  case 0x1b:
    temp_v14 = temp_v2 + 0x2424;
    temp_v6 = temp_v14;
    FUN_003450d4(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
    if ((temp_v6 != 0) || (FUN_00228b04(temp_v14,1), temp_v14 != 0)) {
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      break;
    }
    temp_v6 = 0;
    FUN_001517b4(0,1);
    if (temp_v6 == 0) {
      temp_v6 = 1;
      FUN_001517b4();
      if (temp_v6 == 0) break;
    }
    temp_v6 = uniteNotBusy();
    if (temp_v6 == 0) {
      obj04Finish();
    }
    FUN_0019de98(0,0xf4f4f4ff);
    statusDownRestartTransition();
    *(unsigned int *)(temp_v2 + 0x249c) = 0;
    break;
  case 0x1c:
    temp_v14 = temp_v2 + 0x2424;
    temp_v6 = temp_v14;
    FUN_003450d4(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
    if ((temp_v6 != 0) || (temp_v6 = temp_v14, FUN_00228b04(temp_v14,1), temp_v6 != 0)) {
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      break;
    }
    temp_v6 = 0;
    FUN_001517b4(0,1);
    if ((temp_v6 != 0) || (*(char *)(temp_v2 + 0x24a0) != '\0')) {
      temp_v6 = FUN_002a4894(temp_v14);
      temp_v8 = objectApplyIfUnblocked(temp_v14);
      if (temp_v6 == temp_v8 - 1) {
        *(unsigned int *)(temp_v2 + 0x249c) = 0;
        if (*(char *)(temp_v2 + 0x52b) != '\0') {
          temp_v6 = uniteNotBusy();
          if (temp_v6 == 0) {
            obj04Finish();
          }
          FUN_0019de98(0,0xf4f4f4ff);
          statusDownRestartTransition();
          break;
        }
      }
      else {
        temp_v6 = FUN_002a4894(temp_v14);
        *(unsigned int *)(temp_v2 + 0x249c) = (unsigned int)*(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x2488);
      }
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0x1d;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    else {
      temp_v6 = 1;
      FUN_001517b4();
      if (temp_v6 != 0) {
        *(unsigned int *)(temp_v2 + 0x249c) = 0;
        temp_v6 = uniteNotBusy();
        if (temp_v6 == 0) {
          obj04Finish();
        }
        FUN_0019de98(0,0xf4f4f4ff);
        statusDownRestartTransition();
      }
    }
    break;
  case 0x1d:
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        temp_v6 = temp_v2 + 0x2424;
        if (*(int *)(temp_v2 + 0x249c) != 0) {
          temp_v14 = FUN_002a4894();
          *(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x2488) = *(unsigned short *)(temp_v2 + 0x2498);
          temp_v8 = objectApplyIfUnblocked(temp_v6);
          FUN_00203b40(temp_v6,temp_v8 - 1,8,1,1,1);
          flaggedEntrySetValueA(temp_v6,temp_v14);
          *(unsigned char *)(temp_v2 + 0x528) = 1;
          uiSpriteSetKeyframe(temp_v2 + 0x2e4,0);
          uiSpriteSelectAnim(temp_v2 + 0x370,2);
          FUN_00387240(temp_v2 + 0x370,0x12,temp_v14 + 0x414);
          *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
        }
        else {
          temp_v14 = objectApplyIfUnblocked();
          FUN_00203b40(temp_v6,temp_v14 - 1,8,1,1,1);
          flaggedEntrySetValueA(temp_v6,0);
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 0x1e;
          *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        }
      }
      temp_v6 = FUN_00167458(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v14 = FUN_00163aa4(temp_v2 + 0x370), temp_v6 = g_statusDown, temp_v14 != 0))
      {
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 0x1e;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
      }
    }
    break;
  case 0x1e:
    temp_v14 = temp_v2 + 0x2424;
    temp_v6 = temp_v14;
    FUN_003450d4(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
    if ((temp_v6 != 0) || (FUN_00228b04(temp_v14,1), temp_v14 != 0)) {
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      break;
    }
    temp_v6 = 0;
    FUN_001517b4(0,1);
    if (temp_v6 == 0) {
      temp_v6 = 1;
      FUN_001517b4();
      if (temp_v6 == 0) break;
    }
    temp_v6 = uniteNotBusy();
    if (temp_v6 == 0) {
      obj04Finish();
    }
    FUN_0019de98(0,0xf4f4f4ff);
    statusDownRestartTransition();
    break;
  case 0x1f:
    FUN_00163aa4(temp_v2 + 0xb4);
    FUN_00163aa4(temp_v2 + 0x1cc);
    temp_v14 = g_statusDown;
    *(unsigned char *)(g_statusDown + 0x2578) = 1;
    temp_v6 = *(int *)(temp_v14 + 0x2564);
    switch(temp_v6) {
    case 0:
      temp_v16 = *(int *)(temp_v14 + 0x256c) != 0;
      if (temp_v16) {
        temp_v6 = *(int *)(temp_v14 + 0x2570);
      }
      if (temp_v16 && temp_v6 != 0) {
        if (*(int *)(temp_v14 + 0x2574) == 0) {
          FUN_00275bc8();
          *(int *)(temp_v14 + 0x2574) = temp_v6;
          *(unsigned int *)(temp_v6 + 0x108) = 2;
        }
        *(unsigned int *)(temp_v14 + 0x2564) = 1;
        *(unsigned int *)(temp_v14 + 0x2568) = 0;
        FUN_002f7f6c(temp_v14);
      }
      break;
    case 1:
      FUN_002f7f6c(temp_v14);
      temp_v6 = g_statusDown;
      temp_v8 = g_statusDown + 0x24ac;
      temp_v14 = FUN_002a4894(g_statusDown + 0x2500);
      temp_v4 = *(short *)(temp_v8 + temp_v14 * 8);
      temp_v14 = FUN_002a4894(temp_v6 + 0x2500);
      if (temp_v14 >= *(int *)(temp_v6 + 0x24ec)) {
        screenStartOrClear(*(unsigned int *)(temp_v6 + 0x256c),7);
      }
      else if (temp_v4 != 0) {
        skillHelpUpdateAttributeAndTarget(temp_v4);
      }
      else {
        FUN_0019de98(0,0xf4f4f4ff);
      }
      if (*(char *)(temp_v6 + 0x24f0) != '\0') {
        temp_v6 = ifTouchGetButtonHelpValue();
        if (temp_v6 != 0x109) {
          sysPlaySe();
        }
        break;
      }
      temp_v6 = ifTouchGetButtonHelpValue();
      if (temp_v6 != 0x108) {
        sysPlaySe(0x108);
      }
      break;
    case 2:
      *(unsigned char *)(temp_v14 + 0x2578) = 0;
      FUN_002f7cd4(temp_v14);
      temp_v6 = g_statusDown;
      temp_v8 = g_statusDown + 0x24ac;
      temp_v14 = FUN_002a4894(g_statusDown + 0x2500);
      temp_v4 = *(short *)(temp_v8 + temp_v14 * 8);
      temp_v14 = FUN_002a4894(temp_v6 + 0x2500);
      if (temp_v14 >= *(int *)(temp_v6 + 0x24ec)) {
        screenStartOrClear(*(unsigned int *)(temp_v6 + 0x256c),7);
      }
      else if (temp_v4 != 0) {
        skillHelpUpdateAttributeAndTarget(temp_v4);
      }
      else {
        FUN_0019de98(0,0xf4f4f4ff);
      }
      if (*(char *)(temp_v6 + 0x24f0) == '\0') {
        temp_v6 = ifTouchGetButtonHelpValue();
        if (temp_v6 != 0x108) {
          sysPlaySe(0x108);
        }
        break;
      }
      temp_v6 = ifTouchGetButtonHelpValue();
      if (temp_v6 != 0x109) {
        sysPlaySe();
      }
      break;
    case 3:
      statusSkillsCommitOnDialogResult(reinterpret_cast<void*>(temp_v14));
      break;
    case 4:
      temp_v6 = scrRunOpcodesStub(*(unsigned int *)(temp_v14 + 0x2574));
      if (temp_v6 == 2) {
        temp_v6 = messageMainGetValue();
        if (temp_v6 != 0) {
          *(unsigned int *)(temp_v14 + 0x2564) = 1;
          *(unsigned int *)(temp_v14 + 0x2568) = 0;
        }
        else {
          if (*(char *)(temp_v14 + 0x2580) != '\0') {
            FUN_003343f0(0);
            *(unsigned char *)(temp_v14 + 0x2580) = 0;
          }
          *(unsigned int *)(temp_v14 + 0x2564) = 5;
          *(unsigned int *)(temp_v14 + 0x2568) = 0;
        }
      }
    }
    if ((g_statusDown == 0) || (*(int *)(g_statusDown + 0x2564) == 5)) {
      FUN_003343f0(0);
      temp_v3 = *(unsigned char *)(temp_v2 + 0x515);
      FUN_002c7ce8(temp_v3);
    }
  }
  temp_v16 = *(char *)(temp_v2 + 0x528) == '\0';
  temp_v6 = 0;
  if (!temp_v16) {
    temp_v6 = *(int *)(temp_v2 + 0x518);
  }
  if (temp_v16 || temp_v6 < 3) {
    *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
    return 0;
  }
  *(unsigned char *)(temp_v2 + 0x528) = 0;
  temp_v16 = 0;
  temp_v6 = FUN_002c7e3c();
  if (temp_v6 != 0xe) {
    if (temp_v6 != 7) {
      if (temp_v6 == 0x10) {
        temp_v16 = 1;
      }
    }
    else {
      puVar14 = (unsigned short *)FUN_002c7e24();
      temp_v6 = FUN_0026264c(*puVar14);
      if (temp_v6 == 0) {
        temp_v16 = 1;
      }
    }
  }
  else {
    temp_v16 = 1;
  }
  temp_v6 = *(int *)(temp_v2 + 0x518);
  if (((temp_v6 == 3 || temp_v6 == 7) || (temp_v6 == 0xe || temp_v6 == 0x11)) ||
     ((temp_v6 == 0x12 || temp_v6 == 4 ||
      ((temp_v6 == 0xc || temp_v6 == 8 || ((temp_v6 == 9 || temp_v6 == 0xf) || temp_v6 == 0x10)))))) {
    temp_v6 = temp_v2 + 0x5ec;
    temp_v14 = resourceRunOperationIfUnblocked();
    temp_v8 = FUN_002a4894(temp_v6);
    temp_v14 = temp_v14 + temp_v8;
    if (*(int *)(temp_v2 + 0x518) == 7) {
      if (*(int *)(temp_v2 + 0x524) >= 8) {
        temp_v8 = objectApplyIfUnblocked(temp_v6);
        if (temp_v8 - 1 != temp_v14) goto LAB_0026adc4;
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + 0x5bc);
      }
      else {
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x59c);
      }
    }
    else {
LAB_0026adc4:
      if ((*(int *)(temp_v2 + 0x518) == 0xe) && (temp_v6 = objectApplyIfUnblocked(temp_v6), temp_v6 - 1 == temp_v14)) {
        temp_v11 = *(unsigned int *)(temp_v2 + 0x658);
      }
      else {
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x59c);
      }
    }
    if (temp_v16) {
      textFormatBuffer(temp_v17,&LAB_0026b0b8);
      FUN_0019de98(temp_v17,0xf4f4f4ff);
    }
    else {
      skillHelpUpdateAttributeAndTarget(temp_v11);
    }
  }
  if (*(int *)(temp_v2 + 0x518) == 0x13) {
    temp_v13 = 0;
    temp_v6 = resourceRunOperationIfUnblocked();
    temp_v14 = FUN_002a4894(temp_v2 + 0x67c);
    temp_v14 = temp_v14 + temp_v6;
    if (temp_v14 == 0) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x66c);
    }
    else if (temp_v14 == 1) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x66e);
    }
    else if (temp_v14 == 2) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x670);
    }
    else if (temp_v14 == 3) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x672);
    }
    else if (temp_v14 == 4) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x674);
    }
    else if (temp_v14 == 5) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x676);
    }
    else if (temp_v14 == 6) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x678);
    }
    screenShowMessage(temp_v13);
  }
  if (*(int *)(temp_v2 + 0x518) == 0x14) {
    if (temp_v16) {
      textFormatBuffer(temp_v17,&LAB_0026b0b8);
      FUN_0019de98(temp_v17,0xf4f4f4ff);
    }
    else {
      temp_v6 = resourceRunOperationIfUnblocked();
      temp_v14 = FUN_002a4894(temp_v2 + 0xee4);
      temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + (temp_v14 + temp_v6) * 4 + 0x6e2);
      if (temp_v11 != 0) {
        temp_v11 = (unsigned int)dataTable0cSub1GetText((unsigned short)temp_v11);
        textFormatBuffer(temp_v17,&LAB_0026b0d8,temp_v11);
        FUN_0019de98(temp_v17,0xf4f4f4ff);
      }
    }
  }
  if (*(int *)(temp_v2 + 0x518) == 0x16) {
    temp_v6 = FUN_002a4878();
    temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x2354);
    temp_v8 = FUN_002a4894(temp_v2 + 0x2354);
    temp_v6 = temp_v2 + (temp_v6 + (temp_v8 + temp_v14) * 4) * 4;
    temp_v4 = *(short *)(temp_v6 + 0xf4a);
    if (temp_v4 == 0) {
      puVar16 = (unsigned char *)0x0;
    }
    else {
      temp_v13 = *(unsigned short *)(temp_v6 + 0xf48);
      temp_v7 = FUN_00180114(temp_v13,temp_v4);
      temp_v12 = FUN_0014bf3c(temp_v13,0);
      textFormatBuffer(temp_v17,&LAB_0026b0dc,temp_v12,temp_v7);
      puVar16 = temp_v17;
    }
    FUN_0019de98(puVar16,0xf4f4f4ff);
  }
  temp_v6 = *(int *)(temp_v2 + 0x518);
  if (((temp_v6 != 0x19 && temp_v6 != 0x1a) && (temp_v6 != 0x1b && temp_v6 != 0x1c)) &&
     (temp_v6 != 0x1d && temp_v6 != 0x1e)) {
    *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
    return 0;
  }
  temp_v6 = temp_v2 + 0x2424;
  temp_v14 = FUN_002a4894();
  temp_v8 = objectApplyIfUnblocked(temp_v6);
  if (temp_v14 == temp_v8 - 1) {
    temp_v1 = *(unsigned short *)(temp_v2 + 0x2498);
    temp_v11 = (unsigned int)temp_v1;
    FUN_00480da8();
    if (temp_v11 != 0) {
      skillHelpUpdateAttributeAndTarget();
      *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
      return 0;
    }
  }
  else {
    temp_v14 = FUN_002a4894(temp_v6);
    if (*(short *)(temp_v2 + temp_v14 * 2 + 0x2488) != 0) {
      temp_v6 = FUN_002a4894(temp_v6);
      temp_v1 = *(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x2488);
      temp_v11 = (unsigned int)temp_v1;
      FUN_00480da8();
      if (temp_v11 != 0) {
        skillHelpUpdateAttributeAndTarget();
        *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
        return 0;
      }
    }
  }
  FUN_0019de98(0,0xf4f4f4ff);
  *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
  return 0;
}

} /* extern "C" */
