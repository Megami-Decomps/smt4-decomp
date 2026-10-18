/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c52dc` (_code @ 0x2c52dc, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c52dc(void)

{
/* irregular: 3 native warning(s); review required */
  software_interrupt(0x15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
