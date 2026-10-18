/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2b08` (_code @ 0x2b2b08, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b2b08(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
