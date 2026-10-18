/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c6bc` (_code @ 0x15c6bc, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b777c. */
/* Supplied declaration required: FUN_002bf774. */


void FUN_0015c6bc(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002b777c(param_1 + 4,param_2 + 0x58);
  FUN_002bf774(param_1 + 0x10,param_1 + 0x14,param_2 + 0x58);
  return;
}
