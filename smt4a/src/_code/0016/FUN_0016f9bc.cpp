/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f9bc` (_code @ 0x16f9bc, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *DAT_00646090; /* 0x646090 */
extern unsigned char DAT_00646094; /* 0x646094 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_0016f9bc(int param_1,unsigned int param_2)

{
  int *piVar1;
  int temp_v0;
  int *piVar3;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_00646094);
  *(unsigned int *)(param_1 + 0xc) = param_2;
  piVar1 = DAT_00646090;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 4);
  }
  else {
    piVar3 = (int *)0x0;
  }
  if (DAT_00646090 != (int *)0x0) {
    piVar3[1] = (int)DAT_00646090;
    *(int **)(*piVar1 + 4) = piVar3;
    *piVar3 = *piVar1;
    *piVar1 = (int)piVar3;
  }
  else {
    if (param_1 != 0) {
      temp_v0 = param_1 + 4;
    }
    else {
      temp_v0 = 0;
    }
    *(int *)(param_1 + 8) = temp_v0;
    *(int *)(param_1 + 4) = temp_v0;
    if (param_1 != 0) {
      DAT_00646090 = (int *)(param_1 + 4);
    }
    else {
      DAT_00646090 = (int *)0x0;
    }
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_00646094);
  return 0;
}

} /* extern "C" */
