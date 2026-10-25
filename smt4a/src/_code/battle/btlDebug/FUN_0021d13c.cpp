/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021d13c` (_code @ 0x21d13c, 0x45e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f490(...);
int infoWinSetText(...);
int uiNavigatorStart(...);
int FUN_00370ecc(...);
int FUN_003f1b3c(...);
int FUN_0047f4cc(...);
int FUN_004c8e30(...);

int FUN_0020d3d4(...);
int FUN_0021a9e8(...);
int FUN_0022e774(void);
int FUN_0023f328(...);
int FUN_00333f6c(void);
int FUN_00371c3c(...);
int messageDismissNumericBanner(...);
int statusIconSetKind(...);
int statusDownGetValue(void);
int sysPlayVoice(...);
int FUN_003ec6d8(...);
int FUN_003eeb4c(...);
int FUN_003f1114(...);
void nameEntriesRegisterVerNames(void *work);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_idivmod(...);

int FUN_00167458(...);
int sysPlaySe(...);
int FUN_001834a4(...);
int dataTable8FindRecord(...);
int FUN_0019de98(...);
int gameGetSlotRecord(...);
int FUN_0020acd8(...);
int FUN_0021a6c8(...);
int btlCommandResolveSelectedTarget(...);
int FUN_002ccde8(...);
int FUN_0038b3f8(...);
int devilIsTextureLoaded(...);
int FUN_003df57c(...);
int FUN_003eb200(void);
int FUN_003eed44(...);
int FUN_0040082c(void);
int btlItemComputeValues(...);
int FUN_004bcbb4(...);
int bitsAt60Test(...);

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(...);
int dataTable04FindById(void);
int FUN_0020a320(...);
int FUN_0020ad6c(...);
int useCounterStart(void);
int touchMenuClose(void);
int FUN_00270104(...);
int btlMainGetUnk14(void);
int resourceRunOperationIfUnblocked(...);
int FUN_002a4894(...);
int scrollOwnerSelectIndex(...);
int FUN_0031f208(...);
int sortMenuAcquire(...);
int useCounterRelease(void);
int FUN_004009d0(...);

int btlGetMainState(void);
int FUN_00163aa4(...);
int gameGetPlayerData(void);
int uiSpriteSelectAnim(...);
int uiSpriteSetImageKeyframe(...);
int FUN_0019e330(int, int, int);
int gameGetSlotTable(void);
int FUN_00203b40(...);
int FUN_00228b04(...);
int FUN_002a4878(...);
int FUN_002a4964(int *, int);
int screenSetContextHint(...);
int FUN_002cc9e0(...);
int FUN_003450d4(...);
int FUN_003756c8(...);
int gameDataFlagTestBit(...);
int FUN_004fb43c(int, int, int, int);

/* stack frame of param_1: 15 slot(s), 54 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned char sp70; /* 0x70: local_70 */
    unsigned char sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern int g_btlAux; /* 0x573808 */
extern signed char DAT_00573b88; /* 0x573b88 */
extern signed char DAT_00573b89; /* 0x573b89 */
extern int DAT_00573b8c; /* 0x573b8c */
extern int DAT_00573b90; /* 0x573b90 */
extern unsigned int uRam00573b98; /* 0x573b98 */
extern unsigned int uRam00573b9c; /* 0x573b9c */
extern unsigned int uRam00573ba0; /* 0x573ba0 */
extern unsigned int uRam00573ba4; /* 0x573ba4 */
extern unsigned int DAT_00573bb8; /* 0x573bb8 */
extern unsigned int DAT_00573bbc; /* 0x573bbc */
extern unsigned int DAT_00573bc0; /* 0x573bc0 */
extern unsigned int DAT_00573bc4; /* 0x573bc4 */
extern unsigned int DAT_00573bc8; /* 0x573bc8 */
extern unsigned int DAT_00573bcc; /* 0x573bcc */
extern unsigned int DAT_00573bd0; /* 0x573bd0 */
extern unsigned int DAT_00573bd4; /* 0x573bd4 */
extern short *DAT_005e1560; /* 0x5e1560 */
extern int *DAT_005e1564; /* 0x5e1564 */
extern unsigned short DAT_005e1568; /* 0x5e1568 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001517b4. */
extern int saveSlotFindSelected(void);
/* Supplied declaration required: FUN_0015f490. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int ifTouchGetSelectionMode(void);
extern int ifTouchGetSelectedRegion(void);
extern short vec2GetXInt(void);
extern short vec2GetYInt(int *);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dataTable8FindRecord. */
extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0019e330. */
/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0020a320. */
/* Supplied declaration required: FUN_0020acd8. */
/* Supplied declaration required: FUN_0020ad6c. */
/* Supplied declaration required: FUN_0020d3d4. */
/* Supplied declaration required: FUN_0021a6c8. */
/* Supplied declaration required: FUN_0021a9e8. */
/* Supplied declaration required: FUN_00228b04. */
extern int FUN_0022a030(unsigned int, int);
/* Supplied declaration required: FUN_0022e774. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0023f328. */
/* Supplied declaration required: touchMenuClose. */
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_00270104. */
extern int recordGetModeForId(int);
/* Supplied declaration required: btlCommandResolveSelectedTarget. */
/* Supplied declaration required: btlMainGetUnk14. */
extern int FUN_00291e14(void);
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
/* Supplied declaration required: FUN_002a4878. */
/* Supplied declaration required: FUN_002a4894. */
/* Supplied declaration required: scrollOwnerSelectIndex. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: infoWinSetText. */
extern int FUN_002a6a24(unsigned short);
extern int widgetSubCallIfVisible(int);
/* Supplied declaration required: uiNavigatorStart. */
extern int useCounterGetCurrentValue(void);
/* Supplied declaration required: screenSetContextHint. */
/* Supplied declaration required: FUN_002cc9e0. */
/* Supplied declaration required: FUN_002ccde8. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: sortMenuAcquire. */
extern int buttonHelpGetPanelMode(void);
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_003450d4. */
extern int uiSearchSecondary(int);
extern int uiSearchPrimary(int *);
/* Supplied declaration required: useCounterRelease. */
/* Supplied declaration required: FUN_00370ecc. */
/* Supplied declaration required: FUN_00371c3c. */
/* Supplied declaration required: FUN_003756c8. */
extern int panelStateIs0(void);
/* Supplied declaration required: messageDismissNumericBanner. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: statusIconSetKind. */
/* Supplied declaration required: devilIsTextureLoaded. */
/* Supplied declaration required: statusDownGetValue. */
extern int stateHolderIsMissingOrState0(void);
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003df57c. */
extern int FUN_003e0024(void);
extern int playerHasFlagBit(unsigned int);
/* Supplied declaration required: gameDataFlagTestBit. */
extern unsigned int FUN_003e53ec(void);
extern int btlScriptUnitHasFlags(int);
extern int uiEntryGetState(int, int);
/* Supplied declaration required: FUN_003eb200. */
/* Supplied declaration required: FUN_003ec6d8. */
/* Supplied declaration required: FUN_003eeb4c. */
/* Supplied declaration required: FUN_003eed44. */
extern unsigned int halfTableGet(unsigned int, int);
/* Supplied declaration required: FUN_003f1114. */
/* Supplied declaration required: FUN_003f1b3c. */
/* Supplied declaration required: FUN_0040082c. */
/* Supplied declaration required: FUN_004009d0. */
/* Supplied declaration required: FUN_0047f4cc. */
extern int FUN_0047fbb4(unsigned int);
/* Supplied declaration required: btlItemComputeValues. */
extern int flagValueIsPositive(unsigned int);
/* Supplied declaration required: FUN_004bcbb4. */
/* Supplied declaration required: bitsAt60Test. */
extern int btlFindEntryValue(int, unsigned int);
extern int btlGetPropertyMaximum(unsigned int);
extern int FUN_004c87e0(void);
/* Supplied declaration required: FUN_004c8e30. */
/* Supplied declaration required: nameEntriesRegisterVerNames. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_0021d13c(int param_1)

{
/* irregular: 44 goto(s); irregular input(s): in_fpscr; 77 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  short *psVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  short temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  int *piVar16;
  char *pcVar17;
  unsigned int *puVar18;
  int *piVar19;
  unsigned char *puVar20;
  int *piVar21;
  unsigned int *puVar22;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  unsigned long long temp_v24;
  short **temp_v25;
  int *temp_v26;
  int *temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  char temp_v30 [4];
  char temp_v31 [4];
  short *temp_v32;
  int *temp_v33;
  int *temp_v34;
  int temp_v35 [3];
  int *temp_v36;
  int *temp_v37;
  int *temp_v38;
  
  temp_v36 = (int *)0x0;
  temp_v30[0] = '\0';
  temp_v31[0] = '\0';
  temp_v4 = btlGetMainState();
  temp_v34 = (int *)(param_1 + 0x3a4c);
  piVar16 = (int *)(param_1 + 0x3890);
  if (!((*(unsigned int *)(temp_v4 + 0x45ac) & DAT_00573bcc) == 0 &&
       (*(unsigned int *)(temp_v4 + 0x45a8) & DAT_00573bc8) == 0)) {
    if (DAT_00573b88 == '\0') {
      if (*(short *)(param_1 + *piVar16 * 2 + 0x4210) != -1) {
        temp_v25 = (short **)0x1;
        temp_v26 = (int *)0x1;
        FUN_00203b40(temp_v34,400,6,1);
        FUN_002a4964(temp_v34,DAT_00573b8c + 1);
      }
      else {
        temp_v4 = gameFlagIsSet(0x410);
        if (temp_v4 != 0) {
          temp_v5 = gameGetPlayerData();
          temp_v16 = *(short *)(temp_v5 + 2) != 0;
          if (temp_v16) {
            temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 4);
          }
          if (temp_v16 && temp_v5 != 0) {
            temp_v25 = (short **)0x1;
            temp_v26 = (int *)0x1;
            FUN_00203b40(temp_v34,0x191,6);
            FUN_002a4964(temp_v34,DAT_00573b8c + 2);
            goto LAB_0021d1f4;
          }
        }
        temp_v25 = (short **)0x1;
        temp_v26 = (int *)0x1;
        FUN_00203b40(temp_v34,400,6,1);
        FUN_002a4964(temp_v34,DAT_00573b8c + 1);
      }
    }
LAB_0021d1f4:
    DAT_00573b88 = 1;
  }
  else {
    if (DAT_00573b88 != '\0') {
      if (*(short *)(param_1 + *piVar16 * 2 + 0x4210) != -1) {
        temp_v4 = param_1 + *piVar16 * 0x10;
        temp_v9 = 1;
        temp_v11 = *(short *)(temp_v4 + 0x3c46);
        if (*(short *)(temp_v4 + 0x3c44) != 0) {
          temp_v9 = 2;
        }
        temp_v7 = 0;
        temp_v13 = 3;
        psVar6 = (short *)(temp_v4 + 0x3c44);
        do {
          if (temp_v11 != 0) {
            temp_v9 = temp_v9 + 1;
          }
          temp_v11 = psVar6[3];
          if (psVar6[2] != 0) {
            temp_v7 = temp_v7 + 1;
          }
          temp_v13 = temp_v13 - 1;
          psVar6 = psVar6 + 2;
        } while (temp_v13 != 0);
        temp_v9 = temp_v9 + temp_v7;
        temp_v11 = *(short *)(temp_v4 + 0x3c52);
      }
      else {
        temp_v7 = 2;
        temp_v4 = gameFlagIsSet(0x410);
        if (temp_v4 != 0) {
          temp_v5 = gameGetPlayerData();
          temp_v16 = *(short *)(temp_v5 + 2) != 0;
          if (temp_v16) {
            temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 4);
          }
          if (!temp_v16 || temp_v5 == 0) {
            temp_v7 = 1;
          }
        }
        else {
          temp_v7 = 1;
        }
        temp_v4 = 3;
        temp_v11 = *(short *)(param_1 + 0x3c46);
        if (*(short *)(param_1 + 0x3c44) != 0) {
          temp_v7 = temp_v7 + 1;
        }
        temp_v9 = 0;
        psVar6 = (short *)(param_1 + 0x3c44);
        do {
          if (temp_v11 != 0) {
            temp_v7 = temp_v7 + 1;
          }
          temp_v11 = psVar6[3];
          if (psVar6[2] != 0) {
            temp_v9 = temp_v9 + 1;
          }
          temp_v4 = temp_v4 - 1;
          psVar6 = psVar6 + 2;
        } while (temp_v4 != 0);
        temp_v9 = temp_v9 + temp_v7;
        temp_v11 = *(short *)(param_1 + 0x3c52);
      }
      if (temp_v11 != 0) {
        temp_v9 = temp_v9 + 1;
      }
      temp_v25 = (short **)0x0;
      temp_v26 = (int *)0x1;
      FUN_00203b40(temp_v34,temp_v9,6,1);
    }
    DAT_00573b88 = 0;
  }
  temp_v4 = btlGetMainState();
  if (!((*(unsigned int *)(temp_v4 + 0x45ac) & DAT_00573bd4) == 0 &&
       (DAT_00573bd0 & *(unsigned int *)(temp_v4 + 0x45a8)) == 0)) {
    if (DAT_00573b89 == '\0') {
      temp_v25 = (short **)0x0;
      temp_v26 = (int *)0x1;
      FUN_00203b40(param_1 + 0x3b78,3,6,1);
      DAT_00573b89 = '\x01';
    }
  }
  else if (DAT_00573b89 != '\0') {
    temp_v7 = 0;
    temp_v4 = 0;
    temp_v35[0] = 0x2e;
    temp_v35[1] = 0x32;
    temp_v35[2] = 0x33;
    do {
      temp_v9 = gameDataFlagTestBit(temp_v35[temp_v4]);
      if (temp_v9 != 0) {
        temp_v7 = temp_v7 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 3);
    temp_v26 = (int *)0x1;
    temp_v25 = (short **)0x0;
    FUN_00203b40(param_1 + 0x3b78,temp_v7,6,1);
    DAT_00573b89 = '\0';
  }
  temp_v23 = 0x3f800000;
  FUN_00163aa4(param_1 + 0xac);
  FUN_00163aa4(param_1 + 0x598);
  FUN_00163aa4(param_1 + 0x624);
  FUN_00163aa4(param_1 + 0x6b0);
  FUN_00163aa4(param_1 + 0x122c);
  temp_v4 = FUN_00291e14();
  if (temp_v4 == 0) {
    temp_v5 = FUN_003e53ec();
    temp_v6 = (unsigned int)*(unsigned short *)(param_1 + 0x4b9c);
    if (temp_v6 != temp_v5) {
      pcVar17 = (char *)(param_1 + 0x4ba0);
      temp_v1 = (unsigned short)temp_v5;
      if (temp_v5 != 0) {
        if (temp_v5 < 8) {
LAB_0021d54c:
          if (temp_v5 < temp_v6) {
            temp_v25 = (short **)0x0;
            temp_v26 = (int *)0x0;
            temp_v27 = (int *)0x0;
            FUN_004fb43c(0,0,0x10000bc,1);
            *pcVar17 = '\0';
            *(unsigned short *)(param_1 + 0x4b9c) = temp_v1;
          }
          else {
            if (temp_v5 >= 8) goto LAB_0021d628;
            temp_v25 = (short **)0x0;
            temp_v26 = (int *)0x0;
            temp_v27 = (int *)0x0;
            FUN_004fb43c(0,0,0x1000228,0);
            *(unsigned short *)(param_1 + 0x4b9c) = temp_v1;
            uiSpriteSetImageKeyframe(param_1 + 0x1aec,0x1b,0);
            *pcVar17 = '\x01';
            *(unsigned short *)(param_1 + 0x4b9e) = 0;
          }
        }
        else {
LAB_0021d628:
          temp_v0 = *pcVar17;
          if (temp_v0 == '\x03') {
            *(unsigned short *)(param_1 + 0x4b9c) = temp_v1;
          }
          if (temp_v0 != '\x03' && temp_v0 != '\x02') {
            uiSpriteSelectAnim(param_1 + 0x1b78,0x14);
            uiSpriteSelectAnim(param_1 + 0x1c04,0x17);
            uiSpriteSelectAnim(param_1 + 0x1c90,0x15);
            uiSpriteSelectAnim(param_1 + 0x1d1c,0x16);
            FUN_0019e330(param_1 + 0x1d1c,0xe,0);
            *pcVar17 = '\x02';
            *(unsigned short *)(param_1 + 0x4b9c) = temp_v1;
            temp_v25 = (short **)0x0;
            temp_v26 = (int *)0x0;
            temp_v27 = (int *)0x0;
            FUN_004fb43c(0,0,0x1000228,0);
          }
        }
      }
      else {
        if (temp_v6 != 8) goto LAB_0021d54c;
        *pcVar17 = '\x04';
        temp_v4 = 0;
        do {
          uiSpriteSetImageKeyframe(param_1 + temp_v4 * 0x8c + 0x1da8,0x28,0);
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 8);
        *(unsigned short *)(param_1 + 0x4b9c) = 0;
        *(unsigned short *)(param_1 + 0x4b9e) = 0;
      }
    }
    if (*(char *)(param_1 + 0x1b76) == '\0') {
      if (*(short *)(param_1 + 0x4b9e) != 0) {
        FUN_00163aa4(param_1 + 0x1aec);
      }
      *(short *)(param_1 + 0x4b9e) = *(short *)(param_1 + 0x4b9e) + 1;
    }
    pcVar17 = (char *)(param_1 + 0x4ba0);
    temp_v0 = *pcVar17;
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') {
        if (temp_v0 == '\x04') {
          temp_v4 = 0;
          do {
            if ((int)(unsigned int)*(unsigned short *)(param_1 + 0x4b9e) < temp_v4) break;
            FUN_00163aa4(param_1 + (0x3d - temp_v4) * 0x8c + 0x20);
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 8);
          *(short *)(param_1 + 0x4b9e) = *(short *)(param_1 + 0x4b9e) + 1;
          if (*(char *)(param_1 + 0x1e32) != '\0') {
            *pcVar17 = '\0';
          }
        }
      }
      else {
        FUN_00163aa4(param_1 + 0x1c90);
        FUN_00163aa4(param_1 + 0x1d1c);
      }
    }
    else {
      FUN_00163aa4();
      FUN_00163aa4();
      FUN_00163aa4();
      FUN_00163aa4();
      if ((((*(char *)(param_1 + 0x1c02) != '\0') && (*(char *)(param_1 + 0x1c8e) != '\0')) &&
          (*(char *)(param_1 + 0x1d1a) != '\0')) && (*(char *)(param_1 + 0x1da6) != '\0')) {
        *pcVar17 = '\x03';
        uiSpriteSelectAnim(param_1 + 0x1c90,0x18);
        uiSpriteSelectAnim(param_1 + 0x1d1c,0x19);
      }
    }
  }
  temp_v35[2] = gameGetSlotTable();
  temp_v4 = 0;
  do {
    temp_v7 = ifTouchGetSelectedRegion();
    if (temp_v7 == *(short *)(param_1 + temp_v4 * 2 + 0x480e)) goto LAB_0021d8d0;
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x20);
  temp_v4 = -1;
LAB_0021d8d0:
  temp_v38 = (int *)(param_1 + 0x387c);
  puVar20 = (unsigned char *)(param_1 + 0x3894);
  *puVar20 = 0x20;
  temp_v37 = (int *)(param_1 + 0x3874);
  piVar21 = (int *)(param_1 + 0x3878);
  if (*(char *)(param_1 + 0x38ba) != '\0') {
    if (((*temp_v38 != 0x10) || (temp_v7 = btlScriptUnitHasFlags(*temp_v37), temp_v7 != 0)) ||
       (temp_v7 = FUN_004c87e0(), temp_v7 == 0)) {
      *(unsigned char *)(param_1 + 0x38ba) = 0;
      goto LAB_0021d964;
    }
    if (*(char *)(param_1 + 0x38ba) == '\0') goto LAB_0021d964;
  }
  else {
LAB_0021d964:
    temp_v7 = 0;
    do {
      if (temp_v7 <= *piVar21) {
        FUN_00163aa4(param_1 + temp_v7 * 0x8c + 0xe58);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
  }
  temp_v10 = (unsigned int)temp_v23;
  switch(*temp_v38) {
  case 1:
    if ((*(int *)(param_1 + 0x4b98) == 0) || (*(char *)(param_1 + 0x38b0) != '\0'))
    goto LAB_00220474;
    temp_v4 = FUN_002a4878(param_1 + *piVar16 * 100 + 0x38bc);
    temp_v27 = (int *)temp_v31;
    temp_v26 = (int *)0xffffffff;
    temp_v28 = 1;
    temp_v25 = (short **)0xffffffff;
    temp_v29 = 1;
    temp_v7 = param_1 + *piVar16 * 100 + 0x38bc;
    FUN_003450d4(temp_v7,0,param_1 + 0x480e,0xffffffff);
    if (temp_v7 != 0) {
      temp_v8 = FUN_002cc9e0(param_1,1);
      screenSetContextHint(param_1,temp_v8,*piVar16);
      temp_v7 = param_1 + *piVar16 * 100 + 0x38bc;
      if (temp_v4 == 0) {
        temp_v4 = FUN_002a4878(temp_v7);
        goto joined_r0x0021db60;
      }
      temp_v4 = FUN_002a4878(temp_v7);
      if (temp_v4 != 0) break;
      temp_v8 = 1;
      FUN_003756c8(temp_v8);
      break;
    }
    temp_v7 = param_1 + *piVar16 * 100 + 0x38bc;
    FUN_00228b04(temp_v7,1);
    if (temp_v7 != 0) {
      temp_v8 = FUN_002cc9e0(param_1,1);
      screenSetContextHint(param_1,temp_v8,*piVar16);
      temp_v7 = param_1 + *piVar16 * 100 + 0x38bc;
      if (temp_v4 != 0) {
        temp_v4 = FUN_002a4878(temp_v7);
        if (temp_v4 == 0) {
          FUN_003756c8(1);
        }
        break;
      }
      temp_v4 = FUN_002a4878(temp_v7);
joined_r0x0021db60:
      if (temp_v4 == 0) break;
      temp_v8 = 0;
      FUN_003756c8(temp_v8);
      break;
    }
    temp_v4 = 0;
    FUN_001517b4(0,1);
    if (temp_v4 != 0) {
      *puVar20 = 0;
    }
    if (temp_v4 == 0 && temp_v31[0] == '\0') {
      temp_v4 = 1;
      FUN_001517b4(1,1);
      if (temp_v4 != 0) {
        *puVar20 = 1;
        if (*(char *)(param_1 + 0x38b7) != '\0') {
          *(unsigned char *)(param_1 + 0x38b8) = 1;
          FUN_0020ad6c(param_1,0x2d,1);
          temp_v8 = 0x100020f;
          eventQueueAddUniqueIfValid(temp_v8);
          break;
        }
        temp_v4 = FUN_002a4878(param_1 + *piVar16 * 100 + 0x38bc);
        if (temp_v4 < 1) break;
        scrollOwnerSelectIndex(param_1 + *piVar16 * 100 + 0x38bc,0);
        temp_v8 = FUN_002cc9e0(param_1,1);
        screenSetContextHint(param_1,temp_v8,*piVar16);
        FUN_003756c8(1);
        temp_v8 = 0x100020f;
        eventQueueAddUniqueIfValid(temp_v8);
        break;
      }
      temp_v4 = 9;
      FUN_001517b4(9,1);
      if (temp_v4 != 0) {
        *puVar20 = 9;
        FUN_0020ad6c(param_1,2,1);
        temp_v8 = 0x100020e;
        eventQueueAddUniqueIfValid(temp_v8);
        break;
      }
      temp_v4 = gameDataFlagTestBit(0x7f);
      if (temp_v4 == 0) break;
      temp_v4 = 10;
      FUN_001517b4(10,1);
      if (temp_v4 == 0) break;
      *puVar20 = 10;
      FUN_0020ad6c(param_1,3,1);
      temp_v8 = 0x100020e;
      eventQueueAddUniqueIfValid(temp_v8);
      break;
    }
    temp_v4 = FUN_0020a320(param_1);
    if (temp_v4 != 0) {
      temp_v8 = 0x100020e;
      eventQueueAddUniqueIfValid(temp_v8);
      break;
    }
    temp_v8 = 0x100020f;
    eventQueueAddUniqueIfValid(temp_v8);
    break;
  case 3:
    FUN_0020ad6c(param_1,4,0);
    sortMenuAcquire(0xffffffff,1);
    FUN_0031f208(10);
    temp_v4 = FUN_00291e14();
    if (temp_v4 == 0) {
      temp_v8 = 9;
    }
    else {
      temp_v8 = 0x59;
    }
    FUN_0031f208(temp_v8);
    useCounterStart();
    break;
  case 4:
    temp_v4 = useCounterIsFinished();
    if (temp_v4 != 0) {
      useCounterRelease();
      if (*(int *)(param_1 + 0x3880) - 8U < 6) {
        FUN_00270104(param_1);
      }
      else {
        temp_v8 = FUN_002cc9e0(param_1,0);
        screenSetContextHint(param_1,temp_v8,*piVar16);
      }
      FUN_0020ad6c(param_1,*(int *)(param_1 + 0x3880),0);
    }
    else {
      temp_v4 = useCounterGetCurrentValue();
      if ((temp_v4 == 9) || (temp_v4 == 0x59)) {
        *(unsigned int *)(param_1 + 0x3884) = *(unsigned int *)(param_1 + 0x3880);
        FUN_0020ad6c(param_1,7,0);
        touchMenuClose();
        useCounterRelease();
      }
      if (temp_v4 == 10) {
        touchMenuClose();
        useCounterRelease();
        FUN_0020ad6c(param_1,5,0);
      }
    }
    break;
  case 5:
    uiSpriteSelectAnim(param_1 + 0x11a0,0x1b);
    *(unsigned int *)(param_1 + 0x4ad8) = 1;
    FUN_0020ad6c(param_1,6,0);
    break;
  case 8:
    goto LAB_0021df58;
  case 9:
    FUN_0020ad6c(param_1,8,1);
    FUN_00270104(param_1);
    *(unsigned int *)(param_1 + 0x4ba4) = 0;
LAB_0021df58:
    temp_v4 = buttonHelpGetPanelMode();
    if (temp_v4 == 0) {
      FUN_00270104(param_1);
    }
    temp_v10 = (unsigned int)temp_v23;
    piVar19 = (int *)(param_1 + 0x4ba4);
    temp_v4 = *piVar19;
    *piVar19 = temp_v4 + 1;
    if (temp_v4 + 1 >= 0x29) {
      *piVar19 = 0;
    }
    if (*(char *)(param_1 + 0x38b0) == '\0') {
      temp_v4 = gameFlagIsSet(0x525);
      FUN_002cc9e0(param_1,1);
      if (temp_v4 != 0) {
        temp_v7 = recordGetModeForId((int)*(short *)(param_1 + 0x4824));
        if (temp_v7 == 6) {
          temp_v30[0] = '\x01';
        }
LAB_0021e058:
        temp_v7 = 0;
        FUN_001517b4(0,1);
        temp_v10 = (unsigned int)temp_v23;
        if (temp_v7 != 0) {
          *puVar20 = 0;
        }
        if (!(temp_v7 == 0 && temp_v30[0] == '\0')) {
          temp_v16 = 0;
          temp_v29 = 0;
          temp_v32 = (short *)0x0;
          temp_v4 = resourceRunOperationIfUnblocked(*(unsigned int *)(param_1 + 0x3c40));
          temp_v7 = FUN_002a4894(*(unsigned int *)(param_1 + 0x3c40));
          temp_v4 = temp_v4 + temp_v7;
          temp_v7 = FUN_002cc9e0(param_1,1);
          temp_v10 = (unsigned int)temp_v23;
          if (temp_v7 != 1) {
            temp_v7 = FUN_002cc9e0(param_1,1);
            if (temp_v7 != 2) {
              temp_v4 = FUN_002cc9e0(param_1,1);
              temp_v10 = (unsigned int)temp_v23;
              if (temp_v4 != 0xc) {
                temp_v8 = 0x100020f;
                eventQueueAddUniqueIfValid(temp_v8);
                break;
              }
              temp_v9 = *(int *)(param_1 + 0x3e18);
              *(int *)(param_1 + 0x389c) = temp_v9;
              dataTable04FindById();
              temp_v7 = *(int *)(param_1 + 0x389c);
              temp_v4 = FUN_0022a030(0xffffffff,temp_v7);
              if ((temp_v4 == 0) || (FUN_004009d0(temp_v7,0), temp_v7 != 0)) {
                temp_v16 = 0;
              }
              else {
                temp_v16 = 1;
              }
            }
            else {
              temp_v7 = btlGetMainState();
              if (!((*(unsigned int *)(temp_v7 + 0x45a8) & DAT_00573bc8) == 0 &&
                   (*(unsigned int *)(temp_v7 + 0x45ac) & DAT_00573bcc) == 0)) {
                temp_v10 = btlGetMainState();
                temp_v10 = halfTableGet(temp_v10,temp_v4);
                *(unsigned int *)(param_1 + 0x389c) = temp_v10;
                DAT_00573b90 = temp_v4;
              }
              else {
                btlGetMainState();
                *(unsigned int *)(param_1 + 0x389c) = 0;
              }
              temp_v9 = *(int *)(param_1 + 0x389c);
              dataTable04FindById();
              temp_v4 = btlGetMainState();
              if ((*(unsigned int *)(temp_v4 + 0x45a8) & DAT_00573bc8) == 0 &&
                  (*(unsigned int *)(temp_v4 + 0x45ac) & DAT_00573bcc) == 0) {
                piVar16 = (int *)gameGetSlotTable();
                temp_v7 = *piVar16;
                temp_v4 = FUN_002a6a24(*(unsigned short *)(temp_v9 + 0x20));
                if (temp_v7 < temp_v4) goto LAB_0021e5b0;
              }
              temp_v4 = *(int *)(param_1 + 0x389c);
              temp_v16 = 1;
              FUN_004009d0(temp_v4,0);
              if (temp_v4 != 0) {
                temp_v16 = 0;
              }
            }
LAB_0021e5b0:
            temp_v10 = (unsigned int)temp_v23;
            if (temp_v9 != 0) {
              temp_v5 = *(unsigned int *)(temp_v9 + 0x28);
              if ((temp_v5 & 0x1e0) != 0) {
                temp_v6 = 1;
                temp_v15 = (temp_v5 & 0x1ff) >> 5 != 1;
                if (temp_v15) {
                  temp_v6 = 6;
                }
                if (!temp_v15 || temp_v6 == (temp_v5 & 0x1ff) >> 5) {
                  temp_v29 = 1;
                }
              }
              else {
                temp_v29 = 1;
              }
              if ((temp_v5 & 0x1e0) == 0xa0) {
                temp_v32 = (short *)0x1;
              }
            }
            if (!temp_v16) {
              temp_v8 = 0x100020f;
              eventQueueAddUniqueIfValid(temp_v8);
              break;
            }
            if (temp_v29 != 0) {
              uiSpriteSelectAnim(param_1 + 0x11a0,0x1b);
              FUN_0020ad6c(param_1,0x12,1);
              temp_v8 = 0x100020e;
              eventQueueAddUniqueIfValid(temp_v8);
              break;
            }
            if (temp_v32 != (short *)0x0) {
              puVar18 = (unsigned int *)(param_1 + 0x3c84);
              *puVar18 = 0x1010101;
              temp_v4 = FUN_00291e14();
              if (temp_v4 == 0) {
                temp_v4 = 0;
                do {
                  temp_v7 = gameGetSlotTable();
                  temp_v10 = (unsigned int)temp_v23;
                  if (*(char *)(temp_v7 + temp_v4 + 0x1ca0) < '\0') {
                    *(unsigned char *)(param_1 + temp_v4 + 0x3c85) = 0;
                  }
                  temp_v4 = temp_v4 + 1;
                } while (temp_v4 < 3);
                temp_v4 = playerHasFlagBit(1);
                if (temp_v4 != 0) {
                  *(unsigned char *)puVar18 = 0;
                }
              }
              else {
                temp_v10 = btlMainGetUnk14();
                temp_v4 = bitsAt60Test(temp_v10,1);
                temp_v7 = 0;
                if (temp_v4 != 0) {
                  *(unsigned char *)puVar18 = 0;
                }
                do {
                  temp_v4 = gameGetSlotTable();
                  if (*(char *)(temp_v4 + temp_v7 + 0x1ca0) >= '\0') {
                    temp_v10 = gameGetSlotRecord((int)*(char *)(temp_v35[2] + temp_v7 + 0x1ca0));
                    temp_v4 = bitsAt60Test(temp_v10,1);
                    if (temp_v4 != 0) {
                      *(unsigned char *)(param_1 + temp_v7 + 0x3c85) = 0;
                    }
                  }
                  else {
                    *(unsigned char *)(param_1 + temp_v7 + 0x3c85) = 0;
                  }
                  temp_v10 = (unsigned int)temp_v23;
                  temp_v7 = temp_v7 + 1;
                } while (temp_v7 < 3);
              }
              FUN_0020ad6c(param_1,0x16,1);
              sysPlaySe(0x3a);
            }
            else {
              FUN_0020ad6c(param_1,0x14,1);
            }
          }
          else {
            if (*(short *)(param_1 + *piVar16 * 2 + 0x4210) != -1) {
              if (temp_v4 != 0) {
                temp_v7 = btlGetMainState();
                if (!((*(unsigned int *)(temp_v7 + 0x45a8) & DAT_00573bc8) == 0 &&
                     (*(unsigned int *)(temp_v7 + 0x45ac) & DAT_00573bcc) == 0)) {
                  DAT_00573b8c = temp_v4 - 1;
                  *(int *)(param_1 + 0x389c) = temp_v4;
                }
                else {
                  *(unsigned int *)(param_1 + 0x389c) =
                       (unsigned int)*(unsigned short *)(param_1 + *piVar16 * 0x10 + temp_v4 * 2 + 0x3c42);
                }
                temp_v34 = (int *)(param_1 + 0x389c);
                temp_v9 = *temp_v34;
                dataTable04FindById();
                if (*(short *)(param_1 + *piVar16 * 2 + 0x4210) != -2) {
                  temp_v4 = gameGetSlotRecord();
                }
                else {
                  temp_v4 = btlMainGetUnk14();
                }
                temp_v11 = *(short *)(param_1 + *piVar16 * 2 + 0x4210);
                if ((temp_v11 == -2) || (-1 < temp_v11)) {
                  temp_v7 = *temp_v34;
                  if ((temp_v4 == 0) ||
                     ((temp_v13 = FUN_004bcbb4(temp_v4,temp_v7), *(short *)(temp_v4 + 0x2c) < temp_v13 ||
                      (FUN_004009d0(temp_v7,0), temp_v7 != 0)))) {
                    temp_v16 = 0;
                  }
                  else {
                    temp_v16 = 1;
                  }
                }
                temp_v36 = (int *)(param_1 + 0x3dac);
                *temp_v36 = 0;
                temp_v7 = FUN_004bcbb4(temp_v4,*temp_v34);
                *(int *)(param_1 + *piVar16 * 4 + 0x3c98) = -temp_v7;
                if ((*(unsigned int *)(temp_v9 + 0x3c) & 0x200) != 0) {
                  *temp_v36 = -(int)*(short *)(temp_v4 + 0x2a);
                }
                if ((*(unsigned int *)(temp_v9 + 0x3c) & 0x400) != 0) {
                  *temp_v36 = -(*(short *)(temp_v4 + 0x2a) - 1);
                }
                goto LAB_0021e5b0;
              }
              temp_v8 = 0;
              *(unsigned int *)(param_1 + 0x389c) = temp_v8;
            }
            else {
              if (temp_v4 != 0) {
                if ((temp_v4 == 1) && (temp_v7 = gameFlagIsSet(0x410), temp_v7 != 0)) {
                  temp_v5 = gameGetPlayerData();
                  temp_v10 = (unsigned int)temp_v23;
                  temp_v16 = *(short *)(temp_v5 + 2) != 0;
                  if (temp_v16) {
                    temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 4);
                  }
                  if (temp_v16 && temp_v5 != 0) {
                    temp_v8 = 2;
                    *(unsigned int *)(param_1 + 0x389c) = temp_v8;
                    uiSpriteSelectAnim(param_1 + 0x11a0,0x1b);
                    FUN_0020ad6c(param_1,0x12,1);
                    temp_v8 = 0x100020e;
                    eventQueueAddUniqueIfValid(temp_v8);
                    break;
                  }
                }
                temp_v9 = 2;
                temp_v7 = gameFlagIsSet(0x410);
                if (temp_v7 != 0) {
                  temp_v5 = gameGetPlayerData();
                  temp_v16 = *(short *)(temp_v5 + 2) != 0;
                  if (temp_v16) {
                    temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 4);
                  }
                  if (!temp_v16 || temp_v5 == 0) {
                    temp_v9 = 1;
                  }
                }
                else {
                  temp_v9 = 1;
                }
                temp_v7 = btlGetMainState();
                if (!((*(unsigned int *)(temp_v7 + 0x45a8) & DAT_00573bc8) == 0 &&
                     (*(unsigned int *)(temp_v7 + 0x45ac) & DAT_00573bcc) == 0)) {
                  DAT_00573b8c = temp_v4 - temp_v9;
                  *(int *)(param_1 + 0x389c) = DAT_00573b8c + 1;
                }
                else {
                  *(unsigned int *)(param_1 + 0x389c) =
                       (unsigned int)*(unsigned short *)(param_1 + *piVar16 * 0x10 + (temp_v4 - temp_v9) * 2 + 0x3c44);
                }
                piVar19 = (int *)(param_1 + 0x389c);
                temp_v9 = *piVar19;
                temp_v34 = piVar19;
                dataTable04FindById();
                temp_v7 = *piVar19;
                temp_v4 = FUN_0022a030(0xffffffff,temp_v7);
                if ((temp_v4 == 0) || (FUN_004009d0(temp_v7,0), temp_v7 != 0)) {
                  temp_v16 = 0;
                }
                else {
                  temp_v16 = 1;
                }
                piVar19 = (int *)(param_1 + 0x3dac);
                *piVar19 = 0;
                temp_v4 = FUN_003df57c(*temp_v34,1);
                *(int *)(param_1 + *piVar16 * 4 + 0x3c98) = -temp_v4;
                if ((*(unsigned int *)(temp_v9 + 0x3c) & 0x200) != 0) {
                  temp_v4 = FUN_003e0024();
                  *piVar19 = -temp_v4;
                }
                if ((*(unsigned int *)(temp_v9 + 0x3c) & 0x400) != 0) {
                  temp_v4 = FUN_003e0024();
                  *piVar19 = -(temp_v4 - 1);
                }
                goto LAB_0021e5b0;
              }
              *(unsigned int *)(param_1 + 0x389c) = 1;
            }
            uiSpriteSelectAnim(param_1 + 0x11a0,0x1b);
            FUN_0020ad6c(param_1,0x12,1);
          }
          temp_v8 = 0x100020e;
        }
        else {
          if (temp_v4 != 0) break;
          temp_v4 = 1;
          FUN_001517b4(1,1);
          if (temp_v4 != 0) {
            *puVar20 = 1;
            *(unsigned int *)(param_1 + 0x3dac) = 0;
            *(unsigned int *)(param_1 + *piVar16 * 4 + 0x3c88) = 0;
            *(unsigned int *)(param_1 + *piVar16 * 4 + 0x3c98) = 0;
            temp_v8 = FUN_002cc9e0(param_1,1);
            screenSetContextHint(param_1,temp_v8,*piVar16);
            FUN_0020ad6c(param_1,1);
            FUN_002cc9e0(param_1,1);
            temp_v8 = 0x100020f;
            eventQueueAddUniqueIfValid(temp_v8);
            break;
          }
          temp_v4 = 9;
          FUN_001517b4(9,1);
          if (temp_v4 == 0) {
            temp_v4 = gameDataFlagTestBit(0x7f);
            if (temp_v4 == 0) {
LAB_0021e880:
              temp_v4 = FUN_002a4878(param_1 + *piVar16 * 100 + 0x38bc);
              temp_v27 = (int *)temp_v31;
              temp_v28 = 1;
              temp_v29 = 1;
              temp_v26 = (int *)0xffffffff;
              temp_v25 = (short **)0xffffffff;
              temp_v7 = param_1 + *piVar16 * 100 + 0x38bc;
              FUN_003450d4(temp_v7,0,param_1 + 0x480e,0xffffffff);
              if (temp_v7 != 0) {
                temp_v7 = FUN_002a4878(param_1 + *piVar16 * 100 + 0x38bc);
                if (temp_v7 != temp_v4) {
LAB_0021e950:
                  *(unsigned int *)(param_1 + *piVar16 * 4 + 0x3c98) = 0;
                  *(unsigned int *)(param_1 + *piVar16 * 4 + 0x3c88) = 0;
                  *(unsigned int *)(param_1 + 0x3dac) = 0;
                  FUN_0020ad6c(param_1,1);
                  temp_v8 = FUN_002cc9e0(param_1,1);
                  screenSetContextHint(param_1,temp_v8,*piVar16);
                  temp_v4 = FUN_002cc9e0(param_1,1);
                  if ((temp_v4 == 1 || temp_v4 == 2) || ((temp_v4 == 7 || temp_v4 == 3) || temp_v4 == 0xc)) {
                    FUN_0020a320(param_1);
                  }
                  break;
                }
              }
              else {
                temp_v4 = param_1 + *piVar16 * 100 + 0x38bc;
                FUN_00228b04(temp_v4,1);
                if (temp_v4 != 0) goto LAB_0021e950;
              }
              temp_v4 = resourceRunOperationIfUnblocked(*(unsigned int *)(param_1 + 0x3c40));
              temp_v7 = FUN_002a4894(*(unsigned int *)(param_1 + 0x3c40));
              piVar19 = (int *)(param_1 + 0x3dac);
              *(unsigned int *)(param_1 + *piVar16 * 4 + 0x3c98) = 0;
              temp_v5 = temp_v4 + temp_v7;
              *(unsigned int *)(param_1 + *piVar16 * 4 + 0x3c88) = 0;
              *piVar19 = 0;
              temp_v4 = FUN_002cc9e0(param_1,1);
              if (temp_v4 == 1) {
                if (*(short *)(param_1 + *piVar16 * 2 + 0x4210) != -1) {
                  if (temp_v5 != 0) {
                    temp_v4 = btlGetMainState();
                    if ((DAT_00573bcc & *(unsigned int *)(temp_v4 + 0x45ac)) == 0 &&
                        (DAT_00573bc8 & *(unsigned int *)(temp_v4 + 0x45a8)) == 0) {
                      temp_v5 = (unsigned int)*(unsigned short *)(param_1 + *piVar16 * 0x10 + temp_v5 * 2 + 0x3c42);
                    }
                    temp_v6 = temp_v5;
                    dataTable04FindById();
                    temp_v28 = temp_v6;
                    gameGetSlotTable();
                    if (*(short *)(param_1 + *piVar16 * 2 + 0x4210) != -2) {
                      temp_v4 = gameGetSlotRecord();
                    }
                    else {
                      temp_v4 = btlMainGetUnk14();
                    }
                    temp_v7 = FUN_004bcbb4(temp_v4,temp_v5);
                    *(int *)(param_1 + *piVar16 * 4 + 0x3c98) = -temp_v7;
                    if ((*(unsigned int *)(temp_v28 + 0x3c) & 0x200) != 0) {
                      temp_v11 = *(short *)(temp_v4 + 0x2a);
                      *piVar19 = -(int)temp_v11;
                      *(int *)(param_1 + *piVar16 * 4 + 0x3c88) = -(int)temp_v11;
                    }
                    if ((*(unsigned int *)(temp_v28 + 0x3c) & 0x400) != 0) {
                      temp_v4 = -(*(short *)(temp_v4 + 0x2a) - 1);
                      *piVar19 = temp_v4;
                      *(int *)(param_1 + *piVar16 * 4 + 0x3c88) = temp_v4;
                    }
                  }
                }
                else if (temp_v5 != 0) {
                  if ((temp_v5 == 1) && (temp_v4 = gameFlagIsSet(0x410), temp_v4 != 0)) {
                    temp_v6 = gameGetPlayerData();
                    temp_v16 = *(short *)(temp_v6 + 2) != 0;
                    if (temp_v16) {
                      temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
                    }
                    if (temp_v16 && temp_v6 != 0) break;
                  }
                  temp_v7 = 2;
                  temp_v4 = gameFlagIsSet(0x410);
                  if (temp_v4 != 0) {
                    temp_v6 = gameGetPlayerData();
                    temp_v16 = *(short *)(temp_v6 + 2) != 0;
                    if (temp_v16) {
                      temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
                    }
                    if (!temp_v16 || temp_v6 == 0) {
                      temp_v7 = 1;
                    }
                  }
                  else {
                    temp_v7 = 1;
                  }
                  temp_v4 = btlGetMainState();
                  if (!((*(unsigned int *)(temp_v4 + 0x45a8) & DAT_00573bc8) == 0 &&
                       (*(unsigned int *)(temp_v4 + 0x45ac) & DAT_00573bcc) == 0)) {
                    temp_v5 = (temp_v5 - temp_v7) + 1;
                  }
                  else {
                    temp_v5 = (unsigned int)*(unsigned short *)
                                   (param_1 + *piVar16 * 0x10 + (temp_v5 - temp_v7) * 2 + 0x3c44);
                  }
                  temp_v6 = temp_v5;
                  dataTable04FindById();
                  temp_v4 = FUN_003df57c(temp_v5,1);
                  *(int *)(param_1 + *piVar16 * 4 + 0x3c98) = -temp_v4;
                  if ((*(unsigned int *)(temp_v6 + 0x3c) & 0x200) != 0) {
                    temp_v4 = FUN_003e0024();
                    *piVar19 = -temp_v4;
                    *(int *)(param_1 + *piVar16 * 4 + 0x3c88) = -temp_v4;
                  }
                  if ((*(unsigned int *)(temp_v6 + 0x3c) & 0x400) != 0) {
                    temp_v4 = FUN_003e0024();
                    *piVar19 = -(temp_v4 - 1);
                    *(int *)(param_1 + *piVar16 * 4 + 0x3c88) = -(temp_v4 - 1);
                  }
                }
              }
              break;
            }
            temp_v4 = 10;
            FUN_001517b4(10,1);
            if (temp_v4 == 0) goto LAB_0021e880;
            *puVar20 = 10;
            FUN_0020ad6c(param_1,3,1);
            temp_v8 = 0x100020e;
            eventQueueAddUniqueIfValid(temp_v8);
            break;
          }
          *puVar20 = 9;
          FUN_0020ad6c(param_1,2,1);
          temp_v8 = 0x100020e;
        }
        eventQueueAddUniqueIfValid(temp_v8);
      }
      else {
        temp_v10 = FUN_001834a4(0xd,200);
        temp_v26 = (int *)(int)*(short *)(param_1 + 0x4822);
        temp_v27 = (int *)temp_v30;
        temp_v28 = 0;
        temp_v29 = 1;
        temp_v25 = (short **)(int)*(short *)(param_1 + 0x4820);
        temp_v7 = *(int *)(param_1 + 0x3c40);
        FUN_003450d4(temp_v7,temp_v10,param_1 + 0x4824,(int)*(short *)(param_1 + 0x481e));
        temp_v10 = (unsigned int)temp_v23;
        if (temp_v7 == 0) {
          temp_v7 = *(int *)(param_1 + 0x3c40);
          FUN_00228b04(temp_v7,1);
          temp_v10 = (unsigned int)temp_v23;
          if (temp_v7 == 0) goto LAB_0021e058;
        }
        FUN_00270104(param_1);
      }
    }
    break;
  case 10:
    goto LAB_0021ed20;
  case 0xb:
    FUN_0020ad6c(param_1,10,1);
    FUN_00270104(param_1);
LAB_0021ed20:
    temp_v4 = buttonHelpGetPanelMode();
    if (temp_v4 == 0) {
      FUN_00270104(param_1);
    }
    temp_v10 = (unsigned int)temp_v23;
    if (*(char *)(param_1 + 0x38b0) != '\0') break;
    temp_v10 = FUN_001834a4(0xd,200);
    temp_v26 = (int *)(int)*(short *)(param_1 + 0x4822);
    temp_v27 = (int *)temp_v30;
    temp_v28 = 0;
    temp_v29 = 1;
    piVar19 = (int *)(param_1 + 0x3c40);
    temp_v25 = (short **)(int)*(short *)(param_1 + 0x4820);
    temp_v4 = *piVar19;
    FUN_003450d4(temp_v4,temp_v10,param_1 + 0x4824,(int)*(short *)(param_1 + 0x481e));
    temp_v10 = (unsigned int)temp_v23;
    if (temp_v4 != 0) {
      FUN_00270104(param_1);
      break;
    }
    temp_v4 = *piVar19;
    FUN_00228b04(temp_v4,1);
    temp_v10 = (unsigned int)temp_v23;
    if (temp_v4 != 0) {
      FUN_00270104(param_1);
      break;
    }
    temp_v4 = 0;
    FUN_001517b4(0,1);
    temp_v10 = (unsigned int)temp_v23;
    if (temp_v4 != 0) {
      *puVar20 = 0;
    }
    temp_v7 = 0;
    if (temp_v4 != 0 || temp_v30[0] != '\0') {
      temp_v5 = 1;
      do {
        temp_v4 = flagValueIsPositive(temp_v5);
        if ((temp_v4 != 0) && (temp_v4 = FUN_0047fbb4(temp_v5), temp_v4 != 0)) {
          temp_v7 = temp_v7 + 1;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x3d);
      temp_v5 = 0x79f;
      do {
        temp_v4 = flagValueIsPositive(temp_v5);
        if ((temp_v4 != 0) && (temp_v4 = FUN_0047fbb4(temp_v5), temp_v4 != 0)) {
          temp_v7 = temp_v7 + 1;
        }
        temp_v10 = (unsigned int)temp_v23;
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x7df);
      if (temp_v7 < 1) {
        FUN_0020ad6c(param_1,1);
        temp_v8 = 0x100020e;
        eventQueueAddUniqueIfValid(temp_v8);
        break;
      }
      temp_v4 = resourceRunOperationIfUnblocked(*piVar19);
      temp_v7 = FUN_002a4894(*piVar19);
      temp_v6 = (unsigned int)*(unsigned short *)(param_1 + (temp_v7 + temp_v4) * 2 + 0x3ca8);
      temp_v5 = temp_v6;
      FUN_0040082c();
      if (temp_v5 == 0) {
        dataTable8FindRecord();
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v6 + 0x32);
        if (temp_v5 == 0) {
          FUN_0020ad6c(param_1,0x15,1);
          temp_v8 = 0x100020e;
          eventQueueAddUniqueIfValid(temp_v8);
          break;
        }
        dataTable04FindById();
        temp_v5 = *(unsigned int *)(temp_v5 + 0x28);
        if ((temp_v5 & 0x1e0) != 0) {
          temp_v6 = 1;
          temp_v16 = (temp_v5 & 0x1ff) >> 5 != 1;
          if (temp_v16) {
            temp_v6 = 6;
          }
          if (temp_v16 && temp_v6 != (temp_v5 & 0x1ff) >> 5) {
            FUN_0020ad6c(param_1,0x15,1);
            temp_v8 = 0x100020e;
            eventQueueAddUniqueIfValid(temp_v8);
            break;
          }
        }
        uiSpriteSelectAnim(param_1 + 0x11a0,0x1b);
        FUN_0020ad6c(param_1,0x12,1);
        temp_v8 = 0x100020e;
        eventQueueAddUniqueIfValid(temp_v8);
        break;
      }
      temp_v8 = 0x100020f;
      eventQueueAddUniqueIfValid(temp_v8);
      break;
    }
    temp_v4 = 1;
    FUN_001517b4(1,1);
    if (temp_v4 == 0) {
      temp_v4 = 9;
      FUN_001517b4(9,1);
      if (temp_v4 != 0) {
        *puVar20 = 9;
        FUN_0020ad6c(param_1,2,1);
        eventQueueAddUniqueIfValid(0x100020e);
        break;
      }
      temp_v4 = gameDataFlagTestBit(0x7f);
      if (temp_v4 != 0) {
        temp_v4 = 10;
        FUN_001517b4(10,1);
        if (temp_v4 != 0) {
          *puVar20 = 10;
          FUN_0020ad6c(param_1,3,1);
          eventQueueAddUniqueIfValid(0x100020e);
          break;
        }
      }
      temp_v4 = FUN_002a4878(param_1 + *piVar16 * 100 + 0x38bc);
      temp_v27 = (int *)temp_v31;
      temp_v28 = 1;
      temp_v29 = 1;
      temp_v26 = (int *)0xffffffff;
      temp_v25 = (short **)0xffffffff;
      temp_v7 = param_1 + *piVar16 * 100 + 0x38bc;
      FUN_003450d4(temp_v7,0,param_1 + 0x480e,0xffffffff);
      temp_v9 = param_1 + *piVar16 * 100 + 0x38bc;
      if (temp_v7 == 0) {
        FUN_00228b04(temp_v9,1);
        if (temp_v9 != 0) goto LAB_0021f098;
        break;
      }
      temp_v7 = FUN_002a4878();
      if (temp_v7 == temp_v4) break;
LAB_0021f098:
      FUN_0020ad6c(param_1,1);
      temp_v8 = FUN_002cc9e0(param_1,1);
      screenSetContextHint(param_1,temp_v8,*piVar16);
      temp_v4 = FUN_002cc9e0(param_1,1);
      if ((temp_v4 != 1 && temp_v4 != 2) && ((temp_v4 != 7 && temp_v4 != 3) && temp_v4 != 0xc)) break;
      FUN_0020a320(param_1);
      break;
    }
    *puVar20 = 1;
    temp_v8 = FUN_002cc9e0(param_1,1);
    screenSetContextHint(param_1,temp_v8,*piVar16);
    FUN_0020ad6c(param_1,1);
    temp_v8 = 0x100020f;
    eventQueueAddUniqueIfValid(temp_v8);
    break;
  case 0xc:
    goto LAB_0021f10c;
  case 0xd:
    FUN_0020ad6c(param_1,0xc,1);
    FUN_00270104(param_1);
LAB_0021f10c:
    if (*(char *)(param_1 + 0x38b0) != '\0') break;
    temp_v8 = FUN_001834a4(0xd,200);
    temp_v26 = (int *)(int)*(short *)(param_1 + 0x4822);
    temp_v27 = (int *)temp_v30;
    temp_v28 = 0;
    temp_v29 = 1;
    temp_v25 = (short **)(int)*(short *)(param_1 + 0x4820);
    temp_v4 = *(int *)(param_1 + 0x3c40);
    FUN_003450d4(temp_v4,temp_v8,param_1 + 0x4824,(int)*(short *)(param_1 + 0x481e));
    if (temp_v4 != 0) {
      FUN_00270104(param_1);
      break;
    }
    temp_v4 = *(int *)(param_1 + 0x3c40);
    FUN_00228b04(temp_v4,1);
    if (temp_v4 != 0) {
      FUN_00270104(param_1);
      break;
    }
    temp_v4 = 0;
    FUN_001517b4(0,1);
    if (temp_v4 != 0) {
      *puVar20 = 0;
    }
    if (temp_v4 != 0 || temp_v30[0] != '\0') {
      uiSpriteSelectAnim(param_1 + 0x11a0,0x1b);
      FUN_0020ad6c(param_1,0x12,1);
      eventQueueAddUniqueIfValid(0x100020e);
      break;
    }
    temp_v4 = 1;
    FUN_001517b4(1,1);
    if (temp_v4 == 0) {
      temp_v4 = 9;
      FUN_001517b4(9,1);
      if (temp_v4 == 0) {
        temp_v4 = gameDataFlagTestBit(0x7f);
        if (temp_v4 != 0) {
          temp_v4 = 10;
          FUN_001517b4(10,1);
          if (temp_v4 == 0) goto LAB_0021f28c;
          *puVar20 = 10;
          FUN_0020ad6c(param_1,3,1);
          eventQueueAddUniqueIfValid(0x100020e);
          break;
        }
LAB_0021f28c:
        temp_v4 = FUN_002a4878(param_1 + *piVar16 * 100 + 0x38bc);
        temp_v27 = (int *)temp_v31;
        temp_v26 = (int *)0xffffffff;
        temp_v28 = 1;
        temp_v25 = (short **)0xffffffff;
        temp_v29 = 1;
        temp_v7 = param_1 + *piVar16 * 100 + 0x38bc;
        FUN_003450d4(temp_v7,0,param_1 + 0x480e,0xffffffff);
        temp_v9 = param_1 + *piVar16 * 100 + 0x38bc;
        if (temp_v7 == 0) {
          FUN_00228b04(temp_v9,1);
          if (temp_v9 != 0) goto LAB_0021f338;
          break;
        }
        temp_v7 = FUN_002a4878();
        if (temp_v7 == temp_v4) break;
LAB_0021f338:
        FUN_0020ad6c(param_1,1);
        temp_v8 = FUN_002cc9e0(param_1,1);
        screenSetContextHint(param_1,temp_v8,*piVar16);
        temp_v4 = FUN_002cc9e0(param_1,1);
        if ((temp_v4 != 1 && temp_v4 != 2) && ((temp_v4 != 7 && temp_v4 != 3) && temp_v4 != 0xc)) break;
        FUN_0020a320(param_1);
        break;
      }
      *puVar20 = 9;
      FUN_0020ad6c(param_1,2,1);
      temp_v8 = 0x100020e;
      eventQueueAddUniqueIfValid(temp_v8);
      break;
    }
    *puVar20 = 1;
    temp_v8 = FUN_002cc9e0(param_1,1);
    screenSetContextHint(param_1,temp_v8,*piVar16);
    FUN_0020ad6c(param_1,1);
    temp_v8 = 0x100020f;
    eventQueueAddUniqueIfValid(temp_v8);
    break;
  case 0xe:
    temp_v4 = *temp_v37;
    FUN_003eb200();
    if (temp_v4 == 0) {
      temp_v36 = (int *)0x1;
    }
    else if ((*piVar21 >= 0x18) &&
            (temp_v36 = (int *)FUN_00163aa4(param_1 + 0x96c), *piVar21 == 0x18)) {
      temp_v4 = *temp_v37;
      if (((DAT_00573bbc & *(unsigned int *)(temp_v4 + 0x45a4)) == 0 &&
           (DAT_00573bb8 & *(unsigned int *)(temp_v4 + 0x45a0)) == 0) &&
         ((*(unsigned int *)(temp_v4 + 0x45a4) & DAT_00573bc4) == 0 &&
          (DAT_00573bc0 & *(unsigned int *)(temp_v4 + 0x45a0)) == 0)) {
        FUN_003eed44(temp_v4);
      }
    }
    temp_v4 = 0;
    do {
      if (temp_v4 * 3 <= *piVar21) {
        FUN_00167458(param_1 + temp_v4 * 0x8c + 0x73c,0);
        temp_v10 = (unsigned int)temp_v23;
        if (temp_v4 == 3) {
          if ((*(char *)(param_1 + 0x96a) != '\0') && (temp_v36 != (int *)0x0)) {
            FUN_0020ad6c(param_1,0xf,1);
            temp_v4 = *temp_v37;
            temp_v5 = ~DAT_00573bb8;
            *(unsigned int *)(temp_v4 + 0x45a4) = *(unsigned int *)(temp_v4 + 0x45a4) & ~DAT_00573bbc;
            *(unsigned int *)(temp_v4 + 0x45a0) = *(unsigned int *)(temp_v4 + 0x45a0) & temp_v5;
          }
          break;
        }
      }
      temp_v10 = (unsigned int)temp_v23;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    break;
  case 0xf:
    if (*(char *)(param_1 + 0x38b3) != '\0') goto LAB_00220474;
    FUN_0020ad6c(param_1,0x1e,1);
    break;
  case 0x10:
    if (*(char *)(param_1 + 0x38ba) != '\0') goto LAB_00220474;
    temp_v4 = uiSearchSecondary(param_1 + *piVar16 * 100 + 0x38bc);
    temp_v7 = uiSearchPrimary(temp_v34);
    FUN_00163aa4(param_1 + 0x20);
    temp_v9 = 0;
    do {
      if ((temp_v4 <= temp_v9) || (temp_v9 <= *(int *)(param_1 + 0x3878) - 1)) {
        FUN_00163aa4(param_1 + temp_v9 * 0x8c + 0x138);
      }
      temp_v10 = (unsigned int)temp_v23;
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 8);
    if ((((*piVar21 >= 6) && (temp_v4 <= *piVar21 - 1)) &&
        (*(char *)(param_1 + temp_v4 * 0x8c + 0x136) != '\0')) &&
       ((temp_v7 <= *piVar21 - 1 && (*(char *)(param_1 + temp_v7 * 0x8c + 0xe56) != '\0')))) {
      FUN_0020ad6c(param_1,*(unsigned int *)(param_1 + 0x3888),0);
    }
    break;
  case 0x11:
    if (*(char *)(param_1 + 0x38b1) == '\0') goto LAB_00220474;
    FUN_0020acd8(param_1,*piVar16,(int)*(char *)(param_1 + 0x38b2));
    break;
  case 0x12:
    FUN_0021a6c8(param_1);
    temp_v4 = FUN_00163aa4(param_1 + 0x11a0);
    if (temp_v4 != 0) {
      FUN_0020ad6c(param_1,0x13,0);
      sysPlaySe(0x3a);
    }
    break;
  case 0x13:
    piVar16 = (int *)(param_1 + 0x4ba4);
    temp_v7 = *piVar16;
    temp_v2 = 0;
    *piVar16 = temp_v7 + 1;
    if (temp_v7 + 1 >= 0x29) {
      *piVar16 = 0;
    }
    *(unsigned char *)(param_1 + 0x4855) = 0;
    if (*(char *)(param_1 + 0x38b0) != '\0') goto LAB_00220474;
    if (temp_v4 >= 0) {
      temp_v7 = ifTouchGetSelectionMode();
      if ((temp_v7 != 1) && (temp_v7 = ifTouchGetSelectionMode(), temp_v7 != 2)) {
        temp_v7 = ifTouchGetSelectionMode();
        if (temp_v7 != 6) goto LAB_0021f708;
        if (temp_v4 != 0x11) {
          *puVar20 = temp_v2;
        }
      }
      else {
        if (temp_v4 == 0x11) {
          temp_v2 = 1;
          *puVar20 = temp_v2;
          break;
        }
        if (*(char *)(param_1 + 0x4854) == '\0') {
          temp_v5 = *(unsigned int *)(param_1 + 0x4850);
          if (0 < (int)temp_v5) {
            temp_v6 = temp_v5 & 1;
            if (temp_v6 == 1) {
              *(unsigned char *)(param_1 + 0x4894) = 0;
            }
            temp_v12 = (unsigned int)(temp_v6 == 1);
            if ((int)temp_v6 < (int)temp_v5) {
              do {
                *(unsigned char *)(param_1 + temp_v12 * 0x40 + 0x4894) = 0;
                *(unsigned char *)(param_1 + (temp_v12 + 1) * 0x40 + 0x4894) = 0;
                temp_v6 = temp_v6 + 2;
                temp_v12 = temp_v12 + 2;
              } while ((int)temp_v6 < (int)*(unsigned int *)(param_1 + 0x4850));
            }
          }
          temp_v4 = param_1 + temp_v4 * 0x40;
          if (*(char *)(temp_v4 + 0x43f0) != '\0') {
            *(unsigned char *)(temp_v4 + 0x4414) = 1;
            *(unsigned char *)(param_1 + 0x4855) = 1;
          }
        }
      }
    }
    else {
LAB_0021f708:
      temp_v2 = 0;
      temp_v4 = 0;
      FUN_001517b4(0,1);
      if (temp_v4 == 0) {
        temp_v2 = 1;
        temp_v4 = 1;
        FUN_001517b4(1,1);
        if (temp_v4 == 0) break;
      }
      *puVar20 = temp_v2;
    }
    break;
  case 0x16:
    temp_v7 = 0;
    temp_v4 = widgetSubCallIfVisible(param_1 + 0x3bdc);
    temp_v10 = (unsigned int)temp_v23;
    if (0 < temp_v4) {
      do {
        temp_v4 = recordGetModeForId((int)*(short *)(param_1 + temp_v7 * 2 + 0x4846));
        temp_v10 = (unsigned int)temp_v23;
        if (temp_v4 == 6) {
          temp_v30[0] = '\x01';
          break;
        }
        temp_v7 = temp_v7 + 1;
        temp_v4 = widgetSubCallIfVisible(param_1 + 0x3bdc);
        temp_v10 = (unsigned int)temp_v23;
      } while (temp_v7 < temp_v4);
    }
    temp_v4 = 0;
    FUN_001517b4(0,1);
    if (temp_v4 != 0) {
      *puVar20 = 0;
    }
    if (!(temp_v4 == 0 && temp_v30[0] == '\0')) {
      temp_v2 = 0;
      *puVar20 = temp_v2;
    }
    else {
      temp_v2 = 1;
      temp_v4 = 1;
      FUN_001517b4(1,1);
      if (temp_v4 != 0) {
        *puVar20 = temp_v2;
      }
    }
    break;
  case 0x18:
    if (*piVar21 < 9) goto LAB_00220474;
    FUN_0020ad6c(param_1,*(unsigned int *)(param_1 + 0x3888),1);
    break;
  case 0x1c:
    if (*piVar21 < 9) goto LAB_00220474;
    FUN_0019de98(0,0xf4f4f4ff);
    FUN_0020ad6c(param_1,0x1d,0);
    break;
  case 0x1f:
    if (*(char *)(param_1 + 0x38b5) != '\0') {
      FUN_0020ad6c(param_1,0x20,1);
    }
    else if (((*(char *)(param_1 + 0x38b6) != '\0') && (temp_v4 = FUN_004c87e0(), temp_v4 != 0)) ||
            (temp_v4 = FUN_004c87e0(), temp_v4 != 0)) {
      *piVar21 = 0;
    }
    else if (*piVar21 >= 0x1c) {
      if (*piVar21 == 0x1c) {
        if (*(char *)(param_1 + 0x4b0f) == '\0') {
          uiSpriteSelectAnim(param_1 + 0x1344,0x1c);
          uiSpriteSelectAnim(param_1 + 0x13d0,0x1d);
        }
        else {
LAB_0021fa24:
          if (*(char *)(param_1 + 0x4b1a) != '\0') {
            if (*(char *)(param_1 + 0x4b1b) != '\0') {
              piVar16 = (int *)(param_1 + 0x4b24);
              temp_v4 = *piVar16;
              if (*(char *)(param_1 + 0x4b20) == '\0') {
                if ((temp_v4 < 0xb) && (*(int *)(param_1 + 0x4b28) == 1)) {
                  temp_v4 = temp_v4 + 1;
                }
                else {
                  piVar19 = (int *)(param_1 + 0x4b28);
                  if ((*piVar19 == 0) && (temp_v4 = FUN_00163aa4(param_1 + 0x13d0), temp_v4 == 0))
                  break;
                  temp_v4 = (int)*(short *)(param_1 + 0x4b14);
                  if ((((temp_v4 != 0) && (*(char *)(param_1 + 0x4b18) == '\0')) &&
                      (devilIsTextureLoaded(temp_v4,1), temp_v4 != 0)) && (*piVar19 == 0)) {
                    FUN_0038b3f8((int)*(short *)(param_1 + 0x4b14),1);
                  }
                  uiSpriteSelectAnim(param_1 + 0x1344,0x1c);
                  if (*piVar19 == 1) {
                    uiSpriteSetImageKeyframe(param_1 + 0x13d0,0x31,0);
                  }
                  temp_v4 = 0;
                  *(unsigned char *)(param_1 + 0x4b20) = 1;
                }
                *piVar16 = temp_v4;
                break;
              }
              if ((temp_v4 >= 0x1e) || (*(int *)(param_1 + 0x4b28) != 0)) {
                if (temp_v4 >= 4) {
                  if (temp_v4 >= 0x1e) {
                    if (*(int *)(param_1 + 0x4b28) != 0) goto LAB_0021fbdc;
                  }
                  else {
                    if (temp_v4 < 4) break;
LAB_0021fbdc:
                    if (*(int *)(param_1 + 0x4b28) != 1) break;
                  }
                  FUN_00163aa4(param_1 + 0x13d0);
                  temp_v4 = FUN_00163aa4(param_1 + 0x1344);
                  if (temp_v4 == 0) break;
                  uiSpriteSetImageKeyframe(param_1 + 0x2208,0x2c,0);
                  FUN_0020ad6c(param_1,0x20,1);
                  temp_v4 = (int)*(short *)(param_1 + 0x4b14);
                  if (((temp_v4 != 0) && (*(char *)(param_1 + 0x4b18) == '\0')) &&
                     ((devilIsTextureLoaded(temp_v4,1), temp_v4 != 0 && (*(int *)(param_1 + 0x4b28) == 1)))) {
                    FUN_0038b3f8((int)*(short *)(param_1 + 0x4b14),1);
                  }
                  temp_v2 = 0;
                  puVar20 = (unsigned char *)(param_1 + 0x4b0f);
                  *(unsigned char *)(param_1 + 0x4b1c) = 1;
                  *puVar20 = temp_v2;
                  break;
                }
                if (*(int *)(param_1 + 0x4b28) != 1) break;
                FUN_00163aa4(param_1 + 0x13d0);
              }
              *piVar16 = *piVar16 + 1;
            }
            else {
              if (*(int *)(param_1 + 0x4b28) != 1) {
                uiSpriteSelectAnim(param_1 + 0x13d0,0x1d);
              }
              temp_v2 = 1;
              puVar20 = (unsigned char *)(param_1 + 0x4b1c);
              *(unsigned char *)(param_1 + 0x4b1b) = 1;
              *puVar20 = temp_v2;
            }
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x4b0f) != '\0') goto LAB_0021fa24;
        temp_v4 = FUN_00163aa4(param_1 + 0x1344);
        if ((temp_v4 != 0) && (temp_v4 = FUN_00163aa4(param_1 + 0x13d0), temp_v4 != 0)) {
          uiSpriteSetImageKeyframe(param_1 + 0x2208,0x2c,0);
          FUN_0020ad6c(param_1,0x20,1);
        }
      }
    }
    else {
      FUN_00167458(param_1 + 0x1344,0);
      FUN_00167458(param_1 + 0x13d0,0);
    }
    break;
  case 0x20:
    FUN_00163aa4(param_1 + 0x2208);
    if (*(char *)(param_1 + 0x38b5) != '\0') {
      *(unsigned char *)(param_1 + 0x4b0f) = 0;
      *(unsigned char *)(param_1 + 0x4b1c) = 1;
    }
    break;
  case 0x22:
    temp_v4 = btlGetMainState();
    if ((temp_v4 != 0) && (*(short *)(temp_v4 + 0x2000) < 4)) {
      temp_v36 = (int *)0xffffffff;
      piVar16 = (int *)0x0;
      temp_v29 = uRam00573ba4;
      temp_v28 = 4;
      do {
        puVar22 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + (int)piVar16 * 0x408);
        temp_v5 = puVar22[1];
        temp_v6 = *puVar22;
        if (((temp_v5 & uRam00573b9c) != 0 || (temp_v6 & uRam00573b98) != 0) &&
           ((temp_v6 & uRam00573ba0) == 0 && (temp_v5 & uRam00573ba4) == 0)) {
          temp_v36 = piVar16;
        }
        piVar16 = (int *)((int)piVar16 + 1);
      } while ((int)piVar16 < 4);
      if (temp_v36 < (int *)0x3) {
        *(int *)(param_1 + 0x3c2c) = (int)temp_v36 + 1;
        *(int *)(param_1 + 0x3c20) = (int)temp_v36 + 1;
      }
    }
    temp_v7 = param_1 + 0x3bdc;
    temp_v9 = FUN_002a4878();
    temp_v28 = 1;
    temp_v29 = 1;
    temp_v27 = (int *)temp_v30;
    temp_v26 = (int *)0xffffffff;
    temp_v25 = (short **)0xffffffff;
    temp_v4 = temp_v7;
    FUN_003450d4(temp_v7,0,param_1 + 0x4846,0xffffffff);
    temp_v10 = (unsigned int)temp_v23;
    if (temp_v4 != 0) {
      temp_v4 = FUN_002a4878(temp_v7);
      if (temp_v4 != temp_v9) {
        uiSpriteSelectAnim(param_1 + 0xac,1);
        temp_v4 = FUN_002cc9e0(param_1,1);
        *(unsigned int *)(param_1 + 0x3c88) = 0;
        *(unsigned int *)(param_1 + 0x3c8c) = 0;
        *(unsigned int *)(param_1 + 0x3c90) = 0;
        *(unsigned int *)(param_1 + 0x3c94) = 0;
        if (temp_v4 != 7) {
          btlCommandResolveSelectedTarget(param_1);
        }
        else {
          *(unsigned int *)(param_1 + 0x3c98) = 0;
          *(unsigned int *)(param_1 + 0x3c9c) = 0;
          *(unsigned int *)(param_1 + 0x3ca0) = 0;
          *(unsigned int *)(param_1 + 0x3ca4) = 0;
          temp_v34 = (int *)((unsigned int)temp_v34 & 0xffff0000);
          temp_v27 = (int *)((unsigned int)temp_v27 & 0xffff0000);
          FUN_002ccde8(param_1,&temp_v34,&temp_v27);
          temp_v4 = FUN_002a4878(temp_v7);
          if (temp_v4 != 0) {
            temp_v7 = gameGetSlotTable();
            temp_v9 = param_1 + temp_v4 * 4;
            btlItemComputeValues((int)*(char *)(temp_v7 + temp_v4 + 0x1c9f),(int)(short)(int)temp_v27,temp_v9 + 0x3c88
                         ,temp_v9 + 0x3c98);
            temp_v7 = gameGetSlotTable();
            if (*(char *)(temp_v7 + temp_v4 + 0x1c9f) < '\0') {
              dataTable8FindRecord((int)(short)(int)temp_v27);
            }
          }
          else {
            btlItemComputeValues(0xffffffff,(int)(short)(int)temp_v27,param_1 + 0x3c88,param_1 + 0x3c98);
          }
        }
      }
    }
    else {
      temp_v4 = 0;
      FUN_001517b4(0,1);
      temp_v10 = (unsigned int)temp_v23;
      if (temp_v4 != 0) {
        *puVar20 = 0;
      }
      if (!(temp_v4 == 0 && temp_v30[0] == '\0')) {
        temp_v4 = FUN_002a4878(temp_v7);
        if (*(char *)(temp_v4 + param_1 + 0x3c84) != '\0') {
          temp_v8 = FUN_002a4878(temp_v7);
          *(unsigned int *)(param_1 + 0x3898) = temp_v8;
          temp_v4 = FUN_002cc9e0(param_1,1);
          goto joined_r0x0022027c;
        }
      }
      else {
        temp_v4 = 1;
        FUN_001517b4(1,1);
        temp_v10 = (unsigned int)temp_v23;
        if (temp_v4 != 0) {
          *puVar20 = 1;
          *(unsigned int *)(param_1 + 0x3c88) = 0;
          *(unsigned int *)(param_1 + 0x3c8c) = 0;
          *(unsigned int *)(param_1 + 0x3c90) = 0;
          *(unsigned int *)(param_1 + 0x3c94) = 0;
          *(unsigned int *)(param_1 + 0x3c98) = 0;
          *(unsigned int *)(param_1 + 0x3c9c) = 0;
          *(unsigned int *)(param_1 + 0x3ca0) = 0;
          *(unsigned int *)(param_1 + 0x3ca4) = 0;
          FUN_0020ad6c(param_1,*(unsigned int *)(param_1 + 0x3880),1);
          temp_v8 = 0x100020f;
          eventQueueAddUniqueIfValid(temp_v8);
          break;
        }
        temp_v4 = temp_v7;
        FUN_00228b04(temp_v7,1);
        temp_v10 = (unsigned int)temp_v23;
        if (temp_v4 != 0) {
          do {
            uiSpriteSelectAnim(param_1 + 0xac,1);
            temp_v4 = FUN_002cc9e0(param_1,1);
            *(unsigned int *)(param_1 + 0x3c88) = 0;
            *(unsigned int *)(param_1 + 0x3c8c) = 0;
            *(unsigned int *)(param_1 + 0x3c90) = 0;
            *(unsigned int *)(param_1 + 0x3c94) = 0;
            if (temp_v4 != 7) {
              temp_v4 = param_1;
              btlCommandResolveSelectedTarget();
              temp_v10 = (unsigned int)temp_v23;
              if (temp_v4 != 0) break;
            }
            else {
              *(unsigned int *)(param_1 + 0x3c98) = 0;
              *(unsigned int *)(param_1 + 0x3c9c) = 0;
              *(unsigned int *)(param_1 + 0x3ca0) = 0;
              *(unsigned int *)(param_1 + 0x3ca4) = 0;
              temp_v28 = temp_v28 & 0xffff0000;
              temp_v25 = (short **)((unsigned int)temp_v25 & 0xffff0000);
              FUN_002ccde8(param_1,&temp_v28,&temp_v25);
              temp_v4 = FUN_002a4878(temp_v7);
              temp_v10 = (unsigned int)temp_v23;
              if (temp_v4 == 0) {
                btlItemComputeValues(0xffffffff,(int)(short)(int)temp_v25,param_1 + 0x3c88,param_1 + 0x3c98);
                break;
              }
              temp_v9 = gameGetSlotTable();
              temp_v13 = param_1 + temp_v4 * 4;
              btlItemComputeValues((int)*(char *)(temp_v9 + temp_v4 + 0x1c9f),(int)(short)(int)temp_v25,
                           temp_v13 + 0x3c88,temp_v13 + 0x3c98);
              temp_v9 = gameGetSlotTable();
              temp_v10 = (unsigned int)temp_v23;
              if (-1 < *(char *)(temp_v9 + temp_v4 + 0x1c9f)) break;
              temp_v4 = (int)(short)(int)temp_v25;
              dataTable8FindRecord();
              temp_v10 = (unsigned int)temp_v23;
              if ((((temp_v4 == 0) || ((*(unsigned char *)(temp_v4 + 0x3a) & 0x80) != 0)) ||
                  (*(short *)(temp_v4 + 0x32) != 0)) || ((*(unsigned char *)(temp_v4 + 0x3a) & 0x7f) == 1))
              break;
            }
            FUN_00228b04(temp_v7,0);
          } while( 1 );
        }
      }
    }
    break;
  case 0x23:
    temp_v7 = 0;
    temp_v4 = widgetSubCallIfVisible(param_1 + 0x3bdc);
    temp_v10 = (unsigned int)temp_v23;
    if (0 < temp_v4) {
      do {
        temp_v4 = recordGetModeForId((int)*(short *)(param_1 + temp_v7 * 2 + 0x4846));
        temp_v10 = (unsigned int)temp_v23;
        if (temp_v4 == 6) {
          temp_v30[0] = '\x01';
          break;
        }
        temp_v7 = temp_v7 + 1;
        temp_v4 = widgetSubCallIfVisible(param_1 + 0x3bdc);
        temp_v10 = (unsigned int)temp_v23;
      } while (temp_v7 < temp_v4);
    }
    temp_v4 = 0;
    FUN_001517b4(0,1);
    if (temp_v4 != 0) {
      *puVar20 = 0;
    }
    if (temp_v4 != 0 || temp_v30[0] != '\0') {
      *(unsigned int *)(param_1 + 0x3898) = 9999;
      temp_v4 = FUN_002cc9e0(param_1,1);
joined_r0x0022027c:
      if (temp_v4 != 2) {
        FUN_0020ad6c(param_1,0x26,1);
      }
      else {
        FUN_0020ad6c(param_1,0x25,1);
      }
      *(unsigned int *)(param_1 + 0x3c88) = 0;
      *(unsigned int *)(param_1 + 0x3c8c) = 0;
      *(unsigned int *)(param_1 + 0x3c90) = 0;
      *(unsigned int *)(param_1 + 0x3c94) = 0;
      *(unsigned int *)(param_1 + 0x3c98) = 0;
      *(unsigned int *)(param_1 + 0x3c9c) = 0;
      *(unsigned int *)(param_1 + 0x3ca0) = 0;
      *(unsigned int *)(param_1 + 0x3ca4) = 0;
      temp_v8 = 0x100020e;
      eventQueueAddUniqueIfValid(temp_v8);
      break;
    }
    temp_v4 = 1;
    FUN_001517b4(1,1);
    if (temp_v4 == 0) break;
    *puVar20 = 1;
    *(unsigned int *)(param_1 + 0x3c88) = 0;
    *(unsigned int *)(param_1 + 0x3c8c) = 0;
    *(unsigned int *)(param_1 + 0x3c90) = 0;
    *(unsigned int *)(param_1 + 0x3c94) = 0;
    *(unsigned int *)(param_1 + 0x3c98) = 0;
    *(unsigned int *)(param_1 + 0x3c9c) = 0;
    *(unsigned int *)(param_1 + 0x3ca0) = 0;
    *(unsigned int *)(param_1 + 0x3ca4) = 0;
    FUN_0020ad6c(param_1,*(unsigned int *)(param_1 + 0x3880),1);
    temp_v8 = 0x100020f;
    eventQueueAddUniqueIfValid(temp_v8);
    break;
  case 0x24:
    temp_v4 = recordGetModeForId((int)*(short *)(param_1 + *piVar16 * 2 + 0x4846));
    if (temp_v4 == 6) {
      temp_v30[0] = '\x01';
    }
    temp_v4 = 0;
    FUN_001517b4(0,1);
    if (temp_v4 != 0) {
      *puVar20 = 0;
    }
    if (temp_v4 != 0 || temp_v30[0] != '\0') {
      temp_v8 = FUN_002a4878(param_1 + 0x3bdc);
      *(unsigned int *)(param_1 + 0x3898) = temp_v8;
      temp_v4 = FUN_002cc9e0(param_1,1);
      if (temp_v4 != 2) {
        FUN_0020ad6c(param_1,0x26,1);
      }
      else {
        FUN_0020ad6c(param_1,0x25,1);
      }
      temp_v8 = 0x100020e;
      eventQueueAddUniqueIfValid(temp_v8);
      break;
    }
    temp_v4 = 1;
    FUN_001517b4(1,1);
    if (temp_v4 != 0) {
      *puVar20 = 1;
      FUN_0020ad6c(param_1,*(unsigned int *)(param_1 + 0x3880),1);
      temp_v8 = 0x100020f;
      eventQueueAddUniqueIfValid(temp_v8);
    }
    break;
  case 0x25:
    temp_v4 = panelStateIs0();
    if (temp_v4 == 1) {
      messageDismissNumericBanner(1);
      FUN_0020ad6c(param_1,0x26,0);
    }
    break;
  case 0x27:
    temp_v4 = FUN_00163aa4(param_1 + 0x12b8);
    if (temp_v4 != 0) {
      FUN_0020ad6c(param_1,*(unsigned int *)(param_1 + 0x3880),0);
    }
    break;
  case 0x2a:
    if (*(char *)(param_1 + 0x38b4) != '\0') goto LAB_00220474;
    uiSpriteSelectAnim(param_1 + 0x20,0x1b);
    temp_v4 = 0;
    do {
      uiSpriteSelectAnim(param_1 + temp_v4 * 0x8c + 0x138,0x1b);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    temp_v4 = 0;
    do {
      uiSpriteSetImageKeyframe(param_1 + temp_v4 * 0x8c + 0xe58,0);
      temp_v10 = (unsigned int)temp_v23;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 6);
    *(unsigned int *)(param_1 + 0x3888) = 0x11;
    FUN_0020ad6c(param_1,0x10,1);
    break;
  case 0x2b:
    FUN_00163aa4(param_1 + 0x12b8);
    temp_v4 = stateHolderIsMissingOrState0();
    if (temp_v4 != 0) {
      statusDownGetValue();
      FUN_0022e774();
      FUN_0020ad6c(param_1,0x2c,1);
    }
    break;
  case 0x2c:
    temp_v4 = FUN_0026c3a0();
    if (temp_v4 != 0) {
      FUN_00333f6c();
      statusIconSetKind(param_1,0);
      FUN_0020ad6c(param_1,1);
    }
    break;
  case 0x2d:
    temp_v7 = param_1 + 0x3bdc;
    temp_v9 = FUN_002a4878();
    temp_v28 = 1;
    temp_v29 = 1;
    temp_v27 = (int *)temp_v30;
    temp_v26 = (int *)0xffffffff;
    temp_v25 = (short **)0xffffffff;
    temp_v4 = temp_v7;
    FUN_003450d4(temp_v7,0,param_1 + 0x4846,0xffffffff);
    temp_v10 = (unsigned int)temp_v23;
    if (temp_v4 != 0) {
      temp_v4 = FUN_002a4878(temp_v7);
      if (temp_v4 != temp_v9) {
        uiSpriteSelectAnim(param_1 + 0xac,1);
        temp_v4 = FUN_002a4878(temp_v7);
        *piVar16 = temp_v4;
        FUN_0020d3d4(param_1);
      }
    }
    else {
      temp_v4 = temp_v7;
      FUN_00228b04(temp_v7,1);
      temp_v10 = (unsigned int)temp_v23;
      if (temp_v4 != 0) {
        uiSpriteSelectAnim(param_1 + 0xac,1);
        temp_v4 = FUN_002a4878(temp_v7);
        *piVar16 = temp_v4;
        FUN_0020d3d4(param_1);
        break;
      }
      temp_v4 = 0;
      FUN_001517b4(0,1);
      temp_v10 = (unsigned int)temp_v23;
      if (temp_v4 != 0) {
        *puVar20 = 0;
      }
      if (temp_v4 != 0 || temp_v30[0] != '\0') {
        temp_v4 = FUN_002a4878(temp_v7);
        temp_v10 = (unsigned int)temp_v23;
        if (temp_v4 != 0) {
          temp_v7 = gameGetSlotTable();
          temp_v10 = (unsigned int)temp_v23;
          if (*(char *)(temp_v7 + temp_v4 + 0x1ca0) < '\0') break;
          temp_v0 = *(char *)(param_1 + temp_v4 + 0x41e8);
        }
        else {
          temp_v0 = *(char *)(param_1 + 0x41e8);
        }
        if (temp_v0 == '\0') {
          *piVar16 = temp_v4;
          *(unsigned char *)(param_1 + 0x38b8) = 0;
          FUN_0021a9e8(param_1);
          temp_v4 = 0;
          do {
            uiSpriteSetImageKeyframe(param_1 + temp_v4 * 0x8c + 0xe58,0);
            temp_v10 = (unsigned int)temp_v23;
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 6);
          FUN_0020acd8(param_1,*piVar16,1);
          temp_v8 = 0x100020e;
          eventQueueAddUniqueIfValid(temp_v8);
        }
      }
    }
    break;
  case 0x2e:
    temp_v4 = FUN_00163aa4(param_1 + 0x12b8);
    temp_v10 = (unsigned int)temp_v23;
    if (temp_v4 != 0) {
      temp_v4 = 0;
      do {
        temp_v7 = *(int *)(param_1 + temp_v4 * 4 + 0x4bb0);
        if (temp_v7 != 0) {
          temp_v7 = (int)(short)temp_v7;
          devilIsTextureLoaded(temp_v7,1);
          temp_v10 = (unsigned int)temp_v23;
          if (temp_v7 == 0) goto LAB_002209c0;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      statusIconSetKind(param_1,0xc);
      FUN_0023f328(param_1,0,1);
      FUN_0023f328(param_1,1);
      FUN_0023f328(param_1,2,1);
      FUN_0023f328(param_1,3,1);
      FUN_0023f328(param_1,4,1);
      temp_v4 = 1;
      do {
        if (((*(short *)(param_1 + temp_v4 * 2 + 0x4210) < 0) || (temp_v7 = gameGetSlotRecord(), temp_v7 == 0))
           || (temp_v7 = bitsAt60Test(temp_v7,1), temp_v7 != 0)) {
          *(unsigned char *)(param_1 + temp_v4 + 0x41ed) = 1;
        }
        temp_v1 = DAT_005e1568;
        piVar16 = DAT_005e1564;
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      temp_v4 = 0;
      temp_v32 = DAT_005e1560;
      temp_v33 = DAT_005e1564;
      temp_v34 = (int *)romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v34 + 2)),DAT_005e1568);
      DAT_005e1564 = *(int **)(param_1 + 0x4b3a);
      DAT_005e1568 = *(unsigned short *)(param_1 + 0x4b3e);
      psVar6 = *(short **)(param_1 + 0x4b36);
      *(short **)(param_1 + 0x4b36) = DAT_005e1560;
      DAT_005e1560 = psVar6;
      *(int **)(param_1 + 0x4b3a) = piVar16;
      *(unsigned short *)(param_1 + 0x4b3e) = temp_v1;
LAB_002209d8:
      if (*(int *)(param_1 + 0x4bac) != 0) {
        if (*(int *)(param_1 + 0x4bac) != 1) goto LAB_00220930;
        temp_v4 = btlMainGetUnk14();
        if ((temp_v4 != 0) && (temp_v4 = bitsAt60Test(temp_v4,4), temp_v4 != 0)) {
          *(unsigned short *)(param_1 + 0x4b2c) = 5;
        }
      }
      else {
        temp_v4 = gameGetPlayerData();
        if ((*(unsigned short *)(temp_v4 + 0x5e) & 0x10) != 0) {
          *(unsigned short *)(param_1 + 0x4b2c) = 5;
        }
      }
      temp_v4 = 1;
LAB_00220920:
      temp_v10 = (unsigned int)temp_v23;
      if (temp_v4 != 0) {
        if (temp_v4 != 4) goto LAB_00220930;
        goto LAB_00220984;
      }
      goto LAB_002209d8;
    }
    break;
  case 0x2f:
LAB_00220994:
    temp_v4 = FUN_00163aa4(param_1 + 0x12b8);
    if (temp_v4 != 0) {
      FUN_0020ad6c(param_1,0x30,1);
    }
  }
LAB_002209c0:
  if (*temp_v38 == 0x2e || *temp_v38 == 0x2f) {
    return;
  }
LAB_00220474:
  temp_v23 = romwright_piece_4_4(0x3e490fdb,temp_v10);
  temp_v24 = 0x3dcccccd;
  temp_v34 = (int *)(param_1 + 0x4bc0);
  temp_v4 = 0;
LAB_0022048c:
  temp_v7 = param_1 + temp_v4;
  if (*(char *)(temp_v7 + 0x40d8) != '\0') {
    temp_v9 = param_1 + temp_v4 * 4;
    if (*(int *)(temp_v9 + 0x410c) >= 0x14) {
      temp_v13 = 0;
      *(unsigned char *)(temp_v7 + 0x40d8) = 0;
      *(unsigned int *)(temp_v9 + 0x40e4) = 0;
      *(unsigned int *)(temp_v9 + 0x40f8) = 0;
    }
    else {
      temp_v13 = *(int *)(temp_v9 + 0x410c) + 1;
    }
    *(int *)(temp_v9 + 0x410c) = temp_v13;
    if (*(char *)(temp_v7 + 0x40d8) == '\0') goto LAB_00220a34;
  }
  else {
LAB_00220a34:
    temp_v0 = *(char *)(temp_v7 + 0x41e8);
    temp_v16 = temp_v0 == '\0';
    if (temp_v16) {
      temp_v0 = *(char *)(temp_v7 + 0x41ed);
    }
    if (temp_v16 && temp_v0 == '\0') {
      temp_v9 = param_1 + temp_v4 * 2;
      temp_v29 = temp_v9 + 0x4200;
      temp_v11 = *(short *)(temp_v9 + 0x4210);
      if (temp_v11 != -1) {
        if (temp_v11 != -3) {
          if (temp_v11 != -2) {
            if (temp_v11 >= 0) {
              temp_v9 = gameGetSlotRecord();
              if ((temp_v9 == 0) || ((*(unsigned short *)(temp_v9 + 0x60) & 2) != 0)) {
                *(unsigned char *)(temp_v7 + 0x41e8) = 1;
                temp_v9 = uiEntryGetState(*temp_v37,temp_v4);
                if (temp_v9 != 0) {
                  sysPlayVoice(0x100022a);
                }
              }
            }
            else {
              *(unsigned char *)(temp_v7 + 0x41e8) = 1;
              sysPlayVoice(0x100022a);
            }
          }
          else {
            temp_v9 = btlMainGetUnk14();
            if ((temp_v9 == 0) || ((*(unsigned short *)(temp_v9 + 0x60) & 2) != 0)) {
              *(unsigned char *)(temp_v7 + 0x41e8) = 1;
              temp_v9 = uiEntryGetState(*temp_v37,temp_v4);
              if (temp_v9 != 0) {
                sysPlayVoice(0x100022a);
              }
            }
          }
LAB_00220b48:
          if (*(char *)(temp_v7 + 0x41e8) != '\0') goto LAB_00220b54;
        }
      }
      else {
        temp_v9 = gameGetPlayerData();
        if ((*(unsigned short *)(temp_v9 + 0x5e) & 2) == 0) goto LAB_00220b48;
        *(unsigned char *)(temp_v7 + 0x41e8) = 1;
LAB_00220b54:
        if ((*(unsigned short *)(temp_v29 + 0x10) < 0xfffe) &&
           (temp_v9 = uiEntryGetState(*temp_v37,temp_v4), temp_v9 != 0)) {
          temp_v9 = param_1 + temp_v4 * 0x8c;
          uiSpriteSetImageKeyframe(temp_v9 + 0x9f8,10,0);
          uiSpriteSelectAnim(temp_v9 + 0xc28,6);
        }
        else {
          uiSpriteSetImageKeyframe(param_1 + temp_v4 * 0x8c + 0x9f8,0xb,0);
        }
        FUN_0023f328(param_1,temp_v4,0);
      }
    }
  }
  temp_v35[2] = param_1 + temp_v4 * 4;
  if (0 < *(int *)(temp_v35[2] + 0x4178)) {
    *(int *)(temp_v35[2] + 0x4178) = *(int *)(temp_v35[2] + 0x4178) - 1;
  }
  temp_v36 = (int *)(temp_v7 + 0x4100);
  if ((*(char *)(temp_v7 + 0x41b8) != '\0') &&
     (temp_v9 = *(int *)(temp_v35[2] + 0x41c0) + 1, *(int *)(temp_v35[2] + 0x41c0) = temp_v9,
     temp_v9 >= 0x15)) {
    *(unsigned char *)(temp_v7 + 0x41b8) = 0;
  }
  temp_v29 = param_1 + temp_v4 * 2;
  temp_v32 = (short *)(temp_v29 + 0x4b00);
  switch(*(unsigned short *)(temp_v29 + 0x4b2c)) {
  case 1:
    temp_v9 = FUN_00163aa4(param_1 + temp_v4 * 0x8c + 0x145c);
    if (temp_v9 != 0) {
      temp_v32[0x16] = 2;
    }
    break;
  case 2:
    temp_v9 = FUN_00163aa4(param_1 + temp_v4 * 0x8c + 0x168c);
    if (temp_v9 != 0) {
      temp_v32[0x16] = 3;
    }
    break;
  case 3:
    *(float *)(temp_v35[2] + 0x4b40) =
         *(float *)(temp_v35[2] + 0x4b40) + (float)((unsigned long long)temp_v23 >> 0x20);
    temp_v38 = (int *)(param_1 + temp_v4 * 0x8c);
    if (*(char *)((int)temp_v38 + 0x1946) != '\0') {
      temp_v3 = *(short *)(temp_v29 + 0x4b36) + 1;
      *(unsigned short *)(temp_v29 + 0x4b36) = temp_v3;
      if (temp_v3 >= 2) {
        *(unsigned short *)(temp_v29 + 0x4b36) = 0;
        temp_v26 = temp_v38 + 0x5a3;
        temp_v11 = vec2GetXInt();
        temp_v32[0x2d] = temp_v11 + (short)temp_v26[6];
        temp_v11 = vec2GetYInt(temp_v26);
        temp_v32[0x32] = *(short *)((int)temp_v26 + 0x1a) + temp_v11;
        temp_v32[0x16] = 4;
        uiSpriteSelectAnim(temp_v38 + 0x517,0xc);
        uiSpriteSelectAnim(temp_v26,0xf);
      }
    }
    else {
      FUN_00163aa4(temp_v38 + 0x62f);
    }
    break;
  case 4:
    if (*(unsigned short *)(temp_v29 + 0x4b36) < 6) {
      temp_v9 = FUN_001834a4(0xd,0xbba);
      temp_v13 = param_1 + temp_v4 * 0x8c;
      temp_v20 = *(float *)(temp_v13 + 0x16b4);
      temp_v3 = *(unsigned short *)(temp_v9 + 6);
      temp_v17 = (float)VectorUnsignedToFloat
                                ((*(unsigned short *)(temp_v9 + 4) & 0xffff7fff) >> 1,
                                 (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (unsigned int)(unsigned short)(temp_v32[0x1b] + 1U);
      temp_v18 = *(float *)(temp_v13 + 0x16b8);
      temp_v32[0x1b] = temp_v32[0x1b] + 1U;
      temp_v22 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v21 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v19 = (float)VectorUnsignedToFloat((temp_v3 & 0xffff7fff) >> 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v17 = (float)VectorSignedToFloat((int)(short)(int)(temp_v17 * ((float)temp_v23 - temp_v20)) +
                                          ((int)temp_v32[0x37] - (int)temp_v32[0x2d]),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v32[0x41] = (short)(int)(temp_v17 * temp_v22 * (float)temp_v24);
      temp_v17 = (float)VectorSignedToFloat(((int)temp_v32[0x3c] - (int)temp_v32[0x32]) -
                                          (int)(short)(int)(temp_v19 * ((float)temp_v23 - temp_v18)),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v32[0x46] = (short)(int)(temp_v17 * temp_v21 * (float)temp_v24);
      if (temp_v5 >= 4) {
        *(unsigned char *)(temp_v7 + 0x4b54) = 1;
      }
    }
    temp_v9 = param_1 + temp_v4 * 0x8c;
    temp_v38 = (int *)(temp_v9 + 0x145c);
    FUN_00163aa4();
    FUN_00163aa4(temp_v9 + 0x168c);
    if ((*(char *)((int)temp_v38 + 0x8a) != '\0') && (*(char *)(temp_v9 + 0x1716) != '\0')) {
      temp_v32[0x1b] = 0;
      temp_v32[0x16] = 5;
    }
    break;
  case 5:
    *(short *)(temp_v29 + 0x4b36) = *(short *)(temp_v29 + 0x4b36) + 1;
  }
  if ((char)temp_v36[0x3a] != '\0') {
    if (*(unsigned short *)(temp_v29 + 0x4210) < 0xfffe) {
      temp_v9 = uiEntryGetState(*temp_v37,temp_v4);
      if (temp_v9 != 0) {
        temp_v13 = param_1 + temp_v4 * 0x8c;
        temp_v9 = FUN_00163aa4(temp_v13 + 0x9f8);
        if ((temp_v9 != 0) && (temp_v9 = FUN_00163aa4(temp_v13 + 0xc28), temp_v9 != 0)) {
          piVar16 = (int *)(temp_v35[2] + 0x4bb0);
          temp_v9 = *piVar16;
          if (0 < temp_v9) {
            FUN_0038b3f8((int)(short)temp_v9,1);
            *piVar16 = 0;
          }
          *(unsigned char *)(temp_v7 + 0x41e8) = 0;
          *(unsigned char *)(temp_v7 + 0x41ed) = 1;
        }
      }
      else {
        temp_v9 = FUN_00163aa4(param_1 + temp_v4 * 0x8c + 0x9f8);
        if (temp_v9 != 0) {
          *(unsigned char *)(temp_v7 + 0x41e8) = 0;
          *(unsigned char *)(temp_v7 + 0x41ed) = 1;
        }
      }
    }
    else {
      temp_v9 = FUN_00163aa4(param_1 + temp_v4 * 0x8c + 0x9f8);
      if (temp_v9 != 0) {
        *(unsigned char *)(temp_v7 + 0x41e8) = 0;
        *(unsigned char *)(temp_v7 + 0x41ed) = 1;
      }
    }
  }
  if ((0 < temp_v4) && (*(char *)(temp_v7 + 0x4ae5) != '\0')) {
    temp_v27 = (int *)(temp_v35[2] + 0x4aec);
    temp_v9 = *temp_v27;
    *temp_v27 = temp_v9 + 1;
    if (*temp_v32 >= 0) {
      temp_v26 = (int *)gameGetSlotRecord();
      if (*temp_v27 == 5) {
        puVar22 = (unsigned int *)(temp_v35[2] + 0x4bb0);
        temp_v5 = *puVar22;
        if (temp_v5 == *(unsigned short *)((int)temp_v26 + 0x62)) goto LAB_0022129c;
        if (0 < (int)temp_v5) {
          FUN_0038b3f8((int)(short)temp_v5,1);
        }
        FUN_00371c3c((int)*(short *)((int)temp_v26 + 0x62),1);
        *puVar22 = (unsigned int)*(unsigned short *)((int)temp_v26 + 0x62);
        *(short *)(temp_v29 + 0x4210) = *temp_v32;
        *(unsigned short *)(temp_v29 + 0x41f2) = *(unsigned short *)((int)temp_v26 + 0x2a);
        *(short *)(temp_v29 + 0x41fc) = (short)temp_v26[0xb];
        *(short *)(temp_v29 + 0x4206) = (short)temp_v26[0x19];
        *(unsigned char *)(temp_v7 + 0x41ed) = 0;
      }
      if (*temp_v27 == 0xf) {
        if (*(char *)(temp_v7 + 0x4b0a) == '\0') goto LAB_0022129c;
        temp_v10 = btlGetMainState();
        FUN_003eeb4c(temp_v10,(int)(short)temp_v4);
      }
      if (*temp_v27 >= 0x25) {
        *(unsigned char *)(temp_v7 + 0x4ae5) = 0;
        *temp_v27 = 0;
        temp_v9 = bitsAt60Test(temp_v26,4);
        if (temp_v9 != 0) {
          *(unsigned char *)(temp_v7 + 0x4b54) = 1;
          temp_v32[0x1b] = 0;
          temp_v32[0x16] = 5;
        }
      }
    }
    else if (temp_v9 + 1 >= 5) {
      piVar16 = (int *)(temp_v35[2] + 0x4bb0);
      temp_v9 = *piVar16;
      if (0 < temp_v9) {
        FUN_0038b3f8((int)(short)temp_v9,1);
        *piVar16 = 0;
      }
      *(unsigned char *)(temp_v7 + 0x4ae5) = 0;
      *temp_v27 = 0;
      *(unsigned short *)(temp_v29 + 0x4210) = 0xffff;
      *(unsigned char *)(temp_v7 + 0x41ed) = 1;
    }
  }
LAB_0022129c:
  if (*(char *)(temp_v7 + 0x40d8) == '\0') {
    temp_v5 = temp_v7 + 0x3e00;
    temp_v16 = *(char *)(temp_v7 + 0x3e4e) == '\0';
    if (temp_v16) {
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v7 + 0x3e53);
    }
    if (((temp_v16 && temp_v5 == 0) && ((char)temp_v36[0x3a] == '\0')) &&
       (*(char *)(temp_v7 + 0x4ae5) == '\0')) {
      FUN_0023f328(param_1,temp_v4,1);
    }
  }
  temp_v7 = 0;
  temp_v5 = 0;
  temp_v11 = *(short *)(temp_v29 + 0x4210);
  if (temp_v11 != -1) {
    if (temp_v11 != -2) {
      if ((temp_v11 != -3) && (temp_v11 >= 0)) {
        temp_v9 = gameGetSlotRecord();
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 + 0x60);
      }
    }
    else {
      temp_v9 = btlMainGetUnk14();
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 + 0x60);
    }
  }
  else {
    temp_v9 = gameGetPlayerData();
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 + 0x5e);
  }
  temp_v6 = 1;
  temp_v9 = 0xd;
  do {
    if ((temp_v5 & (1 << (temp_v6 & 0xff))) != 0) {
      temp_v7 = temp_v7 + 1;
    }
    do {
      temp_v9 = temp_v9 - 1;
      temp_v6 = temp_v6 + 1;
      if (temp_v9 == 0) {
        if (0 < temp_v7) {
          piVar16 = (int *)(temp_v35[2] + 0x3e1c);
          temp_v9 = *piVar16;
          *piVar16 = temp_v9 + 1;
          if (temp_v9 + 1 >= 0x18) {
            temp_v33 = (int *)(temp_v35[2] + 0x3e30);
            __aeabi_idivmod(*temp_v33 + 1,temp_v7);
            *temp_v33 = temp_v14;
            *piVar16 = 0;
          }
        }
        if ((temp_v5 & 0x10) != 0) {
          temp_v7 = btlGetPropertyMaximum(0x22);
          temp_v9 = btlFindEntryValue(temp_v4,0x22);
          if ((temp_v9 == temp_v7) || (temp_v9 < *temp_v34 + (temp_v7 - 1))) {
            *(unsigned short *)(temp_v29 + 0x3e44) = 0;
          }
          else {
            if (*(short *)(temp_v29 + 0x3e44) >= 0x10000) {
              temp_v11 = 0;
            }
            else {
              temp_v11 = *(short *)(temp_v29 + 0x3e44) + 1;
            }
            *(short *)(temp_v29 + 0x3e44) = temp_v11;
          }
        }
        else {
          *(unsigned short *)(temp_v29 + 0x3e44) = 0;
        }
        temp_v4 = temp_v4 + 1;
        if (temp_v4 >= 5) {
          if ((*(char *)(param_1 + 0x38b5) != '\0') || (*(char *)(param_1 + 0x4b0f) == '\0')) {
            if (*(char *)(param_1 + 0x38ba) != '\0') {
              return;
            }
            *piVar21 = *piVar21 + 1;
            return;
          }
          piVar16 = (int *)(param_1 + 0x4b10);
          temp_v4 = *piVar16;
          if (temp_v4 != 0x1f) {
            if (temp_v4 < 0x1f) {
              if (temp_v4 != 0) {
                if (temp_v4 != 4) {
                  if (temp_v4 != 5) {
                    if ((temp_v4 == 6) && (*(int *)(param_1 + 0x4b28) == 1)) {
                      temp_v2 = 1;
                      puVar20 = (unsigned char *)(param_1 + 0x4b1a);
                      *puVar20 = temp_v2;
                    }
                  }
                  else if ((*(char *)(param_1 + 0x4b19) != '\0') &&
                          (*(int *)(param_1 + 0x4b28) == 0)) {
                    FUN_003f1114(*temp_v37);
                  }
                }
                else {
                  temp_v4 = (int)*(short *)(param_1 + 0x4b16);
                  if (((temp_v4 != 0) && (*(char *)(param_1 + 0x4b18) == '\0')) &&
                     (devilIsTextureLoaded(temp_v4,1), temp_v4 != 0)) {
                    temp_v4 = *temp_v37;
                    FUN_003ec6d8(temp_v4,(int)*(short *)(param_1 + 0x4b16));
                    if (temp_v4 == 0) {
                      FUN_0038b3f8((int)*(short *)(param_1 + 0x4b16),1);
                    }
                  }
                  temp_v4 = (int)*(short *)(param_1 + 0x4b14);
                  devilIsTextureLoaded(temp_v4,1);
                  if (temp_v4 != 0) {
                    puVar20 = (unsigned char *)(param_1 + 0x4b18);
                    temp_v2 = 1;
                    *puVar20 = temp_v2;
                  }
                  else {
                    FUN_00371c3c((int)*(short *)(param_1 + 0x4b14),1);
                    puVar20 = (unsigned char *)(param_1 + 0x4b18);
                    temp_v2 = 0;
                    *puVar20 = temp_v2;
                  }
                }
              }
              else if ((*(unsigned int *)(g_btlAux + 0x339c) & 0x400) != 0) {
                nameEntriesRegisterVerNames(reinterpret_cast<void *>(g_btlAux));
              }
            }
            else if (temp_v4 != 0x29) {
              if (temp_v4 != 0x47) {
                if ((temp_v4 == 0x5b) && (*(short *)(param_1 + 0x4b1e) != -1)) {
                  puVar20 = (unsigned char *)(param_1 + 0x4b1a);
                  temp_v2 = 1;
                  *puVar20 = temp_v2;
                }
              }
              else if (*(short *)(param_1 + 0x4b1e) != -1) {
                FUN_004c8e30(0x2f,0,1);
                FUN_0015f490((int)*(short *)(param_1 + 0x4b14),1,1,0);
              }
            }
            else if (*(short *)(param_1 + 0x4b1e) != -1) {
              temp_v4 = saveSlotFindSelected();
              temp_v1 = *(unsigned short *)(temp_v4 + 300);
              FUN_00370ecc(temp_v1);
              temp_v10 = FUN_0019acdc(temp_v1,1);
              temp_v25 = &temp_v32;
              FUN_003f1b3c(*temp_v37,temp_v10,9,&temp_v29);
              FUN_0047f4cc(temp_v32);
              infoWinSetText(*(unsigned int *)(*temp_v37 + 0x4d64),temp_v29 & 0xffff);
              temp_v25 = (short **)0x0;
              uiNavigatorStart(temp_v1,1,1,0);
            }
          }
          else if (*(short *)(param_1 + 0x4b1e) == -1) {
            puVar20 = (unsigned char *)(param_1 + 0x4b1a);
            temp_v2 = 1;
            *puVar20 = temp_v2;
          }
          *piVar16 = *piVar16 + 1;
          if (*(char *)(param_1 + 0x38ba) != '\0') {
            return;
          }
          *piVar21 = *piVar21 + 1;
          return;
        }
        goto LAB_0022048c;
      }
    } while (temp_v6 == 2);
  } while( 1 );
LAB_00220930:
  if ((0 < *(int *)(param_1 + temp_v4 * 4 + 0x4bb0)) &&
     (temp_v7 = param_1 + temp_v4 * 2, -1 < *(short *)(temp_v7 + 0x4210))) {
    temp_v10 = gameGetSlotRecord();
    temp_v9 = bitsAt60Test(temp_v10,4);
    if (temp_v9 != 0) {
      *(unsigned short *)(temp_v7 + 0x4b2c) = 5;
    }
  }
  temp_v10 = (unsigned int)temp_v23;
  temp_v4 = temp_v4 + 1;
  if (temp_v4 >= 5) {
LAB_00220984:
    FUN_0020ad6c(param_1,0x2f,1);
    goto LAB_00220994;
  }
  goto LAB_00220920;
}

} /* extern "C" */
