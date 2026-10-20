/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035191c` (_code @ 0x35191c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mobiclipDeblockerRelease(unsigned int *);
int mobiclipS4PlayerDestroy(void);
int mwmofilterDeblockerRelease(unsigned int);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: mobiclipDeblockerRelease. */
/* Supplied declaration required: mobiclipS4PlayerDestroy. */
/* Supplied declaration required: mwmofilterDeblockerRelease. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


int FUN_0035191c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  
  mobiclipS4PlayerDestroy();
  puVar1 = (unsigned int *)(param_1 + 0x158);
  mobiclipDeblockerRelease(puVar1);
  mwmofilterDeblockerRelease(*puVar1);
  *puVar1 = 0;
  piVar2 = (int *)(param_1 + 0x28);
  nn_os_Thread_FinalizeImpl((unsigned int)piVar2);
  if (*piVar2 != 0) {
    software_interrupt(0x23);
    *piVar2 = 0;
  }
  return param_1;
}

} /* extern "C" */
