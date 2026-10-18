/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017e1c0` (_code @ 0x17e1c0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_0017e1c0(int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  nn_os_CriticalSection_Enter();
  if ((int *)*param_2 == param_2) {
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    if (*(int **)(param_1 + 8) == param_2) {
      *(int *)(param_1 + 8) = (*(int **)(param_1 + 8))[1];
    }
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
  }
  param_2[1] = 0;
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  nn_os_CriticalSection_Leave(param_1 + 0xc);
  return;
}
