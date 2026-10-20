/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004283f0` (_code @ 0x4283f0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016ccb4(unsigned int);
int FUN_001d10c0(void);
int FUN_001d1108(void);

/* Supplied declaration required: FUN_0016ccb4. */
/* Supplied declaration required: FUN_001d10c0. */
/* Supplied declaration required: FUN_001d1108. */


void FUN_004283f0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int uStack_14;
  unsigned int uStack_10;
  
  puVar1 = (unsigned int *)&uStack_14;
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_001d10c0();
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)&uStack_14;
    FUN_001d1108();
    if (puVar1 == (unsigned int *)0x0) {
      return;
    }
  }
  FUN_0016ccb4(param_1);
  return;
}

} /* extern "C" */
