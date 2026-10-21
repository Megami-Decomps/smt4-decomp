/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328838` (_code @ 0x328838, 0x1238 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd8dc(...);
int FUN_00406768(...);

int asdSequenceRequest(...);
int FUN_001695a0(void);
int resourceListDestroy(void);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int placeWinRelease(void);
int messageSetMode(...);
int asdCameraInitAreas(void);
int ptrListRemoveClearOwner(...);
int FUN_001aeafc(...);
int FUN_001f3eec(...);
int FUN_00214da4(void);
int FUN_0022677c(...);
int gameStateClearFlag(void);
int FUN_00314c38(...);
int mapPlaceSet(...);
int FUN_00324c48(...);
int campCommonBgRelease(void);
int campButtonHelpRelease(void);
int FUN_00387ac4(...);
int FUN_003d2150(...);
int FUN_003d2158(...);
int soundChannelStopAll(...);
int FUN_003e5858(void);
int linkHolderClearFlag(...);
int FUN_003e5c00(void);
int VectorFloatToUnsigned(double, int);

int textFormatBuffer(...);
int FUN_0013cab8(...);
int FUN_001517b4(...);
int FUN_001642e4(...);
int sysPlaySe(...);
int resOwnerRunNodeHandlers(...);
int FUN_001abbc4(void);
int FUN_001b4eb8(void);
int slotSetRequest(...);
int FUN_0020214c(void);
int placeWinStartText(...);
int FUN_00275bc8(...);
int scrScriptProcessStartEntry(...);
int campCommonBgAcquire(void);
int FUN_0031e198(void);
int campButtonHelpAcquire(void);
int FUN_0036b824(...);
int soundChannelRequestIfEnabled(...);
int FUN_003d54f8(...);
int controllerGetSourceValue(...);
int controllerTargetNodeStart(...);
int linkHolderApplyFirst(...);
int FUN_003e54b8(...);
int linkedTargetSetFloat(...);
int linkHolderSetFlag(...);

int FUN_0013c174(...);
int FUN_0013c884(...);
int uiSetFloatPair(...);
int FUN_0014f0dc(...);
int FUN_001523b8(...);
int asdOperatorNew(void);
int FUN_00178b04(...);
int FUN_0019c0e0(unsigned int);
int controllerSelectionSetMode(...);
int controllerApplyAtUnitScale(void);
int cameraAnimationSampleAndAdvance(...);
int FUN_003f9e80(void);
int controllerSetPosition(...);
int FUN_003fd7b4(...);
int FUN_003fe86c(...);
int FUN_0040aa6c(void);
int FUN_0040aad4(unsigned int, int);
int FUN_0040ab7c(unsigned int, int);
int handleRegistryRegisterObject(int, unsigned int);
int FUN_0040ae70(...);
int resourceOwnerLoadNamed(...);
int FUN_0040b730(unsigned int, unsigned int, int);
int FUN_0040ba38(void);
int FUN_0045b538(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int sp100; /* 0x100: local_100 */
} void_stack;

extern unsigned char LAB_00328c18; /* 0x328c18 */
extern unsigned char LAB_00328c6c; /* 0x328c6c */
extern unsigned char LAB_00328c8c; /* 0x328c8c */
extern unsigned char LAB_00328cac; /* 0x328cac */
extern unsigned char LAB_00328ccc; /* 0x328ccc */
extern unsigned char LAB_0032904c; /* 0x32904c */
extern unsigned char LAB_00329068; /* 0x329068 */
extern unsigned char LAB_00329084; /* 0x329084 */
extern unsigned char LAB_003290a0; /* 0x3290a0 */
extern unsigned char LAB_003290c4; /* 0x3290c4 */
extern unsigned char LAB_003290e4; /* 0x3290e4 */
extern unsigned char DAT_00526180; /* 0x526180 */
extern unsigned char DAT_00557c60; /* 0x557c60 */
extern int g_handleRegistry; /* 0x56fcc0 */
extern int g_localTmnl; /* 0x56fccc */
extern unsigned char DAT_005f1727; /* 0x5f1727 */
extern unsigned char DAT_005f1728; /* 0x5f1728 */
extern unsigned char DAT_005f1729; /* 0x5f1729 */
extern unsigned char DAT_005f172a; /* 0x5f172a */
extern int DAT_005f1b74; /* 0x5f1b74 */
extern int DAT_005f1b78; /* 0x5f1b78 */
extern unsigned int DAT_005f1b7c; /* 0x5f1b7c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_0013cab8. */
extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: uiSetFloatPair. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: resourceListDestroy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019c0e0. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: resOwnerRunNodeHandlers. */
/* Supplied declaration required: placeWinRelease. */
/* Supplied declaration required: messageSetMode. */
/* Supplied declaration required: FUN_001abbc4. */
/* Supplied declaration required: asdCameraInitAreas. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_001aeafc. */
/* Supplied declaration required: FUN_001b4eb8. */
/* Supplied declaration required: FUN_001f3eec. */
/* Supplied declaration required: slotSetRequest. */
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: placeWinStartText. */
/* Supplied declaration required: FUN_00214da4. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int screenFadeIsBusy(void);
extern int FUN_002a4b74(void);
/* Supplied declaration required: gameStateClearFlag. */
/* Supplied declaration required: FUN_00314c38. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: FUN_0031e198. */
extern int FUN_00323bc4(unsigned int);
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: FUN_00324c48. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: FUN_0036b824. */
/* Supplied declaration required: campButtonHelpRelease. */
/* Supplied declaration required: FUN_00387ac4. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: controllerSelectionSetMode. */
extern int linkHolderCallFirst(unsigned int);
/* Supplied declaration required: controllerGetSourceValue. */
/* Supplied declaration required: controllerTargetNodeStart. */
/* Supplied declaration required: linkHolderApplyFirst. */
/* Supplied declaration required: FUN_003e54b8. */
extern int linkHolderCheckFirst(unsigned int);
/* Supplied declaration required: linkedTargetSetFloat. */
/* Supplied declaration required: FUN_003e5858. */
extern int fourPtrsAllNull(unsigned int);
/* Supplied declaration required: linkHolderSetFlag. */
/* Supplied declaration required: linkHolderClearFlag. */
/* Supplied declaration required: FUN_003e5c00. */
extern unsigned int *_ZN9Obj557ae8C1Ev(void);
/* Supplied declaration required: controllerApplyAtUnitScale. */
/* Supplied declaration required: cameraAnimationSampleAndAdvance. */
/* Supplied declaration required: FUN_003f9e80. */
/* Supplied declaration required: controllerSetPosition. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_003fd8dc. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_00406768. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(int);
/* Supplied declaration required: resourceOwnerLoadNamed. */
/* Supplied declaration required: FUN_0040b730. */
/* Supplied declaration required: FUN_0040ba38. */
/* Supplied declaration required: FUN_0045b538. */
extern int FUN_004ffba8(unsigned int);


unsigned int FUN_00328838(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 81 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned int temp_v3;
  int *piVar7;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  int in_s0;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int uStack_fc;
  unsigned char temp_v10 [12];
  unsigned char temp_v11 [12];
  int temp_v12;
  unsigned int temp_v13;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v14;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned char temp_v15 [4];
  unsigned char temp_v16 [24];
  
  temp_v0 = g_localTmnl;
  if (*(unsigned int *)(g_localTmnl + 8) >= 2) {
    temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(g_localTmnl + 0x3c),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = *(int *)(g_localTmnl + *(int *)(g_localTmnl + 0x54c) * 4 + 0x30);
    temp_v8 = *(float *)(**(int **)(*(int *)(temp_v4 + 0x34) + 0x90) + 8);
    temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < temp_v7) << 0x1f) |
            ((unsigned int)(temp_v8 == temp_v7) << 0x1e);
    in_fpscr = temp_v5 | ((unsigned int)((temp_v8 != temp_v8) || (temp_v7 != temp_v7)) << 0x1c);
    temp_v1 = (unsigned char)(temp_v5 >> 0x18);
    if (!((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
      cameraAnimationSampleAndAdvance(temp_v4,&temp_v9,0);
    }
    else {
      cameraAnimationSampleAndAdvance(temp_v4,&temp_v9,0);
    }
    *(int *)(temp_v0 + 0x3c) = *(int *)(temp_v0 + 0x3c) + 1;
    uiSetFloatPair(temp_v0 + 0x40);
    FUN_0014f0dc(temp_v0 + 0x40,&temp_v9,temp_v10,temp_v11);
    FUN_001523b8(temp_v0 + 0x40,1);
    temp_v4 = 0;
    in_s0 = temp_v12;
    do {
      temp_v6 = temp_v0 + temp_v4 * 0xc;
      if (*(char *)(temp_v6 + 0x56c) != '\0') {
        FUN_0019c0e0(*(unsigned int *)(temp_v6 + 0x568));
        temp_v2 = FUN_00323bc4(*(unsigned int *)(temp_v6 + 0x568));
        if (temp_v2 != 0) {
          *(unsigned char *)(temp_v6 + 0x56c) = 0;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
  }
  temp_v4 = g_localTmnl;
  switch(*(unsigned int *)(temp_v0 + 8)) {
  case 0:
    temp_v6 = 0x130;
    asdOperatorNew();
    puVar4 = (unsigned int *)0x0;
    if (temp_v6 != 0) {
      puVar4 = (unsigned int *)_ZN9Obj557ae8C1Ev();
      *puVar4 = (unsigned int)&DAT_00557c60;
    }
    *(unsigned int **)(temp_v4 + 0x28) = puVar4;
    FUN_0040ba38();
    temp_v5 = 0;
    do {
      FUN_0040b730(*(unsigned int *)(temp_v4 + 0x28),temp_v5 & 0xff,0x1c0);
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 3);
    temp_v6 = 0x20;
    FUN_00178b04(0x20,&LAB_00328c18,0x1ab);
    temp_v3 = 0;
    if (temp_v6 != 0) {
      temp_v3 = modelListInit();
    }
    *(unsigned int *)(temp_v4 + 0x2c) = temp_v3;
    FUN_0040aa6c();
    FUN_0040aad4(*(unsigned int *)(temp_v4 + 0x2c),0);
    FUN_0040ab7c(*(unsigned int *)(temp_v4 + 0x2c),0);
    FUN_0045b538(*(int *)(*(int *)(temp_v4 + 0x2c) + 0xc) + 0xc);
    temp_v3 = *(unsigned int *)(*(int *)(temp_v4 + 0x2c) + 4);
    handleRegistryRegisterObject(g_handleRegistry,temp_v3);
    FUN_003fe86c(temp_v3,0,1);
    controllerSetPosition(temp_v3);
    FUN_003fd7b4(temp_v3);
    FUN_0013c174(&LAB_00328c6c,temp_v16,1);
    temp_v6 = 0x48;
    FUN_00178b04(0x48,&LAB_00328c18,0x1c1);
    if (temp_v6 != 0) {
      FUN_003f9e80();
    }
    *(int *)(temp_v4 + 0x30) = temp_v6;
    controllerApplyAtUnitScale();
    FUN_0013c174(&LAB_00328c8c,temp_v16,1);
    temp_v6 = 0x48;
    FUN_00178b04(0x48,&LAB_00328c18,0x1c5);
    if (temp_v6 != 0) {
      FUN_003f9e80();
    }
    *(int *)(temp_v4 + 0x34) = temp_v6;
    controllerApplyAtUnitScale();
    FUN_0013c174(&LAB_00328cac,temp_v16,1);
    temp_v6 = 0x48;
    FUN_00178b04(0x48,&LAB_00328c18,0x1c9);
    if (temp_v6 != 0) {
      FUN_003f9e80();
    }
    *(int *)(temp_v4 + 0x38) = temp_v6;
    controllerApplyAtUnitScale();
    *(unsigned int *)(temp_v4 + 0x54c) = 0xffffffff;
    temp_v6 = g_handleRegistry;
    resourceOwnerLoadNamed(g_handleRegistry,&LAB_00328ccc);
    temp_v2 = FUN_0040af60(temp_v6);
    if (temp_v2 != 0) {
      FUN_0040ae70(temp_v6,1);
    }
    controllerSelectionSetMode(temp_v4,2);
    FUN_0013c884(temp_v4 + 0x40,1);
    temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x3c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = *(int *)(temp_v4 + *(int *)(temp_v4 + 0x54c) * 4 + 0x30);
    temp_v8 = *(float *)(**(int **)(*(int *)(temp_v6 + 0x34) + 0x90) + 8);
    temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < temp_v7) << 0x1f) |
            ((unsigned int)(temp_v8 == temp_v7) << 0x1e);
    in_fpscr = temp_v5 | ((unsigned int)((temp_v8 != temp_v8) || (temp_v7 != temp_v7)) << 0x1c);
    temp_v1 = (unsigned char)(temp_v5 >> 0x18);
    if (!((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
      cameraAnimationSampleAndAdvance(temp_v6,&temp_v9,0);
    }
    else {
      cameraAnimationSampleAndAdvance(temp_v6,&temp_v9,0);
    }
    *(int *)(temp_v4 + 0x3c) = *(int *)(temp_v4 + 0x3c) + 1;
    uiSetFloatPair(temp_v4 + 0x40);
    FUN_0014f0dc(temp_v4 + 0x40,&temp_v9,temp_v10,temp_v11);
    FUN_001523b8(temp_v4 + 0x40,1);
    FUN_0036b824(temp_v4 + 0x40);
    *(int *)(g_handleRegistry + 0xc) = temp_v4 + 0x40;
    FUN_0031e198();
    campCommonBgAcquire();
    campButtonHelpAcquire();
    puVar5 = &LAB_0032904c;
    FUN_001642e4(&LAB_0032904c,temp_v15,1,0x80);
    *(unsigned char **)(temp_v4 + 0x564) = puVar5;
    puVar5 = &LAB_00329068;
    FUN_001642e4(&LAB_00329068,temp_v15,1,0x80);
    *(unsigned char **)(temp_v4 + 0x570) = puVar5;
    puVar5 = &LAB_00329084;
    FUN_001642e4(&LAB_00329084,temp_v15,1,0x80);
    *(unsigned char **)(temp_v4 + 0x57c) = puVar5;
    puVar5 = &LAB_003290a0;
    FUN_001642e4(&LAB_003290a0,temp_v15,1,0x80);
    *(unsigned char **)(temp_v4 + 0x588) = puVar5;
    temp_v6 = 0;
    temp_v13 = 0;
    uStack_74 = 0x42c80000;
    uStack_70 = 0;
    uStack_6c = 0x3f800000;
    uStack_68 = 0;
    uStack_64 = 0x42c80000;
    uStack_60 = 0;
    uStack_5c = 0x3f800000;
    temp_v14 = 0;
    uStack_54 = 0x42c80000;
    uStack_50 = 0;
    uStack_4c = 0x3f800000;
    uStack_48 = 0;
    uStack_44 = 0x42c80000;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    do {
      temp_v2 = temp_v4 + temp_v6 * 0xc;
      temp_v3 = *(unsigned int *)(temp_v2 + 0x564);
      FUN_001abbc4();
      *(unsigned int *)(temp_v2 + 0x568) = temp_v3;
      FUN_001b4eb8();
      temp_v6 = temp_v6 + 1;
      *(unsigned char *)(temp_v2 + 0x56c) = 0;
    } while (temp_v6 < 4);
    temp_v4 = bgmGetStateById(0x1000040);
    if (temp_v4 != 1) {
      soundChannelRequestIfEnabled(0x1000040,0,0x3c);
    }
    *(unsigned int *)(temp_v0 + 8) = 2;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned char *)(temp_v0 + 0x559) = 0;
    break;
  case 2:
    temp_v4 = fourPtrsAllNull(*(unsigned int *)(temp_v0 + 0x28));
    if (temp_v4 == 0) break;
    controllerTargetNodeStart(*(unsigned int *)(temp_v0 + 0x28),0);
    linkedTargetSetFloat(*(unsigned int *)(temp_v0 + 0x28));
    puVar5 = &LAB_003290c4;
    FUN_0020214c();
    *(unsigned char **)(temp_v0 + 0x18) = puVar5;
    puVar5 = &LAB_003290e4;
    FUN_0020214c();
    *(unsigned char **)(temp_v0 + 0x1c) = puVar5;
    temp_v4 = *(int *)(temp_v0 + 0x18);
    FUN_00275bc8(temp_v4,puVar5);
    *(int *)(temp_v0 + 0x20) = temp_v4;
    *(unsigned int *)(temp_v4 + 0x108) = 2;
    temp_v4 = FUN_0013def0(0);
    if (temp_v4 == 3) {
      FUN_0013cab8(0,10,0xff);
    }
    temp_v4 = FUN_0013def0(1);
    if (temp_v4 == 3) {
      FUN_0013cab8(1,10,0xff);
    }
    temp_v4 = g_localTmnl;
    if (*(int *)(*(int *)(g_localTmnl + 0x560) * 0x10 + 0x56fcd8) == 0) {
      textFormatBuffer(&temp_v9,&DAT_00526180);
    }
    if (*(int *)(*(int *)(temp_v4 + 0x560) * 0x10 + 0x56fcd8) == 1) {
      textFormatBuffer(&temp_v9,"冂躂蒂䂁憂銂膂躂薂");
    }
    if (*(int *)(*(int *)(temp_v4 + 0x560) * 0x10 + 0x56fcd8) == 2) {
      textFormatBuffer(&temp_v9,"劂銂蒂䂁憂銂膂躂薂");
    }
    if (*(int *)(*(int *)(temp_v4 + 0x560) * 0x10 + 0x56fcd8) == 3) {
      textFormatBuffer(&temp_v9,"厂钂袂䂁憂銂膂躂薂＀");
    }
    placeWinStartText(&temp_v9);
    sysPlaySe(0x92);
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v0 + 0x20),
                 *(unsigned int *)(*(int *)(temp_v0 + 0x560) * 0x10 + 0x56fcdc));
    temp_v3 = 4;
    *(unsigned int *)(temp_v0 + 8) = temp_v3;
    break;
  case 4:
    temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v0 + 0x20));
    if (temp_v4 != 2) break;
    temp_v4 = FUN_002a4b74();
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v0 + 8) = 0xf;
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    else {
      *(unsigned int *)(temp_v0 + 8) = 0xe;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    temp_v4 = linkHolderCallFirst(*(unsigned int *)(temp_v0 + 0x28));
    if ((temp_v4 != 0x13) || (controllerGetSourceValue(*(unsigned int *)(temp_v0 + 0x28)), in_s0 < 0x41a00000)) break;
    FUN_003e54b8(*(unsigned int *)(temp_v0 + 0x28));
    temp_v3 = *(unsigned int *)(temp_v0 + 0x28);
    linkedTargetSetFloat(temp_v3);
    break;
  case 5:
    temp_v4 = linkHolderCheckFirst(*(unsigned int *)(temp_v0 + 0x28));
    if (temp_v4 != 0) {
      linkHolderApplyFirst(*(unsigned int *)(temp_v0 + 0x28),0);
    }
    temp_v4 = 6;
    FUN_001517b4(6,2);
    if (temp_v4 == 0) {
      temp_v4 = 9;
      FUN_001517b4(9,2);
      if (temp_v4 == 0) {
        temp_v4 = 1;
        FUN_001517b4();
        if (temp_v4 == 0) {
          temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x3c),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = *(float *)(**(int **)(*(int *)(*(int *)(temp_v0 + *(int *)(temp_v0 + 0x54c) * 4 +
                                                          0x30) + 0x34) + 0x90) + 8);
          temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < temp_v7) << 0x1f);
          in_fpscr = temp_v5 | ((unsigned int)((temp_v8 != temp_v8) || (temp_v7 != temp_v7)) << 0x1c);
          if (((unsigned char)(temp_v5 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) ||
             (temp_v4 = FUN_004ffba8(*(unsigned int *)(*(int *)(temp_v0 + 0x2c) + 4)), temp_v4 == 0)) {
            temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x3c),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v4 = (int)temp_v7;
            if ((temp_v4 >= 6) && (temp_v6 = FUN_0013def0(0), temp_v6 == 3)) {
              FUN_003d54f8(0,8);
            }
            if (temp_v4 != 0xb4) {
              if (temp_v4 != 0x13f) {
                if (temp_v4 == 0x144) {
                  linkHolderSetFlag(*(unsigned int *)(temp_v0 + 0x28));
                  break;
                }
                if (temp_v4 != 0x17f) break;
                *(unsigned int *)(temp_v0 + 8) = 6;
                *(unsigned int *)(temp_v0 + 0xc) = 0;
                break;
              }
              *(unsigned char *)(temp_v0 + 0x578) = 1;
              temp_v3 = *(unsigned int *)(temp_v0 + 0x574);
            }
            else {
              *(unsigned char *)(temp_v0 + 0x56c) = 1;
              temp_v3 = *(unsigned int *)(temp_v0 + 0x568);
            }
            resOwnerRunNodeHandlers(temp_v3);
          }
          else {
            *(unsigned int *)(temp_v0 + 8) = 6;
            *(unsigned int *)(temp_v0 + 0xc) = 0;
          }
          break;
        }
      }
    }
    temp_v4 = VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x3c),(unsigned char)(in_fpscr >> 0x16) & 3);
    if (temp_v4 >= 0x40c00001) {
      *(unsigned int *)(temp_v0 + 8) = 6;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned char *)(temp_v0 + 0x558) = 1;
    }
    break;
  case 6:
    if (*(char *)(temp_v0 + 0x558) != '\0') {
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
    }
    else {
      slotSetRequest(0,0x14,0xff);
      slotSetRequest(1,0x14,0xff);
    }
    *(unsigned int *)(temp_v0 + 8) = 7;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    break;
  case 7:
    temp_v4 = screenFadeIsBusy();
    if (temp_v4 != 0) break;
    linkHolderSetFlag(*(unsigned int *)(temp_v0 + 0x28));
    *(unsigned char *)(temp_v0 + 0x56c) = 0;
    *(unsigned char *)(temp_v0 + 0x578) = 0;
    *(unsigned int *)(temp_v0 + 8) = 9;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x560) = *(unsigned int *)(*(int *)(temp_v0 + 0x560) * 0x10 + 0x56fcd4);
    if (*(char *)(temp_v0 + 0x558) == '\0') break;
    soundChannelStopAll(0xf);
    FUN_003d2158(0x10000b2,0);
    FUN_003d2150(0x10000b3);
    temp_v3 = 0xf;
    *(unsigned int *)(temp_v0 + 8) = temp_v3;
    break;
  case 9:
    if (*(char *)(temp_v0 + 0x558) != '\0') {
      controllerSelectionSetMode(temp_v0,2);
      *(unsigned char *)(temp_v0 + 0x550) = 1;
      *(unsigned int *)(temp_v0 + 0x554) = 0x88;
      controllerTargetNodeStart(*(unsigned int *)(temp_v0 + 0x28),0x1a);
      FUN_003d54f8(0,10);
      FUN_003d54f8(1,10);
    }
    else {
      controllerSelectionSetMode(temp_v0,1);
      *(unsigned char *)(temp_v0 + 0x550) = 1;
      *(unsigned int *)(temp_v0 + 0x554) = 0;
      controllerTargetNodeStart(*(unsigned int *)(temp_v0 + 0x28),0x1a);
      FUN_003d54f8(0,0x14);
      FUN_003d54f8(1,0x14);
    }
    *(unsigned int *)(temp_v0 + 8) = 10;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    break;
  case 10:
    temp_v6 = screenFadeIsBusy();
    temp_v4 = g_localTmnl;
    if (temp_v6 != 0) break;
    if (*(char *)(temp_v0 + 0x558) == '\0') {
      if (*(int *)(temp_v0 + 0x554) == 0x56) {
        if (*(int *)(*(int *)(g_localTmnl + 0x560) * 0x10 + 0x56fcd8) == 0) {
          textFormatBuffer(&temp_v9,&DAT_00526180);
        }
        if (*(int *)(*(int *)(temp_v4 + 0x560) * 0x10 + 0x56fcd8) == 1) {
          textFormatBuffer(&temp_v9,"冂躂蒂䂁憂銂膂躂薂");
        }
        if (*(int *)(*(int *)(temp_v4 + 0x560) * 0x10 + 0x56fcd8) == 2) {
          textFormatBuffer(&temp_v9,"劂銂蒂䂁憂銂膂躂薂");
        }
        if (*(int *)(*(int *)(temp_v4 + 0x560) * 0x10 + 0x56fcd8) == 3) {
          textFormatBuffer(&temp_v9,"厂钂袂䂁憂銂膂躂薂＀");
        }
        placeWinStartText(&temp_v9);
        if (*(char *)(temp_v0 + 0x558) != '\0') {
          *(unsigned int *)(temp_v0 + 8) = 0xb;
          *(unsigned int *)(temp_v0 + 0xc) = 0;
          break;
        }
      }
      if (*(int *)(temp_v0 + 0x554) < 0x88) break;
    }
    *(unsigned int *)(temp_v0 + 8) = 0xb;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    break;
  case 0xb:
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    slotSetRequest(0,0x14,0xff);
    slotSetRequest(1,0x14,0xff);
    *(unsigned int *)(temp_v0 + 8) = 0xf;
    break;
  case 0xe:
    temp_v4 = scrRunOpcodesStub(*(unsigned int *)(temp_v0 + 0x20));
    if (temp_v4 != 2) break;
    *(unsigned char *)(temp_v0 + 0x558) = 0;
    FUN_003d2150(0x10000b2);
    FUN_00387ac4(0);
    sysPlaySe(0x59);
    FUN_00387ac4(0);
    *(unsigned int *)(temp_v0 + 8) = 5;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    FUN_00214da4();
    if (*(char *)(temp_v0 + 0x550) != '\0') {
      linkHolderClearFlag(*(unsigned int *)(temp_v0 + 0x28));
      linkHolderApplyFirst(*(unsigned int *)(temp_v0 + 0x28),0x13);
      *(unsigned char *)(temp_v0 + 0x550) = 0;
    }
    FUN_0022677c(0,0xff);
    *(unsigned char *)(temp_v0 + 0x56c) = 0;
    *(unsigned char *)(temp_v0 + 0x578) = 0;
    *(unsigned char *)(temp_v0 + 0x584) = 0;
    *(unsigned char *)(temp_v0 + 0x590) = 0;
    controllerSelectionSetMode(temp_v0,0);
    controllerTargetNodeStart(*(unsigned int *)(temp_v0 + 0x28),0x13);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x28);
    linkedTargetSetFloat(temp_v3);
    break;
  case 0xf:
    temp_v4 = screenFadeIsBusy();
    if (temp_v4 == 0) {
      if (*(int *)(temp_v0 + 0x20) != 0) {
        scrScriptProcessDestroy();
        *(unsigned int *)(temp_v0 + 0x20) = 0;
      }
      if (*(int *)(temp_v0 + 0x18) != 0) {
        asdMemFree();
        *(unsigned int *)(temp_v0 + 0x18) = 0;
      }
      if (*(int *)(temp_v0 + 0x1c) != 0) {
        asdMemFree();
        *(unsigned int *)(temp_v0 + 0x1c) = 0;
      }
      if (*(int *)(temp_v0 + 0x24) != 0) {
        asdMemFree();
        *(unsigned int *)(temp_v0 + 0x24) = 0;
      }
      FUN_001695a0();
      FUN_001aeafc(g_handleRegistry);
      temp_v4 = g_localTmnl;
      asdCameraInitAreas();
      if (*(int *)(temp_v4 + 0x28) != 0) {
        FUN_003e5c00();
        if (*(int **)(temp_v4 + 0x28) != (int *)0x0) {
          (**(romwright_code **)(**(int **)(temp_v4 + 0x28) + 4))();
        }
        *(unsigned int *)(temp_v4 + 0x28) = 0;
      }
      if (*(int *)(temp_v4 + 0x2c) != 0) {
        ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v4 + 0x2c) + 4));
        if (*(int **)(temp_v4 + 0x2c) != (int *)0x0) {
          (**(romwright_code **)(**(int **)(temp_v4 + 0x2c) + 4))();
          *(unsigned int *)(temp_v4 + 0x2c) = 0;
        }
      }
      temp_v6 = 0;
      do {
        temp_v2 = temp_v4 + temp_v6 * 4;
        piVar7 = *(int **)(temp_v2 + 0x30);
        if (piVar7 != (int *)0x0) {
          (**(romwright_code **)(*piVar7 + 4))();
          *(unsigned int *)(temp_v2 + 0x30) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 3);
      placeWinRelease();
      campCommonBgRelease();
      campButtonHelpRelease();
      temp_v6 = 0;
      do {
        temp_v2 = temp_v4 + temp_v6 * 0xc;
        if (*(int *)(temp_v2 + 0x568) != 0) {
          resourceListDestroy();
          *(unsigned int *)(temp_v2 + 0x568) = 0;
        }
        if (*(int *)(temp_v2 + 0x564) != 0) {
          asdMemFree();
          *(unsigned int *)(temp_v2 + 0x564) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      messageSetMode(1);
      gameStateClearFlag();
      temp_v0 = *(int *)(temp_v0 + 0x560) * 0x10;
      if ((DAT_005f1b74 == *(short *)(temp_v0 + 0x56fcd0)) &&
         (DAT_005f1b78 == *(char *)(temp_v0 + 0x56fcd2))) {
        FUN_00324c48(DAT_005f1b74,DAT_005f1b78,DAT_005f1b7c);
      }
      else {
        mapPlaceSet((int)*(short *)(temp_v0 + 0x56fcd0),(int)*(char *)(temp_v0 + 0x56fcd2),
                     (int)*(char *)(temp_v0 + 0x56fcd3));
        uStack_fc = (unsigned int)DAT_005f172a;
        temp_v9 = (unsigned int)DAT_005f1729;
        FUN_00314c38(0,0,DAT_005f1727,DAT_005f1728);
      }
      gameStateClearFlag();
      asdSequenceRequest(6,0);
      return 0xffffffff;
    }
  }
  if (*(int *)(temp_v0 + 0x28) != 0) {
    FUN_003e5858();
  }
  if (*(char *)(temp_v0 + 0x550) != '\0') {
    temp_v4 = *(int *)(temp_v0 + 0x554) + 1;
    *(int *)(temp_v0 + 0x554) = temp_v4;
    if (temp_v4 < 0x33) {
      temp_v4 = *(int *)(temp_v0 + 0x554) - 0x1e;
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = 0.6f;
      FUN_001f3eec(temp_v4);
      temp_v8 = 255.0f;
      temp_v4 = VectorFloatToUnsigned(temp_v7 * 255.0f,3);
      FUN_003fd8dc(*(unsigned int *)(*(int *)(temp_v0 + 0x2c) + 4),8,temp_v4 * 0x1010100 + 0xff);
      temp_v4 = *(int *)(temp_v0 + 0x554) - 0x1e;
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = 0.1f;
      FUN_001f3eec(temp_v4);
      temp_v4 = VectorFloatToUnsigned(temp_v7 * temp_v8,3);
      FUN_00406768(*(unsigned int *)(g_handleRegistry + 4),0,temp_v4 * 0x1010100 + 0xff);
    }
    if (*(int *)(temp_v0 + 0x554) == 0x28) {
      FUN_003d2150(0x10000c6);
      *(unsigned char *)(temp_v0 + 0x584) = 1;
      resOwnerRunNodeHandlers(*(unsigned int *)(temp_v0 + 0x580));
    }
    if (*(int *)(temp_v0 + 0x554) == 0x49) {
      FUN_003d2150(0x10000b3);
      *(unsigned char *)(temp_v0 + 0x590) = 1;
      resOwnerRunNodeHandlers(*(unsigned int *)(temp_v0 + 0x58c));
    }
    if (*(int *)(temp_v0 + 0x554) == 0x55) {
      linkHolderClearFlag(*(unsigned int *)(temp_v0 + 0x28));
      controllerTargetNodeStart(*(unsigned int *)(temp_v0 + 0x28),0x1a);
      linkedTargetSetFloat(*(unsigned int *)(temp_v0 + 0x28));
    }
    if ((*(int *)(temp_v0 + 0x554) >= 0x88) &&
       (temp_v4 = linkHolderCheckFirst(*(unsigned int *)(temp_v0 + 0x28)), temp_v4 != 0)) {
      linkHolderApplyFirst(*(unsigned int *)(temp_v0 + 0x28),0);
      controllerSelectionSetMode(temp_v0,2);
      *(unsigned char *)(temp_v0 + 0x550) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
