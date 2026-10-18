/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6758` (_code @ 0x2b6758, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

/* Supplied declaration required: FUN_002b659c. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b6758(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (param_1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_002b659c();
  return;
}
