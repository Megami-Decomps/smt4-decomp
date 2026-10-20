/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_CriticalSection_Leave` (_code @ 0x2c3820, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x00139650(void);

/* Supplied declaration required: func_0x00139650. */


void nn_os_CriticalSection_Leave(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8) - 1;
  *(int *)(param_1 + 8) = temp_v0;
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 4) = 0;
    func_0x00139650();
    return;
  }
  return;
}

} /* extern "C" */
