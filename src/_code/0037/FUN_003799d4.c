/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003799d4` (_code @ 0x3799d4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b743c. */


void FUN_003799d4(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b743c(param_1,param_2 + 0xec);
  *(unsigned int *)(param_2 + 0x18) = 0;
  return;
}
