/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043df7c` (_code @ 0x43df7c, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_002e3390(unsigned int);
/* Supplied declaration required: FUN_0043e088. */
/* Supplied declaration required: FUN_0043e31c. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


int FUN_0043df7c(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  int *piVar5;
  unsigned int temp_v2 [4];
  
  temp_v1 = param_1 + 0x3788;
  nn_os_CriticalSection_Enter(temp_v1);
  piVar5 = (int *)(param_1 + 0x1b04);
  temp_v0 = *piVar5;
  *piVar5 = temp_v0 + 1;
  if (0 < temp_v0 + 1) {
    *piVar5 = 0;
  }
  temp_v2[2] = 0;
  temp_v0 = FUN_002e3390(param_2);
  temp_v2[0] = temp_v0 + 1U;
  temp_v2[1] = 0x100;
  puVar1 = temp_v2;
  if (temp_v0 + 1U >= 0x101) {
    puVar1 = temp_v2 + 1;
  }
  puVar2 = temp_v2 + 2;
  FUN_0043e31c(puVar2,param_2,*puVar1,param_1 + *piVar5 * 0x1a88 + 0x14,0x1a88);
  if ((int)puVar2 < 0) {
    temp_v0 = *piVar5;
  }
  else {
    if (temp_v2[2] == 0) {
      FUN_0043e088(param_1);
      temp_v0 = *piVar5;
      nn_os_CriticalSection_Leave(temp_v1);
      return param_1 + temp_v0 * 0x10 + 4;
    }
    temp_v0 = *piVar5;
  }
  if (temp_v0 != 0) {
    *piVar5 = temp_v0 - 1;
  }
  nn_os_CriticalSection_Leave(temp_v1);
  return 0;
}
