/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e0d8` (_code @ 0x27e0d8, 0x1cd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f3eec(...);
int FUN_003e5858(void);
int FUN_003fd8dc(...);
int FUN_00406768(...);
int VectorFloatToUnsigned(double, int);

int asdSequenceRequest(...);
int jobStop(...);
int FUN_001695a0(void);
int resourceListDestroy(void);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int FUN_0019e2dc(void);
int FUN_0019ea64(...);
int FUN_001ad6d8(void);
int FUN_001aeafc(...);
int FUN_00214da4(void);
int gameStateClearFlag(void);
int FUN_00314c38(...);
int mapPlaceSet(...);
int FUN_00324c48(...);
int useCounterSelectMode2(void);
int campCommonBgRelease(void);
int campButtonHelpRelease(void);
int FUN_003a2278(...);
int FUN_003d2150(...);
int linkHolderClearFlag(...);
int FUN_003e5c00(void);
int FUN_00408184(...);

int FUN_001628c0(...);
int FUN_00168980(...);
int resOwnerRunNodeHandlers(...);
int ptrListRemoveClearOwner(...);
int FUN_001f4908(...);
int FUN_0021b6ec(...);
int FUN_00224880(...);
int useCounterStart(void);
int FUN_002686b8(void);
int FUN_0026edbc(...);
int msgWindowReset(void);
int FUN_002bf4f4(...);
int FUN_0031f27c(...);
int obj7ECSetPair(...);
int FUN_0035d8a4(void);
int FUN_003d2158(...);
int soundChannelStopAll(...);
int FUN_003d54f8(...);
int FUN_003e542c(...);
int linkHolderApplyFirst(...);
int FUN_003e54b8(...);
int linkHolderSetFlag(...);

int FUN_00100388(...);
int FUN_0013c884(...);
int FUN_0013cab8(...);
int FUN_001517b4(...);
int FUN_001642e4(...);
int sysPlaySe(...);
int gameFlagIsSet(...);
int FUN_001abbc4(void);
int FUN_001b4eb8(void);
int FUN_0020214c(void);
int FUN_0020401c(...);
int FUN_0022677c(...);
int FUN_00275bc8(...);
int scrScriptProcessStartEntry(...);
int FUN_003180c4(...);
int campCommonBgAcquire(void);
int FUN_0031e198(void);
int campButtonHelpAcquire(void);
int FUN_0036b824(...);
int FUN_003870a8(...);
int soundChannelRequestIfEnabled(...);
int controllerTargetNodeStart(...);
int linkedTargetSetFloat(...);
int gameFlagSetValue(...);
int FUN_0040ae70(...);
int FUN_004d9c54(...);

int FUN_0013c174(...);
int FUN_001418fc(...);
int FUN_0014f0dc(...);
int FUN_001523b8(...);
int asdOperatorNew(void);
int FUN_00178b04(...);
int FUN_0019c0e0(unsigned int);
int FUN_003f9c0c(void);
int FUN_003f9c6c(...);
int FUN_003f9e80(void);
int FUN_003fe86c(...);
int FUN_0040aa6c(void);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int FUN_0040ace8(...);
int FUN_0040b0f8(...);
int FUN_0040b730(unsigned int, unsigned int, int);
int FUN_0040ba38(void);
int FUN_0045b538(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
} void_stack;

extern unsigned char LAB_0027e4bc; /* 0x27e4bc */
extern unsigned char LAB_0027e510; /* 0x27e510 */
extern unsigned char LAB_0027e52c; /* 0x27e52c */
extern unsigned char LAB_0027e548; /* 0x27e548 */
extern unsigned char LAB_0027e564; /* 0x27e564 */
extern unsigned char LAB_0027e888; /* 0x27e888 */
extern unsigned char LAB_0027e8a4; /* 0x27e8a4 */
extern unsigned char LAB_0027e8c0; /* 0x27e8c0 */
extern unsigned char LAB_0027e8dc; /* 0x27e8dc */
extern unsigned char LAB_0027ece0; /* 0x27ece0 */
extern unsigned char LAB_0027ecf8; /* 0x27ecf8 */
extern unsigned char LAB_0027ed10; /* 0x27ed10 */
extern unsigned char LAB_0027f148; /* 0x27f148 */
extern unsigned char LAB_0027f160; /* 0x27f160 */
extern unsigned char LAB_0027f174; /* 0x27f174 */
extern unsigned char LAB_0027fb98; /* 0x27fb98 */
extern unsigned char DAT_00526210; /* 0x526210 */
extern unsigned char DAT_00557c60; /* 0x557c60 */
extern int g_handleRegistry; /* 0x56fcc0 */
extern unsigned int *g_tmnl; /* 0x56fd30 */
extern char s_________0056fd3d[22]; /* 0x56fd3d */
extern unsigned int g_gameState; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern unsigned char DAT_005f1748; /* 0x5f1748 */
extern int DAT_005f1a50; /* 0x5f1a50 */
extern unsigned char DAT_005f1ad5; /* 0x5f1ad5 */
extern int DAT_005f1b74; /* 0x5f1b74 */
extern int DAT_005f1b78; /* 0x5f1b78 */
extern unsigned int DAT_005f1b7c; /* 0x5f1b7c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_0013cab8. */
extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: FUN_001418fc. */
extern unsigned int FUN_0014af98(void);
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_001523b8. */
extern unsigned int FUN_00152f44(void);
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_001628c0. */
/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_001642e4. */
extern int padButtonRepeat(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00168980. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: resourceListDestroy. */
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019c0e0. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: resOwnerRunNodeHandlers. */
/* Supplied declaration required: FUN_0019e2dc. */
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: FUN_001abbc4. */
/* Supplied declaration required: FUN_001ad6d8. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_001aeafc. */
/* Supplied declaration required: FUN_001b4eb8. */
/* Supplied declaration required: FUN_001f3eec. */
/* Supplied declaration required: FUN_001f4908. */
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_0020401c. */
/* Supplied declaration required: FUN_00214da4. */
/* Supplied declaration required: FUN_0021b6ec. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_0022677c. */
extern int FUN_00239480(void);
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
extern unsigned int gameDataGetPlayerName(void);
/* Supplied declaration required: FUN_002686b8. */
/* Supplied declaration required: FUN_0026edbc. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002802c8(void);
/* Supplied declaration required: msgWindowReset. */
/* Supplied declaration required: FUN_002bf4f4. */
extern int FUN_002c7c54(void);
/* Supplied declaration required: gameStateClearFlag. */
/* Supplied declaration required: FUN_00314c38. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: FUN_0031e198. */
/* Supplied declaration required: FUN_0031f27c. */
extern int FUN_00323bc4(unsigned int);
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: FUN_00324c48. */
/* Supplied declaration required: useCounterSelectMode2. */
/* Supplied declaration required: obj7ECSetPair. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: FUN_0035d8a4. */
/* Supplied declaration required: FUN_0036b824. */
/* Supplied declaration required: campButtonHelpRelease. */
/* Supplied declaration required: FUN_003870a8. */
/* Supplied declaration required: FUN_003a2278. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d54f8. */
extern int linkHolderCallFirst(unsigned int);
/* Supplied declaration required: FUN_003e542c. */
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
/* Supplied declaration required: FUN_003f9c0c. */
/* Supplied declaration required: FUN_003f9c6c. */
/* Supplied declaration required: FUN_003f9e80. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_003fd8dc. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_00406768. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern int FUN_0040ab8c(unsigned int);
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(int);
/* Supplied declaration required: FUN_0040b0f8. */
/* Supplied declaration required: FUN_0040b730. */
/* Supplied declaration required: FUN_0040ba38. */
/* Supplied declaration required: FUN_0045b538. */
/* Supplied declaration required: FUN_004d9c54. */
extern int FUN_004ffba8(unsigned int);


unsigned int FUN_0027e0d8(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr, in_s0; 98 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  char temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  unsigned int *puVar8;
  unsigned char *puVar9;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  int in_s0;
  float temp_v8;
  float temp_v9;
  int temp_v10;
  unsigned char temp_v11 [4];
  unsigned char temp_v12 [8];
  unsigned char temp_v13 [12];
  unsigned char temp_v14 [12];
  int temp_v15;
  unsigned char temp_v16 [4];
  unsigned int temp_v17;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int uStack_94;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned char temp_v25 [28];
  
  puVar3 = g_tmnl;
  if ((unsigned int)g_tmnl[4] >= 2) {
    temp_v8 = (float)VectorSignedToFloat(g_tmnl[0x15],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = g_tmnl[g_tmnl[0x159] + 0x12];
    temp_v9 = *(float *)(**(int **)(*(int *)(temp_v7 + 0x34) + 0x90) + 8);
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v8) << 0x1f) |
             ((unsigned int)(temp_v9 == temp_v8) << 0x1e);
    in_fpscr = temp_v6 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v8 != temp_v8)) << 0x1c);
    temp_v1 = (unsigned char)(temp_v6 >> 0x18);
    if (!((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
      FUN_003f9c6c(temp_v7,temp_v11,0);
    }
    else {
      FUN_003f9c6c(temp_v7,temp_v11,0);
    }
    puVar3[0x15] = puVar3[0x15] + 1;
    FUN_001418fc(puVar3 + 0x16);
    FUN_0014f0dc(puVar3 + 0x16,temp_v11,temp_v13,temp_v14);
    FUN_001523b8(puVar3 + 0x16,1);
    temp_v7 = 0;
    in_s0 = temp_v15;
    do {
      if (*(char *)(puVar3 + temp_v7 * 3 + 0x160) != '\0') {
        FUN_0019c0e0(puVar3[temp_v7 * 3 + 0x15f]);
        temp_v3 = FUN_00323bc4(puVar3[temp_v7 * 3 + 0x15f]);
        if (temp_v3 != 0) {
          *(unsigned char *)(puVar3 + temp_v7 * 3 + 0x160) = 0;
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 4);
  }
  puVar8 = g_tmnl;
  switch(puVar3[4]) {
  case 0:
    temp_v7 = 0x130;
    asdOperatorNew();
    puVar6 = (unsigned int *)0x0;
    if (temp_v7 != 0) {
      puVar6 = (unsigned int *)_ZN9Obj557ae8C1Ev();
      *puVar6 = (unsigned int)&DAT_00557c60;
    }
    puVar8[0xf] = (unsigned int)puVar6;
    FUN_0040ba38();
    temp_v6 = 0;
    do {
      FUN_0040b730(puVar8[0xf],temp_v6 & 0xff,0x1c0);
      temp_v6 = temp_v6 + 1;
    } while ((int)temp_v6 < 3);
    temp_v2 = s_________0056fd3d[(unsigned int)*(unsigned char *)((int)puVar8 + 9) * 0x3c];
    puVar8[0x15d] = (int)temp_v2;
    if (temp_v2 != 0) {
      temp_v7 = 0x20;
      FUN_00178b04(0x20,&LAB_0027e4bc,0x356);
      temp_v4 = 0;
      if (temp_v7 != 0) {
        temp_v4 = FUN_0040ac08();
      }
      puVar8[0x11] = temp_v4;
      FUN_0040aa6c();
      FUN_0040aad4(puVar8[0x11],0);
      FUN_0045b538(*(int *)(puVar8[0x11] + 0xc) + 0xc);
      temp_v4 = *(unsigned int *)(puVar8[0x11] + 4);
      FUN_0040ace8(g_handleRegistry,temp_v4);
      FUN_003fe86c(temp_v4,0,2);
    }
    else {
      temp_v7 = 0x20;
      FUN_00178b04(0x20,&LAB_0027e4bc,0x345);
      temp_v4 = 0;
      if (temp_v7 != 0) {
        temp_v4 = FUN_0040ac08();
      }
      puVar8[0x10] = temp_v4;
      FUN_0040aa6c();
      FUN_0040ab7c(puVar8[0x10],0);
      FUN_0040aad4(puVar8[0x10],0);
      FUN_0045b538(*(int *)(puVar8[0x10] + 0xc) + 0xc);
      temp_v4 = *(unsigned int *)(puVar8[0x10] + 4);
      FUN_0040ace8(g_handleRegistry,temp_v4);
      FUN_003fe86c(temp_v4,0,2);
    }
    FUN_0013c174(&LAB_0027e510,temp_v25,1);
    temp_v7 = 0x48;
    FUN_00178b04(0x48,&LAB_0027e4bc,0x378);
    if (temp_v7 != 0) {
      FUN_003f9e80();
    }
    puVar8[0x12] = temp_v7;
    FUN_003f9c0c();
    FUN_0013c174(&LAB_0027e52c,temp_v25,1);
    temp_v7 = 0x48;
    FUN_00178b04(0x48,&LAB_0027e4bc,0x37c);
    if (temp_v7 != 0) {
      FUN_003f9e80();
    }
    puVar8[0x13] = temp_v7;
    FUN_003f9c0c();
    FUN_0013c174(&LAB_0027e548,temp_v25,1);
    temp_v7 = 0x48;
    FUN_00178b04(0x48,&LAB_0027e4bc,0x380);
    if (temp_v7 != 0) {
      FUN_003f9e80();
    }
    puVar8[0x14] = temp_v7;
    FUN_003f9c0c();
    puVar8[0x159] = 0xffffffff;
    temp_v7 = g_handleRegistry;
    FUN_0040b0f8(g_handleRegistry,&LAB_0027e564);
    temp_v3 = FUN_0040af60(temp_v7);
    if (temp_v3 != 0) {
      FUN_0040ae70(temp_v7,1);
    }
    FUN_004d9c54(puVar8,2);
    FUN_0013c884(puVar8 + 0x16,1);
    temp_v8 = (float)VectorSignedToFloat(puVar8[0x15],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = puVar8[puVar8[0x159] + 0x12];
    temp_v9 = *(float *)(**(int **)(*(int *)(temp_v7 + 0x34) + 0x90) + 8);
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v8) << 0x1f) |
             ((unsigned int)(temp_v9 == temp_v8) << 0x1e);
    in_fpscr = temp_v6 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v8 != temp_v8)) << 0x1c);
    temp_v1 = (unsigned char)(temp_v6 >> 0x18);
    if (!((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
      FUN_003f9c6c(temp_v7,temp_v11,0);
    }
    else {
      FUN_003f9c6c(temp_v7,temp_v11,0);
    }
    puVar8[0x15] = puVar8[0x15] + 1;
    FUN_001418fc(puVar8 + 0x16);
    FUN_0014f0dc(puVar8 + 0x16,temp_v11,temp_v13,temp_v14);
    FUN_001523b8(puVar8 + 0x16,1);
    FUN_0036b824(puVar8 + 0x16);
    *(unsigned int **)(g_handleRegistry + 0xc) = puVar8 + 0x16;
    FUN_0031e198();
    campCommonBgAcquire();
    campButtonHelpAcquire();
    puVar9 = &LAB_0027e888;
    FUN_001642e4(&LAB_0027e888,temp_v16,1,0x80);
    puVar8[0x15e] = (unsigned int)puVar9;
    puVar9 = &LAB_0027e8a4;
    FUN_001642e4(&LAB_0027e8a4,temp_v16,1,0x80);
    puVar8[0x161] = (unsigned int)puVar9;
    puVar9 = &LAB_0027e8c0;
    FUN_001642e4(&LAB_0027e8c0,temp_v16,1,0x80);
    puVar8[0x164] = (unsigned int)puVar9;
    puVar9 = &LAB_0027e8dc;
    FUN_001642e4(&LAB_0027e8dc,temp_v16,1,0x80);
    puVar8[0x167] = (unsigned int)puVar9;
    temp_v17 = 0;
    uStack_bc = 0x42c80000;
    uStack_b8 = 0;
    uStack_b4 = 0x3f800000;
    uStack_b0 = 0;
    uStack_ac = 0x42c80000;
    uStack_a8 = 0;
    uStack_a4 = 0x3f800000;
    temp_v23 = 0;
    temp_v22 = 0x42c80000;
    temp_v21 = 0;
    temp_v19 = 0x42c80000;
    temp_v18 = 0;
    temp_v20 = 0;
    uStack_94 = 0x3f800000;
    temp_v24 = 0x3f800000;
    temp_v7 = 0;
    do {
      temp_v4 = puVar8[temp_v7 * 3 + 0x15e];
      FUN_001abbc4();
      puVar8[temp_v7 * 3 + 0x15f] = temp_v4;
      FUN_001b4eb8();
      temp_v3 = temp_v7 + 1;
      *(unsigned char *)(puVar8 + temp_v7 * 3 + 0x160) = 0;
      temp_v7 = temp_v3;
    } while (temp_v3 < 4);
    *(unsigned char *)((int)puVar8 + 6) = 0;
    temp_v4 = gameDataGetPlayerName();
    FUN_003180c4(0x33,temp_v4);
    temp_v7 = bgmGetStateById(0x1000040);
    if (temp_v7 != 1) {
      soundChannelRequestIfEnabled(0x1000040,0,0x3c);
    }
    puVar3[4] = 2;
    puVar3[5] = 0;
    *(unsigned char *)((int)puVar3 + 0x571) = 0;
    break;
  case 1:
    temp_v7 = padButtonRepeat(4);
    if (temp_v7 != 0) {
      temp_v6 = *(unsigned char *)((int)puVar3 + 9) - 1;
      if (temp_v6 >= 0x16) {
        temp_v2 = '\0';
      }
      else if ((int)temp_v6 < 0) {
        temp_v2 = '\x15';
      }
      else {
        temp_v2 = *(unsigned char *)((int)puVar3 + 9) - 1;
      }
      *(char *)((int)puVar3 + 9) = temp_v2;
    }
    temp_v7 = padButtonRepeat(3);
    if (temp_v7 != 0) {
      if (*(unsigned char *)((int)puVar3 + 9) + 1 >= 0x16) {
        temp_v2 = '\0';
      }
      else {
        temp_v2 = *(unsigned char *)((int)puVar3 + 9) + 1;
      }
      *(char *)((int)puVar3 + 9) = temp_v2;
    }
    temp_v7 = 0;
    FUN_001517b4(0,1);
    if (temp_v7 != 0) {
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_0022677c(0,0xff);
      FUN_0022677c(1,0xff);
    }
    break;
  case 2:
    temp_v7 = fourPtrsAllNull(puVar3[0xf]);
    if (temp_v7 == 0) break;
    controllerTargetNodeStart(puVar3[0xf],0);
    linkedTargetSetFloat(puVar3[0xf]);
    puVar3[6] = g_gameState;
    puVar3[7] = DAT_005f1600;
    puVar9 = &LAB_0027ece0;
    FUN_0020214c();
    puVar3[8] = (unsigned int)puVar9;
    puVar9 = &LAB_0027ecf8;
    FUN_0020214c();
    puVar3[9] = (unsigned int)puVar9;
    temp_v7 = puVar3[8];
    FUN_00275bc8(temp_v7,puVar9);
    puVar3[10] = temp_v7;
    *(unsigned int *)(temp_v7 + 0x108) = 2;
    FUN_003180c4(0x28,s_________0056fd3d + (unsigned int)*(unsigned char *)((int)puVar3 + 9) * 0x3c + 2);
    puVar9 = &LAB_0027ed10;
    FUN_0020214c();
    puVar3[0xe] = (unsigned int)puVar9;
    temp_v7 = FUN_0013def0(0);
    if (temp_v7 == 3) {
      FUN_0013cab8(0,10,0xff);
    }
    temp_v7 = FUN_0013def0(1);
    if (temp_v7 == 3) {
      FUN_0013cab8(1,10,0xff);
    }
    temp_v7 = gameFlagIsSet(0x133);
    if ((temp_v7 != 0) && (temp_v7 = gameFlagIsSet(0x134), temp_v7 == 0)) {
      temp_v4 = 0xf;
    }
    else {
      temp_v7 = gameFlagIsSet(0x304);
      if (temp_v7 == 0) {
        if ((*(int *)((unsigned int)*(unsigned char *)((int)puVar3 + 9) * 0x3c + 0x56fd70) != 0x617) &&
           (temp_v7 = gameFlagIsSet(), temp_v7 == 0)) {
          puVar3[4] = 0x13;
          puVar3[5] = 0;
          sysPlaySe(0xa7);
          scrScriptProcessStartEntry(puVar3[10],0x16);
          gameFlagSetValue(*(unsigned int *)((unsigned int)*(unsigned char *)((int)puVar3 + 9) * 0x3c + 0x56fd70),1);
          break;
        }
        FUN_003870a8(puVar3);
        FUN_00100388(temp_v12,&DAT_00526210,
                     s_________0056fd3d + (unsigned int)*(unsigned char *)((int)g_tmnl + 9) * 0x3c + 2);
        FUN_0020401c(temp_v12);
        puVar3[4] = 4;
        puVar3[5] = 0;
        sysPlaySe(0xbf);
        if (puVar3[0x180] == 0) {
          sysPlaySe(0xa7);
          scrScriptProcessStartEntry(puVar3[10],0x13);
          temp_v4 = 0xd;
          puVar3[4] = temp_v4;
          break;
        }
        scrScriptProcessStartEntry(puVar3[10],*(unsigned int *)((unsigned int)*(unsigned char *)((int)puVar3 + 9) * 0x3c + 0x56fd6c))
        ;
        sysPlaySe(0xa8);
        FUN_0031f27c(0xffffffff,2);
        obj7ECSetPair(puVar3[6],puVar3[7]);
        FUN_0021b6ec(puVar3);
        useCounterStart();
        puVar3[4] = 4;
        break;
      }
      sysPlaySe(0xa7);
      scrScriptProcessStartEntry(puVar3[10],0x14);
      temp_v4 = 0xd;
    }
    puVar3[4] = temp_v4;
    break;
  case 4:
    if (puVar3[5] != 0) {
      if (puVar3[5] == 1) {
        temp_v7 = FUN_00239480();
        if (temp_v7 != 0) {
          msgWindowReset();
        }
        temp_v7 = FUN_00224880(puVar3[10]);
        if (temp_v7 != 2) break;
        temp_v0 = *(short *)puVar3[puVar3[3] + 0x16a];
        if ((temp_v0 < 200) || (*(char *)((int)puVar3 + 6) == '\0')) {
          if (temp_v0 != 0x17) {
            if (temp_v0 == 0x16) {
              temp_v2 = *(char *)(puVar3 + 2);
              goto joined_r0x0027edb8;
            }
          }
          else {
            temp_v2 = *(char *)((int)puVar3 + 7);
joined_r0x0027edb8:
            if (temp_v2 != '\0') goto LAB_0027edcc;
          }
          sysPlaySe(0xbf);
          temp_v4 = FUN_00152f44();
          temp_v5 = FUN_0014af98();
          in_s0 = 0x3f34fdf4;
          FUN_001628c0(&LAB_0027f148,temp_v5,temp_v4,1);
          *(unsigned char *)((int)puVar3 + 0x571) = 1;
          puVar3[4] = 0xe;
          puVar3[5] = 0;
        }
        else {
LAB_0027edcc:
          scrScriptProcessStartEntry(puVar3[10],0x12);
          puVar3[4] = 0xc;
          puVar3[5] = 0;
        }
      }
    }
    else {
      FUN_00224880(puVar3[10]);
      temp_v7 = useCounterIsFinished();
      if (temp_v7 != 0) {
        FUN_0035d8a4();
        puVar3[4] = 0x12;
        puVar3[5] = 0;
        FUN_001f4908(0,10,0xff);
        FUN_001f4908(1,10,0xff);
        msgWindowReset();
      }
      else {
        temp_v7 = FUN_002c7c54();
        if (temp_v7 != 0x69) {
          puVar8 = puVar3;
          FUN_0026edbc(puVar3,temp_v7);
          puVar3[3] = (unsigned int)puVar8;
          if (*(short *)puVar3[(int)puVar8 + 0x16a] >= 0xc9) {
            temp_v4 = gameDataGetPlayerName();
            FUN_003180c4(0x28,temp_v4);
          }
          else {
            FUN_003180c4(0x28,(int)puVar3[(int)puVar8 + 0x16a] + 7);
          }
          msgWindowReset();
          puVar3[5] = 1;
        }
      }
    }
    temp_v7 = linkHolderCallFirst(puVar3[0xf]);
    if ((temp_v7 != 0x13) || (FUN_003e542c(puVar3[0xf]), in_s0 < 0x41a00000)) break;
    FUN_003e54b8(puVar3[0xf]);
    temp_v4 = puVar3[0xf];
    linkedTargetSetFloat(temp_v4);
    break;
  case 5:
    temp_v7 = linkHolderCheckFirst(puVar3[0xf]);
    if (temp_v7 != 0) {
      linkHolderApplyFirst(puVar3[0xf],0);
    }
    temp_v7 = 6;
    FUN_001517b4(6,2);
    if (temp_v7 == 0) {
      temp_v7 = 9;
      FUN_001517b4(9,2);
      if (temp_v7 == 0) {
        temp_v7 = 1;
        FUN_001517b4();
        if (temp_v7 == 0) {
          temp_v8 = (float)VectorSignedToFloat(puVar3[0x15],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = *(float *)(**(int **)(*(int *)(puVar3[puVar3[0x159] + 0x12] + 0x34) + 0x90) + 8);
          temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v8) << 0x1f);
          in_fpscr = temp_v6 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v8 != temp_v8)) << 0x1c);
          if (((unsigned char)(temp_v6 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) ||
             (temp_v7 = FUN_004ffba8(*(unsigned int *)(puVar3[puVar3[0x15d] + 0x10] + 4)), temp_v7 == 0)
             ) {
            temp_v8 = (float)VectorSignedToFloat(puVar3[0x15],(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v7 = (int)temp_v8;
            if ((temp_v7 >= 6) && (temp_v3 = FUN_0013def0(0), temp_v3 == 3)) {
              FUN_003d54f8(0,8);
            }
            if (temp_v7 != 0xb4) {
              if (temp_v7 != 0x13f) {
                if (temp_v7 == 0x144) {
                  linkHolderSetFlag(puVar3[0xf]);
                  break;
                }
                if (temp_v7 != 0x17f) break;
                puVar3[4] = 6;
                puVar3[5] = 0;
                break;
              }
              *(unsigned char *)(puVar3 + 0x163) = 1;
              temp_v4 = puVar3[0x162];
            }
            else {
              *(unsigned char *)(puVar3 + 0x160) = 1;
              temp_v4 = puVar3[0x15f];
            }
            resOwnerRunNodeHandlers(temp_v4);
          }
          else {
            puVar3[4] = 6;
            puVar3[5] = 0;
          }
          break;
        }
      }
    }
    temp_v7 = VectorSignedToFloat(puVar3[0x15],(unsigned char)(in_fpscr >> 0x16) & 3);
    if (temp_v7 >= 0x40c00001) {
      puVar3[4] = 6;
      puVar3[5] = 0;
      *(unsigned char *)(puVar3 + 0x15c) = 1;
    }
    break;
  case 6:
    temp_v7 = gameFlagIsSet(0x133);
    if ((temp_v7 == 0) || (temp_v7 = gameFlagIsSet(0x134), temp_v7 != 0)) {
      if (*(char *)(puVar3 + 0x15c) != '\0') {
        FUN_001f4908(0,10,0xff);
        FUN_001f4908(1,10,0xff);
      }
      else {
        FUN_001f4908(0,0x14,0xff);
        FUN_001f4908(1,0x14,0xff);
      }
      puVar3[4] = 7;
      puVar3[5] = 0;
    }
    else {
      puVar3[4] = 0x10;
      FUN_001f4908(0,10,0xff);
      FUN_001f4908(1,10,0xff);
      puVar3[5] = 0;
    }
    break;
  case 7:
    temp_v7 = FUN_002802c8();
    if (temp_v7 != 0) break;
    FUN_002686b8();
    FUN_0035d8a4();
    FUN_002bf4f4(0);
    linkHolderSetFlag(puVar3[0xf]);
    *(unsigned char *)(puVar3 + 0x160) = 0;
    *(unsigned char *)(puVar3 + 0x163) = 0;
    temp_v7 = puVar3[3];
    puVar3[6] = (int)*(short *)puVar3[temp_v7 + 0x16a];
    puVar3[7] = (int)*(char *)(puVar3[temp_v7 + 0x16a] + 2);
    temp_v3 = 0;
    do {
      if (temp_v3 * 0x3c + 0x56fd38 == puVar3[temp_v7 + 0x16a]) {
        *(char *)((int)puVar3 + 9) = (char)temp_v3;
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x16);
    FUN_003870a8(puVar3);
    if (*(char *)(puVar3 + 0x15c) == '\0') {
      if (puVar3[puVar3[0x15d] + 0x10] != 0) {
        ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(puVar3[puVar3[0x15d] + 0x10] + 4));
        if ((int *)puVar3[puVar3[0x15d] + 0x10] != (int *)0x0) {
          (**(romwright_code **)(*(int *)puVar3[puVar3[0x15d] + 0x10] + 4))();
          puVar3[puVar3[0x15d] + 0x10] = 0;
        }
      }
    }
    puVar3[0x15d] = (int)s_________0056fd3d[(unsigned int)*(unsigned char *)((int)puVar3 + 9) * 0x3c];
    puVar3[4] = 8;
    puVar3[5] = 0;
    FUN_00168980(3);
    if (*(char *)(puVar3 + 0x15c) == '\0') break;
    soundChannelStopAll(0xf);
    FUN_003d2158(0x10000b2,0);
    FUN_003d2150(0x10000b3);
    temp_v4 = 0x12;
    puVar3[4] = temp_v4;
    break;
  case 8:
    if (puVar3[0x15d] != 0) {
      temp_v7 = 0x20;
      FUN_00178b04(0x20,&LAB_0027e4bc,0x72b);
      temp_v4 = 0;
      if (temp_v7 != 0) {
        temp_v4 = FUN_0040ac08();
      }
      puVar3[0x11] = temp_v4;
      FUN_0040aa6c();
      FUN_0040aad4(puVar3[0x11],0);
      FUN_0045b538(*(int *)(puVar3[0x11] + 0xc) + 0xc);
    }
    else {
      temp_v7 = 0x20;
      FUN_00178b04(0x20,&LAB_0027e4bc,0x725);
      temp_v4 = 0;
      if (temp_v7 != 0) {
        temp_v4 = FUN_0040ac08();
      }
      puVar3[0x10] = temp_v4;
      FUN_0040aa6c();
      FUN_0040aad4(puVar3[0x10],0);
      FUN_0045b538(*(int *)(puVar3[0x10] + 0xc) + 0xc);
    }
    puVar3[4] = 9;
  case 9:
    temp_v7 = FUN_0040ab8c(puVar3[puVar3[0x15d] + 0x10]);
    if (temp_v7 != 0) {
      FUN_0040ace8(g_handleRegistry,*(unsigned int *)(puVar3[puVar3[0x15d] + 0x10] + 4));
      if (*(char *)(puVar3 + 0x15c) != '\0') {
        FUN_004d9c54(puVar3,2);
        *(unsigned char *)(puVar3 + 0x15a) = 1;
        puVar3[0x15b] = 0x88;
        controllerTargetNodeStart(puVar3[0xf],0x1a);
        FUN_003d54f8(0,10);
        FUN_003d54f8(1,10);
      }
      else {
        FUN_004d9c54(puVar3,1);
        *(unsigned char *)(puVar3 + 0x15a) = 1;
        puVar3[0x15b] = 0;
        controllerTargetNodeStart(puVar3[0xf],0x1a);
        FUN_003d54f8(0,0x14);
        FUN_003d54f8(1,0x14);
      }
      puVar3[4] = 10;
      puVar3[5] = 0;
    }
    break;
  case 10:
    temp_v7 = FUN_002802c8();
    if (temp_v7 != 0) break;
    if (*(char *)(puVar3 + 0x15c) == '\0') {
      if (puVar3[0x15b] == 0x56) {
        FUN_00100388(temp_v12,&DAT_00526210,
                     s_________0056fd3d + (unsigned int)*(unsigned char *)((int)g_tmnl + 9) * 0x3c + 2);
        FUN_0020401c(temp_v12);
        if (*(char *)(puVar3 + 0x15c) != '\0') {
          puVar3[4] = 0xb;
          puVar3[5] = 0;
          break;
        }
      }
      if ((int)puVar3[0x15b] < 0x88) break;
    }
    puVar3[4] = 0xb;
    puVar3[5] = 0;
    break;
  case 0xb:
    sysPlaySe(0xbf);
    FUN_002bf4f4(0);
    puVar3[5] = 0;
    FUN_001f4908(0,0x14,0xff);
    FUN_001f4908(1,0x14,0xff);
    puVar3[4] = 0x12;
    break;
  case 0xc:
    temp_v7 = FUN_00224880(puVar3[10]);
    if (temp_v7 == 2) {
      puVar3[4] = 4;
      puVar3[5] = 0;
      useCounterSelectMode2();
    }
    break;
  case 0xd:
    temp_v7 = FUN_00224880(puVar3[10]);
    if (temp_v7 == 2) {
      puVar3[4] = 0x12;
      puVar3[5] = 0;
      FUN_001f4908(0,10,0xff);
      FUN_001f4908(1,10,0xff);
    }
    break;
  case 0xe:
    temp_v7 = FUN_00224880(puVar3[10]);
    if (temp_v7 != 2) break;
    FUN_00408184(0x21,1);
    *(unsigned char *)(puVar3 + 0x15c) = 0;
    FUN_003d2150(0x10000b2);
    FUN_00214da4();
    sysPlaySe(0x59);
    puVar3[4] = 5;
    puVar3[5] = 0;
    if (*(char *)(puVar3 + 0x15a) != '\0') {
      linkHolderClearFlag(puVar3[0xf]);
      linkHolderApplyFirst(puVar3[0xf],0x13);
      *(unsigned char *)(puVar3 + 0x15a) = 0;
    }
    FUN_0022677c(0,0xff);
    *(unsigned char *)(puVar3 + 0x160) = 0;
    *(unsigned char *)(puVar3 + 0x163) = 0;
    *(unsigned char *)(puVar3 + 0x166) = 0;
    *(unsigned char *)(puVar3 + 0x169) = 0;
    FUN_004d9c54(puVar3,0);
    controllerTargetNodeStart(puVar3[0xf],0x13);
    temp_v4 = puVar3[0xf];
    linkedTargetSetFloat(temp_v4);
    break;
  case 0xf:
    FUN_00408184(0x21,1);
    *(unsigned char *)(puVar3 + 0x15c) = 0;
    FUN_003d2150(0x10000b2);
    FUN_00214da4();
    sysPlaySe(0x59);
    puVar3[4] = 5;
    puVar3[5] = 0;
    if (*(char *)(puVar3 + 0x15a) != '\0') {
      linkHolderClearFlag(puVar3[0xf]);
      linkHolderApplyFirst(puVar3[0xf],0x13);
      *(unsigned char *)(puVar3 + 0x15a) = 0;
    }
    FUN_0022677c(0,0xff);
    *(unsigned char *)(puVar3 + 0x160) = 0;
    *(unsigned char *)(puVar3 + 0x163) = 0;
    *(unsigned char *)(puVar3 + 0x166) = 0;
    *(unsigned char *)(puVar3 + 0x169) = 0;
    FUN_004d9c54(puVar3,0);
    controllerTargetNodeStart(puVar3[0xf],0x13);
    linkedTargetSetFloat(puVar3[0xf]);
    break;
  case 0x10:
    temp_v7 = FUN_002802c8();
    if (temp_v7 == 0) {
      puVar9 = &LAB_0027f160;
      FUN_0020214c();
      puVar3[0xb] = (unsigned int)puVar9;
      puVar9 = &LAB_0027f174;
      FUN_0020214c();
      puVar3[0xc] = (unsigned int)puVar9;
      temp_v7 = puVar3[0xb];
      FUN_00275bc8(temp_v7,puVar9);
      puVar3[0xd] = temp_v7;
      *(unsigned int *)(temp_v7 + 0x108) = 2;
      scrScriptProcessStartEntry(puVar3[0xd],1);
      FUN_003a2278(1);
      puVar3[4] = 0x11;
      puVar3[5] = 0;
    }
    break;
  case 0x11:
    temp_v7 = FUN_00224880(puVar3[0xd]);
    if (temp_v7 != 2) break;
    if (puVar3[0xd] != 0) {
      scrScriptProcessDestroy();
      puVar3[0xd] = 0;
    }
    if (puVar3[0xb] != 0) {
      asdMemFree();
      puVar3[0xb] = 0;
    }
    if (puVar3[0xc] != 0) {
      asdMemFree();
      puVar3[0xc] = 0;
    }
    temp_v4 = 0x12;
    puVar3[4] = temp_v4;
    break;
  case 0x12:
    temp_v7 = FUN_00239480();
    if (temp_v7 != 0) {
      msgWindowReset();
    }
    temp_v7 = FUN_00224880(puVar3[10]);
    if ((temp_v7 == 2) && (temp_v7 = FUN_002802c8(), temp_v7 == 0)) {
      if (puVar3[10] != 0) {
        scrScriptProcessDestroy();
        puVar3[10] = 0;
      }
      if (puVar3[8] != 0) {
        asdMemFree();
        puVar3[8] = 0;
      }
      if (puVar3[9] != 0) {
        asdMemFree();
        puVar3[9] = 0;
      }
      if (puVar3[0xe] != 0) {
        asdMemFree();
        puVar3[0xe] = 0;
      }
      FUN_001695a0();
      FUN_001aeafc(g_handleRegistry);
      puVar8 = g_tmnl;
      FUN_001ad6d8();
      if (puVar8[0xf] != 0) {
        FUN_003e5c00();
        if ((int *)puVar8[0xf] != (int *)0x0) {
          (**(romwright_code **)(*(int *)puVar8[0xf] + 4))();
        }
        puVar8[0xf] = 0;
      }
      temp_v7 = 0;
      do {
        if (puVar8[temp_v7 + 0x10] != 0) {
          ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(puVar8[temp_v7 + 0x10] + 4));
          if ((int *)puVar8[temp_v7 + 0x10] != (int *)0x0) {
            (**(romwright_code **)(*(int *)puVar8[temp_v7 + 0x10] + 4))();
            puVar8[temp_v7 + 0x10] = 0;
          }
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 2);
      temp_v7 = 0;
      do {
        if ((int *)puVar8[temp_v7 + 0x12] != (int *)0x0) {
          (**(romwright_code **)(*(int *)puVar8[temp_v7 + 0x12] + 4))();
          puVar8[temp_v7 + 0x12] = 0;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 3);
      FUN_0019e2dc();
      campCommonBgRelease();
      campButtonHelpRelease();
      temp_v7 = 0;
      do {
        if (puVar8[temp_v7 * 3 + 0x15f] != 0) {
          resourceListDestroy();
          puVar8[temp_v7 * 3 + 0x15f] = 0;
        }
        if (puVar8[temp_v7 * 3 + 0x15e] != 0) {
          asdMemFree();
          puVar8[temp_v7 * 3 + 0x15e] = 0;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 4);
      if (*(char *)((int)puVar3 + 0x571) != '\0') {
        temp_v4 = FUN_00152f44();
        temp_v5 = FUN_0014af98();
        FUN_001628c0(&LAB_0027fb98,temp_v5,temp_v4,1);
      }
      FUN_0019ea64(1);
      if (*(char *)((int)puVar3 + 5) != '\0') {
        FUN_003d54f8(0,1);
        FUN_003d54f8(1);
        soundChannelStopAll(0xf);
        puVar3 = g_tmnl;
        temp_v7 = jobIsValid(*g_tmnl);
        if (temp_v7 != 0) {
          jobStop(*puVar3,0);
        }
      }
      else {
        gameStateClearFlag();
        temp_v7 = (unsigned int)*(unsigned char *)((int)puVar3 + 9) * 0x3c;
        temp_v3 = (int)*(short *)(temp_v7 + 0x56fd38);
        if (temp_v3 >= 200) {
          temp_v10 = romwright_piece_2_2(5,*(short *)(temp_v7 + 0x56fd38) - 200);
          asdSequenceRequest(0xe,&temp_v10,4);
        }
        else {
          if (temp_v3 >= 100) {
            temp_v10 = 0;
            FUN_00314c38(0xb3,0x27,0,0,0);
            DAT_005f1a50 = -1;
            temp_v7 = (unsigned int)*(unsigned char *)((int)puVar3 + 9) * 0x3c;
            mapPlaceSet((int)*(short *)(temp_v7 + 0x56fd38),(int)*(char *)(temp_v7 + 0x56fd3a),
                         (int)*(char *)(temp_v7 + 0x56fd3b));
            temp_v4 = 8;
          }
          else {
            if ((DAT_005f1b74 == temp_v3) && (DAT_005f1b78 == *(char *)(temp_v7 + 0x56fd3a))) {
              FUN_00324c48(DAT_005f1b74,DAT_005f1b78,DAT_005f1b7c);
            }
            else {
              mapPlaceSet(temp_v3,(int)*(char *)(temp_v7 + 0x56fd3a),(int)*(char *)(temp_v7 + 0x56fd3b)
                          );
            }
            if (DAT_005f1a50 == -1) {
              DAT_005f1a50 = 2;
            }
            gameStateClearFlag();
            temp_v7 = gameFlagIsSet(0x170);
            if (((temp_v7 != 0) && (temp_v7 = gameFlagIsSet(0x171), temp_v7 == 0)) &&
               (*(short *)((unsigned int)*(unsigned char *)((int)puVar3 + 9) * 0x3c + 0x56fd38) == 3)) {
              DAT_005f1748 = 0;
              DAT_005f1ad5 = 1;
            }
            temp_v4 = 6;
          }
          asdSequenceRequest(temp_v4,0);
        }
      }
      return 0xffffffff;
    }
    break;
  case 0x13:
    temp_v7 = FUN_00224880(puVar3[10]);
    if (temp_v7 != 2) break;
    FUN_003870a8(puVar3);
    FUN_00100388(temp_v12,&DAT_00526210,
                 s_________0056fd3d + (unsigned int)*(unsigned char *)((int)g_tmnl + 9) * 0x3c + 2);
    FUN_0020401c(temp_v12);
    puVar3[4] = 4;
    puVar3[5] = 0;
    sysPlaySe(0xbf);
    if (puVar3[0x180] != 0) {
      scrScriptProcessStartEntry(puVar3[10],*(unsigned int *)((unsigned int)*(unsigned char *)((int)puVar3 + 9) * 0x3c + 0x56fd6c));
      sysPlaySe(0xa8);
      FUN_0031f27c(0xffffffff,2);
      obj7ECSetPair(puVar3[6],puVar3[7]);
      FUN_0021b6ec(puVar3);
      useCounterStart();
      puVar3[4] = 4;
      break;
    }
    sysPlaySe(0xa7);
    scrScriptProcessStartEntry(puVar3[10],0x13);
    temp_v4 = 0xd;
    puVar3[4] = temp_v4;
  }
  if (puVar3[0xf] != 0) {
    FUN_003e5858();
  }
  if (*(char *)(puVar3 + 0x15a) != '\0') {
    temp_v7 = puVar3[0x15b];
    puVar3[0x15b] = temp_v7 + 1;
    if (temp_v7 + 1 < 0x33) {
      VectorSignedToFloat(puVar3[0x15b] - 0x1e,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = 0.6f;
      FUN_001f3eec(puVar3[0x15b] - 0x1e);
      temp_v9 = 255.0f;
      temp_v7 = VectorFloatToUnsigned(temp_v8 * 255.0f,3);
      FUN_003fd8dc(*(unsigned int *)(puVar3[puVar3[0x15d] + 0x10] + 4),8,temp_v7 * 0x1010100 + 0xff);
      VectorSignedToFloat(puVar3[0x15b] - 0x1e,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = 0.1f;
      FUN_001f3eec(puVar3[0x15b] - 0x1e);
      temp_v7 = VectorFloatToUnsigned(temp_v8 * temp_v9,3);
      FUN_00406768(*(unsigned int *)(g_handleRegistry + 4),0,temp_v7 * 0x1010100 + 0xff);
    }
    if (puVar3[0x15b] == 0x28) {
      FUN_003d2150(0x10000c6);
      *(unsigned char *)(puVar3 + 0x166) = 1;
      resOwnerRunNodeHandlers(puVar3[0x165]);
    }
    if (puVar3[0x15b] == 0x49) {
      FUN_003d2150(0x10000b3);
      *(unsigned char *)(puVar3 + 0x169) = 1;
      resOwnerRunNodeHandlers(puVar3[0x168]);
    }
    if (puVar3[0x15b] == 0x55) {
      linkHolderClearFlag(puVar3[0xf]);
      controllerTargetNodeStart(puVar3[0xf],0x1a);
      linkedTargetSetFloat(puVar3[0xf]);
    }
    if (((int)puVar3[0x15b] >= 0x88) && (temp_v7 = linkHolderCheckFirst(puVar3[0xf]), temp_v7 != 0)) {
      linkHolderApplyFirst(puVar3[0xf],0);
      FUN_004d9c54(puVar3,2);
      *(unsigned char *)(puVar3 + 0x15a) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
