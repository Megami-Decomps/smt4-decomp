/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_CriticalSection_Leave` (_code @ 0x2f59d8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: func_0x001a09f4. */


void nn_os_CriticalSection_Leave(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8) - 1;
  *(int *)(param_1 + 8) = temp_v0;
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 4) = 0;
    func_0x001a09f4();
    return;
  }
  return;
}
