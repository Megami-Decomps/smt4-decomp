/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049b00c` (_code @ 0x49b00c, 0xcf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match7_NumericStepper.h"

extern "C" {

int scrRunOpcodesStub(...);
int scrScriptProcessStartEntry(...);
int FUN_002f0384(...);
int FUN_003180c4(...);
int panelSetMode3(...);
int FUN_00359974(...);
int gameGlobalsQueueValues(...);
int FUN_003720e4(...);
int FUN_00372100(...);
int messageMainSetTargetFlags(...);
int sysPlayVoice(...);
int FUN_003df7c4(...);
int FUN_00496a0c(...);
int FUN_0049cd18(...);
int setListWindow(...);

int ifTouchRegionRemove(void);
int sysPlaySe(...);
int uiSpriteBankApplyPreset(unsigned int *, int);
int FUN_002c2c80(...);
int screenShowMessage(...);
int obj04Finish(void);
int panelSetTarget(...);
int messageMainSetFlag(...);
int pointConvertToFloat(...);
int rectangleInitializeSelection(unsigned int *, int, int, int);
int FUN_00493a7c(...);
int FUN_00498de0(...);
int FUN_00498ff0(...);
int FUN_0049cad0(...);
int FUN_004cf8dc(...);
int flaggedValueHolderGetTotal(...);
int sendEvent100020F(void);
int sendEvent100020E(void);
int menuSynchronizeFlaggedSelection(unsigned int *, unsigned int *);

typedef int romwright_code(...);
extern unsigned char LAB_0049ba78; /* 0x49ba78 */
extern unsigned char LAB_0049ba88; /* 0x49ba88 */
extern unsigned char LAB_0049ba9c; /* 0x49ba9c */
extern unsigned char LAB_0049baac; /* 0x49baac */
extern unsigned char LAB_0049bcfc; /* 0x49bcfc */
extern unsigned char LAB_0049bd0c; /* 0x49bd0c */

/* Supplied declaration required: ifTouchRegionRemove. */
extern unsigned int vec2GetXInt(unsigned int *);
extern unsigned int vec2GetYInt(unsigned int *);
/* Supplied declaration required: sysPlaySe. */
extern unsigned short *gameGetPlayerData(void);
/* Supplied declaration required: uiSpriteBankApplyPreset. */
extern unsigned int FUN_00192718(unsigned short);
extern unsigned int FUN_001ba3d0(unsigned short);
/* Supplied declaration required: scrRunOpcodesStub. */
extern int gameRecordExists(void);
extern int messageMainIsIdle(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002a482c(unsigned int *);
extern int messageGetChoiceResult(void);
/* Supplied declaration required: FUN_002c2c80. */
/* Supplied declaration required: FUN_002f0384. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: panelSetMode3. */
extern int FUN_0031d174(unsigned int *);
extern int objBStateAllowsAction(void);
/* Supplied declaration required: screenShowMessage. */
/* Supplied declaration required: obj04Finish. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: gameGlobalsQueueValues. */
/* Supplied declaration required: FUN_003720e4. */
/* Supplied declaration required: FUN_00372100. */
extern int panelStateIs0(void);
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: messageMainSetFlag. */
/* Supplied declaration required: messageMainSetTargetFlags. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003df7c4. */
extern int FUN_00481100(unsigned short);
/* Supplied declaration required: pointConvertToFloat. */
/* Supplied declaration required: rectangleInitializeSelection. */
/* Supplied declaration required: FUN_00493a7c. */
/* Supplied declaration required: FUN_00496a0c. */
extern int FUN_00498408(unsigned int *, unsigned short);
/* Supplied declaration required: FUN_00498de0. */
/* Supplied declaration required: FUN_00498ff0. */
extern unsigned int itemGetNameOrFallback(unsigned short, unsigned int);
/* Supplied declaration required: FUN_0049cad0. */
extern unsigned int btlRollClamped(unsigned short, unsigned int);
extern int aocItemGetPrice(int);
/* Supplied declaration required: FUN_0049cd18. */
/* Supplied declaration required: FUN_004cf8dc. */
/* Supplied declaration required: flaggedValueHolderGetTotal. */
/* Supplied declaration required: setListWindow. */
/* Supplied declaration required: sendEvent100020F. */
/* Supplied declaration required: sendEvent100020E. */
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);
/* Supplied declaration required: menuSynchronizeFlaggedSelection. */


void FUN_0049b00c(unsigned int *param_1)

{
/* irregular: 1 goto(s); 35 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned char temp_v7;
  
  temp_v7 = 0;
  FUN_004cf8dc(param_1 + 0xf3,2);
  FUN_004cf8dc(param_1 + 0xf3,0xc);
  switch(param_1[2]) {
  case 0:
    *param_1 = *param_1 | 0x1000;
    uiSpriteBankApplyPreset(param_1 + 0xf3,6);
    uiSpriteBankApplyPreset(param_1 + 0xf3,7);
    rectangleInitializeSelection(param_1 + 0xee,0x140,0,0x20);
    param_1[2] = 1;
    sysPlaySe(0x87);
    param_1[0x5812] = 0xffffffff;
    temp_v6 = flaggedValueHolderGetTotal(param_1 + param_1[0x2d0] * 0x1d + 0x2d8);
    param_1[0x5812] = temp_v6;
    break;
  case 1:
    FUN_004cf8dc(param_1 + 0xf3,6);
    temp_v4 = vec2GetYInt(param_1 + 0x1cd);
    temp_v2 = vec2GetXInt(param_1 + 0x1cd);
    pointConvertToFloat(param_1 + 0xee,temp_v2,temp_v4);
    if (*(char *)((int)param_1 + 0x7be) != '\0') {
      FUN_00493a7c(param_1 + 0x2d2);
      param_1[2] = 2;
      temp_v6 = param_1[0x2d0];
      temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
      if (param_1[0x2d0] != 8) {
        temp_v5 = FUN_0049cad0();
        temp_v5 = temp_v5 * param_1[0x2d2];
      }
      else {
        temp_v5 = aocItemGetPrice((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74);
        temp_v5 = temp_v5 * param_1[0x2d2];
      }
      if (param_1[0x2d0] != 8) {
        temp_v5 = -temp_v5;
      }
      panelSetTarget(temp_v5,0);
    }
    break;
  case 2:
    numericStepperHandleInput(reinterpret_cast<NumericStepper*>(param_1 + 0x2d2));
    puVar9 = param_1 + 0x2d0;
    puVar10 = param_1 + param_1[0x2d0] * 0x1d + 0x2d8;
    temp_v6 = flaggedValueHolderGetTotal(puVar10);
    menuSynchronizeFlaggedSelection(param_1 + 0x2c2,puVar10);
    (**(romwright_code **)(*(int *)param_1[0x2cf] + 0xc))((int *)param_1[0x2cf],puVar10);
    FUN_004cf8dc(param_1 + 0xf3,2);
    FUN_004cf8dc(param_1 + 0xf3,0xc);
    temp_v1 = flaggedValueHolderGetTotal(puVar10);
    if (temp_v6 == temp_v1) {
      FUN_002c2c80(puVar10);
    }
    temp_v6 = param_1[0x2d0];
    temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
    screenShowMessage(*(unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74));
    temp_v6 = param_1[0x2d0];
    temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
    if (*puVar9 != 8) {
      temp_v5 = FUN_0049cad0();
      temp_v5 = temp_v5 * param_1[0x2d2];
    }
    else {
      temp_v5 = aocItemGetPrice((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74);
      temp_v5 = temp_v5 * param_1[0x2d2];
    }
    if (param_1[0x2d0] != 8) {
      temp_v5 = -temp_v5;
    }
    panelSetTarget(temp_v5,0);
    temp_v5 = FUN_004d0584();
    if ((temp_v5 != 0) && (param_1[0x5812] == temp_v1)) {
      if ((int)param_1[0x2d2] >= 1) {
        if (!(param_1[0x2d0] == 7 || param_1[0x2d0] == 8)) {
          ifTouchRegionRemove();
          ifTouchRegionRemove();
          temp_v6 = 5;
        }
        else {
          obj04Finish();
          if (param_1[1] == 0xd) {
            messageMainSetFlag(1);
          }
          ifTouchRegionRemove();
          ifTouchRegionRemove();
          temp_v6 = 4;
        }
        param_1[2] = temp_v6;
        sendEvent100020E();
      }
      else {
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        param_1[2] = 3;
      }
    }
    temp_v5 = inputIsQuestMenuPressed();
    if (temp_v5 != 0) {
      ifTouchRegionRemove();
      ifTouchRegionRemove();
      sendEvent100020F();
      param_1[2] = 3;
    }
    else if (param_1[0x5812] != temp_v1) {
      param_1[0x5812] = temp_v1;
      param_1[0x2d2] = 0;
      ifTouchRegionRemove();
      ifTouchRegionRemove();
      temp_v5 = FUN_0031d174(param_1 + param_1[0x2d0] * 0x1d + 0x2d8);
      temp_v6 = *puVar9;
      if (temp_v6 == 7 || temp_v6 == 8) {
        temp_v1 = temp_v5 + 1;
      }
      else {
        temp_v1 = temp_v5 + 2;
      }
      temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
      puVar5 = (unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74);
      if (*puVar9 != 8) {
        temp_v4 = FUN_0049cad0(puVar5);
        temp_v6 = btlRollClamped(*puVar5,temp_v4);
      }
      else {
        temp_v6 = FUN_001ba3d0(*puVar5);
        if ((int)temp_v6 < 0) {
          temp_v6 = 0;
        }
        else if ((int)temp_v6 >= 100) {
          temp_v6 = 99;
        }
        temp_v5 = FUN_00498408(param_1,*puVar5);
        if (temp_v5 != 0) {
          temp_v6 = temp_v6 - 1;
        }
      }
      param_1[0x2d2] = (unsigned int)(temp_v6 != 0);
      param_1[0x2d3] = temp_v6;
      param_1[0x2d4] = 0;
      param_1[0x2d5] = temp_v1;
      FUN_00493a7c(param_1 + 0x2d2);
    }
    temp_v6 = param_1[0x2d0];
    if (((temp_v6 < 2) || (temp_v6 == 2 || temp_v6 == 3)) || ((temp_v6 == 4 || temp_v6 == 5) || temp_v6 == 6)) {
      FUN_00498de0(param_1);
      temp_v7 = *(char *)((int)param_1 + 0x23) == '\0';
    }
    break;
  case 3:
    if ((*param_1 & 0x1000) != 0) {
      FUN_004cf8dc(param_1 + 0xf3,7);
      temp_v4 = vec2GetYInt(param_1 + 0x1f0);
      temp_v2 = vec2GetXInt(param_1 + 0x1f0);
      pointConvertToFloat(param_1 + 0xee,temp_v2,temp_v4);
      if (*(char *)((int)param_1 + 0x84a) == '\0') break;
    }
    param_1[0x5812] = 0xffffffff;
    FUN_00498ff0(param_1);
    if (param_1[1] == 0xd) {
      messageMainSetFlag(0);
    }
    *param_1 = *param_1 & 0xffffefff;
    if (param_1[0x2d0] != 8) {
      if (param_1[0x2d0] == 7) {
        temp_v6 = 8;
      }
      else {
        temp_v6 = 7;
      }
      param_1[4] = param_1[1];
      param_1[1] = temp_v6;
      param_1[2] = 0;
    }
    else {
      param_1[4] = param_1[1];
      param_1[1] = 9;
      param_1[2] = 0;
    }
    break;
  case 4:
    temp_v5 = messageMainIsIdle();
    if (temp_v5 == 0) break;
    temp_v6 = 5;
    param_1[2] = temp_v6;
    break;
  case 5:
    temp_v6 = param_1[0x2d0];
    temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
    temp_v0 = *(unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74);
    temp_v6 = param_1[0x2d0];
    temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
    if (param_1[0x2d0] != 8) {
      temp_v5 = FUN_0049cad0();
      temp_v5 = temp_v5 * param_1[0x2d2];
    }
    else {
      temp_v5 = aocItemGetPrice((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74);
      temp_v5 = temp_v5 * param_1[0x2d2];
    }
    temp_v4 = itemGetNameOrFallback(temp_v0,1);
    FUN_003180c4(0,temp_v4);
    FUN_00359974(0x18,param_1[0x2d2],0xffffffff,0);
    FUN_00359974(0x19,temp_v5,0xffffffff,0);
    if (param_1[0x2d0] != 8) {
      temp_v4 = tableGroupFindEntryIndex(param_1[0x61],&LAB_0049ba78);
      scrScriptProcessStartEntry(param_1[99],temp_v4);
    }
    else {
      temp_v4 = tableGroupFindEntryIndex(param_1[0x61],&LAB_0049ba88);
      scrScriptProcessStartEntry(param_1[99],temp_v4);
    }
    messageMainSetTargetFlags(1);
    temp_v5 = gameRecordExists();
    if (temp_v5 != 0) {
      FUN_003720e4(1);
    }
    temp_v6 = 6;
    param_1[2] = temp_v6;
    break;
  case 6:
    temp_v5 = scrRunOpcodesStub(param_1[99]);
    if (temp_v5 != 2) break;
    temp_v5 = messageGetChoiceResult();
    if (temp_v5 == 0) {
      param_1[2] = 7;
      sysPlaySe(0x78);
      break;
    }
    temp_v5 = gameRecordExists();
    if (temp_v5 != 0) {
      FUN_003720e4(0);
    }
    FUN_00493a7c(param_1 + 0x2d2);
    param_1[2] = 2;
    sysPlaySe(0x87);
    temp_v6 = param_1[0x2d0];
    if (temp_v6 == 8) {
      messageMainSetFlag(0);
      temp_v4 = tableGroupFindEntryIndex(param_1[0x61],&LAB_0049bd0c);
      scrScriptProcessStartEntry(param_1[99],temp_v4);
      scrRunOpcodesStub(param_1[99]);
      break;
    }
joined_r0x0049bb38:
    if (temp_v6 != 7) break;
    temp_v4 = tableGroupFindEntryIndex(param_1[0x61],&LAB_0049ba9c);
    scrScriptProcessStartEntry(param_1[99],temp_v4);
    scrRunOpcodesStub(param_1[99]);
    break;
  case 7:
    temp_v6 = param_1[0x2d0];
    temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
    if (param_1[0x2d0] != 8) {
      temp_v5 = FUN_0049cad0();
      temp_v5 = temp_v5 * param_1[0x2d2];
    }
    else {
      temp_v5 = aocItemGetPrice((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74);
      temp_v5 = temp_v5 * param_1[0x2d2];
    }
    temp_v3 = -temp_v5;
    if (param_1[0x2d0] == 8) {
      temp_v3 = temp_v5;
    }
    panelSetMode3(temp_v3,0);
    param_1[2] = 8;
    temp_v4 = tableGroupFindEntryIndex(param_1[0x61],&LAB_0049baac);
    scrScriptProcessStartEntry(param_1[99],temp_v4);
    scrRunOpcodesStub(param_1[99]);
    param_1[3] = 0;
    break;
  case 8:
    param_1[3] = param_1[3] + 1;
    scrRunOpcodesStub(param_1[99]);
    if ((*param_1 & 0x1000) != 0) {
      FUN_004cf8dc(param_1 + 0xf3,7);
      temp_v4 = vec2GetYInt(param_1 + 0x1f0);
      temp_v2 = vec2GetXInt(param_1 + 0x1f0);
      pointConvertToFloat(param_1 + 0xee,temp_v2,temp_v4);
      if (*(char *)((int)param_1 + 0x84a) != '\0') {
        *param_1 = *param_1 & 0xffffefff;
      }
    }
    temp_v5 = panelStateIs0();
    if ((temp_v5 == 1) && ((int)param_1[3] >= 0x1e)) {
      temp_v6 = param_1[0x2d0];
      temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
      puVar5 = (unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74);
      temp_v6 = param_1[0x2d2];
      if (param_1[0x2d0] == 8) {
        temp_v6 = -temp_v6;
      }
      FUN_0049cd18(puVar5,temp_v6,1);
      param_1[2] = 9;
      if ((param_1[0x2d0] == 8) && (temp_v5 = FUN_00481100(*puVar5), temp_v5 == 0)) {
        temp_v6 = param_1[0x2d0];
        puVar9 = param_1 + temp_v6 * 0x1d + 0x2d8;
        temp_v3 = FUN_0031d174(puVar9);
        temp_v5 = FUN_002a482c(puVar9);
        FUN_00496a0c(param_1,0);
        if (temp_v5 >= 1) {
          temp_v5 = temp_v5 - 1;
        }
        else if ((temp_v3 != 0) && ((int)param_1[temp_v6 * 0x1d + 0x2da] <= temp_v3 + temp_v5)) {
          temp_v3 = temp_v3 - 1;
        }
        setListWindow(puVar9,temp_v5,temp_v3);
      }
    }
    break;
  case 9:
    temp_v5 = scrRunOpcodesStub(param_1[99]);
    if (temp_v5 != 2) break;
    temp_v6 = param_1[0x2d0];
    if ((temp_v6 != 7) && (temp_v6 != 8)) {
      temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
      temp_v5 = FUN_00498408(param_1,*(unsigned short *)
                                    ((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74));
      if (temp_v5 == 0) {
        temp_v4 = tableGroupFindEntryIndex(param_1[0x61],&LAB_0049bcfc);
        scrScriptProcessStartEntry(param_1[99],temp_v4);
        messageMainSetTargetFlags(1);
        temp_v6 = 10;
        param_1[2] = temp_v6;
        break;
      }
    }
    temp_v6 = param_1[0x2d0];
    param_1[2] = 3;
    if (temp_v6 != 8) goto joined_r0x0049bb38;
    temp_v4 = tableGroupFindEntryIndex(param_1[0x61],&LAB_0049bd0c);
    scrScriptProcessStartEntry(param_1[99],temp_v4);
    scrRunOpcodesStub(param_1[99]);
    break;
  case 10:
    temp_v5 = scrRunOpcodesStub(param_1[99]);
    if (temp_v5 != 2) break;
    temp_v5 = messageGetChoiceResult();
    if (temp_v5 == 0) {
      temp_v6 = param_1[0x2d0];
      temp_v5 = flaggedValueHolderGetTotal(param_1 + temp_v6 * 0x1d + 0x2d8);
      temp_v0 = *(unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xf74);
      puVar5 = (unsigned short *)gameGetPlayerData();
      temp_v4 = FUN_00192718(temp_v0);
      switch(temp_v4) {
      case 2:
        *puVar5 = temp_v0;
        break;
      case 3:
        puVar5[1] = temp_v0;
        break;
      case 4:
        puVar5[3] = temp_v0;
        break;
      case 5:
        puVar5[4] = temp_v0;
        break;
      case 6:
        puVar5[5] = temp_v0;
        break;
      case 7:
        puVar5[6] = temp_v0;
        break;
      case 8:
        puVar5[2] = temp_v0;
      }
      FUN_003df7c4(0);
      gameGlobalsQueueValues(puVar5,0);
      FUN_00372100(puVar5,0);
      sysPlayVoice(0x10000cc);
    }
    temp_v5 = gameRecordExists();
    if (temp_v5 != 0) {
      FUN_003720e4(0);
    }
    temp_v6 = 3;
    param_1[2] = temp_v6;
  }
  temp_v5 = gameRecordExists();
  if (((temp_v5 != 0) && (temp_v5 = objBStateAllowsAction(), temp_v5 != 0)) &&
     ((*(char *)((int)param_1 + 0x23) == '\0' && (!temp_v7)))) {
    FUN_002f0384(1);
    *(unsigned char *)((int)param_1 + 0x23) = 1;
  }
  return;
}

} /* extern "C" */
