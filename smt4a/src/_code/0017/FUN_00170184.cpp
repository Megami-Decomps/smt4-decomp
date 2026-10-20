/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170184` (_code @ 0x170184, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b47c(unsigned int);

extern unsigned char DAT_005c0aa0; /* 0x5c0aa0 */

/* Supplied declaration required: FUN_0018b47c. */


void FUN_00170184(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0018b47c((*(unsigned int *)((unsigned char *)&DAT_005c0aa0 + 0x1c)));
  return;
}

} /* extern "C" */
