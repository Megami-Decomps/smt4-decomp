/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290274` (_code @ 0x290274, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pairSetSecondResetFirst(...);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int pairSetFirstResetSecond(...);

/* Supplied declaration required: pairSetSecondResetFirst. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: pairSetFirstResetSecond. */
extern int FUN_00291e14(void);


void FUN_00290274(int param_1,int param_2,unsigned char param_3,unsigned char param_4,int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *(int *)(param_1 + 0x3fc) = param_2;
  *(unsigned char *)(param_1 + 0x402) = 1;
  *(unsigned char *)(param_1 + 0x400) = param_4;
  *(unsigned char *)(param_1 + 0x401) = param_3;
  *(char *)(param_1 + 0x403) = (char)param_5;
  if (param_2 != 0) {
    if (param_2 == 1) {
      pairSetFirstResetSecond(param_1 + 0x20,0x2a);
      uiSpriteSelectAnim(param_1 + 0x20,0);
      pairSetSecondResetFirst(param_1 + 0x1c4,8);
      uiSpriteSelectAnim(param_1 + 0x1c4,0);
      pairSetSecondResetFirst(param_1 + 0x138,3);
      uiSpriteSelectAnim(param_1 + 0x138,2);
      pairSetSecondResetFirst(param_1 + 0xac,1);
      uiSpriteSelectAnim(param_1 + 0xac,1);
      pairSetFirstResetSecond(param_1 + 0x2dc,10);
      uiSpriteSetKeyframe(param_1 + 0x2dc,2,0);
    }
  }
  else {
    temp_v0 = FUN_00291e14();
    if (temp_v0 != 0) {
      pairSetFirstResetSecond(param_1 + 0x20,0x29);
      uiSpriteSelectAnim(param_1 + 0x20,0);
      pairSetSecondResetFirst(param_1 + 0x1c4,9);
      uiSpriteSelectAnim(param_1 + 0x1c4,0);
      pairSetSecondResetFirst(param_1 + 0x138,6);
      uiSpriteSelectAnim(param_1 + 0x138,2);
      pairSetSecondResetFirst(param_1 + 0xac,5);
      uiSpriteSelectAnim(param_1 + 0xac,1);
      pairSetFirstResetSecond(param_1 + 0x2dc,0xa6);
      uiSpriteSetKeyframe(param_1 + 0x2dc,2,0);
    }
    else {
      pairSetFirstResetSecond(param_1 + 0x20,0x29);
      uiSpriteSelectAnim(param_1 + 0x20,0);
      pairSetSecondResetFirst(param_1 + 0x1c4,7);
      uiSpriteSelectAnim(param_1 + 0x1c4,0);
      pairSetSecondResetFirst(param_1 + 0x138,2);
      uiSpriteSelectAnim(param_1 + 0x138,2);
      pairSetSecondResetFirst(param_1 + 0xac,0);
      uiSpriteSelectAnim(param_1 + 0xac,1);
      pairSetFirstResetSecond(param_1 + 0x2dc,9);
      uiSpriteSetKeyframe(param_1 + 0x2dc,2,0);
    }
  }
  if (param_5 == 0) {
    *(unsigned int *)(param_1 + 0x3f4) = 0;
    *(unsigned int *)(param_1 + 0x3f8) = 2;
    return;
  }
  uiSpriteSelectAnim(param_1 + 0x368,4);
  *(unsigned int *)(param_1 + 0x404) = 10;
  *(unsigned int *)(param_1 + 0x3f4) = 0;
  *(unsigned int *)(param_1 + 0x3f8) = 4;
  return;
}

} /* extern "C" */
