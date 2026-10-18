/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514bfc` (_code @ 0x514bfc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001a1244. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_00514bfc(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = temp_v1 + 0x58;
  nn_os_CriticalSection_Enter(temp_v0);
  FUN_001a1244(temp_v1,param_2);
  nn_os_CriticalSection_Leave(temp_v0);
  return;
}
