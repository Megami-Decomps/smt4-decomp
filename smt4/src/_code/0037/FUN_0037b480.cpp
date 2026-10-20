/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b480` (_code @ 0x37b488, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0037b480(unsigned int param_1,int param_2)

{
  nn_os_CriticalSection_Enter(param_2 + 0x174);
  *(unsigned int *)(param_2 + 0x170) = param_1;
  nn_os_CriticalSection_Leave(param_2 + 0x174);
  return;
}

} /* extern "C" */
