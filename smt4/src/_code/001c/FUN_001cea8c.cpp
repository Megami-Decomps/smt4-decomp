/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cea8c` (_code @ 0x1cea8c, 0x1540 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int contentEntryFlagTest(void);
int dialogOpen(...);
int infoWinSetMessage(...);
int FUN_0029541c(...);
int FUN_00296774(...);
int messageMainFinishWindow(void);
int FUN_0029aafc(void);
int soundChannelStopAll(...);
int buttonHelpShowSkillDetails(...);
int arrayContainsU16(...);
int flaggedEntrySetValueA(...);
int FUN_0029efd8(...);
int uiScrollHandleActionsOrTouch(...);
int FUN_0029f848(...);
int soundChannelRequestIfEnabled(...);
int eventQueueAddUniqueIfValid(...);
int FUN_002c1658(...);
int gamePlayerClearPairedId(...);
int FUN_00334058(...);
int SBORROW4(...);

int scrRunOpcodesStub(...);
int FUN_001c8a7c(int, int, int, int);
int buttonHelpResetSlots(void);
int FUN_0026b738(...);
int recordContainsPairedId(...);
int btlTalkBustUpSetUnk2F4(...);
int FUN_002954f4(...);
int scrScriptProcessStartEntry(...);
int FUN_0029bd4c(void);
int beginStatusPanelClose(void);
int FUN_0029ee6c(...);
int messageStatesSetFirst(...);
int FUN_002b7bca(...);
int buttonHelpSetPreset(...);
int timerStart(...);
int spriteStartAnimationByIndex(...);
int FUN_002bf818(...);
int whisperEffectFinish(void);
int whisperEffectStart(...);

/* stack frame of param_1: 12 slot(s), 45 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned char LAB_002c6e64; /* 0x2c6e64 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: FUN_001c8a7c. */
extern int whisperEffectIsIdle(void);
/* Supplied declaration required: buttonHelpResetSlots. */
/* Supplied declaration required: contentEntryFlagTest. */
/* Supplied declaration required: FUN_0026b738. */
/* Supplied declaration required: recordContainsPairedId. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: infoWinSetMessage. */
/* Supplied declaration required: FUN_0029541c. */
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: FUN_002954f4. */
extern int btlTalkBustUpGetValue(void);
extern int FUN_00295618(void);
extern int dialogIsActive(void);
/* Supplied declaration required: FUN_00296774. */
/* Supplied declaration required: messageMainFinishWindow. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int messageMainGetChoiceResult(void);
/* Supplied declaration required: FUN_0029aafc. */
/* Supplied declaration required: FUN_0029bd4c. */
/* Supplied declaration required: soundChannelStopAll. */
extern int FUN_0029c48c(void);
/* Supplied declaration required: buttonHelpShowSkillDetails. */
/* Supplied declaration required: beginStatusPanelClose. */
/* Supplied declaration required: arrayContainsU16. */
/* Supplied declaration required: flaggedEntrySetValueA. */
extern int FUN_0029ee54(int);
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: uiScrollHandleActionsOrTouch. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
extern int sys43e188GetState(void);
/* Supplied declaration required: messageStatesSetFirst. */
extern int gameGetUnitRecord(int);
extern int gameGetPlayerData(void);
extern int FUN_002b6b04(void);
/* Supplied declaration required: FUN_002b7bca. */
extern unsigned short FUN_002b8584(unsigned int, int);
/* Supplied declaration required: buttonHelpSetPreset. */
extern int buttonHelpGetStatus(void);
extern int FUN_002b8ee0(int, unsigned int);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: spriteStartAnimationByIndex. */
/* Supplied declaration required: FUN_002bf818. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: whisperEffectFinish. */
/* Supplied declaration required: whisperEffectStart. */
/* Supplied declaration required: gamePlayerClearPairedId. */
/* Supplied declaration required: FUN_00334058. */


void FUN_001cea8c(int param_1)

{
/* irregular: 6 goto(s); 39 native warning(s); review required */
  short *psVar1;
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar9;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  short *psVar18;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int *piVar25;
  int temp_v21;
  int *piVar27;
  unsigned int *puVar28;
  unsigned int temp_v22;
  unsigned char temp_v23;
  unsigned char temp_v24;
  char temp_v25 [12];
  int temp_v26;
  int temp_v27;
  
  temp_v4 = param_1 + *(int *)(param_1 + 0xcf78) * 0x620;
  temp_v5 = gameGetUnitRecord((int)*(char *)(temp_v4 + 0x3654));
  temp_v6 = gameGetPlayerData();
  FUN_002bf818(param_1 + 0x624);
  piVar9 = (int *)(param_1 + 0x3534);
  temp_v25[0] = '\0';
  temp_v15 = *piVar9;
  temp_v26 = 0;
  temp_v27 = 0;
  temp_v7 = param_1 + 0xd114;
  piVar25 = (int *)(param_1 + 0x3538);
  piVar27 = (int *)(param_1 + 0x3544);
  puVar28 = (unsigned int *)(param_1 + 0x3574);
  if (temp_v15 == 5) {
    if (*piVar27 == 1) {
      *(unsigned int *)(param_1 + 0xd2d0) = 0;
      *(unsigned int *)(param_1 + 0xd2d4) = 0;
      temp_v4 = -1;
      temp_v15 = 0;
      temp_v24 = 0;
      do {
        if (*(short *)(param_1 + temp_v15 * 2 + 0xd114) ==
            *(short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd132)) {
          temp_v9 = temp_v6 + temp_v15 * 2;
          if (*(short *)(temp_v9 + 0x34) != 0) {
            temp_v10 = param_1 + temp_v15 * 2;
            *(unsigned short *)(temp_v10 + 0xd124) = 0;
            temp_v2 = *(unsigned short *)(temp_v9 + 0x34);
            temp_v13 = (unsigned int)*(unsigned short *)(temp_v10 + 0xd114);
            *(unsigned short *)(temp_v10 + 0xd114) = temp_v2;
            *(unsigned char *)(param_1 + temp_v15 + 0xd2d0) = 1;
            temp_v4 = recordContainsPairedId(temp_v5,temp_v2);
            if (temp_v4 != 0) {
              if (*(int *)(param_1 + 0xd2c8) < 0) {
                *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd132) = temp_v2;
              }
              else {
                temp_v16 = *(unsigned int *)(param_1 + 0xd2c4);
                if (0 < (int)temp_v16) {
                  temp_v14 = temp_v16 & 1;
                  if (temp_v14 == 1) {
                    temp_v4 = param_1 + temp_v16 * 2;
                    *(unsigned short *)(temp_v4 + 0xd134) = *(unsigned short *)(temp_v4 + 0xd132);
                  }
                  temp_v20 = (unsigned int)(temp_v14 == 1);
                  temp_v16 = *(unsigned int *)(param_1 + 0xd2c4);
                  if ((int)temp_v14 < (int)temp_v16) {
                    do {
                      temp_v4 = temp_v20 + 1;
                      temp_v9 = param_1 + (temp_v16 - temp_v20) * 2;
                      temp_v14 = temp_v14 + 2;
                      *(unsigned short *)(temp_v9 + 0xd134) = *(unsigned short *)(temp_v9 + 0xd132);
                      temp_v20 = temp_v20 + 2;
                      temp_v4 = param_1 + (*(int *)(param_1 + 0xd2c4) - temp_v4) * 2;
                      *(unsigned short *)(temp_v4 + 0xd134) = *(unsigned short *)(temp_v4 + 0xd132);
                      temp_v16 = *(unsigned int *)(param_1 + 0xd2c4);
                    } while ((int)temp_v14 < (int)temp_v16);
                  }
                }
                temp_v14 = 8 - temp_v16;
                if (0 < (int)temp_v14) {
                  temp_v4 = 0;
                  if ((int)temp_v16 >= 8) {
                    temp_v20 = 0;
                  }
                  else {
                    temp_v20 = temp_v14 & 1;
                    if (temp_v20 == 1) {
                      temp_v4 = 1;
                      *(unsigned short *)(param_1 + temp_v16 * 2 + 0xd134) = 0;
                    }
                  }
                  for (; (int)temp_v20 < (int)temp_v14; temp_v20 = temp_v20 + 2) {
                    temp_v9 = temp_v4 + 1;
                    *(unsigned short *)(param_1 + (temp_v16 + temp_v4) * 2 + 0xd134) = 0;
                    temp_v4 = temp_v4 + 2;
                    *(unsigned short *)(param_1 + (temp_v16 + temp_v9) * 2 + 0xd134) = 0;
                  }
                }
                *(unsigned short *)(param_1 + 0xd134) = temp_v2;
              }
              *(unsigned short *)(temp_v10 + 0xd124) = 1;
              temp_v4 = FUN_0026b738(temp_v13);
              if (temp_v4 == 0) {
                *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) + 1;
              }
              temp_v24 = 1;
              temp_v4 = temp_v15;
            }
            else {
              temp_v9 = recordContainsPairedId(temp_v5,temp_v13);
              temp_v4 = temp_v15;
              if ((temp_v9 != 0) && (temp_v9 = FUN_0026b738(temp_v13), temp_v4 = temp_v15, temp_v9 != 0)) {
                *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) - 1;
              }
              temp_v24 = 1;
              temp_v15 = *(int *)(param_1 + 0xd2c4) - 1;
              *(int *)(param_1 + 0xd2c4) = temp_v15;
              *(unsigned short *)(param_1 + temp_v15 * 2 + 0xd134) = 0;
            }
          }
          else {
            temp_v9 = param_1 + temp_v15 * 2;
            *(unsigned short *)(temp_v9 + 0xd114) = 0;
            *(unsigned short *)(temp_v9 + 0xd124) = 0;
            *(unsigned char *)(param_1 + temp_v15 + 0xd2d0) = 1;
          }
          break;
        }
        temp_v15 = temp_v15 + 1;
      } while (temp_v15 < 8);
      FUN_002b7bca(temp_v7,8,2,&LAB_002c6e64);
      if (!temp_v24) {
        temp_v15 = *(int *)(param_1 + 0xd2c4) - 1;
        *(int *)(param_1 + 0xd2c4) = temp_v15;
        *(unsigned short *)(param_1 + temp_v15 * 2 + 0xd134) = 0;
      }
      FUN_001c8a7c(param_1,temp_v5,temp_v6,temp_v4);
      FUN_002b7bca(temp_v7,8,2,&LAB_002c6e64);
      *(unsigned int *)(param_1 + 0xd2c4) = 0;
      temp_v4 = 0;
      *(unsigned int *)(param_1 + 0xd2c8) = 0;
      do {
        temp_v6 = param_1 + temp_v4 * 2;
        if (*(short *)(temp_v6 + 0xd114) != 0) {
          temp_v7 = FUN_0026b738();
          if ((temp_v7 != 0) &&
             (temp_v7 = recordContainsPairedId(temp_v5,*(unsigned short *)(temp_v6 + 0xd114)), temp_v7 != 0)) {
            *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) + 1;
            *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) + 1;
          }
          else {
            temp_v7 = FUN_0026b738(*(unsigned short *)(temp_v6 + 0xd114));
            if ((temp_v7 == 0) &&
               (temp_v6 = recordContainsPairedId(temp_v5,*(unsigned short *)(temp_v6 + 0xd114)), temp_v6 != 0)) {
              *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) + 1;
            }
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
    }
    if (*piVar27 != 6) {
      return;
    }
    *piVar9 = 2;
    *(unsigned int *)(param_1 + 0xd2d0) = 0;
    *(unsigned int *)(param_1 + 0xd2d4) = 0;
    return;
  }
  if (temp_v15 >= 5) {
    if (temp_v15 == 99) {
      temp_v4 = sys43e188GetState();
      if (temp_v4 == 0) {
        return;
      }
      messageStatesSetFirst(0);
      scrScriptProcessStartEntry(*puVar28,0xf);
      *piVar9 = *piVar9 + 1;
      return;
    }
    if (temp_v15 < 99) {
      if (temp_v15 != 10) {
        if (temp_v15 != 0x14) {
          return;
        }
        temp_v4 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x3568));
        if (temp_v4 != 2) {
          return;
        }
        *piVar9 = 1;
        temp_v11 = 0xe1;
        buttonHelpSetPreset(temp_v11);
        return;
      }
      temp_v24 = 1;
      temp_v5 = 0;
      do {
        temp_v9 = param_1 + temp_v5 * 0x8c;
        temp_v15 = FUN_002bf818(temp_v9 + 0x7c8);
        if (temp_v15 == 0) {
          temp_v24 = 0;
        }
        temp_v15 = FUN_002bf818(temp_v9 + 0xc28);
        if (temp_v15 == 0) {
          temp_v24 = 0;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 8);
      temp_v5 = FUN_002b6b04();
      if ((temp_v5 == 0) && (temp_v5 = dialogIsActive(), temp_v5 == 0)) {
        if (!temp_v24) {
          return;
        }
        temp_v4 = 0;
        do {
          spriteStartAnimationByIndex(param_1 + temp_v4 * 0x8c + 0x7c8,0);
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x10);
        *piVar9 = 2;
        scrScriptProcessStartEntry(*puVar28,0xe);
        return;
      }
      temp_v5 = temp_v26;
    }
    else {
      if (temp_v15 == 100) {
        temp_v4 = scrRunOpcodesStub(*puVar28);
        if (temp_v4 != 2) {
          return;
        }
        temp_v4 = messageMainGetChoiceResult();
        if (temp_v4 != 0) {
          scrScriptProcessStartEntry(*puVar28,0xe);
          if (*(int *)(param_1 + 0xd2c4) - *(int *)(param_1 + 0xd2c8) < 1) {
            temp_v11 = 0xe1;
          }
          else {
            temp_v11 = 0x6b;
          }
          buttonHelpSetPreset(temp_v11);
          *piVar9 = *piVar25;
        }
        else {
          FUN_0029ee6c(0,0x323232ff);
          timerStart(param_1 + 0xac,1,0);
          *piVar9 = *piVar9 + 1;
          if (*piVar25 == 3) {
            *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd134) = 0;
            *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) - 1;
          }
          whisperEffectFinish();
          buttonHelpResetSlots();
        }
        messageStatesSetFirst(1);
        return;
      }
      if (temp_v15 != 0x65) {
        return;
      }
      temp_v5 = sys43e188GetState();
      if (temp_v5 == 0) {
        return;
      }
      temp_v5 = FUN_002bf818(param_1 + 0xac);
      if (temp_v5 == 0) {
        return;
      }
      temp_v5 = whisperEffectIsIdle();
    }
    goto joined_r0x001cec14;
  }
  temp_v8 = param_1 + 0xd134;
  temp_v9 = param_1 + 0xd04c;
  temp_v10 = param_1 + 0xd0b0;
  switch(temp_v15) {
  case 0:
    *(unsigned char *)(temp_v5 + 0x4b) = 1;
    timerStart(param_1 + 0xac,4,0);
    temp_v11 = *(unsigned int *)(temp_v6 + 0x34);
    temp_v17 = *(unsigned int *)(temp_v6 + 0x38);
    temp_v19 = *(unsigned int *)(temp_v6 + 0x3c);
    temp_v22 = *(unsigned int *)(temp_v6 + 0x40);
    *(unsigned int *)(param_1 + 0xd134) = 0;
    *(unsigned int *)(param_1 + 0xd138) = 0;
    *(unsigned int *)(param_1 + 0xd13c) = 0;
    *(unsigned int *)(param_1 + 0xd140) = 0;
    *(unsigned int *)(param_1 + 0xd124) = 0;
    *(unsigned int *)(param_1 + 0xd128) = 0;
    *(unsigned int *)(param_1 + 0xd12c) = 0;
    *(unsigned int *)(param_1 + 0xd130) = 0;
    *(unsigned int *)(param_1 + 0xd2c4) = 0;
    *(unsigned int *)(param_1 + 0xd2c8) = 0;
    *(unsigned int *)(param_1 + 0xd114) = temp_v11;
    *(unsigned int *)(param_1 + 0xd118) = temp_v17;
    *(unsigned int *)(param_1 + 0xd11c) = temp_v19;
    *(unsigned int *)(param_1 + 0xd120) = temp_v22;
    temp_v4 = FUN_00295618();
    if (temp_v4 == 0) {
      beginStatusPanelClose();
    }
    FUN_0029bd4c();
    *piVar9 = *piVar9 + 1;
    whisperEffectStart(*(unsigned short *)(temp_v5 + 0x46));
    return;
  case 1:
    temp_v15 = FUN_002b8ee0(param_1 + 0xac,0);
    if (temp_v15 == 0) {
      return;
    }
    temp_v15 = FUN_0029c48c();
    if (temp_v15 == 0) {
      return;
    }
    temp_v15 = btlTalkBustUpGetValue();
    if (temp_v15 == 0) {
      FUN_002954f4(*(unsigned short *)(temp_v5 + 0x46),1);
      btlTalkBustUpSetUnk2F4(1);
    }
    temp_v15 = gameFlagIsSet(0x406);
    if (temp_v15 == 0) {
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x3568),3);
      *piVar9 = 0x14;
      temp_v11 = 0x9e;
      buttonHelpSetPreset(temp_v11);
      return;
    }
    temp_v18 = 0;
    temp_v15 = temp_v18;
    do {
      temp_v21 = temp_v5 + temp_v18 * 2;
      if (*(short *)(temp_v21 + 0x34) != 0) {
        temp_v12 = temp_v8;
        arrayContainsU16(temp_v8,8);
        if ((temp_v12 == 0) &&
           (temp_v12 = temp_v7, arrayContainsU16(temp_v7,8,*(unsigned short *)(temp_v21 + 0x34)), temp_v12 != 0)) {
          *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd134) =
               *(unsigned short *)(temp_v21 + 0x34);
          *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) + 1;
          *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) + 1;
        }
        temp_v15 = temp_v15 + 1;
      }
      temp_v18 = temp_v18 + 1;
    } while (temp_v18 < 8);
    temp_v11 = FUN_0029aafc();
    FUN_0029f848(temp_v9,temp_v11,temp_v11,1,1,1);
    FUN_0029f848(temp_v10,temp_v15,8,1,1,1);
    temp_v15 = FUN_0029efa8(temp_v10);
    buttonHelpShowSkillDetails(*(unsigned short *)(temp_v5 + temp_v15 * 2 + 0x34));
    temp_v8 = 0;
    temp_v15 = FUN_0029ee54(temp_v9);
    if (0 < temp_v15) {
      do {
        temp_v2 = FUN_002b8584(0x28,temp_v8 + 0xe4);
        temp_v15 = temp_v8 * 2;
        temp_v8 = temp_v8 + 1;
        *(unsigned short *)(param_1 + temp_v15 + 0x357e) = temp_v2;
        *(short *)(param_1 + 0x357c) = *(short *)(param_1 + 0x357c) + 1;
        temp_v15 = FUN_0029ee54(temp_v9);
      } while (temp_v8 < temp_v15);
    }
    temp_v9 = 0;
    temp_v15 = FUN_0029ee54(temp_v10);
    if (0 < temp_v15) {
      do {
        temp_v2 = FUN_002b8584(0x28,temp_v9 + 0xec);
        temp_v15 = temp_v9 * 2;
        temp_v9 = temp_v9 + 1;
        *(unsigned short *)(param_1 + temp_v15 + 0x358e) = temp_v2;
        *(short *)(param_1 + 0x357c) = *(short *)(param_1 + 0x357c) + 1;
        temp_v15 = FUN_0029ee54(temp_v10);
      } while (temp_v9 < temp_v15);
    }
    if (*(int *)(param_1 + 0xd2c4) < 1) {
      *piVar9 = *piVar9 + 1;
      scrScriptProcessStartEntry(*puVar28,0xe);
      return;
    }
    temp_v15 = 0;
    do {
      temp_v9 = param_1 + temp_v15 * 2;
      temp_v10 = 0;
      do {
        temp_v8 = param_1 + temp_v10 * 2;
        if (*(short *)(temp_v8 + 0xd114) == *(short *)(temp_v9 + 0xd134)) {
          spriteStartAnimationByIndex(param_1 + temp_v10 * 0x8c + 0x7c8,5);
          *(short *)(temp_v8 + 0xd124) = *(short *)(temp_v8 + 0xd124) + 1;
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < 8);
      temp_v10 = 0;
      do {
        if (*(short *)(temp_v5 + temp_v10 * 2 + 0x34) == *(short *)(temp_v9 + 0xd134)) {
          spriteStartAnimationByIndex(param_1 + temp_v10 * 0x8c + 0xc28,5);
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < 8);
      temp_v15 = temp_v15 + 1;
    } while (temp_v15 < *(int *)(param_1 + 0xd2c4));
    *piVar9 = 10;
    infoWinSetMessage(*(unsigned int *)(param_1 + 0x356c),0xca);
    dialogOpen(1);
  default:
    temp_v5 = temp_v26;
joined_r0x001cec14:
    if (temp_v5 != 0) {
      temp_v5 = 0;
      if (temp_v5 < *(int *)(param_1 + 0xd2c4)) {
        do {
          temp_v13 = FUN_0029aafc();
          temp_v15 = param_1 + temp_v5 * 2;
          temp_v9 = FUN_0026b738(*(unsigned short *)(temp_v15 + 0xd134));
          if (temp_v9 == 0) {
            temp_v9 = 0;
            if ((int)temp_v13 < 1) {
              temp_v16 = 0;
            }
            else {
              temp_v16 = temp_v13 & 1;
              if (temp_v16 != 0) {
                do {
                  if (*(short *)(param_1 + temp_v9 * 2 + 0xd114) == *(short *)(temp_v15 + 0xd134))
                  goto LAB_001cfdfc;
                  temp_v9 = temp_v9 + 1;
                } while (temp_v9 < (int)temp_v16);
              }
            }
            if ((int)temp_v16 < (int)temp_v13) {
              temp_v14 = (unsigned int)*(unsigned short *)(temp_v15 + 0xd134);
              do {
                temp_v10 = param_1 + temp_v16 * 2;
                temp_v20 = (unsigned int)*(unsigned short *)(temp_v10 + 0xd114);
                temp_v9 = temp_v20 - temp_v14;
                temp_v24 = temp_v20 != temp_v14;
                temp_v1 = temp_v10 + 0xd100;
                if (temp_v24) {
                  temp_v20 = (unsigned int)*(unsigned short *)(temp_v10 + 0xd116);
                  temp_v9 = temp_v20 - temp_v14;
                  temp_v1 = temp_v20;
                }
                temp_v23 = SBORROW4(temp_v20,temp_v14);
                if (temp_v24 && temp_v1 != temp_v14) {
                  temp_v16 = temp_v16 + 2;
                  temp_v23 = SBORROW4(temp_v13,temp_v16);
                  temp_v9 = temp_v13 - temp_v16;
                }
              } while (((temp_v24 && temp_v1 != temp_v14) && temp_v13 != temp_v16) && temp_v9 < 0 == temp_v23);
            }
          }
LAB_001cfdfc:
          temp_v9 = 0;
          if (0 < (int)temp_v13) {
            do {
              temp_v3 = *(short *)(temp_v6 + temp_v9 * 2 + 0x34);
              temp_v24 = 1;
              if (temp_v3 != *(short *)(temp_v15 + 0xd134) && temp_v3 != 0) {
                temp_v16 = *(unsigned int *)(param_1 + 0xd2c4);
                temp_v24 = 0;
                if (0 < (int)temp_v16) {
                  psVar18 = (short *)(param_1 + 0xd132);
                  if (((temp_v16 & 1) != 0) &&
                     (psVar18 = (short *)(param_1 + 0xd134), temp_v3 == *psVar18)) {
                    temp_v24 = 1;
                  }
                  for (temp_v10 = (int)temp_v16 >> 1; temp_v10 != 0; temp_v10 = temp_v10 - 1) {
                    psVar1 = psVar18 + 1;
                    psVar18 = psVar18 + 2;
                    if (temp_v3 == *psVar1) {
                      temp_v24 = 1;
                    }
                    if (temp_v3 == *psVar18) {
                      temp_v24 = 1;
                    }
                  }
                }
              }
              temp_v10 = temp_v7;
              arrayContainsU16(temp_v7,temp_v13);
              if (temp_v10 == 0 && !temp_v24) {
                gamePlayerClearPairedId(*(unsigned short *)(temp_v6 + temp_v9 * 2 + 0x34));
                break;
              }
              temp_v9 = temp_v9 + 1;
            } while (temp_v9 < (int)temp_v13);
          }
          FUN_00334058(*(unsigned short *)(temp_v15 + 0xd134));
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < *(int *)(param_1 + 0xd2c4));
      }
      temp_v5 = 0;
      do {
        temp_v7 = temp_v5 + 1;
        if (temp_v7 < 8) {
          do {
            if (*(short *)(param_1 + temp_v5 * 2 + 0xd114) == *(short *)(temp_v6 + temp_v7 * 2 + 0x34)) {
              temp_v15 = temp_v6 + temp_v7 * 2;
              temp_v9 = temp_v6 + temp_v5 * 2;
              temp_v2 = *(unsigned short *)(temp_v9 + 0x34);
              *(unsigned short *)(temp_v9 + 0x34) = *(unsigned short *)(temp_v15 + 0x34);
              *(unsigned short *)(temp_v15 + 0x34) = temp_v2;
              temp_v0 = *(unsigned char *)(temp_v6 + temp_v5 + 0x44);
              *(unsigned char *)(temp_v6 + temp_v5 + 0x44) = *(unsigned char *)(temp_v7 + temp_v6 + 0x44);
              *(unsigned char *)(temp_v7 + temp_v6 + 0x44) = temp_v0;
              break;
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 8);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 7);
      if (*(int *)(temp_v4 + 0x3c6c) != 1) {
        FUN_00296774(param_1,0xc);
      }
      else if (*(char *)(temp_v4 + 0x3c72) != '\0') {
        FUN_00296774(param_1,0x10);
      }
      else {
        FUN_0029541c(param_1);
      }
      if (*(int *)(param_1 + 0x352c) != 0x14) {
        soundChannelStopAll(0);
        soundChannelRequestIfEnabled(0x100003c,0);
        return;
      }
    }
    break;
  case 2:
    scrRunOpcodesStub(*puVar28);
    if (*(int *)(param_1 + 0xd2c4) - *(int *)(param_1 + 0xd2c8) >= 1) {
      temp_v4 = buttonHelpGetStatus();
      if (temp_v4 == 0xe1) {
        temp_v11 = 0x6b;
        buttonHelpSetPreset(temp_v11);
      }
    }
    else {
      temp_v4 = buttonHelpGetStatus();
      if (temp_v4 == 0x6b) {
        temp_v11 = 0xe1;
        buttonHelpSetPreset(temp_v11);
      }
    }
    temp_v6 = FUN_0029efa8(temp_v10);
    temp_v4 = temp_v10;
    uiScrollHandleActionsOrTouch(temp_v10,0,param_1 + 0x358e,0xffffffff,0xffffffff,0xffffffff,temp_v25,0,1);
    if ((temp_v4 == 0) && (temp_v4 = temp_v10, FUN_0029efd8(temp_v10,0), temp_v4 == 0)) {
      temp_v15 = 0;
      FUN_002c1658(0,1);
      temp_v10 = 0;
      temp_v4 = temp_v10;
      if (!(temp_v15 == 0 && temp_v25[0] == '\0')) {
        do {
          temp_v13 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v10 * 2 + 0x34);
          if ((temp_v13 != 0) && (contentEntryFlagTest(), temp_v13 != 0)) {
            temp_v4 = temp_v4 + 1;
          }
          temp_v10 = temp_v10 + 1;
        } while (temp_v10 < 8);
        if (temp_v4 <= *(int *)(param_1 + 0xd2c4)) {
          return;
        }
        temp_v5 = temp_v5 + temp_v6 * 2;
        temp_v13 = (unsigned int)*(unsigned short *)(temp_v5 + 0x34);
        contentEntryFlagTest();
        if (temp_v13 == 0) {
          return;
        }
        arrayContainsU16(temp_v8,*(unsigned int *)(param_1 + 0xd2c4),*(unsigned short *)(temp_v5 + 0x34));
        if (temp_v8 != 0) {
          return;
        }
        *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd134) =
             *(unsigned short *)(temp_v5 + 0x34);
        *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) + 1;
        arrayContainsU16(temp_v7,8,*(unsigned short *)(temp_v5 + 0x34));
        if (temp_v7 != 0) {
          spriteStartAnimationByIndex(param_1 + temp_v6 * 0x8c + 0xc28,5);
          temp_v4 = 0;
          do {
            temp_v6 = param_1 + temp_v4 * 2;
            if (*(short *)(temp_v6 + 0xd114) == *(short *)(temp_v5 + 0x34)) {
              spriteStartAnimationByIndex(param_1 + temp_v4 * 0x8c + 0x7c8,5);
              *(unsigned short *)(temp_v6 + 0xd124) = 1;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 8);
          *piVar9 = 10;
        }
        else {
          temp_v4 = FUN_0029efa8(temp_v9);
          buttonHelpShowSkillDetails(*(unsigned short *)(param_1 + temp_v4 * 2 + 0xd114));
          *piVar9 = *piVar9 + 1;
        }
        temp_v4 = FUN_0029aafc();
        temp_v5 = 0;
        if (temp_v5 < temp_v4) {
          do {
            if (*(short *)(param_1 + temp_v5 * 2 + 0xd114) == 0) {
              flaggedEntrySetValueA(temp_v9);
              buttonHelpShowSkillDetails(0);
              break;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v4);
        }
        temp_v11 = 0x100016d;
      }
      else {
        temp_v4 = 10;
        FUN_002c1658(10,1);
        if (temp_v4 != 0) {
LAB_001cf28c:
          eventQueueAddUniqueIfValid(0x100016e);
          messageMainFinishWindow();
          buttonHelpSetPreset(0x9a);
          *piVar25 = *piVar9;
          *piVar9 = 99;
          return;
        }
        temp_v4 = 9;
        FUN_002c1658(9,1);
        if (temp_v4 != 0) {
          return;
        }
        temp_v4 = 1;
        FUN_002c1658();
        if (temp_v4 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0xd2c4) - *(int *)(param_1 + 0xd2c8) < 1) {
          return;
        }
        *piVar27 = 0;
        *piVar9 = 5;
        temp_v11 = 0x100016e;
      }
      eventQueueAddUniqueIfValid(temp_v11);
      return;
    }
    temp_v4 = FUN_0029efa8(temp_v10);
    if (temp_v4 != temp_v6) {
      eventQueueAddUniqueIfValid(0x100016c);
    }
    temp_v4 = FUN_0029efa8(temp_v10);
    buttonHelpShowSkillDetails(*(unsigned short *)(temp_v5 + temp_v4 * 2 + 0x34));
    return;
  case 3:
    scrRunOpcodesStub(*puVar28);
    if (*(int *)(param_1 + 0xd2c4) - *(int *)(param_1 + 0xd2c8) >= 1) {
      temp_v4 = buttonHelpGetStatus();
      if (temp_v4 == 0xe1) {
        temp_v11 = 0x6b;
        buttonHelpSetPreset(temp_v11);
      }
    }
    else {
      temp_v4 = buttonHelpGetStatus();
      if (temp_v4 == 0x6b) {
        temp_v11 = 0xe1;
        buttonHelpSetPreset(temp_v11);
      }
    }
    temp_v6 = FUN_0029efa8(temp_v9);
    temp_v4 = temp_v9;
    uiScrollHandleActionsOrTouch(temp_v9,0,param_1 + 0x357e,0xffffffff,0xffffffff,0xffffffff,temp_v25,0,1);
    if ((temp_v4 != 0) || (temp_v4 = temp_v9, FUN_0029efd8(temp_v9,0), temp_v4 != 0)) {
      temp_v4 = FUN_0029efa8(temp_v9);
      if (temp_v4 != temp_v6) {
        eventQueueAddUniqueIfValid(0x100016c);
      }
      temp_v4 = FUN_0029efa8(temp_v9);
      buttonHelpShowSkillDetails(*(unsigned short *)(param_1 + temp_v4 * 2 + 0xd114));
    }
    else {
      temp_v4 = 0;
      FUN_002c1658(0,1);
      if (!(temp_v4 == 0 && temp_v25[0] == '\0')) {
        *piVar27 = 0;
        *piVar9 = *piVar9 + 1;
        temp_v11 = 0x100016d;
        eventQueueAddUniqueIfValid(temp_v11);
      }
      else {
        temp_v4 = 10;
        FUN_002c1658(10,1);
        if (temp_v4 != 0) goto LAB_001cf28c;
        temp_v4 = 9;
        FUN_002c1658(9,1);
        if (temp_v4 == 0) {
          temp_v4 = 1;
          FUN_002c1658();
          if (temp_v4 != 0) {
            temp_v4 = *(int *)(param_1 + 0xd2c4) - 1;
            *(int *)(param_1 + 0xd2c4) = temp_v4;
            *(unsigned short *)(param_1 + temp_v4 * 2 + 0xd134) = 0;
            *piVar9 = 2;
            temp_v11 = 0x100016e;
            eventQueueAddUniqueIfValid(temp_v11);
          }
        }
      }
    }
    temp_v4 = *piVar9;
    if (temp_v4 == 2) {
      temp_v4 = FUN_0029efa8(temp_v10);
      buttonHelpShowSkillDetails(*(unsigned short *)(temp_v5 + temp_v4 * 2 + 0x34));
      return;
    }
    break;
  case 4:
    temp_v4 = FUN_0029efa8(temp_v9);
    if (*piVar27 == 1) {
      temp_v15 = param_1 + temp_v4 * 2;
      if (*(short *)(temp_v15 + 0xd114) != 0) {
        temp_v18 = *(int *)(param_1 + 0xd2c4);
        temp_v3 = *(short *)(param_1 + temp_v18 * 2 + 0xd132);
        temp_v9 = 0;
        if (temp_v9 < temp_v18) {
          do {
            if (*(short *)(param_1 + temp_v9 * 2 + 0xd134) == *(short *)(temp_v15 + 0xd114)) {
              *(int *)(param_1 + 0xd2c4) = temp_v18 - 1;
              *(unsigned short *)(param_1 + temp_v9 * 2 + 0xd134) = 0;
              *(unsigned short *)(temp_v15 + 0xd124) = 0;
              temp_v9 = FUN_0026b738(*(unsigned short *)(temp_v15 + 0xd114));
              if (temp_v9 != 0) {
                temp_v9 = FUN_0029efa8(temp_v10);
                temp_v9 = FUN_0026b738(*(unsigned short *)(temp_v5 + temp_v9 * 2 + 0x34));
                if (temp_v9 == 0) {
                  *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) - 1;
                }
                else {
                  temp_v27 = 1;
                }
              }
              break;
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < temp_v18);
        }
        FUN_002b7bca(temp_v8,8,2,&LAB_002c6e64);
        *(short *)(temp_v15 + 0xd114) = temp_v3;
        *(unsigned short *)(temp_v15 + 0xd124) = 0;
        temp_v9 = FUN_0029aafc();
        if (temp_v27 != 0) {
          temp_v8 = 0;
          if (0 < temp_v9) {
LAB_001cf5dc:
            if (*(short *)(temp_v6 + temp_v8 * 2 + 0x34) != temp_v3) goto LAB_001cf638;
            temp_v3 = 1;
            *(short *)(temp_v15 + 0xd124) = temp_v3;
          }
        }
        else {
          temp_v8 = 0;
          if (temp_v8 < temp_v9) {
            do {
              if (*(short *)(temp_v6 + temp_v8 * 2 + 0x34) == temp_v3) {
                *(unsigned short *)(temp_v15 + 0xd124) = 1;
                *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) + 1;
                break;
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < temp_v9);
          }
        }
      }
      else {
        temp_v8 = 0;
        *(unsigned short *)(temp_v15 + 0xd114) =
             *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd132);
        *(unsigned short *)(temp_v15 + 0xd124) = 0;
        temp_v9 = FUN_0029aafc();
        if (0 < temp_v9) {
          do {
            if (*(short *)(temp_v6 + temp_v8 * 2 + 0x34) == *(short *)(temp_v15 + 0xd114)) {
              temp_v3 = *(short *)(temp_v15 + 0xd124) + 1;
              *(short *)(temp_v15 + 0xd124) = temp_v3;
              break;
            }
            temp_v8 = temp_v8 + 1;
            temp_v9 = FUN_0029aafc();
          } while (temp_v8 < temp_v9);
        }
      }
LAB_001cf6b0:
      spriteStartAnimationByIndex(param_1 + 0x6b0,6);
      spriteStartAnimationByIndex(param_1 + temp_v4 * 0x8c + 0x7c8,5);
    }
    if (*piVar27 >= 2) {
      if (*piVar27 >= 6) {
        FUN_002bf818(param_1 + temp_v4 * 0x8c + 0x7c8);
      }
      temp_v6 = FUN_002bf818(param_1 + 0x6b0);
      if ((temp_v6 != 0) && (param_1 = param_1 + temp_v4 * 0x8c, *(char *)(param_1 + 0x852) != '\0')) {
        spriteStartAnimationByIndex(param_1 + 0x7c8,0);
        FUN_002b7bca(temp_v7,8,2,&LAB_002c6e64);
        *piVar9 = 2;
        temp_v4 = FUN_0029efa8(temp_v10);
        buttonHelpShowSkillDetails(*(unsigned short *)(temp_v5 + temp_v4 * 2 + 0x34));
        return;
      }
    }
    temp_v4 = *piVar9;
    if (temp_v4 == 2) {
      temp_v4 = FUN_0029efa8(temp_v10);
      buttonHelpShowSkillDetails(*(unsigned short *)(temp_v5 + temp_v4 * 2 + 0x34));
      return;
    }
  }
  return;
LAB_001cf638:
  temp_v8 = temp_v8 + 1;
  if (temp_v9 <= temp_v8) goto LAB_001cf6b0;
  goto LAB_001cf5dc;
}

} /* extern "C" */
