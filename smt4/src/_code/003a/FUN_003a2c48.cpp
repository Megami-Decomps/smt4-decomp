#include "classes/Obj55ca08.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2c48` (_code @ 0x3a2c48, 0x31c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shop/shopMain.h"

extern "C" {

int scrRunOpcodesStub(unsigned int);
int pointConvertToFloat(int, unsigned int, unsigned int);
int FUN_00233240(int, int);
int uiAnimationAdvanceChannel(int, int);
int FUN_00233410(int);
int FUN_00233818(...);
int ifTouchRegionClearAll(...);
int FUN_0029212c(int);
int messageMainFinishWindow(void);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_0029c43c(unsigned int, int);
int messageTargetSetValue(unsigned int, int);
int buttonHelpSetPreset(int);
int ifTouchRegionRemove(void);
int FUN_002b8ee0(int, int);
int FUN_003a1378(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_003a2f64; /* 0x3a2f64 */
extern unsigned char LAB_003a2f78; /* 0x3a2f78 */

/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: pointConvertToFloat. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: uiAnimationAdvanceChannel. */
/* Supplied declaration required: FUN_00233410. */
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: ifTouchRegionClearAll. */
extern int FUN_0027ee9c(void);
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0029212c. */
/* Supplied declaration required: messageMainFinishWindow. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int messageMainTargetIsClear(void);
/* Supplied declaration required: FUN_0029c43c. */
/* Supplied declaration required: messageTargetSetValue. */
extern int sys43e188GetState(void);
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: FUN_002b8ee0. */
extern unsigned int vec2GetYInt(int);
extern unsigned int vec2GetXInt(int);
/* Supplied declaration required: FUN_003a1378. */


void FUN_003a2c48(int param_1)

{
/* irregular: 18 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  switch(*(unsigned int *)(param_1 + 8)) {
  case 0:
    temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x160),&LAB_003a2f64);
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x168),temp_v0);
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x168));
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x15d58) = 0;
    *(unsigned int *)(param_1 + 0x15d5c) = 0;
    *(unsigned int *)(param_1 + 0x15d60) = 0;
    *(unsigned char *)(param_1 + 0x15d64) = 0;
    *(unsigned char *)(param_1 + 0x15d65) = 0;
    *(unsigned int *)(param_1 + 0x15d68) = 0xffffffff;
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  case 1:
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x168));
    temp_v2 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = temp_v2;
    if ((temp_v2 >= 10) &&
       ((temp_v2 = FUN_0027ee9c(), temp_v2 != 0 ||
        (temp_v2 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x168)), temp_v2 == 2)))) {
      FUN_002328b4();
      messageMainFinishWindow();
      *(unsigned int *)(param_1 + 8) = 2;
      *(unsigned int *)(param_1 + 0xc) = 0;
      return;
    }
    break;
  case 2:
    temp_v2 = sys43e188GetState();
    if (temp_v2 != 0) {
      temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x160),&LAB_003a2f78);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x168),temp_v0);
      scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x168));
      FUN_00233240(param_1 + 0x3a8,0);
      buttonHelpSetPreset(0x77);
      *(unsigned int *)(param_1 + 8) = 3;
      return;
    }
    break;
  case 3:
    temp_v2 = param_1 + 0x3c8;
    FUN_002b8ee0(temp_v2,0);
    temp_v0 = vec2GetYInt(temp_v2);
    temp_v1 = vec2GetXInt(temp_v2);
    pointConvertToFloat(param_1 + 0x380,temp_v1,temp_v0);
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x168));
    if (*(char *)(param_1 + 0x452) != '\0') {
      messageTargetSetValue(*(unsigned int *)(param_1 + 0x15d20),0);
      *(unsigned int *)(param_1 + 8) = 4;
      return;
    }
    break;
  case 4:
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x168));
    temp_v2 = param_1 + 0x9ca8;
    ((Obj55ca08 *)(param_1 + 0x828))->Obj55ca08::synchronize((const u8 *)temp_v2);
    (**(romwright_code **)(**(int **)(param_1 + 0x85c) + 0xc))(*(int **)(param_1 + 0x85c),temp_v2);
    FUN_00233410(temp_v2);
    uiAnimationAdvanceChannel(param_1 + 0x3a8,2);
    uiAnimationAdvanceChannel(param_1 + 0x3a8,3);
    temp_v2 = flaggedValueHolderGetTotal(temp_v2);
    FUN_0029212c(*(unsigned short *)(param_1 + temp_v2 * 6 + 0x9d1e));
    temp_v2 = FUN_0027ee9c();
    if (temp_v2 != 0) {
      FUN_002328b4();
      messageMainFinishWindow();
      *(unsigned int *)(param_1 + 8) = 5;
      *(unsigned int *)(param_1 + 0xc) = 0;
      FUN_0029c43c(*(unsigned int *)(param_1 + 0x15d20),0);
      return;
    }
    break;
  case 5:
    temp_v2 = sys43e188GetState();
    if ((temp_v2 != 0) && (temp_v2 = messageMainTargetIsClear(), temp_v2 == 1)) {
      FUN_003a1378(param_1);
      ifTouchRegionClearAll(*(unsigned int *)(param_1 + 0x85c));
      FUN_00233818(param_1 + 0x828);
      temp_v2 = 0;
      if (temp_v2 < *(short *)(param_1 + 0x15d50)) {
        do {
          ifTouchRegionRemove();
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *(short *)(param_1 + 0x15d50));
      }
      *(unsigned int *)(param_1 + 4) = 3;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
