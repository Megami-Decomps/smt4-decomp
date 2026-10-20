/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014db9c` (_code @ 0x14db9c, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014f560(int);
int FUN_002a42e8(int, int);
int __aeabi_uidivmod(unsigned int, unsigned int, int, unsigned int, int);
int hasExclusiveAccess(int *);

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_0014f560. */
/* Supplied declaration required: FUN_002a42e8. */
/* Supplied declaration required: __aeabi_uidivmod. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0014db9c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  *(unsigned char *)(param_1 + 0x28) = 1;
  piVar2 = (int *)(param_1 + 0x68);
  do {
    temp_v1 = *piVar2 + 1;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = temp_v1;
  while( 1 ) {
    temp_v4 = param_1 + 0x4c;
    nn_os_CriticalSection_Enter(temp_v4);
    temp_v2 = *(unsigned int *)(param_1 + 0x60);
    if (temp_v2 < *(unsigned int *)(param_1 + 0x58)) break;
    nn_os_CriticalSection_Leave(temp_v4);
    FUN_0014f560(param_1 + 0x44);
  }
  __aeabi_uidivmod(*(int *)(param_1 + 0x5c) + temp_v2,*(unsigned int *)(param_1 + 0x58),
                 *(int *)(param_1 + 0x5c),temp_v2,temp_v1);
  *(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v3 * 4) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (0 < *(int *)(param_1 + 100)) {
    FUN_002a42e8(param_1 + 0x3c,1);
  }
  nn_os_CriticalSection_Leave(temp_v4);
  piVar2 = (int *)(param_1 + 0x68);
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = *piVar2 - 1;
  return;
}

} /* extern "C" */
