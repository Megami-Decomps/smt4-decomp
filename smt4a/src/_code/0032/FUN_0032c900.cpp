/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c900` (_code @ 0x32c900, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ebd8(...);
int FUN_001883b0(int *, unsigned char [500], int);
int vcallSlot12IfValid(unsigned int);
int FUN_00195fc8(void);
int FUN_002e0e04(int, unsigned char [500], int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_002e0e04. */


int * FUN_0032c900(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0 [500];
  
  FUN_002e0e04(param_2,temp_v0,0);
  if (param_2 == 0) {
    FUN_0013ebd8();
    return (int *)0xe0e046bc;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  piVar1 = param_1 + 2;
  param_1[4] = 0;
  FUN_001883b0(piVar1,temp_v0,6);
  if ((int)piVar1 < 0) {
    FUN_0013ebd8(piVar1);
    return piVar1;
  }
  piVar1 = (int *)(**(romwright_code **)(*param_1 + 0x3c))(param_1,*(romwright_code **)(*param_1 + 0x3c),param_3,0);
  FUN_0013ebd8();
  if ((int)piVar1 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_00195fc8();
      }
      vcallSlot12IfValid(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    return piVar1;
  }
  FUN_0013ebd8();
  return (int *)0x0;
}

} /* extern "C" */
