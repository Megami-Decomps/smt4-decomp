/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001906cc` (_code @ 0x1906cc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019065c(int *);
int nn_os_Thread_FinalizeImpl(int *);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0019065c. */
/* Supplied declaration required: nn_os_Thread_FinalizeImpl. */


int * FUN_001906cc(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    FUN_0019065c(param_1);
  }
  nn_os_Thread_FinalizeImpl(param_1);
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
