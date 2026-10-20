/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018fe70` (_code @ 0x18fe70, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001742e4(int *, unsigned int);

/* Supplied declaration required: FUN_001742e4. */


void FUN_0018fe70(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_001742e4(piVar1 + -0x40,param_2);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}

} /* extern "C" */
