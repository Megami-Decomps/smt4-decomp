/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003111ae` (_code @ 0x3111ae, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e9538. */
/* Supplied declaration required: FUN_002ec8a8. */
extern int *FUN_00311202(int);


void FUN_003111ae(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&uStack_20,param_1 + 0x194);
  piVar1 = (int *)FUN_00311202(param_1 + 0x148);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    FUN_002ec8a8(*piVar1,param_2);
    FUN_002e9538(piVar1 + 1,param_3);
  }
  FUN_002e6e5c(&uStack_20);
  return;
}
