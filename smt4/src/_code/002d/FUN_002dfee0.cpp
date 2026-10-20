/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfee0` (_code @ 0x2dfee0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152bec(unsigned int);

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_00152bec. */


void FUN_002dfee0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00152bec(*(unsigned int *)(DAT_00447a78 + 0xcc0c));
  return;
}

} /* extern "C" */
