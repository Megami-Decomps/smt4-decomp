/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111594` (_code @ 0x111594, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010550c(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_0010550c. */


void FUN_00111594(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  piVar1 = (int *)(param_1 + 0x58);
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_0010550c();
  if ((piVar1 != (int *)0x0) &&
     (piVar1 = (int *)(**(romwright_code **)(*piVar1 + 0x24))(), piVar1 != (int *)0x0)) {
    (**(romwright_code **)(*piVar1 + 0x5c))(&uStack_18,piVar1,*(unsigned int *)(param_1 + 0x54));
  }
  return;
}

} /* extern "C" */
