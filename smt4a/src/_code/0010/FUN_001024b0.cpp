/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001024b0` (_code @ 0x1024b0, 0x8 bytes) from smt4a.cxi.
 * retail is an ARM-to-Thumb veneer (`add ip, pc, #1; bx ip`), not a function body.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int halt_baddata(void);


/* WARNING: Control flow encountered bad instruction data */

void FUN_001024b0(void)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

} /* extern "C" */
