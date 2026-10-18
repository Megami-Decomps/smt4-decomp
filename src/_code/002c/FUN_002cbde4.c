/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cbde4` (_code @ 0x2cbde4, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00254ac4. */
/* Supplied declaration required: FUN_002b93f0. */
/* Supplied declaration required: FUN_002bb8e4. */
/* Supplied declaration required: FUN_002bce48. */
/* Supplied declaration required: FUN_002c3714. */


int * FUN_002cbde4(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0 [500];
  
  FUN_00254ac4(param_2,temp_v0,0);
  if (param_2 == 0) {
    FUN_002c3714();
    return (int *)0xe0e046bc;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  piVar1 = param_1 + 2;
  param_1[4] = 0;
  FUN_002bb8e4(piVar1,temp_v0,6);
  if ((int)piVar1 < 0) {
    FUN_002c3714(piVar1);
    return piVar1;
  }
  piVar1 = (int *)(**(romwright_code **)(*param_1 + 0x3c))(param_1,*(romwright_code **)(*param_1 + 0x3c),param_3,0);
  FUN_002c3714();
  if ((int)piVar1 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_002bce48();
      }
      FUN_002b93f0(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    return piVar1;
  }
  FUN_002c3714();
  return (int *)0x0;
}
