/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_Thread_Thread_sub_object` (_code @ 0x357728, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: nn_os_Thread_FinalizeImpl. */


int * nn_os_Thread_Thread_sub_object(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  nn_os_Thread_FinalizeImpl();
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}
