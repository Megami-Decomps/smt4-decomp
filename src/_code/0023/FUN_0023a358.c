/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a358` (_code @ 0x23a358, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00126edc. */
/* Supplied declaration required: FUN_002a140c. */
/* Supplied declaration required: FUN_002a14a0. */


void FUN_0023a358(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int uStack_14;
  unsigned int uStack_10;
  
  puVar1 = (unsigned int *)&uStack_14;
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_002a14a0();
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)&uStack_14;
    FUN_002a140c();
    if (puVar1 == (unsigned int *)0x0) {
      return;
    }
  }
  FUN_00126edc(param_1);
  return;
}
