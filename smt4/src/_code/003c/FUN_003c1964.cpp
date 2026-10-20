/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1964` (_code @ 0x3c1964, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002881bc(unsigned int);

extern int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_002881bc. */


void FUN_003c1964(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002881bc(*(unsigned int *)(DAT_004342c8 + 0x570));
  return;
}

} /* extern "C" */
