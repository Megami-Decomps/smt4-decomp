/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2c5c` (_code @ 0x3f2c5c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0d08(int *);
int FUN_0042ce1c(int);
int FUN_00439020(unsigned int *);
int software_interrupt(int);

extern unsigned char DAT_0055b378; /* 0x55b378 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_0042ce1c. */
/* Supplied declaration required: FUN_00439020. */


int FUN_003f2c5c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3c);
  FUN_001a0d08(piVar1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = 0;
  }
  *(unsigned char **)(param_1 + 8) = &DAT_0055b378;
  FUN_00439020((unsigned int *)(param_1 + 8));
  FUN_0042ce1c(param_1 + 0xc);
  return param_1;
}

} /* extern "C" */
