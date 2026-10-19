/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa14c` (_code @ 0x1aa14c, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001af27c. */
/* Supplied declaration required: FUN_001af330. */
/* Supplied declaration required: aeabi_uidivmod. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_001aa14c(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  
  piVar2 = param_1 + 0xb;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = *piVar2 + 1;
  while( 1 ) {
    piVar2 = param_1 + 5;
    nn_os_CriticalSection_Enter((unsigned int)piVar2);
    if (0 < param_1[10]) break;
    nn_os_CriticalSection_Leave((unsigned int)piVar2);
    FUN_001af27c(param_1 + 1);
  }
  temp_v2 = *(unsigned int *)(*param_1 + param_1[9] * 4);
  aeabi_uidivmod(param_1[9] + 1,param_1[8]);
  param_1[9] = temp_v1;
  param_1[10] = param_1[10] - 1;
  if (0 < param_1[0xc]) {
    FUN_001af330(param_1 + 3,1);
  }
  nn_os_CriticalSection_Leave((unsigned int)piVar2);
  param_1 = param_1 + 0xb;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = *param_1 - 1;
  return temp_v2;
}
