/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e2ac` (_code @ 0x34e2ac, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0034e140. */
/* Supplied declaration required: nn_os_Thread_FinalizeImpl. */


int FUN_0034e2ac(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  
  FUN_0034e140();
  if (*(int *)(param_1 + 0x50) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x4c) = 0;
  }
  piVar1 = (int *)(param_1 + 0x30);
  nn_os_Thread_FinalizeImpl(piVar1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = 0;
  }
  return param_1;
}
