/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460e74` (_code @ 0x460e74, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_00460e74(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  nn_os_CriticalSection_Enter(param_2 + 0x184);
  *(unsigned int *)(param_2 + 0x180) = param_1;
  nn_os_CriticalSection_Leave(param_2 + 0x184);
  return;
}
