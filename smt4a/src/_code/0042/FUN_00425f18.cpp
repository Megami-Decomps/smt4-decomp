/* NON_MATCHING: retail inlines SVC 0x23 in the thread-handle destructor; no SDK wrapper exists here and added SVC intrinsics/assembly are prohibited. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0d08(int *);
int deblockerHandleRelease(unsigned int *);
int FUN_00425cd8(void);
int mwmofilterDeblockerRelease(unsigned int);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: deblockerHandleRelease. */
/* Supplied declaration required: FUN_00425cd8. */
/* Supplied declaration required: mwmofilterDeblockerRelease. */


int FUN_00425f18(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  
  FUN_00425cd8();
  puVar1 = (unsigned int *)(param_1 + 0x158);
  deblockerHandleRelease(puVar1);
  mwmofilterDeblockerRelease(*puVar1);
  *puVar1 = 0;
  piVar2 = (int *)(param_1 + 0x28);
  FUN_001a0d08(piVar2);
  if (*piVar2 != 0) {
    software_interrupt(0x23);
    *piVar2 = 0;
  }
  return param_1;
}

} /* extern "C" */
