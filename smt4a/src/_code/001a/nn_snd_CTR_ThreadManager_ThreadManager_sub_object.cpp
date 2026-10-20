/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_ThreadManager_ThreadManager_sub_object` (_code @ 0x1afd30, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0d08(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a0d08. */


int nn_snd_CTR_ThreadManager_ThreadManager_sub_object(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_001a0d08();
  if (*(int *)(param_1 + 0x18) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x18) = 0;
  }
  FUN_001a0d08();
  if (*(int *)(param_1 + 0x10) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x10) = 0;
  }
  return param_1;
}

} /* extern "C" */
