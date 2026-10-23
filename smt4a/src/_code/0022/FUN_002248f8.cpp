/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002248f8` (_code @ 0x2248f8, 0x14e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(...);
int asdMemFree(void);
int FUN_001a1ee0(void);
int asdOperatorDelete(...);
int FUN_00318c3c(...);

int randRange(...);
int eventQueueAddUniqueIfValid(...);
int uiSpriteSetKeyframeThree(...);
int uiSpriteSetImageKeyframe(...);
int partySelectionExpandMask(...);
int FUN_002f9418(void);
int FUN_0031db84(...);
int menu32PlayCursorSeAndSelect(...);
int FUN_00321338(...);
int FUN_00321500(...);
int FUN_00333f6c(void);
int FUN_003343f0(...);
int FUN_00336aec(...);
int campCommonBgRelease(void);
int partyPanelDestroy(void);
int FUN_0038b3f8(...);
int devilIsTextureLoaded(...);
int pairQueueAppend(...);
int controllerStartInterpolation(...);
int FUN_0047f66c(...);
int FUN_004a9588(...);
int FUN_004aa0b0(...);
int VectorSignedToFloat(...);

int btlGetMainState(void);
int FUN_001517b4(void);
int dataTable00FindById(void);
int FUN_00284ee4(...);
int FUN_00291e14(void);
int FUN_002c39dc(...);
int FUN_002ccde8(int, unsigned int *, unsigned int *);
int btlTalkBustUpSetDemonTexture(int, int);
int FUN_003493dc(...);
int FUN_0035d0e4(void);
int btlTalkBustUpReleaseContent(void);
int btlTalkBustUpSetUnk2F4(int);
int FUN_0039ebcc(void);
int uiMenuRequestStateNine(...);

int FUN_00163aa4(...);
int uiSpriteSelectAnim(int, int);
int menuStateStartConfirm(void);
int FUN_0021d13c(int);
int FUN_00280030(void);
int FUN_002b1838(int);
int FUN_002b24dc(int);
int FUN_002c7e6c(void);
int FUN_002c85b0(int);
int FUN_002cc36c(int);
int FUN_002cdd18(int);
int sysMemClear(unsigned int *, int);
int uiWorkEndState1(int);
int FUN_0034efe0(void);
int owner2DCInitSub(int);
int menu32State387CIs7(...);
int menu32EnterState27(int);
int controllerResetInterpolation(unsigned int);
int FUN_003f97a4(unsigned int);
int FUN_003f9970(unsigned int, unsigned int *, int);
int FUN_004ab10c(int, unsigned int *);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
} void_stack;

extern unsigned char g_btlUi; /* 0x57a9b8 */
extern int DAT_0057a9bc; /* 0x57a9bc */
extern int DAT_0057a9c0; /* 0x57a9c0 */
extern int DAT_0057a9c4; /* 0x57a9c4 */
extern int g_btlUiBlock; /* 0x57a9c8 */
extern unsigned int DAT_0057a9f0; /* 0x57a9f0 */
extern unsigned int DAT_0057a9f4; /* 0x57a9f4 */
extern unsigned int DAT_0057a9f8; /* 0x57a9f8 */
extern unsigned int DAT_0057a9fc; /* 0x57a9fc */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: randRange. */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int jobGetWork(void);
extern int padButtonRepeat(unsigned int);
extern int asdTMTexTableNodeIsLoaded(unsigned int, int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframeThree. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: FUN_001a1ee0. */
extern int gameGetSlotRecord(int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: menuStateStartConfirm. */
extern int flagSelectVariant(void);
/* Supplied declaration required: FUN_0021d13c. */
extern int FUN_0026c3a0(void);
extern int FUN_00270bfc(int);
/* Supplied declaration required: FUN_00280030. */
extern int FUN_00284e94(void);
/* Supplied declaration required: FUN_00284ee4. */
/* Supplied declaration required: FUN_00291e14. */
/* Supplied declaration required: partySelectionExpandMask. */
/* Supplied declaration required: FUN_002b1838. */
/* Supplied declaration required: FUN_002b24dc. */
/* Supplied declaration required: FUN_002c39dc. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_002cc36c. */
/* Supplied declaration required: FUN_002ccde8. */
/* Supplied declaration required: FUN_002cdd18. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002f9418. */
extern int FUN_002fc0a4(int);
/* Supplied declaration required: FUN_00318c3c. */
/* Supplied declaration required: FUN_0031db84. */
/* Supplied declaration required: menu32PlayCursorSeAndSelect. */
/* Supplied declaration required: FUN_00321338. */
extern int menu32ModeIsNot2(int);
/* Supplied declaration required: FUN_00321500. */
extern unsigned int partyPanelValueGet(void);
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_003343f0. */
extern int menu32State387CIs6(int);
/* Supplied declaration required: FUN_00336aec. */
extern int menu32ModeIsNot4(int);
/* Supplied declaration required: uiWorkEndState1. */
/* Supplied declaration required: btlTalkBustUpSetDemonTexture. */
extern int partyPanelGetFlag(void);
extern unsigned int partyPanelGetState(void);
/* Supplied declaration required: FUN_003493dc. */
extern int FUN_0034ed68(int);
/* Supplied declaration required: FUN_0034efe0. */
/* Supplied declaration required: owner2DCInitSub. */
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: FUN_0035d0e4. */
extern int menu32State387CIs2(void);
extern int FUN_0035fa18(int, int, int);
/* Supplied declaration required: menu32State387CIs7. */
/* Supplied declaration required: btlTalkBustUpReleaseContent. */
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: menu32EnterState27. */
extern int menu32State387CNotIn22To25(void);
/* Supplied declaration required: partyPanelDestroy. */
extern int menu32ModeIsNot5(int);
/* Supplied declaration required: FUN_0038b3f8. */
extern int menu32ModeIsNot6(int);
/* Supplied declaration required: FUN_0039ebcc. */
/* Supplied declaration required: devilIsTextureLoaded. */
extern int btlTalkBustUpIsUnk2F8(unsigned int);
/* Supplied declaration required: uiMenuRequestStateNine. */
extern int menu32IsMissingOrState6(int);
extern int btlScriptUnitHasFlags(void);
/* Supplied declaration required: pairQueueAppend. */
/* Supplied declaration required: controllerResetInterpolation. */
/* Supplied declaration required: controllerStartInterpolation. */
/* Supplied declaration required: FUN_003f97a4. */
/* Supplied declaration required: FUN_003f9970. */
/* Supplied declaration required: FUN_0047f66c. */
/* Supplied declaration required: FUN_004a9588. */
/* Supplied declaration required: FUN_004aa0b0. */
/* Supplied declaration required: FUN_004ab10c. */


unsigned int FUN_002248f8(void)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 63 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  unsigned short *puVar8;
  int *piVar9;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  short *psVar13;
  unsigned int *puVar14;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  
  temp_v4 = jobGetWork();
  temp_v0 = g_btlUiBlock;
  if (g_btlUiBlock == 0) {
    return 0;
  }
  temp_v9 = 0;
  temp_v10 = temp_v9;
  do {
    temp_v5 = asdTMTexTableNodeIsLoaded(0xc,temp_v9);
    if (temp_v5 != 0) {
      temp_v10 = temp_v10 + 1;
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 6);
  temp_v9 = 0;
  do {
    temp_v5 = asdTMTexTableNodeIsLoaded(0xd,temp_v9);
    if (temp_v5 != 0) {
      temp_v10 = temp_v10 + 1;
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 5);
  if (temp_v10 < 0xb) {
    return 0;
  }
  FUN_002cdd18(temp_v0 + 0x24bc);
  FUN_002b1838(temp_v0 + 8);
  FUN_0021d13c(temp_v0 + 0x28c4);
  FUN_002cc36c(temp_v0);
  if ((*(char *)(temp_v0 + 0xc040) != '\0') &&
     (temp_v10 = *(int *)(temp_v0 + 0xc048) + 1, *(int *)(temp_v0 + 0xc048) = temp_v10,
     *(int *)(temp_v0 + 0xc044) < temp_v10)) {
    *(unsigned char *)(temp_v0 + 0xc040) = 0;
    menuStateStartConfirm();
  }
  temp_v10 = 0;
  temp_v14 = 0x3f8000003e490fdb;
  do {
    temp_v9 = temp_v0 + temp_v10 * 0x14c;
    temp_v2 = *(short *)(temp_v9 + 0x11a2c);
    if (temp_v2 != 0) {
      if (temp_v2 != 2) {
        if (temp_v2 != 3) {
          if (temp_v2 == 4) {
            temp_v1 = *(unsigned short *)(temp_v9 + 0x11a2e);
            if ((temp_v1 < 6) && (*(unsigned short *)(temp_v9 + 0x11a2e) = temp_v1 + 1, (unsigned short)(temp_v1 + 1) >= 4))
            {
              *(unsigned char *)(temp_v9 + 0x11a34) = 1;
              puVar7 = *(unsigned int **)(temp_v9 + 0x11a5c);
              temp_v8 = puVar7[1] | DAT_0057a9f4;
              *puVar7 = *puVar7 | DAT_0057a9f0;
              puVar7[1] = temp_v8;
            }
            temp_v5 = FUN_00163aa4(temp_v9 + 0x11914);
            if (temp_v5 != 0) {
              *(unsigned short *)(temp_v9 + 0x11a2c) = 0;
            }
          }
        }
        else {
          *(float *)(temp_v9 + 0x11a30) = *(float *)(temp_v9 + 0x11a30) + (float)temp_v14;
          temp_v16 = temp_v9 + 0x119a0;
          if (*(char *)(temp_v9 + 0x11a2a) != '\0') {
            temp_v1 = *(short *)(temp_v9 + 0x11a2e) + 1;
            *(unsigned short *)(temp_v9 + 0x11a2e) = temp_v1;
            if (temp_v1 >= 2) {
              *(unsigned short *)(temp_v9 + 0x11a2e) = 0;
              *(unsigned short *)(temp_v9 + 0x11a2c) = 4;
              uiSpriteSelectAnim(temp_v9 + 0x11914,0xc);
            }
          }
          else {
            FUN_00163aa4(temp_v16);
          }
        }
      }
      else {
        temp_v5 = FUN_00163aa4(temp_v9 + 0x11914);
        if (temp_v5 != 0) {
          *(unsigned short *)(temp_v9 + 0x11a2c) = 3;
        }
      }
    }
    temp_v10 = temp_v10 + 1;
  } while (temp_v10 < 0xc);
  FUN_003f97a4(*(unsigned int *)(temp_v0 + 0x7488));
  if (((*(char *)(temp_v0 + 0x74b3) != '\0') && (temp_v10 = FUN_00163aa4(), temp_v10 != 0)) &&
     (*(short *)(temp_v0 + 0x7584) == 0xe)) {
    *(unsigned char *)(temp_v0 + 0x74b3) = 0;
  }
  temp_v15 = (float)(temp_v14 >> 0x20);
  switch(*(unsigned int *)(temp_v0 + 0x74a0)) {
  case 1:
    if (*(int *)(temp_v0 + 0x74a4) != 0) {
      temp_v4 = FUN_00270bfc(temp_v0 + 0x28c4);
    }
    else {
      temp_v4 = FUN_00270bfc(temp_v0 + 0x28c4);
    }
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x74a0) = 0;
    }
    break;
  case 2:
    temp_v4 = temp_v0 + 0x24bc;
    FUN_0034efe0();
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x74a0) = 0;
    }
    break;
  case 3:
    temp_v4 = menu32IsMissingOrState6(temp_v0 + 0x24bc);
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x74a0) = 4;
    }
    break;
  case 5:
    temp_v4 = FUN_002fc0a4(temp_v0 + 0x24bc);
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x74a0) = 0;
    }
    break;
  case 6:
    piVar9 = (int *)(temp_v0 + 0x128a8);
    temp_v4 = 0;
    if (0 < *piVar9) {
      do {
        temp_v15 = (float)(temp_v14 >> 0x20);
        if (*(int *)(temp_v0 + 0x128a4) / 2 < temp_v4) break;
        FUN_00163aa4(temp_v0 + temp_v4 * 0x8c + 0x128ac);
        temp_v15 = (float)(temp_v14 >> 0x20);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *piVar9);
    }
    if (*(char *)(temp_v0 + *piVar9 * 0x8c + 0x128aa) != '\0') {
      temp_v4 = 0;
      do {
        temp_v10 = temp_v4 + 1;
        temp_v4 = temp_v0 + temp_v4 * 0xc;
        *(unsigned short *)(temp_v4 + 0x12f3c) = 0;
        *(unsigned int *)(temp_v4 + 0x12f40) = 0;
        *(unsigned int *)(temp_v4 + 0x12f44) = 0;
        temp_v4 = temp_v10;
      } while (temp_v10 < 0xc);
      *piVar9 = 0;
      *(unsigned int *)(temp_v0 + 0x74a0) = 0;
    }
    piVar9 = (int *)(temp_v0 + 0x128a4);
    temp_v4 = *piVar9 + 1;
    *piVar9 = temp_v4;
    break;
  case 7:
    temp_v4 = menu32ModeIsNot2(temp_v0 + 8);
    if (temp_v4 == 0) break;
    temp_v4 = FUN_00270bfc(temp_v0 + 0x28c4);
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x74a0) = 0;
    }
    break;
  case 8:
    temp_v4 = menu32ModeIsNot4(temp_v0 + 8);
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x74a0) = 2;
      FUN_002b24dc(temp_v0 + 0x24bc);
    }
    break;
  case 10:
    *(unsigned int *)(temp_v0 + 0x74a0) = 0;
    break;
  case 0xb:
    temp_v10 = temp_v0 + 0x28c4;
    temp_v9 = menu32State387CIs2();
    if (temp_v9 != 0) {
      sysMemClear(&temp_v16,0x180);
      temp_v10 = temp_v0;
      FUN_004ab10c(temp_v0,&temp_v16);
      FUN_003f9970(*(unsigned int *)(temp_v0 + 0x7488),&temp_v16,temp_v10);
      controllerResetInterpolation(*(unsigned int *)(temp_v0 + 0x7488));
      *(unsigned int *)(temp_v0 + 0x74a0) = 0xd;
      temp_v10 = g_btlUiBlock;
      temp_v9 = menu32ModeIsNot5(g_btlUiBlock + 8);
      if (temp_v9 != 0) {
        temp_v9 = temp_v10 + 0x24bc;
        FUN_00280030();
        if (temp_v9 != 0) {
          uiWorkEndState1(temp_v10 + 8);
          owner2DCInitSub(temp_v10 + 0x24bc);
        }
      }
    }
    else {
      temp_v9 = menu32State387CIs6(temp_v10);
      if (temp_v9 != 0) {
        FUN_002c7e6c();
        FUN_002c85b0(4);
        *(unsigned int *)(temp_v0 + 0x74a0) = 0xe;
        temp_v10 = g_btlUiBlock;
        temp_v9 = menu32ModeIsNot5(g_btlUiBlock + 8);
        if (temp_v9 != 0) {
          temp_v9 = temp_v10 + 0x24bc;
          FUN_00280030();
          if (temp_v9 != 0) {
            uiWorkEndState1(temp_v10 + 8);
            owner2DCInitSub(temp_v10 + 0x24bc);
          }
        }
      }
      else {
        temp_v9 = menu32State387CIs7(temp_v10);
        if (temp_v9 != 0) {
          *(unsigned int *)(temp_v0 + 0x74a0) = 0xc;
          menu32EnterState27(temp_v10);
          temp_v10 = g_btlUiBlock;
          temp_v9 = menu32ModeIsNot5(g_btlUiBlock + 8);
          if (temp_v9 != 0) {
            temp_v9 = temp_v10 + 0x24bc;
            FUN_00280030();
            if (temp_v9 != 0) {
              uiWorkEndState1(temp_v10 + 8);
              owner2DCInitSub(temp_v10 + 0x24bc);
            }
          }
        }
      }
    }
    temp_v10 = btlGetMainState();
    if (((*(unsigned int *)(temp_v10 + 0x45ac) & DAT_0057a9fc) != 0 ||
         (*(unsigned int *)(temp_v10 + 0x45a8) & DAT_0057a9f8) != 0) &&
       (temp_v10 = btlTalkBustUpIsUnk2F8(*(unsigned int *)(temp_v4 + 0x2364)), temp_v10 == 0)) {
      puVar8 = (unsigned short *)0x0;
      dataTable00FindById();
      temp_v8 = 0;
      do {
        if ((int)(short)puVar8[0x46] == *(int *)(temp_v4 + 0x2364)) break;
        temp_v8 = temp_v8 + 1;
        puVar8 = puVar8 + 0x54;
      } while ((int)temp_v8 < 0x4b1);
      if (temp_v8 >= 0x4b1) {
        g_btlUi = 1;
      }
      else {
        g_btlUi = 0;
        btlTalkBustUpReleaseContent();
        btlTalkBustUpSetDemonTexture(*puVar8,1);
        btlTalkBustUpSetUnk2F4(1);
      }
    }
    break;
  case 0xc:
    temp_v4 = uiMenuRequestStateNine();
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 0x74a0) = 0x10;
      temp_v17 = temp_v17 & 0xffff0000;
      temp_v16 = temp_v16 & 0xffff0000;
      FUN_002ccde8(temp_v0 + 0x28c4,&temp_v17,&temp_v16);
      temp_v4 = menu32State387CIs7(temp_v0 + 0x28c4);
      if (temp_v4 != 0) {
        FUN_003493dc(1);
        FUN_002c39dc(0xe,0,0xffffffff);
        FUN_00291e14();
        FUN_0035d0e4();
        FUN_00284ee4(1);
      }
      else if ((short)temp_v17 != 8) {
        if (!((short)temp_v17 == 2 || (short)temp_v17 == 3)) {
          if ((short)temp_v17 != 9) {
            if ((short)temp_v17 == 0xd) {
              FUN_003493dc(1);
              FUN_002c39dc(10,0,0xffffffff);
              FUN_00284ee4(1);
            }
          }
          else {
            FUN_003493dc(1);
            if (*(int *)(temp_v0 + 0x6154) != 0) {
              temp_v10 = gameGetSlotTable();
              temp_v4 = *(int *)(temp_v0 + 0x6154);
              temp_v10 = (int)*(char *)(temp_v4 + temp_v10 + 0x1c9f);
              temp_v7 = 3;
            }
            else {
              temp_v10 = -1;
              temp_v4 = 0;
              temp_v7 = 2;
            }
            FUN_002c39dc(temp_v7,temp_v4,temp_v10);
            FUN_00284ee4(1);
          }
        }
        else {
          if (*(int *)(temp_v0 + 0x6154) == 0) {
            temp_v4 = -1;
          }
          else {
            temp_v4 = gameGetSlotTable();
            temp_v4 = (int)*(char *)(*(int *)(temp_v0 + 0x6154) + temp_v4 + 0x1c9f);
          }
          FUN_003493dc(1);
          FUN_002c39dc(5,(int)(short)temp_v16,temp_v4);
          FUN_00291e14();
          FUN_0035d0e4();
          FUN_00284ee4(1);
        }
      }
      else {
        if (*(int *)(temp_v0 + 0x6154) == 0) {
          temp_v4 = -1;
        }
        else {
          temp_v4 = gameGetSlotTable();
          temp_v4 = (int)*(char *)(*(int *)(temp_v0 + 0x6154) + temp_v4 + 0x1c9f);
        }
        FUN_003493dc(1);
        FUN_002c39dc(8,(int)(short)temp_v16,temp_v4);
        FUN_00291e14();
        FUN_0035d0e4();
        FUN_00284ee4(1);
      }
    }
    break;
  case 0xd:
    temp_v10 = 1;
    FUN_001517b4();
    temp_v4 = g_btlUiBlock;
    if ((temp_v10 != 0) && (temp_v10 = menu32ModeIsNot6(g_btlUiBlock + 8), temp_v10 != 0)) {
      temp_v4 = temp_v4 + 0x24bc;
      FUN_0039ebcc();
      if (temp_v4 == 0) goto LAB_00225054;
    }
    else {
LAB_00225054:
      btlGetMainState();
      temp_v4 = btlScriptUnitHasFlags();
      if (temp_v4 == 0) break;
    }
    controllerStartInterpolation(*(unsigned int *)(temp_v0 + 0x7488));
    menu32PlayCursorSeAndSelect(temp_v0 + 0x28c4);
    *(unsigned int *)(temp_v0 + 0x74a0) = 0xb;
    temp_v4 = g_btlUiBlock;
    temp_v10 = menu32ModeIsNot6(g_btlUiBlock + 8);
    if (temp_v10 != 0) {
      temp_v10 = temp_v4 + 0x24bc;
      FUN_0039ebcc();
      if (temp_v10 != 0) {
        FUN_00321500(temp_v4 + 8);
        uiSpriteSetKeyframeThree(temp_v4 + 0x24bc);
      }
    }
    eventQueueAddUniqueIfValid(0x100020f);
    break;
  case 0xe:
    FUN_002f9418();
    temp_v4 = FUN_0034ed68(temp_v0 + 0x28c4);
    if ((temp_v4 == 0) || (*(int *)(temp_v0 + 0x739c) == 4)) {
      temp_v7 = 1;
    }
    else {
      temp_v7 = 0;
    }
    FUN_003343f0(temp_v7);
    break;
  case 0xf:
    temp_v4 = FUN_0026c3a0();
    if (temp_v4 == 0) break;
    FUN_00333f6c();
    FUN_003343f0(0);
    temp_v4 = 0xb;
    piVar9 = (int *)(temp_v0 + 0x74a0);
    *piVar9 = temp_v4;
    break;
  case 0x10:
    if (*(char *)(temp_v0 + 0x74b0) != '\0') {
      temp_v10 = temp_v0 + 0x28c4;
      temp_v4 = menu32State387CNotIn22To25();
      if (temp_v4 != 0) {
        partySelectionExpandMask(temp_v10,temp_v0 + 0x7490,temp_v0 + 0x7498);
        if (temp_v10 != 0) {
          *(unsigned char *)(temp_v0 + 0x74b1) = 1;
        }
        else {
          *(unsigned char *)(temp_v0 + 0x74b1) = 0;
        }
        *(unsigned int *)(temp_v0 + 0x74a0) = 0xb;
        *(unsigned char *)(temp_v0 + 0x74b0) = 0;
      }
    }
    else {
      temp_v10 = FUN_00284e94();
      if (temp_v10 != 0) {
        temp_v10 = temp_v0 + 0x7490;
        FUN_0031db84(temp_v10,temp_v0 + 0x7498);
        if (temp_v10 == 0) {
          *(unsigned char *)(temp_v0 + 0x74b1) = 0;
        }
        else {
          *(unsigned char *)(temp_v0 + 0x74b1) = 1;
          temp_v10 = partyPanelGetFlag();
          if (temp_v10 == 0xb) {
            temp_v7 = partyPanelGetState();
            temp_v6 = partyPanelValueGet();
            pairQueueAppend(temp_v4,temp_v6,temp_v7);
          }
        }
        partyPanelDestroy();
        *(unsigned int *)(temp_v0 + 0x74a0) = 0xb;
        temp_v4 = menu32State387CIs7();
        if (temp_v4 != 0) {
          FUN_00321338(temp_v0 + 0x28c4);
        }
        temp_v4 = g_btlUiBlock;
        temp_v10 = menu32ModeIsNot6(g_btlUiBlock + 8);
        if (temp_v10 != 0) {
          temp_v10 = temp_v4 + 0x24bc;
          FUN_0039ebcc();
          if (temp_v10 != 0) {
            FUN_00321500(temp_v4 + 8);
            uiSpriteSetKeyframeThree(temp_v4 + 0x24bc);
          }
        }
      }
    }
    break;
  case 0x12:
    temp_v4 = padButtonRepeat(0);
    if (temp_v4 != 0) {
      temp_v14 = temp_v14 & 0xffffffff00000000;
      temp_v4 = 0;
      do {
        temp_v10 = randRange(0xf);
        temp_v16 = 1;
        temp_v17 = 1;
        FUN_004a9588(temp_v0,temp_v10 + 0x14,0);
        FUN_004aa0b0(temp_v0,2,1);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
LAB_002255d4:
      temp_v15 = (float)(temp_v14 >> 0x20);
      if (DAT_0057a9bc < 1) break;
    }
    else {
      temp_v4 = padButtonRepeat(10);
      if (temp_v4 == 0) {
        temp_v4 = padButtonRepeat(1);
        if (temp_v4 != 0) {
          *(unsigned int *)(temp_v0 + 0x74a0) = 0xb;
          uiSpriteSetImageKeyframe(g_btlUiBlock + 0x7528,0xe,0);
        }
        goto LAB_002255d4;
      }
      DAT_0057a9c4 = 1;
      DAT_0057a9bc = 8;
      DAT_0057a9c0 = 0;
    }
    if (0 < DAT_0057a9bc) {
      temp_v14 = temp_v14 & 0xffffffff00000000;
    }
    temp_v15 = (float)(temp_v14 >> 0x20);
    temp_v8 = 0;
    if (0 < DAT_0057a9bc) {
      do {
        if (DAT_0057a9c0 == temp_v8 * 8) {
          temp_v2 = randRange(0x28);
          temp_v3 = randRange(0x28);
          temp_v4 = DAT_0057a9c4;
          temp_v20 = 1;
          temp_v18 = 10;
          temp_v19 = g_btlUiBlock;
          temp_v11 = (unsigned int)((temp_v8 & 1) == 0);
          temp_v17 = 1;
          temp_v16 = temp_v11;
          FUN_00336aec(g_btlUiBlock + 0x28c4,10,DAT_0057a9c4,0);
          temp_v7 = 0;
          if (temp_v4 == 0) {
            temp_v7 = 0x3fa;
          }
          else if (temp_v4 == 1) {
            temp_v7 = 0x403;
          }
          else if (temp_v4 == 2) {
            temp_v7 = 0x40c;
          }
          else if (temp_v4 == 3) {
            temp_v7 = 0x415;
          }
          else if (temp_v4 == 4) {
            temp_v7 = 0x41f;
          }
          temp_v4 = FUN_001834a4(0xd,temp_v7);
          temp_v10 = (short)(temp_v3 - 0x14) + 0x11;
          temp_v21 = (short)(temp_v2 - 0x14) + 0x27;
          temp_v16 = temp_v20;
          temp_v17 = 0;
          VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v21,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = temp_v10;
          FUN_004a9588(temp_v19,temp_v18,0,temp_v11);
          temp_v10 = g_btlUiBlock;
          temp_v4 = DAT_0057a9c4;
          temp_v18 = 2;
          temp_v7 = 0;
          if (DAT_0057a9c4 == 0) {
            temp_v7 = 0x3fa;
          }
          else if (DAT_0057a9c4 == 1) {
            temp_v7 = 0x403;
          }
          else if (DAT_0057a9c4 == 2) {
            temp_v7 = 0x40c;
          }
          else if (DAT_0057a9c4 == 3) {
            temp_v7 = 0x415;
          }
          else if (DAT_0057a9c4 == 4) {
            temp_v7 = 0x1cc;
          }
          temp_v19 = (int)(short)(temp_v2 - 0x14);
          temp_v9 = FUN_001834a4(0xd,temp_v7);
          if (temp_v4 != 4) {
            VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + temp_v20,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(*(short *)(temp_v9 + 8) + temp_v21,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_004aa0b0(temp_v10,temp_v18,0);
          }
          else {
            temp_v16 = (unsigned int)*(short *)(temp_v9 + 8);
            temp_v20 = (unsigned int)*(short *)(temp_v9 + 10);
            temp_v4 = FUN_001834a4(0xd,0x416);
            psVar13 = *(short **)(temp_v4 + 0xc);
            if (psVar13 != (short *)0x0) {
              temp_v9 = (int)*(short *)(temp_v4 + 8) + (int)*psVar13 / 2;
              temp_v4 = (int)*(short *)(temp_v4 + 10) + (int)psVar13[1] / 2;
            }
            else {
              temp_v9 = (int)*(short *)(temp_v4 + 8) + ((*(unsigned short *)(temp_v4 + 4) & 0xffff7fff) >> 1);
              temp_v4 = (int)*(short *)(temp_v4 + 10) + ((*(unsigned short *)(temp_v4 + 6) & 0xffff7fff) >> 1);
            }
            temp_v17 = -temp_v9;
            temp_v9 = FUN_0035fa18(temp_v10 + 0x28c4,temp_v9,temp_v4);
            if (temp_v9 != 0) {
              temp_v9 = FUN_001834a4(0xd,0x71);
            }
            else {
              temp_v9 = FUN_001834a4(0xd,0x70);
            }
            temp_v5 = *(short *)(temp_v9 + 8) + temp_v19;
            VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + (int)(short)(temp_v3 - 0x14) +
                                (temp_v20 - temp_v4),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v17 + temp_v16 + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_004aa0b0(temp_v10,temp_v18,0,temp_v5);
          }
          if (temp_v8 == DAT_0057a9bc - 1U) {
            DAT_0057a9bc = 0;
          }
          temp_v4 = gameGetSlotRecord(DAT_0057a9c4 - 1);
          if (temp_v11 != 0) {
            temp_v2 = *(short *)(temp_v4 + 0x2c) - 10;
            *(short *)(temp_v4 + 0x2c) = temp_v2;
            if (temp_v2 < 1) {
              *(unsigned short *)(temp_v4 + 0x2c) = 0;
            }
          }
          else {
            temp_v2 = *(short *)(temp_v4 + 0x2a) - 10;
            *(short *)(temp_v4 + 0x2a) = temp_v2;
            if (temp_v2 < 1) {
              *(unsigned short *)(temp_v4 + 0x2a) = 0;
              *(unsigned short *)(temp_v4 + 0x60) = 2;
            }
          }
        }
        temp_v15 = (float)(temp_v14 >> 0x20);
        temp_v8 = temp_v8 + 1;
      } while ((int)temp_v8 < DAT_0057a9bc);
    }
    DAT_0057a9c0 = DAT_0057a9c0 + 1;
    break;
  case 0x13:
    puVar14 = (unsigned int *)(temp_v0 + 0x12fd0);
    switch(*puVar14) {
    case 0:
      temp_v4 = 0;
      do {
        if (*(char *)(puVar14 + temp_v4 * 7 + 6) != '\0') {
          temp_v10 = (int)(short)puVar14[temp_v4 * 7 + 5];
          devilIsTextureLoaded(temp_v10,1);
          temp_v15 = (float)(temp_v14 >> 0x20);
          if (temp_v10 == 0) goto LAB_00225ce8;
        }
        temp_v15 = (float)(temp_v14 >> 0x20);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 2);
      *puVar14 = 1;
      *(unsigned int *)(temp_v0 + 0x12fd4) = 0;
      break;
    case 1:
      temp_v4 = *(int *)(temp_v0 + 0x12fd4) + 1;
      *(int *)(temp_v0 + 0x12fd4) = temp_v4;
      *(float *)(temp_v0 + 0x13014) = *(float *)(temp_v0 + 0x13014) + 0.120000005f;
      if (temp_v4 >= 5) {
        *(unsigned int *)(temp_v0 + 0x13014) = 0x3f19999a;
        *puVar14 = 2;
        *(unsigned int *)(temp_v0 + 0x12fd4) = 0;
      }
      break;
    case 2:
      *(int *)(temp_v0 + 0x12fd4) = *(int *)(temp_v0 + 0x12fd4) + 1;
      *(int *)(temp_v0 + 0x12ff8) = *(int *)(temp_v0 + 0x12ff8) + *(int *)(temp_v0 + 0x12ffc);
      *(int *)(temp_v0 + 0x12fdc) = *(int *)(temp_v0 + 0x12fdc) + *(int *)(temp_v0 + 0x12fe0);
      if (*(int *)(temp_v0 + 0x12fd4) >= 6) {
        *(unsigned int *)(temp_v0 + 0x12fe0) = 0xffffffff;
        temp_v7 = 0x120;
        *(unsigned int *)(temp_v0 + 0x12ffc) = 1;
        temp_v4 = randRange(2);
        temp_v10 = flagSelectVariant();
        if ((temp_v10 != 1) && (temp_v10 == 2)) {
          if (temp_v4 == 0) {
            temp_v7 = 0x121;
          }
          else if (temp_v4 == 1) {
            temp_v7 = 0x122;
          }
          else {
            temp_v7 = 0x123;
          }
        }
        FUN_0047f66c(temp_v7);
        *puVar14 = 3;
        *(unsigned int *)(temp_v0 + 0x12fd4) = 0;
      }
      break;
    case 3:
      *(int *)(temp_v0 + 0x12fdc) = *(int *)(temp_v0 + 0x12fdc) + *(int *)(temp_v0 + 0x12fe0);
      *(int *)(temp_v0 + 0x12ff8) = *(int *)(temp_v0 + 0x12ff8) + *(int *)(temp_v0 + 0x12ffc);
      temp_v12 = *(float *)(temp_v0 + 0x13010) + 0.0375f;
      *(float *)(temp_v0 + 0x13010) = temp_v12;
      *(int *)(temp_v0 + 0x12fd4) = *(int *)(temp_v0 + 0x12fd4) + 1;
      if ((int)temp_v12 >= 0x3e99999a) {
        *(unsigned int *)(temp_v0 + 0x13010) = 0x3e99999a;
        *puVar14 = 4;
        *(unsigned int *)(temp_v0 + 0x12fd4) = 0;
      }
      break;
    case 4:
      temp_v4 = *(int *)(temp_v0 + 0x12fd4) + 1;
      *(int *)(temp_v0 + 0x12fd4) = temp_v4;
      if (temp_v4 >= 4) {
        *(unsigned int *)(temp_v0 + 0x12fd4) = 0;
        *puVar14 = 5;
      }
      break;
    case 5:
      *(int *)(temp_v0 + 0x12fdc) = *(int *)(temp_v0 + 0x12fdc) + *(int *)(temp_v0 + 0x12fe0);
      *(int *)(temp_v0 + 0x12ff8) = *(int *)(temp_v0 + 0x12ff8) + *(int *)(temp_v0 + 0x12ffc);
      temp_v12 = *(float *)(temp_v0 + 0x13010) - 0.0375f;
      temp_v4 = *(int *)(temp_v0 + 0x12fd4) + 1;
      *(int *)(temp_v0 + 0x12fd4) = temp_v4;
      *(float *)(temp_v0 + 0x13010) = temp_v12;
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 <= 0.0f) << 0x1d);
      if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v4 >= 8)) {
        *(unsigned int *)(temp_v0 + 0x12fd4) = 0;
        *puVar14 = 6;
      }
      break;
    case 6:
      *(int *)(temp_v0 + 0x12fdc) = *(int *)(temp_v0 + 0x12fdc) + *(int *)(temp_v0 + 0x12fe0);
      *(int *)(temp_v0 + 0x12ff8) = *(int *)(temp_v0 + 0x12ff8) + *(int *)(temp_v0 + 0x12ffc);
      temp_v4 = *(int *)(temp_v0 + 0x12fd4) + 1;
      *(int *)(temp_v0 + 0x12fd4) = temp_v4;
      if (temp_v4 >= 3) {
        *(unsigned int *)(temp_v0 + 0x12fe0) = 0xffffffba;
        *puVar14 = 7;
        *(unsigned int *)(temp_v0 + 0x12fd4) = 0;
        *(unsigned int *)(temp_v0 + 0x12ffc) = 0x46;
      }
      break;
    case 7:
      *(float *)(temp_v0 + 0x13014) = *(float *)(temp_v0 + 0x13014) - 0.120000005f;
      *(int *)(temp_v0 + 0x12fd4) = *(int *)(temp_v0 + 0x12fd4) + 1;
      *(int *)(temp_v0 + 0x12fdc) = *(int *)(temp_v0 + 0x12fdc) + *(int *)(temp_v0 + 0x12fe0);
      *(int *)(temp_v0 + 0x12ff8) = *(int *)(temp_v0 + 0x12ff8) + *(int *)(temp_v0 + 0x12ffc);
      if (*(int *)(temp_v0 + 0x12fd4) >= 5) {
        *puVar14 = 8;
        *(unsigned int *)(temp_v0 + 0x13014) = 0;
      }
      break;
    case 8:
      temp_v4 = 0;
      do {
        if (*(char *)(puVar14 + temp_v4 * 7 + 6) != '\0') {
          FUN_0038b3f8((int)(short)puVar14[temp_v4 * 7 + 5],1);
          *(unsigned char *)(puVar14 + temp_v4 * 7 + 6) = 0;
        }
        temp_v15 = (float)(temp_v14 >> 0x20);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 2);
      *(unsigned int *)(temp_v0 + 0x74a0) = 0;
    }
    break;
  case 0x14:
    temp_v10 = uiMenuRequestStateNine(temp_v0 + 0x28c4);
    if (temp_v10 != 0) {
      *(unsigned int *)(temp_v0 + 0x74a0) = 0x15;
      campCommonBgRelease();
      temp_v10 = g_btlUiBlock;
      FUN_00318c3c(g_btlUiBlock + 0x28c4);
      asdOperatorDelete(*(unsigned int *)(temp_v10 + 0x7488));
      *(unsigned int *)(temp_v10 + 0x7488) = 0;
      if (g_btlUiBlock != 0) {
        asdMemFree();
        g_btlUiBlock = 0;
      }
      jobStop(*(unsigned int *)(temp_v4 + 0x78),0);
    }
  }
LAB_00225ce8:
  puVar7 = (unsigned int *)(temp_v0 + 0x6a70);
  temp_v8 = *puVar7;
  if ((int)temp_v8 >= 1) {
    temp_v12 = *(float *)(temp_v0 + 0x6a6c) * 0.4f;
    if ((temp_v8 & 1) != 0) {
      temp_v12 = -temp_v12;
    }
    *(int *)(temp_v0 + 0x6a64) = (int)temp_v12;
    *(int *)(temp_v0 + 0x6a68) = (int)temp_v12;
    temp_v13 = (float)VectorSignedToFloat(*(int *)(temp_v0 + 0x6a78),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = (float)VectorSignedToFloat(*(int *)(temp_v0 + 0x6a78) - temp_v8,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = ((temp_v12 * 1.5707964f) / temp_v13) * 40.743664f;
    FUN_001a1ee0();
    *(float *)(temp_v0 + 0x6a6c) = (temp_v15 - temp_v12) * *(float *)(temp_v0 + 0x6a74);
    *puVar7 = *puVar7 - 1;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x6a64) = 0;
    *(unsigned int *)(temp_v0 + 0x6a68) = 0;
  }
  return 0;
}

} /* extern "C" */
