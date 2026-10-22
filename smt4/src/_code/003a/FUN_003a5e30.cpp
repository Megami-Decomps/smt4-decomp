/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a5e30` (_code @ 0x3a5e30, 0x360 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN18SelectionRectangleC1Ev(...);
int rectangleInitializeSelection(int, int, int, int);
int uiInitializeEightTimerSet(int);
int FUN_002637c8(void);
int FUN_00282bfc(int, int);
int buttonHelpCreate(void);
int FUN_0028d9b0(void);
int gameCounterAddSaturating(...);
int soundChannelRequestIfEnabled(...);
int FUN_002a03d8(...);
int asdOperatorNew(void);
int asdTMTexTableLoadSprites(int);
int FUN_002c58c8(int, int);
int __aeabi_vec_ctor_nocookie_nodtor(...);
int questCenterSetFlag(int, int);
int qcSetPersistentStateFlag(...);
int FUN_00343c0c(...);
int FUN_003a169c(unsigned int *);
int FUN_003a4518(unsigned int *);
int FUN_003a45fc(void);

extern unsigned char LAB_003a0104; /* 0x3a0104 */
extern unsigned char DAT_004223b0; /* 0x4223b0 */
extern unsigned char DAT_00422590; /* 0x422590 */

/* Supplied declaration required: _ZN18SelectionRectangleC1Ev. */
/* Supplied declaration required: rectangleInitializeSelection. */
extern unsigned int *_ZN9Obj422594C1Ev(void);
/* Supplied declaration required: uiInitializeEightTimerSet. */
/* Supplied declaration required: FUN_002637c8. */
/* Supplied declaration required: FUN_00282bfc. */
extern int _ZN14SelectionFlagsC1Ev(int);
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: FUN_0028d9b0. */
/* Supplied declaration required: gameCounterAddSaturating. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: FUN_002a03d8. */
extern short *FUN_002c0a2c(unsigned char, unsigned int);
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: questCenterSetFlag. */
/* Supplied declaration required: qcSetPersistentStateFlag. */
/* Supplied declaration required: FUN_00343c0c. */
/* Supplied declaration required: FUN_003a169c. */
/* Supplied declaration required: FUN_003a4518. */
/* Supplied declaration required: FUN_003a45fc. */


unsigned int * FUN_003a5e30(unsigned int *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 21 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  short *psVar5;
  unsigned int temp_v3;
  unsigned int *puVar7;
  
  *param_1 = 0;
  temp_v1 = _ZN18SelectionRectangleC1Ev(param_1 + 0xe0);
  temp_v1 = _ZN18SelectionRectangleC1Ev(temp_v1 + 0x14);
  *(unsigned char **)(temp_v1 + 0x494) = &DAT_00422590;
  temp_v1 = temp_v1 + 0x4ec;
  __aeabi_vec_ctor_nocookie_nodtor(temp_v1,_ZN14SelectionFlagsC1Ev,0x74,9);
  temp_v1 = temp_v1 + 0x414;
  __aeabi_vec_ctor_nocookie_nodtor(temp_v1,&LAB_003a0104,0x1002,9);
  temp_v1 = _ZN14SelectionFlagsC1Ev(temp_v1 + 0x9014);
  puVar7 = (unsigned int *)(temp_v1 - 0x9ca8);
  FUN_003a4518(puVar7);
  *(unsigned int *)(temp_v1 - 0x9c98) = param_2;
  *puVar7 = 0;
  *(char *)(temp_v1 - 0x9c94) = (char)param_3;
  *(int *)(temp_v1 - 0x9c90) = param_4;
  *(unsigned int *)(temp_v1 - 0x9448) = 0xffffffff;
  *(unsigned int *)(temp_v1 - 0x9444) = 0;
  *(unsigned int *)(temp_v1 + 0xc07c) = 0;
  *(unsigned int *)(temp_v1 + 0xc080) = 0;
  *(unsigned int *)(temp_v1 + 0xc098) = 0;
  *(unsigned int *)(temp_v1 + 0xc09c) = 0;
  *(unsigned int *)(temp_v1 + 0xc0a0) = 0;
  *(unsigned int *)(temp_v1 - 0x9b48) = 0;
  *(unsigned int *)(temp_v1 - 0x9b44) = 0;
  *(unsigned int *)(temp_v1 - 0x9b40) = 0;
  *(unsigned int *)(temp_v1 - 0x9938) = 0;
  *(unsigned int *)(temp_v1 - 0x9934) = 0;
  *(unsigned int *)(temp_v1 - 0x9930) = 0;
  *(unsigned char *)(temp_v1 - 0x9c8c) = 0;
  *(unsigned char *)(temp_v1 - 0x9c8b) = 0;
  uiInitializeEightTimerSet(temp_v1 - 0x9900);
  rectangleInitializeSelection(temp_v1 - 0x9928,0x140,0,0x2b);
  rectangleInitializeSelection(temp_v1 - 0x9914,0x140,0,0x2b);
  temp_v2 = 0x68;
  asdOperatorNew();
  puVar4 = (unsigned int *)0x0;
  if (temp_v2 != 0) {
    puVar4 = (unsigned int *)_ZN9Obj422594C1Ev();
    *puVar4 = (unsigned int)&DAT_004223b0;
  }
  *(unsigned int **)(temp_v1 - 0x944c) = puVar4;
  FUN_002637c8();
  psVar5 = (short *)FUN_002c0a2c(*(unsigned char *)(temp_v1 - 0x9c94),*(unsigned int *)(temp_v1 - 0x9c90));
  if (*psVar5 != 0) {
    *(unsigned char *)(temp_v1 - 0x9c8c) = 1;
  }
  if (*(int *)(temp_v1 - 0x9c98) == 1) {
    *(unsigned int *)(temp_v1 - 0x9ca4) = 0xd;
    *(unsigned int *)(temp_v1 - 0x9ca0) = 0;
    FUN_0028d9b0();
    buttonHelpCreate();
    asdTMTexTableLoadSprites(0x2b);
    FUN_002c58c8(0x2b,0);
    *(unsigned int *)(temp_v1 - 0x992c) = 0x83;
    puVar4 = puVar7;
    FUN_003a45fc();
    *(char *)(temp_v1 - 0x9c8b) = (char)(int)puVar4;
    FUN_002a03d8(0,1);
    FUN_002a03d8(1);
    return puVar7;
  }
  *(unsigned int *)(temp_v1 - 0x992c) = 0x1f;
  *(unsigned int *)(temp_v1 - 0x9ca4) = 0;
  *(unsigned int *)(temp_v1 - 0x9ca0) = 0;
  FUN_003a169c(puVar7);
  FUN_00282bfc(0,0xff);
  FUN_00282bfc(1,0xff);
  temp_v3 = 0x1000060;
  if (param_3 != 0) {
    if (param_3 == 1) {
      questCenterSetFlag(param_4,1);
      if (param_4 != 5) {
        if (param_4 != 9) {
          temp_v3 = 0x100005c;
          temp_v2 = bgmGetStateById(0x100005c);
          if (temp_v2 != 1) {
            soundChannelRequestIfEnabled(temp_v3,0,0x3c);
          }
        }
      }
      else {
        temp_v2 = bgmGetStateById(0x1000060);
        if (temp_v2 != 1) {
          soundChannelRequestIfEnabled(temp_v3,0,0x3c);
        }
      }
    }
  }
  else {
    qcSetPersistentStateFlag(param_4,1);
    if (!(param_4 == 6 || param_4 == 7)) {
      if (param_4 != 8) {
        temp_v3 = 0x100005b;
        temp_v2 = bgmGetStateById(0x100005b);
        if (temp_v2 != 1) {
          soundChannelRequestIfEnabled(temp_v3,0,0x3c);
        }
      }
    }
    else {
      temp_v2 = bgmGetStateById(0x1000060);
      if (temp_v2 != 1) {
        soundChannelRequestIfEnabled(temp_v3,0,0x3c);
      }
    }
  }
  puVar4 = puVar7;
  FUN_003a45fc();
  temp_v2 = 0;
  *(char *)(temp_v1 - 0x9c8b) = (char)(int)puVar4;
  do {
    temp_v1 = 0;
    if (*(short *)((int)puVar7 + temp_v2 * 0x1002 + 0x1c94) != 0) {
      do {
        temp_v0 = temp_v1 * 4 + temp_v2 * 0x1002;
        if ((*(unsigned short *)((int)puVar7 + temp_v0 + 0xc96) & 1) != 0) {
          FUN_00343c0c(*(unsigned short *)((int)puVar7 + temp_v0 + 0xc94),1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)(unsigned int)*(unsigned short *)((int)puVar7 + temp_v2 * 0x1002 + 0x1c94));
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 9);
  gameCounterAddSaturating(0x1c,1);
  return puVar7;
}

} /* extern "C" */
