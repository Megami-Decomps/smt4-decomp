/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa214` (_code @ 0x1aa214, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001af27c. */
/* Supplied declaration required: FUN_001af330. */
/* Supplied declaration required: aeabi_uidivmod. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_001aa214(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  *(unsigned char *)(param_1 + 0x28) = 1;
  piVar3 = (int *)(param_1 + 0x68);
  do {
    temp_v1 = *piVar3 + 1;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar3);
  } while (!temp_v0);
  *piVar3 = temp_v1;
  while( 1 ) {
    temp_v4 = param_1 + 0x4c;
    nn_os_CriticalSection_Enter(temp_v4);
    temp_v2 = *(unsigned int *)(param_1 + 0x60);
    if (temp_v2 < *(unsigned int *)(param_1 + 0x58)) break;
    nn_os_CriticalSection_Leave(temp_v4);
    FUN_001af27c(param_1 + 0x44);
  }
  aeabi_uidivmod(*(int *)(param_1 + 0x5c) + temp_v2,*(unsigned int *)(param_1 + 0x58),
                 *(int *)(param_1 + 0x5c),temp_v2,temp_v1);
  *(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v3 * 4) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (0 < *(int *)(param_1 + 100)) {
    FUN_001af330(param_1 + 0x3c,1);
  }
  nn_os_CriticalSection_Leave(temp_v4);
  piVar3 = (int *)(param_1 + 0x68);
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar3);
  } while (!temp_v0);
  *piVar3 = *piVar3 - 1;
  return;
}
