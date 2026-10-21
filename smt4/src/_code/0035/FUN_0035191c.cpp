/* NON_MATCHING: retail inlines SVC 0x23 in the thread-handle destructor; no SDK wrapper exists here and added SVC intrinsics/assembly are prohibited. */
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
