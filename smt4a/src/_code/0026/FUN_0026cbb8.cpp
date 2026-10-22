/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026cbb8` (_code @ 0x26cbb8, 0x1c88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(...);
int FUN_001643b4(...);
int dialogOpen(...);
int FUN_00203b40(...);
int FUN_0020b490(...);
int FUN_00228b04(...);
int FUN_002685cc(void);
int infoWinSetText(...);
int FUN_00336de4(...);
int FUN_003450d4(...);
int obj04Finish(void);
int FUN_00359b6c(...);
int btlTalkBustUpSetUnk2F4(...);
int screenStartOrClear(...);
int whisperEffectStart(...);
int roundObjFinish(...);
int soundChannelRequestIfEnabled(...);
int soundChannelStopAll(...);
int gamePlayerClearPairedId(...);
int countUnlockedSlots(void);
int FUN_003e0174(...);
int engineGetFloatTableValue(...);
int SBORROW4(...);

int qsort(...);
int FUN_00163aa4(...);
int sysPlaySe(...);
int FUN_00183e58(void);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int FUN_0019de98(int, unsigned int);
int messageSetMode(int);
int scrRunOpcodesStub(...);
int FUN_0022e774(void);
int FUN_00267d74(int, int, int, int);
int scrScriptProcessStartEntry(...);
int FUN_002a4894(...);
int statusDownRestartTransition(void);
int flaggedEntrySetValueA(...);
int FUN_0032fea0(...);
int whisperEffectFinish(void);
int FUN_003df4a4(...);
int recordContainsPairedId(...);

/* stack frame of param_1: 17 slot(s), 63 byte(s) */
typedef struct {
    unsigned short sp32; /* 0x32: local_32 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned char LAB_00321c94; /* 0x321c94 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_001517b4. */
extern int infoWinHasValue(void);
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_001643b4. */
extern int ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: sysPlaySe. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00183e58. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: messageSetMode. */
extern int gameGetSlotRecord(int);
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0020b490. */
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_0022e774. */
extern int dialogIsActive(void);
extern int messageMainIsIdle(void);
/* Supplied declaration required: FUN_00267d74. */
/* Supplied declaration required: FUN_002685cc. */
extern int FUN_0026c3a0(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int recordGetModeForId(int);
/* Supplied declaration required: FUN_002a4894. */
/* Supplied declaration required: infoWinSetText. */
extern int messageGetChoiceResult(void);
/* Supplied declaration required: statusDownRestartTransition. */
extern int objectApplyIfUnblocked(unsigned int);
extern int FUN_002effbc(void);
extern int whisperEffectIsIdle(void);
extern int flaggedEntryGetValueA(void);
/* Supplied declaration required: flaggedEntrySetValueA. */
extern int btlTalkBustUpGetValue(void);
/* Supplied declaration required: FUN_0032fea0. */
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: FUN_003450d4. */
extern int uiSearchPrimary(unsigned int);
/* Supplied declaration required: obj04Finish. */
/* Supplied declaration required: FUN_00359b6c. */
extern int btlTalkBustupMatchesEntry(unsigned short);
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: whisperEffectFinish. */
/* Supplied declaration required: screenStartOrClear. */
/* Supplied declaration required: whisperEffectStart. */
/* Supplied declaration required: roundObjFinish. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003df4a4. */
/* Supplied declaration required: gamePlayerClearPairedId. */
/* Supplied declaration required: countUnlockedSlots. */
/* Supplied declaration required: FUN_003e0174. */
/* Supplied declaration required: engineGetFloatTableValue. */
/* Supplied declaration required: recordContainsPairedId. */
extern int getUnlockedSlotCount(int);


void FUN_0026cbb8(int param_1)

{
/* irregular: 15 goto(s); 43 native warning(s); review required */
  short *psVar1;
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3;
  short temp_v4;
  char *pcVar7;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned short *puVar13;
  unsigned int temp_v10;
  short *psVar15;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  int *piVar22;
  int temp_v17;
  unsigned int *puVar24;
  unsigned char *puVar25;
  short temp_v18;
  unsigned int *puVar27;
  unsigned int temp_v19;
  int temp_v20;
  unsigned char temp_v21;
  unsigned char temp_v22;
  unsigned int temp_v23;
  short *temp_v24;
  int temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  int temp_v28;
  int temp_v29;
  unsigned int temp_v30;
  char temp_v31 [12];
  int temp_v32;
  int temp_v33;
  int temp_v34;
  unsigned int temp_v35;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  pcVar7 = (char *)(param_1 + *(int *)(param_1 + 0x74c0) * 0x150 + 0x442c);
  temp_v5 = gameGetSlotRecord((int)*pcVar7);
  temp_v6 = gameGetPlayerData();
  FUN_00163aa4(param_1 + 0x73c);
  temp_v31[0] = '\0';
  temp_v9 = *(int *)(param_1 + 0x436c);
  temp_v23 = 0;
  temp_v34 = 0;
  temp_v27 = param_1 + 0x76a4;
  temp_v32 = param_1 + 0x7800;
  temp_v26 = param_1 + 0x7640;
  temp_v33 = param_1 + 0x7400;
  piVar22 = (int *)(param_1 + 0x7858);
  puVar27 = (unsigned int *)(param_1 + 0x7854);
  if (temp_v9 == 6) {
    if (*(int *)(param_1 + 0x437c) == 1) {
      temp_v14 = 0;
      temp_v22 = 0;
      *(unsigned int *)(param_1 + 0x7860) = 0;
      *(unsigned int *)(param_1 + 0x7864) = 0;
      temp_v9 = -1;
      temp_v30 = 0;
      do {
        if (*(short *)(param_1 + temp_v14 * 2 + 0x76a4) == *(short *)(param_1 + *puVar27 * 2 + 0x76c2)
           ) {
          temp_v11 = param_1 + temp_v14 * 2;
          temp_v29 = temp_v11 + 0x7600;
          temp_v20 = temp_v6 + temp_v14 * 2;
          temp_v7 = (unsigned int)*(unsigned short *)(temp_v11 + 0x76a4);
          temp_v30 = temp_v7;
          if (*(short *)(temp_v20 + 0x34) != 0) {
            *(unsigned short *)(temp_v11 + 0x76b4) = 0;
            temp_v1 = *(unsigned short *)(temp_v20 + 0x34);
            temp_v23 = (unsigned int)temp_v1;
            *(unsigned short *)(temp_v11 + 0x76a4) = temp_v1;
            *(unsigned char *)(param_1 + temp_v14 + 0x7860) = 1;
            temp_v9 = recordContainsPairedId(temp_v5,temp_v23);
            if (temp_v9 != 0) {
              if (*piVar22 < 0) {
                *(short *)(param_1 + *puVar27 * 2 + 0x76c2) = (short)temp_v23;
              }
              else {
                temp_v13 = *puVar27;
                if (0 < (int)temp_v13) {
                  temp_v10 = temp_v13 & 1;
                  if (temp_v10 == 1) {
                    temp_v9 = param_1 + temp_v13 * 2;
                    *(unsigned short *)(temp_v9 + 0x76c4) = *(unsigned short *)(temp_v9 + 0x76c2);
                  }
                  temp_v12 = (unsigned int)(temp_v10 == 1);
                  temp_v13 = *puVar27;
                  if ((int)temp_v10 < (int)temp_v13) {
                    do {
                      temp_v9 = temp_v12 + 1;
                      temp_v20 = param_1 + (temp_v13 - temp_v12) * 2;
                      temp_v10 = temp_v10 + 2;
                      *(unsigned short *)(temp_v20 + 0x76c4) = *(unsigned short *)(temp_v20 + 0x76c2);
                      temp_v12 = temp_v12 + 2;
                      temp_v9 = param_1 + (*puVar27 - temp_v9) * 2;
                      *(unsigned short *)(temp_v9 + 0x76c4) = *(unsigned short *)(temp_v9 + 0x76c2);
                      temp_v13 = *puVar27;
                    } while ((int)temp_v10 < (int)temp_v13);
                  }
                }
                temp_v10 = 8 - temp_v13;
                if (0 < (int)temp_v10) {
                  temp_v9 = 0;
                  if ((int)temp_v13 >= 8) {
                    temp_v12 = 0;
                  }
                  else {
                    temp_v12 = temp_v10 & 1;
                    if (temp_v12 == 1) {
                      temp_v9 = 1;
                      *(unsigned short *)(param_1 + temp_v13 * 2 + 0x76c4) = 0;
                    }
                  }
                  for (; (int)temp_v12 < (int)temp_v10; temp_v12 = temp_v12 + 2) {
                    temp_v20 = temp_v9 + 1;
                    *(unsigned short *)(param_1 + (temp_v13 + temp_v9) * 2 + 0x76c4) = 0;
                    temp_v9 = temp_v9 + 2;
                    *(unsigned short *)(param_1 + (temp_v13 + temp_v20) * 2 + 0x76c4) = 0;
                  }
                }
                *(short *)(param_1 + 0x76c4) = (short)temp_v23;
              }
              *(unsigned short *)(temp_v29 + 0xb4) = 1;
              temp_v9 = FUN_003df4a4(temp_v7);
              if (temp_v9 == 0) {
                *piVar22 = *piVar22 + 1;
              }
              temp_v22 = 1;
              temp_v9 = temp_v14;
            }
            else {
              temp_v20 = recordContainsPairedId(temp_v5,temp_v7);
              temp_v9 = temp_v14;
              if ((temp_v20 != 0) && (temp_v20 = FUN_003df4a4(temp_v7), temp_v9 = temp_v14, temp_v20 != 0)) {
                *piVar22 = *piVar22 - 1;
              }
              temp_v7 = *puVar27;
              temp_v22 = 1;
              *puVar27 = temp_v7 - 1;
              *(unsigned short *)(param_1 + (temp_v7 - 1) * 2 + 0x76c4) = 0;
            }
          }
          else {
            *(unsigned short *)(temp_v11 + 0x76a4) = 0;
            *(unsigned short *)(temp_v11 + 0x76b4) = 0;
            *(unsigned char *)(param_1 + temp_v14 + 0x7860) = 1;
          }
          break;
        }
        temp_v14 = temp_v14 + 1;
      } while (temp_v14 < 8);
      temp_v14 = 0;
      do {
        if (*(unsigned short *)(temp_v5 + temp_v14 * 2 + 0x34) == temp_v30) {
          flaggedEntrySetValueA(temp_v26);
          break;
        }
        temp_v14 = temp_v14 + 1;
      } while (temp_v14 < 8);
      if (!temp_v22) {
        temp_v7 = *puVar27;
        *puVar27 = temp_v7 - 1;
        *(unsigned short *)(param_1 + (temp_v7 - 1) * 2 + 0x76c4) = 0;
      }
      FUN_00267d74(param_1,temp_v5,temp_v6,temp_v9);
      *puVar27 = 0;
      *piVar22 = 0;
      temp_v6 = 0;
      do {
        temp_v9 = param_1 + temp_v6 * 2;
        if (*(short *)(temp_v9 + 0x76a4) != 0) {
          temp_v14 = FUN_003df4a4();
          if ((temp_v14 != 0) &&
             (temp_v14 = recordContainsPairedId(temp_v5,*(unsigned short *)(temp_v9 + 0x76a4)), temp_v14 != 0)) {
            *puVar27 = *puVar27 + 1;
            *piVar22 = *piVar22 + 1;
          }
          else {
            temp_v14 = FUN_003df4a4(*(unsigned short *)(temp_v9 + 0x76a4));
            if ((temp_v14 == 0) &&
               (temp_v9 = recordContainsPairedId(temp_v5,*(unsigned short *)(temp_v9 + 0x76a4)), temp_v9 != 0)) {
              *puVar27 = *puVar27 + 1;
            }
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 8);
    }
    temp_v5 = *(int *)(param_1 + 0x437c);
    if (temp_v5 != 6) {
      return;
    }
    *(unsigned int *)(param_1 + 0x436c) = 3;
    *(unsigned int *)(temp_v32 + 0x60) = 0;
    *(unsigned int *)(temp_v32 + 100) = 0;
    return;
  }
  if (temp_v9 >= 6) {
    if (temp_v9 == 99) {
      temp_v5 = messageMainIsIdle();
      if (temp_v5 == 0) {
        return;
      }
      messageSetMode(0);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x43ac),0xf);
      *(unsigned int *)(param_1 + 0x436c) = 100;
      return;
    }
    if (temp_v9 < 99) {
      if (temp_v9 != 10) {
        if (temp_v9 == 0x14) {
          temp_v5 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x43a0));
          if (temp_v5 != 2) {
            return;
          }
          *(unsigned int *)(param_1 + 0x436c) = 1;
          temp_v8 = 0xe3;
          sysPlaySe(temp_v8);
          return;
        }
        if (temp_v9 != 0x1e) {
          return;
        }
        if (*(int *)(param_1 + 0x437c) == 1) {
          *(unsigned int *)(param_1 + 0x7860) = 0;
          *(unsigned int *)(param_1 + 0x7864) = 0;
          temp_v9 = FUN_002a4894(temp_v26);
          temp_v26 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v9 * 2 + 0x34);
          temp_v14 = 0;
          temp_v9 = 0;
          temp_v23 = 0;
          do {
            puVar13 = (unsigned short *)(temp_v27 + temp_v9 * 2);
            if (*puVar13 == temp_v26) goto LAB_0026e174;
            if (puVar13[1] == temp_v26) {
              temp_v9 = temp_v9 + 1;
              goto LAB_0026e174;
            }
            temp_v9 = temp_v9 + 2;
          } while (temp_v9 < 8);
          temp_v9 = -1;
LAB_0026e174:
          temp_v4 = *(short *)(temp_v6 + temp_v9 * 2 + 0x34);
          if ((temp_v4 != 0) && (temp_v20 = temp_v27, FUN_0032fea0(temp_v27,8,temp_v4), temp_v20 != 0)) {
            temp_v20 = 0;
            do {
              psVar15 = (short *)(temp_v27 + temp_v20 * 2);
              if (*psVar15 == temp_v4) goto LAB_0026e1e4;
              if (psVar15[1] == temp_v4) {
                temp_v20 = temp_v20 + 1;
                goto LAB_0026e1e4;
              }
              temp_v20 = temp_v20 + 2;
            } while (temp_v20 < 8);
            temp_v20 = -1;
LAB_0026e1e4:
            temp_v11 = param_1 + temp_v20 * 2;
            temp_v25 = temp_v11 + 0x7600;
            temp_v6 = temp_v6 + temp_v20 * 2;
            *(unsigned short *)(temp_v11 + 0x76b4) = 0;
            *(unsigned short *)(temp_v11 + 0x76a4) = *(unsigned short *)(temp_v6 + 0x34);
            *(unsigned char *)(temp_v20 + param_1 + 0x7860) = 1;
            temp_v20 = 0;
            do {
              if (*(short *)(param_1 + temp_v20 * 2 + 0x76c4) == temp_v4) {
                *(unsigned short *)(param_1 + temp_v20 * 2 + 0x76c4) = 0;
                break;
              }
              temp_v20 = temp_v20 + 1;
            } while (temp_v20 < 8);
            temp_v20 = recordContainsPairedId(temp_v5,*(unsigned short *)(temp_v6 + 0x34));
            temp_v18 = 0;
            if (temp_v20 != 0) {
              temp_v18 = *(short *)(temp_v6 + 0x34);
            }
            if (temp_v20 != 0 && temp_v18 != 0) {
              temp_v14 = 1;
              *(unsigned short *)(temp_v25 + 0xb4) = 1;
              temp_v23 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v23 + 2)),*(unsigned short *)(temp_v6 + 0x34));
            }
          }
          temp_v6 = param_1 + temp_v9 * 2;
          temp_v20 = temp_v6 + 0x7600;
          puVar25 = (unsigned char *)(param_1 + temp_v9 + 0x7860);
          *(unsigned short *)(temp_v6 + 0x76b4) = 0;
          *(short *)(temp_v6 + 0x76a4) = temp_v4;
          *puVar25 = 1;
          *puVar27 = *puVar27 - 1;
          temp_v6 = 0;
          do {
            if (*(unsigned short *)(param_1 + temp_v6 * 2 + 0x76c4) == temp_v26) {
              *(unsigned short *)(param_1 + temp_v6 * 2 + 0x76c4) = 0;
              break;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 8);
          temp_v6 = recordContainsPairedId(temp_v5,temp_v4);
          if (temp_v6 != 0 && temp_v4 != 0) {
            temp_v6 = temp_v14 * 2;
            temp_v14 = temp_v14 + 1;
            *(unsigned short *)(temp_v20 + 0xb4) = 1;
            *puVar25 = 1;
            *(short *)((int)&temp_v23 + temp_v6) = temp_v4;
          }
          temp_v34 = *(unsigned int *)(temp_v33 + 0x2c4);
          uStack_34 = *(unsigned int *)(temp_v33 + 0x2d0);
          temp_v6 = 0;
          temp_v8 = temp_v34;
          temp_v35 = *(unsigned int *)(temp_v33 + 0x2c8);
          uStack_38 = *(unsigned int *)(temp_v33 + 0x2cc);
          temp_v16 = uStack_34;
          *(unsigned int *)(temp_v33 + 0x2c4) = 0;
          *(unsigned int *)(temp_v33 + 0x2c8) = 0;
          *(unsigned int *)(temp_v33 + 0x2cc) = 0;
          *(unsigned int *)(temp_v33 + 0x2d0) = 0;
          temp_v9 = 0;
          if (temp_v9 < temp_v14) {
            do {
              temp_v4 = *(short *)((int)&temp_v23 + temp_v9 * 2);
              if (temp_v4 == 0) break;
              temp_v20 = temp_v6 * 2;
              temp_v9 = temp_v9 + 1;
              temp_v6 = temp_v6 + 1;
              *(short *)(param_1 + temp_v20 + 0x76c4) = temp_v4;
            } while (temp_v9 < temp_v14);
          }
          if ((short)temp_v34 != 0) {
            temp_v9 = temp_v6 * 2;
            temp_v6 = temp_v6 + 1;
            *(short *)(param_1 + temp_v9 + 0x76c4) = (short)temp_v34;
          }
          temp_v9 = 3;
          (*(unsigned short *)((unsigned char *)&temp_v34 + 2)) = (short)((unsigned int)temp_v34 >> 0x10);
          psVar15 = (short *)&temp_v34;
          do {
            temp_v4 = psVar15[2];
            if ((*(unsigned short *)((unsigned char *)&temp_v34 + 2)) != 0) {
              temp_v14 = temp_v6 * 2;
              temp_v6 = temp_v6 + 1;
              *(short *)(param_1 + temp_v14 + 0x76c4) = (*(unsigned short *)((unsigned char *)&temp_v34 + 2));
            }
            (*(unsigned short *)((unsigned char *)&temp_v34 + 2)) = psVar15[3];
            if (temp_v4 != 0) {
              temp_v14 = temp_v6 * 2;
              temp_v6 = temp_v6 + 1;
              *(short *)(param_1 + temp_v14 + 0x76c4) = temp_v4;
            }
            temp_v9 = temp_v9 - 1;
            psVar15 = psVar15 + 2;
          } while (temp_v9 != 0);
          (*(unsigned short *)((unsigned char *)&uStack_34 + 2)) = (short)((unsigned int)uStack_34 >> 0x10);
          if ((*(unsigned short *)((unsigned char *)&uStack_34 + 2)) != 0) {
            *(short *)(param_1 + temp_v6 * 2 + 0x76c4) = (*(unsigned short *)((unsigned char *)&uStack_34 + 2));
          }
          *puVar27 = 0;
          temp_v6 = 0;
          *piVar22 = 0;
          temp_v34 = temp_v8;
          uStack_34 = temp_v16;
          do {
            temp_v9 = param_1 + temp_v6 * 2;
            if (*(short *)(temp_v9 + 0x76a4) != 0) {
              temp_v14 = FUN_003df4a4();
              if ((temp_v14 != 0) &&
                 (temp_v14 = recordContainsPairedId(temp_v5,*(unsigned short *)(temp_v9 + 0x76a4)), temp_v14 != 0)) {
                *puVar27 = *puVar27 + 1;
                *piVar22 = *piVar22 + 1;
              }
              else {
                temp_v14 = FUN_003df4a4(*(unsigned short *)(temp_v9 + 0x76a4));
                if ((temp_v14 == 0) &&
                   (temp_v9 = recordContainsPairedId(temp_v5,*(unsigned short *)(temp_v9 + 0x76a4)), temp_v9 != 0)) {
                  *puVar27 = *puVar27 + 1;
                }
              }
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 8);
        }
        temp_v5 = *(int *)(param_1 + 0x437c);
        if (temp_v5 != 6) {
          return;
        }
        *(unsigned int *)(param_1 + 0x436c) = 3;
        *(unsigned int *)(temp_v32 + 0x60) = 0;
        *(unsigned int *)(temp_v32 + 100) = 0;
        return;
      }
      temp_v22 = 1;
      temp_v5 = 0;
      do {
        temp_v14 = param_1 + temp_v5 * 0x8c;
        temp_v9 = FUN_00163aa4(temp_v14 + 0x8e0);
        if (temp_v9 == 0) {
          temp_v22 = 0;
        }
        temp_v9 = FUN_00163aa4(temp_v14 + 0xd40);
        if (temp_v9 == 0) {
          temp_v22 = 0;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 8);
      temp_v5 = infoWinHasValue();
      if ((temp_v5 == 0) && (temp_v5 = dialogIsActive(), temp_v5 == 0)) {
        if (!temp_v22) {
          return;
        }
        temp_v5 = 0;
        do {
          uiSpriteSelectAnim(param_1 + temp_v5 * 0x8c + 0x8e0,0);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x10);
        *(unsigned int *)(param_1 + 0x436c) = 3;
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x43ac),0xe);
        return;
      }
      goto LAB_0026e038;
    }
    if (temp_v9 == 100) {
      temp_v5 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x43ac));
      if (temp_v5 != 2) {
        return;
      }
      temp_v5 = messageGetChoiceResult();
      if (temp_v5 != 0) {
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x43ac),0xe);
        if ((int)(*puVar27 - *piVar22) < 1) {
          temp_v8 = 0xe3;
        }
        else {
          temp_v8 = 0x6d;
        }
        sysPlaySe(temp_v8);
        *(unsigned int *)(param_1 + 0x436c) = *(unsigned int *)(param_1 + 0x4370);
      }
      else {
        FUN_0019de98(0,0xf4f4f4ff);
        uiSpriteSetKeyframe(param_1 + 0xac,1,0);
        *(unsigned int *)(param_1 + 0x436c) = 0x65;
        if (*(int *)(param_1 + 0x4370) == 4) {
          *(unsigned short *)(param_1 + *puVar27 * 2 + 0x76c4) = 0;
          *puVar27 = *puVar27 - 1;
        }
        qsort(temp_v27,8,2,&LAB_00321c94);
        whisperEffectFinish();
        FUN_00183e58();
      }
      messageSetMode(1);
      return;
    }
    if (temp_v9 != 0x65) {
      return;
    }
    temp_v5 = messageMainIsIdle();
    if (temp_v5 == 0) {
      return;
    }
    temp_v5 = FUN_00163aa4(param_1 + 0xac);
    if (temp_v5 == 0) {
      return;
    }
    temp_v5 = whisperEffectIsIdle();
    if (temp_v5 == 0) {
      return;
    }
    goto LAB_0026e044;
  }
  temp_v29 = param_1 + 0x76c4;
  temp_v30 = param_1 + 0x75dc;
  switch(temp_v9) {
  case 0:
    temp_v9 = FUN_0026c3a0();
    if (temp_v9 == 0) {
      FUN_0022e774();
    }
    statusDownRestartTransition();
    temp_v9 = gameFlagIsSet(0x406);
    if (temp_v9 == 0) {
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x43a0),3);
      *(unsigned int *)(param_1 + 0x436c) = 0x14;
      temp_v8 = 0xa0;
      sysPlaySe(temp_v8);
      return;
    }
  case 1:
    *(unsigned char *)(temp_v5 + 0x67) = 1;
    uiSpriteSetKeyframe(param_1 + 0xac,4,0);
    temp_v8 = *(unsigned int *)(temp_v6 + 0x38);
    temp_v16 = *(unsigned int *)(temp_v6 + 0x3c);
    temp_v19 = *(unsigned int *)(temp_v6 + 0x40);
    *(unsigned int *)(temp_v33 + 0x2a4) = *(unsigned int *)(temp_v6 + 0x34);
    *(unsigned int *)(temp_v33 + 0x2a8) = temp_v8;
    *(unsigned int *)(temp_v33 + 0x2ac) = temp_v16;
    *(unsigned int *)(temp_v33 + 0x2b0) = temp_v19;
    *(unsigned int *)(temp_v33 + 0x2c4) = 0;
    *(unsigned int *)(temp_v33 + 0x2c8) = 0;
    *(unsigned int *)(temp_v33 + 0x2cc) = 0;
    *(unsigned int *)(temp_v33 + 0x2d0) = 0;
    *(unsigned int *)(temp_v33 + 0x2b4) = 0;
    *(unsigned int *)(temp_v33 + 0x2b8) = 0;
    *(unsigned int *)(temp_v33 + 700) = 0;
    *(unsigned int *)(temp_v33 + 0x2c0) = 0;
    *puVar27 = 0;
    *piVar22 = 0;
    *(unsigned int *)(param_1 + 0x436c) = 2;
    whisperEffectStart(*(unsigned short *)(temp_v5 + 0x62));
    break;
  case 2:
    if (*(char *)(param_1 + 0x7f50) != '\0') {
      engineGetFloatTableValue(param_1 + 0x7f40,0);
    }
    temp_v9 = FUN_00163aa4(param_1 + 0xac);
    if (temp_v9 == 0) {
      return;
    }
    temp_v9 = FUN_002effbc();
    if (temp_v9 == 0) {
      return;
    }
    temp_v9 = btlTalkBustUpGetValue();
    if (temp_v9 == 0) {
      temp_v9 = btlTalkBustupMatchesEntry(*(unsigned short *)(temp_v5 + 0x62));
      if (temp_v9 == 0) {
        FUN_00336de4(*(unsigned short *)(temp_v5 + 0x62),1);
      }
      btlTalkBustUpSetUnk2F4(1);
    }
    temp_v9 = 0;
    temp_v28 = 0;
    do {
      temp_v14 = temp_v5 + temp_v9 * 2;
      if (*(short *)(temp_v14 + 0x34) != 0) {
        temp_v20 = temp_v29;
        FUN_0032fea0(temp_v29,8);
        if ((temp_v20 == 0) &&
           (temp_v20 = temp_v27, FUN_0032fea0(temp_v27,8,*(unsigned short *)(temp_v14 + 0x34)), temp_v20 != 0)
           ) {
          *(unsigned short *)(param_1 + *puVar27 * 2 + 0x76c4) = *(unsigned short *)(temp_v14 + 0x34);
          *puVar27 = *puVar27 + 1;
          *piVar22 = *piVar22 + 1;
        }
        temp_v28 = temp_v28 + 1;
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 8);
    temp_v8 = countUnlockedSlots();
    FUN_00203b40(temp_v30,temp_v8,temp_v8,1,1,1);
    FUN_00203b40(temp_v26,temp_v28 + 1,9,1,1,1);
    temp_v9 = FUN_002a4894(temp_v26);
    FUN_00359b6c(*(unsigned short *)(temp_v5 + temp_v9 * 2 + 0x34));
    temp_v14 = 0;
    temp_v9 = objectApplyIfUnblocked(temp_v30);
    if (0 < temp_v9) {
      do {
        temp_v3 = FUN_001643b4(0x1d,temp_v14 + 0xe4);
        temp_v9 = temp_v14 * 2;
        temp_v14 = temp_v14 + 1;
        *(unsigned short *)(param_1 + temp_v9 + 0x43b6) = temp_v3;
        *(short *)(param_1 + 0x43b4) = *(short *)(param_1 + 0x43b4) + 1;
        temp_v9 = objectApplyIfUnblocked(temp_v30);
      } while (temp_v14 < temp_v9);
    }
    temp_v18 = 0;
    temp_v14 = 0;
    temp_v9 = objectApplyIfUnblocked(temp_v26);
    temp_v4 = 0;
    if (0 < temp_v9 - 1) {
      do {
        temp_v3 = FUN_001643b4(0x1d,temp_v14 + 0xec);
        temp_v18 = temp_v4 + 1;
        *(unsigned short *)(param_1 + temp_v14 * 2 + 0x43c6) = temp_v3;
        temp_v14 = temp_v14 + 1;
        *(short *)(param_1 + 0x43b4) = *(short *)(param_1 + 0x43b4) + 1;
        temp_v9 = objectApplyIfUnblocked(temp_v26);
        temp_v4 = temp_v18;
      } while (temp_v14 < temp_v9 - 1);
    }
    *(short *)(temp_v32 + 0x68) = temp_v18 + 8;
    temp_v3 = FUN_001643b4(0x1d,0x168);
    *(unsigned short *)(param_1 + *(short *)(temp_v32 + 0x68) * 2 + 0x43b6) = temp_v3;
    *(short *)(param_1 + 0x43b4) = *(short *)(param_1 + 0x43b4) + 1;
    if ((int)*puVar27 < 1) {
      *(unsigned int *)(param_1 + 0x436c) = 3;
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x43ac),0xe);
      return;
    }
    temp_v9 = 0;
    do {
      temp_v14 = param_1 + temp_v9 * 2;
      temp_v20 = 0;
      do {
        temp_v11 = param_1 + temp_v20 * 2;
        if (*(short *)(temp_v11 + 0x76a4) == *(short *)(temp_v14 + 0x76c4)) {
          uiSpriteSelectAnim(param_1 + temp_v20 * 0x8c + 0x8e0,6);
          *(short *)(temp_v11 + 0x76b4) = *(short *)(temp_v11 + 0x76b4) + 1;
        }
        temp_v20 = temp_v20 + 1;
      } while (temp_v20 < 8);
      temp_v20 = 0;
      do {
        if (*(short *)(temp_v5 + temp_v20 * 2 + 0x34) == *(short *)(temp_v14 + 0x76c4)) {
          uiSpriteSelectAnim(param_1 + temp_v20 * 0x8c + 0xd40,6);
        }
        temp_v20 = temp_v20 + 1;
      } while (temp_v20 < 8);
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < (int)*puVar27);
    *(unsigned int *)(param_1 + 0x436c) = 10;
    infoWinSetText(*(unsigned int *)(param_1 + 0x43a4),0xca);
    dialogOpen(1);
  default:
LAB_0026e038:
    if (temp_v23 != 0) {
LAB_0026e044:
      temp_v26 = 0;
      if (0 < (int)*puVar27) {
        temp_v24 = (short *)(param_1 + 0x76c2);
        do {
          temp_v7 = countUnlockedSlots();
          temp_v5 = param_1 + temp_v26 * 2;
          temp_v9 = FUN_003df4a4(*(unsigned short *)(temp_v5 + 0x76c4));
          if (temp_v9 == 0) {
            temp_v9 = 0;
            if ((int)temp_v7 < 1) {
              temp_v13 = 0;
            }
            else {
              temp_v13 = temp_v7 & 1;
              if (temp_v13 != 0) {
                do {
                  if (*(short *)(param_1 + temp_v9 * 2 + 0x76a4) == *(short *)(temp_v5 + 0x76c4))
                  goto LAB_0026e66c;
                  temp_v9 = temp_v9 + 1;
                } while (temp_v9 < (int)temp_v13);
              }
            }
            if ((int)temp_v13 < (int)temp_v7) {
              temp_v10 = (unsigned int)*(unsigned short *)(temp_v5 + 0x76c4);
              do {
                temp_v14 = param_1 + temp_v13 * 2;
                temp_v12 = (unsigned int)*(unsigned short *)(temp_v14 + 0x76a4);
                temp_v9 = temp_v12 - temp_v10;
                temp_v22 = temp_v12 != temp_v10;
                temp_v2 = temp_v14 + 0x7600;
                if (temp_v22) {
                  temp_v12 = (unsigned int)*(unsigned short *)(temp_v14 + 0x76a6);
                  temp_v9 = temp_v12 - temp_v10;
                  temp_v2 = temp_v12;
                }
                temp_v21 = SBORROW4(temp_v12,temp_v10);
                if (temp_v22 && temp_v2 != temp_v10) {
                  temp_v13 = temp_v13 + 2;
                  temp_v21 = SBORROW4(temp_v7,temp_v13);
                  temp_v9 = temp_v7 - temp_v13;
                }
              } while (((temp_v22 && temp_v2 != temp_v10) && temp_v7 != temp_v13) && temp_v9 < 0 == temp_v21);
            }
          }
LAB_0026e66c:
          temp_v9 = 0;
          if (0 < (int)temp_v7) {
            do {
              temp_v4 = *(short *)(temp_v6 + temp_v9 * 2 + 0x34);
              temp_v22 = 1;
              if (temp_v4 != *(short *)(temp_v5 + 0x76c4) && temp_v4 != 0) {
                temp_v13 = *puVar27;
                temp_v22 = 0;
                if (0 < (int)temp_v13) {
                  psVar15 = temp_v24;
                  if (((temp_v13 & 1) != 0) && (psVar15 = temp_v24 + 1, temp_v4 == *psVar15)) {
                    temp_v22 = 1;
                  }
                  for (temp_v14 = (int)temp_v13 >> 1; temp_v14 != 0; temp_v14 = temp_v14 - 1) {
                    psVar1 = psVar15 + 1;
                    psVar15 = psVar15 + 2;
                    if (temp_v4 == *psVar1) {
                      temp_v22 = 1;
                    }
                    if (temp_v4 == *psVar15) {
                      temp_v22 = 1;
                    }
                  }
                }
              }
              temp_v14 = temp_v27;
              FUN_0032fea0(temp_v27,temp_v7);
              if (temp_v14 == 0 && !temp_v22) {
                gamePlayerClearPairedId(*(unsigned short *)(temp_v6 + temp_v9 * 2 + 0x34));
                break;
              }
              temp_v9 = temp_v9 + 1;
            } while (temp_v9 < (int)temp_v7);
          }
          FUN_003e0174(*(unsigned short *)(temp_v5 + 0x76c4));
          temp_v26 = temp_v26 + 1;
        } while ((int)temp_v26 < (int)*puVar27);
      }
      temp_v5 = 0;
      do {
        temp_v9 = temp_v5 + 1;
        if (temp_v9 < 8) {
          do {
            if (*(short *)(param_1 + temp_v5 * 2 + 0x76a4) == *(short *)(temp_v6 + temp_v9 * 2 + 0x34)) {
              temp_v20 = temp_v6 + temp_v9 * 2;
              temp_v14 = temp_v6 + temp_v5 * 2;
              temp_v3 = *(unsigned short *)(temp_v14 + 0x34);
              *(unsigned short *)(temp_v14 + 0x34) = *(unsigned short *)(temp_v20 + 0x34);
              *(unsigned short *)(temp_v20 + 0x34) = temp_v3;
              temp_v0 = *(unsigned char *)(temp_v6 + temp_v5 + 0x44);
              *(unsigned char *)(temp_v6 + temp_v5 + 0x44) = *(unsigned char *)(temp_v6 + temp_v9 + 0x44);
              *(unsigned char *)(temp_v6 + temp_v9 + 0x44) = temp_v0;
              break;
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 8);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 7);
      if (*(int *)(pcVar7 + 0x148) != 1) {
        FUN_0020b490(param_1,0xd);
      }
      else if (pcVar7[0x14e] != '\0') {
        FUN_0020b490(param_1,0x11);
      }
      else {
        roundObjFinish(param_1);
      }
      if (*(int *)(param_1 + 0x4364) != 0x17) {
        soundChannelStopAll(0);
        soundChannelRequestIfEnabled(0x1000078,0,0x3c);
        return;
      }
    }
    break;
  case 3:
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x43ac));
    if ((int)(*puVar27 - *piVar22) >= 1) {
      temp_v9 = ifTouchGetButtonHelpValue();
      if (temp_v9 == 0xe3) {
        temp_v8 = 0x6d;
        sysPlaySe(temp_v8);
      }
    }
    else {
      temp_v9 = ifTouchGetButtonHelpValue();
      if (temp_v9 == 0x6d) {
        temp_v8 = 0xe3;
        sysPlaySe(temp_v8);
      }
    }
    temp_v28 = FUN_002a4894(temp_v26);
    temp_v23 = 1;
    temp_v7 = temp_v26;
    FUN_003450d4(temp_v26,0,param_1 + 0x43c6,0xffffffff,0xffffffff,0xffffffff,temp_v31,0);
    if ((temp_v7 != 0) || (temp_v7 = temp_v26, FUN_00228b04(temp_v26,0), temp_v7 != 0)) {
      temp_v6 = FUN_002a4894(temp_v26);
      if (temp_v6 != temp_v28) {
        eventQueueAddUniqueIfValid(0x100020d);
      }
      temp_v6 = recordGetModeForId((int)*(short *)(param_1 + *(short *)(temp_v32 + 0x68) * 2 + 0x43b6));
      if (temp_v6 != 0) {
        temp_v6 = uiSearchPrimary(temp_v26);
        flaggedEntrySetValueA(temp_v26,temp_v6 - 1);
      }
      temp_v6 = FUN_002a4894(temp_v26);
      temp_v9 = objectApplyIfUnblocked(temp_v26);
      if (temp_v9 - 1 <= temp_v6) {
        screenStartOrClear(*(unsigned int *)(param_1 + 0x43a4),700);
        return;
      }
      temp_v6 = FUN_002a4894(temp_v26);
      FUN_00359b6c(*(unsigned short *)(temp_v5 + temp_v6 * 2 + 0x34));
      return;
    }
    temp_v9 = 0;
    FUN_001517b4(0,1);
    if (temp_v9 == 0 && temp_v31[0] == '\0') {
      temp_v5 = 1;
      FUN_001517b4();
      if (temp_v5 == 0) {
        return;
      }
      if ((int)(*puVar27 - *piVar22) < 1) {
        return;
      }
      *(unsigned int *)(param_1 + 0x436c) = 6;
      *(unsigned int *)(param_1 + 0x437c) = 0;
      eventQueueAddUniqueIfValid(0x100020f);
      return;
    }
    temp_v9 = 0;
    do {
      if (*(short *)(temp_v5 + temp_v9 * 2 + 0x34) != 0) {
        FUN_002685cc();
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 8);
    temp_v9 = objectApplyIfUnblocked(temp_v26);
    if (temp_v9 - 1 <= temp_v28) {
      eventQueueAddUniqueIfValid(0x100020e);
      obj04Finish();
      sysPlaySe(0x9c);
      temp_v8 = *(unsigned int *)(param_1 + 0x436c);
      *(unsigned int *)(param_1 + 0x436c) = 99;
      *(unsigned int *)(param_1 + 0x4370) = temp_v8;
      return;
    }
    temp_v9 = temp_v5 + temp_v28 * 2;
    temp_v7 = (unsigned int)*(unsigned short *)(temp_v9 + 0x34);
    FUN_002685cc();
    if ((temp_v7 == 0) ||
       (temp_v14 = temp_v29, FUN_0032fea0(temp_v29,*puVar27,*(unsigned short *)(temp_v9 + 0x34)),
       temp_v14 != 0)) {
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v9 + 0x34);
      FUN_002685cc();
      if (temp_v7 != 0) {
        temp_v5 = temp_v29;
        FUN_0032fea0(temp_v29,*puVar27,*(unsigned short *)(temp_v9 + 0x34));
        if (temp_v5 == 0) {
          eventQueueAddUniqueIfValid(0x100020f);
          return;
        }
        eventQueueAddUniqueIfValid(0x100020f);
        temp_v4 = *(short *)(temp_v9 + 0x34);
        temp_v5 = 0;
        do {
          psVar15 = (short *)(temp_v27 + temp_v5 * 2);
          if (*psVar15 == temp_v4) goto LAB_0026d594;
          if (psVar15[1] == temp_v4) {
            temp_v5 = temp_v5 + 1;
            goto LAB_0026d594;
          }
          temp_v5 = temp_v5 + 2;
        } while (temp_v5 < 8);
        temp_v5 = -1;
LAB_0026d594:
        if (*(short *)(param_1 + temp_v5 * 2 + 0x76b4) != 0) {
          temp_v9 = 0;
          do {
            psVar15 = (short *)(temp_v6 + 0x34 + temp_v9 * 2);
            if (*psVar15 == temp_v4) goto LAB_0026d5fc;
            if (psVar15[1] == temp_v4) {
              temp_v9 = temp_v9 + 1;
              goto LAB_0026d5fc;
            }
            temp_v9 = temp_v9 + 2;
          } while (temp_v9 < 8);
          temp_v9 = -1;
LAB_0026d5fc:
          if (temp_v9 == temp_v5) {
            return;
          }
        }
        *(unsigned int *)(param_1 + 0x436c) = 0x1e;
        *(unsigned int *)(param_1 + 0x437c) = 0;
        return;
      }
    }
    else {
      *(unsigned short *)(param_1 + *puVar27 * 2 + 0x76c4) = *(unsigned short *)(temp_v9 + 0x34);
      *puVar27 = *puVar27 + 1;
      temp_v14 = countUnlockedSlots();
      temp_v22 = 0;
      temp_v6 = -1;
      temp_v20 = 0;
      if (temp_v14 >= 1) {
        do {
          if (*(short *)(param_1 + temp_v20 * 2 + 0x76a4) == 0) {
            flaggedEntrySetValueA(param_1 + 0x75dc,temp_v20);
            FUN_00359b6c(0);
            goto LAB_0026d4c4;
          }
          if ((!temp_v22) && (temp_v11 = recordContainsPairedId(temp_v5), temp_v11 == 0)) {
            temp_v22 = 1;
            temp_v6 = temp_v20;
          }
          temp_v20 = temp_v20 + 1;
        } while (temp_v20 < temp_v14);
        if (temp_v6 < 0) {
          flaggedEntrySetValueA(param_1 + 0x75dc,0);
        }
        else {
          flaggedEntrySetValueA(param_1 + 0x75dc,temp_v6);
        }
      }
      else {
        flaggedEntrySetValueA(param_1 + 0x75dc,0);
      }
LAB_0026d4c4:
      temp_v5 = temp_v27;
      FUN_0032fea0(temp_v27,8,*(unsigned short *)(temp_v9 + 0x34));
      if (temp_v5 != 0) {
        uiSpriteSelectAnim(param_1 + temp_v28 * 0x8c + 0xd40,6);
        temp_v5 = 0;
        do {
          temp_v6 = param_1 + temp_v5 * 2;
          if (*(short *)(temp_v6 + 0x76a4) == *(short *)(temp_v9 + 0x34)) {
            uiSpriteSelectAnim(param_1 + temp_v5 * 0x8c + 0x8e0,6);
            *(unsigned short *)(temp_v6 + 0x76b4) = 1;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 8);
        temp_v8 = 10;
      }
      else {
        temp_v5 = FUN_002a4894(temp_v30);
        FUN_00359b6c(*(unsigned short *)(param_1 + temp_v5 * 2 + 0x76a4));
        temp_v8 = 4;
      }
      *(unsigned int *)(param_1 + 0x436c) = temp_v8;
    }
    eventQueueAddUniqueIfValid();
    return;
  case 4:
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x43ac));
    if ((int)(*puVar27 - *piVar22) >= 1) {
      temp_v6 = ifTouchGetButtonHelpValue();
      if (temp_v6 == 0xe3) {
        temp_v8 = 0x6d;
        sysPlaySe(temp_v8);
      }
    }
    else {
      temp_v6 = ifTouchGetButtonHelpValue();
      if (temp_v6 == 0x6d) {
        temp_v8 = 0xe3;
        sysPlaySe(temp_v8);
      }
    }
    temp_v6 = FUN_002a4894(temp_v30);
    temp_v23 = 1;
    temp_v7 = temp_v30;
    FUN_003450d4(temp_v30,0,param_1 + 0x43b6,0xffffffff,0xffffffff,0xffffffff,temp_v31,0);
    if ((temp_v7 != 0) || (temp_v7 = temp_v30, FUN_00228b04(temp_v30,0), temp_v7 != 0)) {
      temp_v9 = FUN_002a4894(temp_v30);
      if (temp_v9 != temp_v6) {
        eventQueueAddUniqueIfValid(0x100020d);
      }
      FUN_002a4894(temp_v30);
      temp_v6 = FUN_002a4894(temp_v30);
      FUN_00359b6c(*(unsigned short *)(param_1 + temp_v6 * 2 + 0x76a4));
    }
    else {
      temp_v6 = 0;
      FUN_001517b4(0,1);
      temp_v7 = temp_v26;
      if (!(temp_v6 == 0 && temp_v31[0] == '\0')) {
        *(unsigned int *)(param_1 + 0x436c) = 5;
        *(unsigned int *)(param_1 + 0x437c) = 0;
        temp_v13 = temp_v26;
        temp_v29 = param_1;
        temp_v6 = flaggedEntryGetValueA();
        temp_v9 = temp_v6 + 1;
        temp_v14 = objectApplyIfUnblocked(temp_v7);
        if (temp_v14 - 2 <= temp_v6) {
          temp_v9 = 0;
        }
        temp_v6 = temp_v9;
        temp_v14 = getUnlockedSlotCount(temp_v5);
        if (temp_v9 < temp_v14) {
          puVar24 = (unsigned int *)(temp_v29 + 0x7854);
          temp_v11 = temp_v29 + 0x76c4;
          temp_v20 = temp_v9;
          do {
            temp_v17 = temp_v5 + temp_v20 * 2;
            temp_v15 = temp_v11;
            FUN_0032fea0(temp_v11,*puVar24,*(unsigned short *)(temp_v17 + 0x34));
            if (temp_v15 == 0) {
              temp_v7 = (unsigned int)*(unsigned short *)(temp_v17 + 0x34);
              FUN_002685cc();
              if (temp_v7 != 0) {
                flaggedEntrySetValueA(temp_v13,temp_v20);
                temp_v6 = temp_v20;
                break;
              }
            }
            temp_v20 = temp_v20 + 1;
          } while (temp_v20 < temp_v14);
        }
        temp_v20 = 0;
        temp_v14 = temp_v6;
        if (0 < temp_v9) {
          puVar24 = (unsigned int *)(temp_v29 + 0x7854);
          temp_v11 = temp_v29 + 0x76c4;
          do {
            temp_v15 = temp_v5 + temp_v20 * 2;
            temp_v14 = temp_v11;
            FUN_0032fea0(temp_v11,*puVar24,*(unsigned short *)(temp_v15 + 0x34));
            if (temp_v14 == 0) {
              temp_v7 = (unsigned int)*(unsigned short *)(temp_v15 + 0x34);
              FUN_002685cc();
              temp_v14 = temp_v20;
              if (temp_v7 != 0) break;
            }
            temp_v20 = temp_v20 + 1;
            temp_v14 = temp_v6;
          } while (temp_v20 < temp_v9);
        }
        flaggedEntrySetValueA(temp_v13,temp_v14);
        temp_v8 = 0x100020e;
        eventQueueAddUniqueIfValid(temp_v8);
      }
      else {
        temp_v6 = 10;
        FUN_001517b4(10,1);
        if (temp_v6 == 0) {
          temp_v6 = 9;
          FUN_001517b4(9,1);
          if (temp_v6 == 0) {
            temp_v6 = 1;
            FUN_001517b4();
            if (temp_v6 != 0) {
              temp_v7 = *puVar27;
              *puVar27 = temp_v7 - 1;
              *(unsigned short *)(param_1 + (temp_v7 - 1) * 2 + 0x76c4) = 0;
              *(unsigned int *)(param_1 + 0x436c) = 3;
              temp_v8 = 0x100020f;
              eventQueueAddUniqueIfValid(temp_v8);
            }
          }
        }
      }
    }
    temp_v6 = *(int *)(param_1 + 0x436c);
    if (temp_v6 == 3) {
      temp_v6 = FUN_002a4894(temp_v26);
      FUN_00359b6c(*(unsigned short *)(temp_v5 + temp_v6 * 2 + 0x34));
      return;
    }
    break;
  case 5:
    temp_v28 = FUN_002a4894();
    temp_v23 = param_1 + 0x7c8;
    if (*(int *)(param_1 + 0x437c) == 1) {
      temp_v7 = *puVar27;
      temp_v9 = param_1 + temp_v28 * 2;
      if (*(short *)(temp_v9 + 0x76a4) != 0) {
        temp_v4 = *(short *)(param_1 + temp_v7 * 2 + 0x76c2);
        temp_v14 = 0;
        if (temp_v14 < (int)temp_v7) {
          do {
            if (*(short *)(param_1 + temp_v14 * 2 + 0x76c4) == *(short *)(temp_v9 + 0x76a4)) {
              *puVar27 = temp_v7 - 1;
              *(unsigned short *)(param_1 + temp_v14 * 2 + 0x76c4) = 0;
              *(unsigned short *)(temp_v9 + 0x76b4) = 0;
              temp_v14 = FUN_003df4a4(*(unsigned short *)(temp_v9 + 0x76a4));
              if (temp_v14 != 0) {
                temp_v14 = FUN_002a4894(temp_v26);
                temp_v14 = FUN_003df4a4(*(unsigned short *)(temp_v5 + temp_v14 * 2 + 0x34));
                if (temp_v14 == 0) {
                  *piVar22 = *piVar22 - 1;
                }
                else {
                  temp_v34 = 1;
                }
              }
              break;
            }
            temp_v14 = temp_v14 + 1;
          } while (temp_v14 < (int)temp_v7);
        }
        qsort(temp_v29,8,2,&LAB_00321c94);
        *(short *)(temp_v9 + 0x76a4) = temp_v4;
        *(unsigned short *)(temp_v9 + 0x76b4) = 0;
        temp_v14 = countUnlockedSlots();
        if (temp_v34 != 0) {
          temp_v20 = 0;
          if (0 < temp_v14) {
LAB_0026da60:
            if (*(short *)(temp_v6 + temp_v20 * 2 + 0x34) != temp_v4) goto LAB_0026dabc;
            temp_v4 = 1;
            *(short *)(temp_v9 + 0x76b4) = temp_v4;
          }
        }
        else {
          temp_v20 = 0;
          if (temp_v20 < temp_v14) {
            do {
              if (*(short *)(temp_v6 + temp_v20 * 2 + 0x34) == temp_v4) {
                *(unsigned short *)(temp_v9 + 0x76b4) = 1;
                *piVar22 = *piVar22 + 1;
                break;
              }
              temp_v20 = temp_v20 + 1;
            } while (temp_v20 < temp_v14);
          }
        }
      }
      else {
        temp_v20 = 0;
        *(unsigned short *)(temp_v9 + 0x76a4) = *(unsigned short *)(param_1 + temp_v7 * 2 + 0x76c2);
        *(unsigned short *)(temp_v9 + 0x76b4) = 0;
        temp_v14 = countUnlockedSlots();
        if (0 < temp_v14) {
          do {
            if (*(short *)(temp_v6 + temp_v20 * 2 + 0x34) == *(short *)(temp_v9 + 0x76a4)) {
              temp_v4 = *(short *)(temp_v9 + 0x76b4) + 1;
              *(short *)(temp_v9 + 0x76b4) = temp_v4;
              break;
            }
            temp_v20 = temp_v20 + 1;
            temp_v14 = countUnlockedSlots();
          } while (temp_v20 < temp_v14);
        }
      }
LAB_0026db30:
      uiSpriteSelectAnim(temp_v23,7);
      uiSpriteSelectAnim(param_1 + temp_v28 * 0x8c + 0x8e0,6);
    }
    if (*(int *)(param_1 + 0x437c) >= 2) {
      if (*(int *)(param_1 + 0x437c) >= 6) {
        FUN_00163aa4(param_1 + temp_v28 * 0x8c + 0x8e0);
      }
      temp_v6 = FUN_00163aa4(temp_v23);
      if ((temp_v6 != 0) && (temp_v6 = param_1 + temp_v28 * 0x8c, *(char *)(temp_v6 + 0x96a) != '\0')) {
        uiSpriteSelectAnim(temp_v6 + 0x8e0,0);
        *(unsigned int *)(param_1 + 0x436c) = 3;
        temp_v6 = FUN_002a4894(temp_v26);
        FUN_00359b6c(*(unsigned short *)(temp_v5 + temp_v6 * 2 + 0x34));
        return;
      }
    }
    temp_v6 = *(int *)(param_1 + 0x436c);
    if (temp_v6 == 3) {
      temp_v6 = FUN_002a4894(temp_v26);
      FUN_00359b6c(*(unsigned short *)(temp_v5 + temp_v6 * 2 + 0x34));
      return;
    }
  }
  return;
LAB_0026dabc:
  temp_v20 = temp_v20 + 1;
  if (temp_v14 <= temp_v20) goto LAB_0026db30;
  goto LAB_0026da60;
}

} /* extern "C" */
