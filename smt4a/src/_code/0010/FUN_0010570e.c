/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010570e` (_code @ 0x10570e, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int FUN_002ebd34(int, int *);
/* Supplied declaration required: FUN_002ebd94. */


void FUN_0010570e(int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  piStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&piStack_18,param_1 + 4);
  FUN_002ebd94(param_1,param_2);
  temp_v0 = FUN_002ebd34(param_1,param_2);
  *(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v0 * 4) = 0;
  if (param_2 != (int *)0x0) {
    (**(romwright_code **)(*param_2 + 4))(param_2);
  }
  FUN_002e6e5c(&piStack_18);
  return;
}
