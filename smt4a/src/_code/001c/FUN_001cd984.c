/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd984` (_code @ 0x1cd984, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_001cd984(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  nn_os_CriticalSection_Enter((unsigned int)(param_1 + 2));
  software_interrupt(0x24);
  if (*param_1 < 0) {
    FUN_002e3140();
  }
  software_interrupt(0x19);
  if (*param_1 < 0) {
    FUN_002e3140();
  }
  *(char *)((int)param_1 + 0x1319) = *(char *)((int)param_1 + 0x1319) + '\x01';
  nn_os_CriticalSection_Leave((unsigned int)(param_1 + 2));
  return;
}
