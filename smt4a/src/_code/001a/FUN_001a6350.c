/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6350` (_code @ 0x1a6350, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_001a6350(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Enter(param_1 + 0x1c4);
  nw_ut_internal_LinkListImpl_insert(param_1 + 0x1d0,param_1 + 0x1d4,param_2 + 4);
  nn_os_CriticalSection_Leave(param_1 + 0x1c4);
  return;
}
