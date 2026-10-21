/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00410f84` (_code @ 0x410f84, 0x32c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int asdLoadFileAsyncSimple(unsigned char *, unsigned int *, int);
int FUN_003e503c(void);
int FUN_003eaf20(void);
int FUN_003ecfb4(int, int, unsigned int, int);
int FUN_003f14a0(...);
int controllerGroupSetPosition(unsigned int);
int FUN_004102d8(...);
int FUN_004116a0(unsigned int *);
int FUN_004118d0(unsigned int *);
int FUN_00411c04(unsigned int *, int);
int FUN_00411cec(...);
int FUN_00412488(...);
int FUN_004f1530(unsigned int *);
int FUN_004fe7e4(int, int, int);
int FUN_004fea10(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_00529834; /* 0x529834 */
extern int g_btlActionReflect; /* 0x5712f0 */
extern unsigned int *g_btlCamera; /* 0x571508 */
extern unsigned int g_btlStageModel; /* 0x57a4f8 */

extern int btlGetMainState(void);
extern unsigned int saveSlotFindSelected(void);
extern int FUN_00187168(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
extern int partyCountActiveSlots(void);
extern unsigned int FUN_003e4fdc(unsigned int);
/* Supplied declaration required: FUN_003e503c. */
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003ecfb4. */
/* Supplied declaration required: FUN_003f14a0. */
/* Supplied declaration required: controllerGroupSetPosition. */
/* Supplied declaration required: FUN_004102d8. */
/* Supplied declaration required: FUN_004116a0. */
/* Supplied declaration required: FUN_004118d0. */
extern int btlStageGetModeIndex(unsigned int *);
/* Supplied declaration required: FUN_00411c04. */
/* Supplied declaration required: FUN_00411cec. */
/* Supplied declaration required: FUN_00412488. */
/* Supplied declaration required: FUN_004f1530. */
/* Supplied declaration required: FUN_004fe7e4. */
/* Supplied declaration required: FUN_004fea10. */


void FUN_00410f84(unsigned int *param_1)

{
/* irregular: irregular input(s): in_lr; 17 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  short temp_v5;
  short temp_v6;
  unsigned int unaff_r4;
  unsigned int temp_v7;
  short temp_v8;
  unsigned int in_lr;
  float temp_v9;
  float temp_v10;
  
  switch(*param_1) {
  case 1:
    FUN_004116a0(param_1);
    return;
  case 2:
    FUN_004118d0(param_1);
    return;
  case 3:
    if (param_1[0x61] != 0) {
      asdMemFree();
      param_1[0x61] = 0;
    }
    asdLoadFileAsyncSimple(&DAT_00529834,param_1 + 0x61,0);
    FUN_004f1530(g_btlCamera);
    puVar1 = g_btlCamera;
    g_btlCamera[3] = 0;
    puVar1[4] = 0;
    temp_v0 = btlStageGetModeIndex(param_1);
    puVar1 = g_btlCamera;
    if (-1 < temp_v0) {
      temp_v0 = temp_v0 * 0x1c;
      *g_btlCamera = *(unsigned int *)(temp_v0 + 0x529780);
      puVar1[1] = *(unsigned int *)(temp_v0 + 0x529784);
      puVar1[2] = *(unsigned int *)(temp_v0 + 0x529788);
      return;
    }
    break;
  case 4:
    param_1[7] = 0;
    param_1[8] = 0xffffffff;
    FUN_00411c04(param_1,1);
    temp_v0 = btlStageGetModeIndex(param_1);
    if (-1 < temp_v0) {
      temp_v1 = partyCountActiveSlots();
      temp_v9 = *(float *)(temp_v0 * 0x1c + 0x52978c);
      temp_v10 = *(float *)(temp_v0 * 0x1c + 0x529790);
      temp_v0 = 0;
      if (0 < temp_v1) {
        do {
          temp_v4 = temp_v0 + 1;
          param_1[temp_v0 * 7 + 0xe] = (float)param_1[temp_v0 * 7 + 0xe] + temp_v9;
          param_1[temp_v0 * 7 + 0xf] = (float)param_1[temp_v0 * 7 + 0xf] + temp_v10;
          temp_v0 = temp_v4;
        } while (temp_v4 < temp_v1);
      }
      controllerGroupSetPosition(g_btlStageModel);
      return;
    }
    break;
  case 5:
    temp_v1 = btlGetMainState();
    temp_v0 = temp_v1;
    FUN_003eaf20();
    temp_v2 = FUN_003e4fdc(param_1[7] & 0xffff);
    FUN_003ecfb4(temp_v1,temp_v0 + 0x164,temp_v2,1);
    *(unsigned int *)(temp_v0 + 0x400) = temp_v2;
    *(unsigned int *)(temp_v1 + 0x4d68) = temp_v2;
    FUN_004fea10(0,0,1);
    FUN_004fe7e4(0,0,1);
    FUN_003f14a0(temp_v1);
    return;
  case 6:
    temp_v1 = btlGetMainState();
    temp_v0 = temp_v1;
    FUN_003eaf20();
    temp_v2 = saveSlotFindSelected();
    FUN_003ecfb4(temp_v1,temp_v0 + 0x164,temp_v2,0);
    temp_v5 = 0;
    *(unsigned int *)(temp_v0 + 0x400) = temp_v2;
    temp_v8 = 0;
    temp_v7 = 1;
    do {
      temp_v3 = temp_v7;
      FUN_003e503c();
      temp_v4 = FUN_00187168();
      if (temp_v4 != 0) {
        temp_v5 = *(short *)(temp_v3 + 0x12) + temp_v5;
        temp_v8 = *(short *)(temp_v3 + 0x14) + temp_v8;
      }
      temp_v7 = temp_v7 + 1;
    } while ((int)temp_v7 < 0xc);
    temp_v5 = *(short *)(temp_v0 + 0x268) + temp_v5;
    temp_v8 = *(short *)(temp_v0 + 0x26a) + temp_v8;
    *(short *)(temp_v0 + 0x268) = temp_v5;
    temp_v6 = temp_v5;
    if (temp_v5 >= 1000) {
      temp_v6 = 999;
    }
    *(short *)(temp_v0 + 0x26a) = temp_v8;
    if (temp_v5 >= 1000) {
      *(short *)(temp_v0 + 0x268) = temp_v6;
    }
    if (temp_v8 >= 1000) {
      *(unsigned short *)(temp_v0 + 0x26a) = 999;
    }
    FUN_004fea10(0,0,1);
    FUN_004fe7e4(0,0,1);
    FUN_003f14a0(temp_v1);
    temp_v0 = g_btlActionReflect;
    FUN_004102d8(g_btlActionReflect,0,0,0,unaff_r4,in_lr);
    *(unsigned char *)(temp_v0 + 4) = 0xd;
    return;
  case 8:
    FUN_00412488(param_1);
    return;
  case 9:
    FUN_00411cec(param_1);
    return;
  }
  return;
}

} /* extern "C" */
