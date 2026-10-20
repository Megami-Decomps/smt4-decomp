/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2c1c` (_code @ 0x3f2c1c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0d08(int *);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a0d08. */


int FUN_003f2c1c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3c);
  FUN_001a0d08(piVar1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = 0;
  }
  return param_1;
}

} /* extern "C" */
