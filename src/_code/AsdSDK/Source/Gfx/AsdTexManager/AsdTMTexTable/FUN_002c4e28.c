/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4e28` (_code @ 0x2c4e28, 0x26c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_002c5b04. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c4e28(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_002c5b04(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
