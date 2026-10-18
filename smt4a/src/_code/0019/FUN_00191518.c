/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191518` (_code @ 0x191518, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_00191518(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  nn_os_CriticalSection_Enter(param_1 + 0x1c4);
  FUN_001b6668(param_1 + 0x1d0,param_2 + 4);
  nn_os_CriticalSection_Leave(param_1 + 0x1c4);
  return;
}
