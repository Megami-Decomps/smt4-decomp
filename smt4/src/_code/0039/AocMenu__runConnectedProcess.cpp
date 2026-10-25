/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN7AocMenu19runConnectedProcessEv` (_code @ 0x3923b0, 0x4d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "classes/AocMenu.h"
#include "romwright_types.h"

extern "C" {

int FUN_00233240(...);
int FUN_0023392c(...);
int jobStopAndClearFlags(...);
int FUN_00233db8(...);
int FUN_00233e70(...);
int FUN_00233fcc(...);
int timeInitializeActiveState(...);
int FUN_00234124(...);
int asdFsIsSdCardDetected(...);
int scrScriptProcessStartEntry(...);
int ifTouchRegionRemove(...);
int eventQueueAddUniqueIfValid(...);
int jobStop(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);

typedef int romwright_code(...);
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern int FUN_00391000(...); /* 0x391000 */
extern unsigned char LAB_003910b8; /* 0x3910b8 */
extern unsigned char LAB_003928a4; /* 0x3928a4 */
extern int g_aocMain; /* 0x432fc8 */

extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: FUN_0023392c. */
/* Supplied declaration required: jobStopAndClearFlags. */
/* Supplied declaration required: FUN_00233db8. */
/* Supplied declaration required: FUN_00233e70. */
/* Supplied declaration required: FUN_00233fcc. */
/* Supplied declaration required: timeInitializeActiveState. */
/* Supplied declaration required: FUN_00234124. */
extern int buttonHelpHasEnabledEntryForId(unsigned int);
extern int strIsEmpty(unsigned int *);
/* Supplied declaration required: asdFsIsSdCardDetected. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int messageMainGetChoiceResult(void);
extern int ifTouchGetSelectionModeForRegion(int);
extern int byteIsAtLeast100(unsigned int *);
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */


void AocMenu::runConnectedProcess()

{
    unsigned int * param_1 = reinterpret_cast<unsigned int *>(this);
/* irregular: 16 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int *piVar4;
  char *pcVar5;
  unsigned int temp_v2;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int temp_v3;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int temp_v4;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int temp_v5;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  timeInitializeActiveState(&temp_v3);
  temp_v0 = param_1[2];
  puVar7 = param_1 + 0x5e9;
  puVar8 = param_1 + 0x5e8;
  puVar2 = param_1 + 0x5eb;
  if (temp_v0 != 3) {
    if ((int)temp_v0 < 3) {
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 == 2) {
            param_1[0x5ea] = 0;
            if ((*param_1 & 0x1000) == 0) {
              *puVar2 = 0xffffffff;
              *puVar7 = 0;
              *param_1 = *param_1 | 0x1000;
              FUN_00233240(param_1 + 0x5ec,0);
              FUN_00233240(param_1 + 0x5ec,1);
              pcVar5 = "Aoc guide CALC";
              asdProcessCreateSimple("Aoc guide CALC",2,0,0,FUN_00391000,0,param_1);
              *puVar8 = (unsigned int)pcVar5;
              taskCreateDraw("Aoc guide DOWN",0xe8,1,0,&LAB_003910b8,0,param_1,pcVar5);
            }
            param_1[2] = 3;
            *param_1 = *param_1 | 0x10;
            *(unsigned char *)(g_aocMain + 0xd50) = 3;
            return;
          }
        }
        else if ((*param_1 & 0x200) != 0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v4);
          temp_v3 = temp_v4;
          uStack_5c = uStack_48;
          uStack_58 = uStack_44;
          uStack_54 = uStack_40;
          uStack_50 = uStack_3c;
          temp_v1 = strIsEmpty(&temp_v3);
          if (temp_v1 != 0) {
            *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) | 0x100;
            FUN_0023392c(param_1,1);
            param_1[2] = 2;
            jobStopAndClearFlags(param_1);
            return;
          }
          temp_v1 = byteIsAtLeast100(&temp_v3);
          if (temp_v1 != 0) {
            jobStopAndClearFlags(param_1);
            if ((temp_v3 & 0xff) == 0x66) {
              temp_v5 = temp_v3;
              uStack_34 = uStack_5c;
              uStack_30 = uStack_58;
              uStack_2c = uStack_54;
              uStack_28 = uStack_50;
              FUN_00234124(param_1,&temp_v5);
              return;
            }
            if ((temp_v3 & 0xff) != 0x67) {
              param_1[2] = 9999;
              param_1[0x84] = temp_v3;
              param_1[0x85] = uStack_5c;
              param_1[0x86] = uStack_58;
              param_1[0x87] = uStack_54;
              param_1[0x88] = uStack_50;
              return;
            }
            piVar4 = (int *)param_1[0x82];
            param_1[1] = 3;
            param_1[2] = 0;
            if (piVar4 == (int *)0x0) {
              return;
            }
            (**(romwright_code **)(*piVar4 + 4))();
            param_1[0x82] = 0;
            return;
          }
        }
      }
      else {
        asdFsIsSdCardDetected();
        if (temp_v0 != 0) {
          puVar2 = param_1 + 0x83;
          FUN_00233fcc(puVar2,0);
          param_1[2] = 1;
          param_1[0x82] = (unsigned int)puVar2;
          FUN_00233db8(param_1,0);
          return;
        }
        *(unsigned char *)(param_1 + 0x84) = 0x6a;
        param_1[0x88] = 100;
        piVar4 = (int *)param_1[0x82];
        param_1[1] = 0x11;
        param_1[2] = 0;
        if (piVar4 != (int *)0x0) {
          (**(romwright_code **)(*piVar4 + 4))();
          param_1[0x82] = 0;
          return;
        }
      }
    }
    else if (temp_v0 != 4) {
      if (temp_v0 != 5) {
        if (temp_v0 == 9999) {
          FUN_00233e70(param_1,3);
        }
      }
      else {
        temp_v1 = scrRunOpcodesStub(param_1[0xd6]);
        if (temp_v1 == 2) {
          temp_v1 = messageMainGetChoiceResult();
          if (temp_v1 != 0) {
            if (temp_v1 == 1) {
              param_1[2] = 2;
            }
            return;
          }
          piVar4 = (int *)param_1[0x82];
          param_1[1] = 0xf;
          param_1[2] = 0;
          if (piVar4 == (int *)0x0) {
            return;
          }
          (**(romwright_code **)(*piVar4 + 4))();
          param_1[0x82] = 0;
          return;
        }
      }
    }
    else if ((*param_1 & 0x1000) == 0) {
      temp_v1 = jobIsValid(*puVar8);
      if (temp_v1 != 0) {
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          ifTouchRegionRemove();
        }
        *param_1 = *param_1 & 0xffffcfff;
        jobStop(*puVar8,0);
      }
      if ((*param_1 & 2) != 0) {
        param_1[2] = 5;
        temp_v2 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_003928a4);
        scrScriptProcessStartEntry(param_1[0xd6],temp_v2);
      }
      else {
        param_1[1] = 5;
        param_1[2] = 0;
        if ((int *)param_1[0x82] != (int *)0x0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
          param_1[0x82] = 0;
        }
      }
      temp_v0 = *param_1 & 0xfffffffd;
      *param_1 = temp_v0;
      return;
    }
  }
  else if ((*param_1 & 0x2000) != 0) {
    temp_v1 = buttonHelpHasEnabledEntryForId(0x10);
    if ((temp_v1 != 0) ||
       ((((*param_1 & 0x2000) != 0 && (*puVar2 != 0xffffffff)) &&
        (temp_v1 = ifTouchGetSelectionModeForRegion((int)(short)*puVar2), temp_v1 == 6)))) {
      eventQueueAddUniqueIfValid(0x100016d);
      if ((*param_1 & 0x1000) != 0) {
        *puVar7 = 2;
        *param_1 = *param_1 & 0xffffdfff;
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          ifTouchRegionRemove();
        }
      }
      param_1[2] = 4;
      return;
    }
    temp_v1 = buttonHelpHasEnabledEntryForId(0xb);
    if (temp_v1 != 0) {
      eventQueueAddUniqueIfValid(0x100016d);
      if ((*param_1 & 0x1000) != 0) {
        *puVar7 = 2;
        *param_1 = *param_1 & 0xffffdfff;
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          ifTouchRegionRemove();
        }
      }
      param_1[2] = 4;
      temp_v0 = *param_1 | 2;
      *param_1 = temp_v0;
      return;
    }
  }
  return;
}

} /* extern "C" */
