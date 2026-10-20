/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b47c` (_code @ 0x18b47c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001af148(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001af148. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0018b47c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Enter(param_1);
  if (*(char *)(param_1 + 0x76) != '\x02') {
    *(unsigned char *)(param_1 + 0x76) = 1;
    nn_os_CriticalSection_Leave(param_1);
    FUN_001af148(param_1 + 100);
    return;
  }
  *(unsigned char *)(param_1 + 0x76) = 0;
  nn_os_CriticalSection_Leave(param_1);
  return;
}

} /* extern "C" */
