/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue` (_code @ 0x14da48, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a42e8(int *, int);
unsigned long long aeabi_uidivmod(int, int);

/* Supplied declaration required: FUN_002a42e8. */
/* Supplied declaration required: aeabi_uidivmod. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int
nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue(int *param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar1;
  
  piVar1 = param_1 + 5;
  nn_os_CriticalSection_Enter((unsigned int)piVar1);
  if (0 < param_1[10]) {
    *param_2 = *(unsigned int *)(*param_1 + param_1[9] * 4);
    temp_v0 = (int)(aeabi_uidivmod(param_1[9] + 1,param_1[8]) >> 0x20);
    param_1[9] = temp_v0;
    param_1[10] = param_1[10] - 1;
    if (0 < param_1[0xc]) {
      FUN_002a42e8(param_1 + 3,1);
    }
    nn_os_CriticalSection_Leave((unsigned int)piVar1);
    return 1;
  }
  nn_os_CriticalSection_Leave((unsigned int)piVar1);
  return 0;
}

} /* extern "C" */
