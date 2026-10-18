/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue` (_code @ 0x152608, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a42e8. */
/* Supplied declaration required: aeabi_uidivmod. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int
nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar1;
  
  piVar1 = param_1 + 5;
  nn_os_CriticalSection_Enter(piVar1);
  if ((unsigned int)param_1[10] < (unsigned int)param_1[8]) {
    aeabi_uidivmod(param_1[10] + param_1[9]);
    *(unsigned int *)(*param_1 + temp_v0 * 4) = param_2;
    param_1[10] = param_1[10] + 1;
    if (0 < param_1[0xb]) {
      FUN_002a42e8(param_1 + 1,1);
    }
    nn_os_CriticalSection_Leave(piVar1);
    return 1;
  }
  nn_os_CriticalSection_Leave(piVar1);
  return 0;
}
