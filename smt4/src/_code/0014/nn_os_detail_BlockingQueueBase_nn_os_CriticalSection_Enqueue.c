/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Enqueue` (_code @ 0x14dbb0, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_0014f560. */
/* Supplied declaration required: FUN_002a42e8. */
/* Supplied declaration required: aeabi_uidivmod. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Enqueue(int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  piVar2 = param_1 + 0xc;
  do {
    temp_v1 = *piVar2 + 1;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = temp_v1;
  while( 1 ) {
    piVar2 = param_1 + 5;
    nn_os_CriticalSection_Enter((unsigned int)piVar2);
    temp_v2 = param_1[10];
    if (temp_v2 < (unsigned int)param_1[8]) break;
    nn_os_CriticalSection_Leave((unsigned int)piVar2);
    FUN_0014f560(param_1 + 3);
  }
  aeabi_uidivmod(param_1[9] + temp_v2,param_1[8],param_1[9],temp_v2,temp_v1);
  *(unsigned int *)(*param_1 + temp_v3 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    FUN_002a42e8(param_1 + 1,1);
  }
  nn_os_CriticalSection_Leave((unsigned int)piVar2);
  param_1 = param_1 + 0xc;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = *param_1 - 1;
  return;
}
