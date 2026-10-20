/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043b560` (_code @ 0x43b560, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_TransferMemoryBlock_Finalize(unsigned int *);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: nn_os_TransferMemoryBlock_Finalize. */


unsigned int * FUN_0043b560(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = param_2;
  if (param_1[10] != 0) {
    software_interrupt(0x23);
    param_1[10] = 0;
  }
  nn_os_TransferMemoryBlock_Finalize(param_1 + 2);
  if (param_1[7] != 0) {
    software_interrupt(0x23);
    param_1[7] = 0;
  }
  return param_1;
}

} /* extern "C" */
