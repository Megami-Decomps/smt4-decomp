/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b618` (_code @ 0x33b618, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420fac; /* 0x420fac */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00357488. */
/* Supplied declaration required: FUN_0035f198. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


int FUN_0033b618(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3c);
  nn_os_Thread_FinalizeImpl((unsigned int)piVar1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = 0;
  }
  *(unsigned char **)(param_1 + 8) = &DAT_00420fac;
  FUN_0035f198((unsigned int *)(param_1 + 8));
  FUN_00357488(param_1 + 0xc);
  return param_1;
}
