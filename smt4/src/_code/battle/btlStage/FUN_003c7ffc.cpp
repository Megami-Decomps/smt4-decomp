/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c7ffc` (_code @ 0x3c7ffc, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003400f0(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_004398d0; /* 0x4398d0 */

/* Supplied declaration required: FUN_003400f0. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_003c7ffc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Enter(param_1 + 0xb8);
  *(unsigned int *)(param_1 + 0xa0) = DAT_004398d0;
  FUN_003400f0();
  *(unsigned short *)(param_1 + 0xb4) = 1;
  nn_os_CriticalSection_Leave(param_1 + 0xb8);
  return;
}

} /* extern "C" */
