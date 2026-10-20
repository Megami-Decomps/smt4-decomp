/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f074` (_code @ 0x23f074, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00289880(void);
int FUN_002898e4(void);
int buttonHelpCreate(void);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int scrScriptProcessStartEntry(unsigned int, int);
int FUN_00297060(int, unsigned int);
int buttonHelpSetPreset(int);

extern int FUN_0019e0c0(unsigned int);
extern unsigned int FUN_0023ed64(unsigned int *);
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: buttonHelpRelease. */
/* Supplied declaration required: uiFadeRelease. */
extern int btlGetMainState(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int FUN_002c2a04(unsigned int);


unsigned int FUN_0023f074(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c2a04(0);
  if ((temp_v0 == 3) && (temp_v0 = FUN_002c2a04(1), temp_v0 == 3)) {
    FUN_002898e4();
    buttonHelpCreate();
    FUN_00289880();
    buttonHelpSetPreset(0xa9);
    temp_v0 = param_1[3];
    FUN_00297060(temp_v0,param_1[5]);
    param_1[4] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 1;
    scrScriptProcessStartEntry(param_1[4],0);
    *param_1 = 7;
    temp_v0 = FUN_0019e0c0(param_1[4]);
    if (temp_v0 != 2) {
      temp_v1 = 0;
    }
    else {
      uiFadeRelease();
      buttonHelpRelease();
      temp_v0 = btlGetMainState();
      if (((param_1[1] & 1) == 0) && (*(int *)(temp_v0 + 0x4978) != 1)) {
        *param_1 = 8;
        temp_v1 = FUN_0023ed64(param_1);
      }
      else {
        *(unsigned int *)(temp_v0 + 0x4978) = 1;
        temp_v1 = 0xffffffff;
        *param_1 = 9;
      }
    }
    return temp_v1;
  }
  return 0;
}

} /* extern "C" */
