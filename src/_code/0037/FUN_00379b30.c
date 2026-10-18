/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379b30` (_code @ 0x379b30, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b777c. */


void FUN_00379b30(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b777c(param_1 + 0xc,param_2 + 0xe4);
  FUN_002b777c(param_1,param_2 + 0xdc);
  *(unsigned int *)(param_2 + 0x10) = 0;
  return;
}
