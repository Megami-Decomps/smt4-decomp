/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_ThreadManager_ThreadManager_sub_object` (_code @ 0x14fce4, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


int nn_snd_CTR_ThreadManager_ThreadManager_sub_object(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18);
  nn_os_Thread_FinalizeImpl((unsigned int)piVar1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = 0;
  }
  piVar1 = (int *)(param_1 + 0x10);
  nn_os_Thread_FinalizeImpl((unsigned int)piVar1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = 0;
  }
  return param_1;
}
