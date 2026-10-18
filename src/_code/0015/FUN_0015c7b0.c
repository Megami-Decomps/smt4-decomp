/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c7b0` (_code @ 0x15c7b0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b743c. */
/* Supplied declaration required: FUN_002bf59c. */


void FUN_0015c7b0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002b743c(param_1 + 4,param_2 + 0x58);
  FUN_002bf59c(param_1 + 0x10,param_1 + 0x14,param_2 + 0x58);
  return;
}
